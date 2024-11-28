# - Find CGAL
# Find the CGAL includes and client library
# This module defines
# CGAL_INCLUDE_DIR, where to find CGAL.h
# CGAL_LIBRARIES, the libraries needed to use CGAL.
# CGAL_FOUND, If false, do not try to use CGAL.
if(CGAL_INCLUDE_DIR AND CGAL_LIBRARIES AND BOOST_THREAD_LIBRARIES AND GMP_LIBRARIES AND MPFR_LIBRARIES)
    set(CGAL_FOUND TRUE)
else()
    if(NOT(CGAL_ROOT AND GMP_ROOT AND MPFR_ROOT))
        message(ERROR "CGAL_ROOT|GMP_ROOT|MPFR_ROOT is not set")
    endif()

    find_path(CGAL_INCLUDE_DIR CGAL/basic.h ${CGAL_ROOT}/include ${CGAL_ROOT}/include/CGAL)
    find_library(CGAL_LIBRARY NAMES CGAL PATHS ${CGAL_ROOT}/lib)
    find_library(CGAL_CORE_LIBRARY NAMES CGAL_Core PATHS ${CGAL_ROOT}/lib)

    set(CGAL_LIBRARIES ${CGAL_LIBRARY} ${CGAL_CORE_LIBRARY})

    if(CMAKE_VERSION VERSION_LESS "3.30")
        find_package(Boost COMPONENTS thread REQUIRED)
        # check boost version we may need other components
        if("${Boost_VERSION}" VERSION_GREATER "1.49.0")
            find_package(Boost COMPONENTS thread system REQUIRED)
        endif()
        set(BOOST_THREAD_LIBRARIES ${Boost_LIBRARIES})
    else()
        # starting from cmake 3.30 we have to use BoostConfig.cmake to find Boost. Set Boost_DIR to the location of BoostConfig.cmake
        find_package(Boost CONFIG REQUIRED COMPONENTS thread)
        if("${Boost_VERSION}" VERSION_GREATER "1.49.0")
            find_package(Boost CONFIG REQUIRED COMPONENTS thread system)
        endif()
        set(BOOST_THREAD_LIBRARIES ${Boost_LIBRARIES})
    endif()

    find_library(GMP_LIBRARY NAMES gmp PATHS ${GMP_ROOT}/lib NO_DEFAULT_PATH)
    find_library(GMPXX_LIBRARY NAMES gmpxx PATHS ${GMP_ROOT}/lib NO_DEFAULT_PATH)
    set(GMP_LIBRARIES ${GMP_LIBRARY} ${GMPXX_LIBRARY})
    set(GMP_INCLUDE_DIR ${GMP_ROOT}/include)
    find_library(MPFR_LIBRARIES NAMES mpfr PATHS ${MPFR_ROOT}/lib NO_DEFAULT_PATH)
    set(MPFR_INCLUDE_DIR ${MPFR_ROOT}/include)

    message(STATUS "CGAL_INCLUDE_DIR=${CGAL_INCLUDE_DIR}")
    message(STATUS "CGAL_LIBRARIES=${CGAL_LIBRARIES}")
    message(STATUS "BOOST_THREAD_LIBRARIES=${BOOST_THREAD_LIBRARIES}")
    message(STATUS "GMP_LIBRARIES=${GMP_LIBRARIES}")
    message(STATUS "MPFR_LIBRARIES=${MPFR_LIBRARIES}")

    if(CGAL_INCLUDE_DIR AND CGAL_LIBRARIES AND BOOST_THREAD_LIBRARIES AND GMP_LIBRARIES AND MPFR_LIBRARIES)
        set(CGAL_FOUND TRUE)
        message(STATUS "Found CGAL: ${CGAL_INCLUDE_DIR}, ${CGAL_LIBRARIES}, ${BOOST_THREAD_LIBRARIES}, ${GMP_LIBRARIES}, ${MPFR_LIBRARIES}")
#        INCLUDE_DIRECTORIES(${GMP_INCLUDE_DIR})
#        INCLUDE_DIRECTORIES(${MPFR_INCLUDE_DIR})
        INCLUDE_DIRECTORIES(${CGAL_INCLUDE_DIR})
    else()
        set(CGAL_FOUND FALSE)
        message(STATUS "CGAL not found.")
    endif()
    mark_as_advanced(CGAL_INCLUDE_DIR CGAL_LIBRARIES BOOST_THREAD_LIBRARIES GMP_LIBRARIES MPFR_LIBRARIES)
endif()
