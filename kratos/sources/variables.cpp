//    |  /           |
//    ' /   __| _` | __|  _ \   __|
//    . \  |   (   | |   (   |\__ `
//   _|\_\_|  \__,_|\__|\___/ ____/
//                   Multi-Physics
//
//  License:		 BSD License
//					 Kratos default license: kratos/license.txt
//
//  Main authors:    Pooyan Dadvand
//


// System includes

// External includes

// Project includes
#include "includes/define.h"
#include "includes/variables.h"
#include "includes/node.h"
#include "includes/element.h"
#include "includes/condition.h"
#include "includes/constitutive_law.h"
#include "includes/geometrical_object.h"

#include "includes/deprecated_variables.h"
#include "includes/convection_diffusion_settings.h"
#include "includes/radiation_settings.h"

namespace Kratos
{

//Create Variables by type:

//bools

//for Structural application:

//for Level Set application:

//ints
KRATOS_CREATE_VARIABLE(int, DOMAIN_SIZE)

//for General kratos application:
KRATOS_CREATE_VARIABLE(int, LOAD_RESTART)
KRATOS_CREATE_VARIABLE(int, TIME_STEPS)
KRATOS_CREATE_VARIABLE(int, RIGID_BODY_ID)

//for Structural application
KRATOS_CREATE_VARIABLE(int, FIRST_TIME_STEP)
KRATOS_CREATE_VARIABLE(int, QUASI_STATIC_ANALYSIS)

KRATOS_CREATE_VARIABLE(int, NL_ITERATION_NUMBER)
KRATOS_CREATE_VARIABLE(int, PERIODIC_PAIR_INDEX)
KRATOS_CREATE_VARIABLE(int, STATIONARY)
KRATOS_CREATE_VARIABLE(int, ACTIVATION_LEVEL)

//for PFEM fluids application:
KRATOS_CREATE_VARIABLE(int, SCALE)

//for Level Set application:
KRATOS_CREATE_VARIABLE(int, REFINEMENT_LEVEL)

//doubles

//for General kratos application:
KRATOS_CREATE_VARIABLE(double, TIME)
KRATOS_CREATE_VARIABLE(double, START_TIME)
KRATOS_CREATE_VARIABLE(double, END_TIME)
KRATOS_CREATE_VARIABLE(double, DELTA_TIME)

KRATOS_CREATE_VARIABLE(double, RESIDUAL_NORM)
KRATOS_CREATE_VARIABLE(double, CONVERGENCE_RATIO)

KRATOS_CREATE_VARIABLE(double, TEMPERATURE)
KRATOS_CREATE_VARIABLE(double, PRESSURE)

KRATOS_CREATE_VARIABLE(double, NEGATIVE_FACE_PRESSURE)
KRATOS_CREATE_VARIABLE(double, POSITIVE_FACE_PRESSURE)
KRATOS_CREATE_VARIABLE(double, FACE_HEAT_FLUX)

KRATOS_CREATE_VARIABLE(double, DENSITY)
KRATOS_CREATE_VARIABLE(double, YOUNG_MODULUS)
KRATOS_CREATE_VARIABLE(double, POISSON_RATIO)
KRATOS_CREATE_VARIABLE(double, THICKNESS)

KRATOS_CREATE_VARIABLE(double, NODAL_H)

KRATOS_CREATE_VARIABLE(double, KINETIC_ENERGY)
KRATOS_CREATE_VARIABLE(double, INTERNAL_ENERGY)
KRATOS_CREATE_VARIABLE(double, STRAIN_ENERGY)
KRATOS_CREATE_VARIABLE(double, EXTERNAL_ENERGY)

KRATOS_CREATE_VARIABLE(double, STABILIZATION_FACTOR)

//for Structural application
KRATOS_CREATE_VARIABLE(double, FRICTION_COEFFICIENT)
KRATOS_CREATE_VARIABLE(double, LAMBDA)
KRATOS_CREATE_VARIABLE(double, MIU)
KRATOS_CREATE_VARIABLE(double, NORMAL_CONTACT_STRESS)
KRATOS_CREATE_VARIABLE(double, TANGENTIAL_CONTACT_STRESS)

KRATOS_CREATE_VARIABLE(int,    PARTITION_INDEX)
KRATOS_CREATE_VARIABLE(double, TEMPERATURE_OLD_IT)
KRATOS_CREATE_VARIABLE(double, VISCOSITY)
KRATOS_CREATE_VARIABLE(double, ERROR_RATIO)
KRATOS_CREATE_VARIABLE(double, RHS_WATER)
KRATOS_CREATE_VARIABLE(double, RHS_AIR)
KRATOS_CREATE_VARIABLE(double, WEIGHT_FATHER_NODES)
KRATOS_CREATE_VARIABLE(double, INITIAL_PENALTY)
KRATOS_CREATE_VARIABLE(double, DP_EPSILON)
KRATOS_CREATE_VARIABLE(double, DP_ALPHA1)
KRATOS_CREATE_VARIABLE(double, DP_K)
KRATOS_CREATE_VARIABLE(double, INTERNAL_FRICTION_ANGLE)
KRATOS_CREATE_VARIABLE(double, K0)
KRATOS_CREATE_VARIABLE(double, NODAL_VOLUME)

KRATOS_CREATE_VARIABLE(double, WATER_PRESSURE)
KRATOS_CREATE_VARIABLE(double, REACTION_WATER_PRESSURE)

KRATOS_CREATE_VARIABLE(double, AIR_PRESSURE)
KRATOS_CREATE_VARIABLE(double, REACTION_AIR_PRESSURE)
KRATOS_CREATE_VARIABLE(double, FLAG_VARIABLE)
KRATOS_CREATE_VARIABLE(double, DISTANCE)

KRATOS_CREATE_VARIABLE(double, LAGRANGE_AIR_PRESSURE)
KRATOS_CREATE_VARIABLE(double, LAGRANGE_WATER_PRESSURE)
KRATOS_CREATE_VARIABLE(double, LAGRANGE_TEMPERATURE)

// for MultiScale application
KRATOS_CREATE_VARIABLE(Vector, INITIAL_STRAIN)
KRATOS_CREATE_VARIABLE(double, COEFFICIENT_THERMAL_EXPANSION)
KRATOS_CREATE_VARIABLE(double, CHARACTERISTIC_LENGTH_MULTIPLIER)
//MeshMovingApplication
KRATOS_CREATE_VARIABLE(double, AUX_MESH_VAR)

//AdjointFluidApplication
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(ADJOINT_VELOCITY)
KRATOS_CREATE_VARIABLE(double, ADJOINT_PRESSURE)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(PRIMAL_VELOCITY)
KRATOS_CREATE_VARIABLE(double, PRIMAL_PRESSURE)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(SHAPE_SENSITIVITY)
KRATOS_CREATE_VARIABLE(double, NORMAL_SENSITIVITY)

//for Electric application


//for PFEM fluids application:
KRATOS_CREATE_VARIABLE(double, NODAL_AREA)

KRATOS_CREATE_VARIABLE(double, BULK_MODULUS)
KRATOS_CREATE_VARIABLE(double, SATURATION)
KRATOS_CREATE_VARIABLE(double, DENSITY_WATER)
KRATOS_CREATE_VARIABLE(double, VISCOSITY_WATER)
KRATOS_CREATE_VARIABLE(double, DENSITY_AIR)
KRATOS_CREATE_VARIABLE(double, VISCOSITY_AIR)
KRATOS_CREATE_VARIABLE(double, POROSITY)
KRATOS_CREATE_VARIABLE(double, DIAMETER)
KRATOS_CREATE_VARIABLE(double, LIN_DARCY_COEF)
KRATOS_CREATE_VARIABLE(double, NONLIN_DARCY_COEF)

KRATOS_CREATE_VARIABLE(double, AIR_ENTRY_VALUE)
KRATOS_CREATE_VARIABLE(double, FIRST_SATURATION_PARAM)
KRATOS_CREATE_VARIABLE(double, SECOND_SATURATION_PARAM)
KRATOS_CREATE_VARIABLE(double, PERMEABILITY_WATER)
KRATOS_CREATE_VARIABLE(double, PERMEABILITY_AIR)
KRATOS_CREATE_VARIABLE(double, BULK_AIR)

KRATOS_CREATE_VARIABLE(double, TEMP_CONV_PROJ)
KRATOS_CREATE_VARIABLE(double, CONVECTION_COEFFICIENT)

KRATOS_CREATE_VARIABLE(double, SOUND_VELOCITY)
KRATOS_CREATE_VARIABLE(double, AIR_SOUND_VELOCITY)
KRATOS_CREATE_VARIABLE(double, WATER_SOUND_VELOCITY)
KRATOS_CREATE_VARIABLE(double, NODAL_MASS)
KRATOS_CREATE_VARIABLE(double, AUX_INDEX)
KRATOS_CREATE_VARIABLE(double, EXTERNAL_PRESSURE)
KRATOS_CREATE_VARIABLE(double, VELOCITY_PERIOD)
KRATOS_CREATE_VARIABLE(double, ANGULAR_VELOCITY_PERIOD)
KRATOS_CREATE_VARIABLE(std::string, IDENTIFIER)

//for Other applications:
KRATOS_CREATE_VARIABLE(double, ARRHENIUS)
KRATOS_CREATE_VARIABLE(double, ARRHENIUSAUX)
KRATOS_CREATE_VARIABLE(double, ARRHENIUSAUX_)
KRATOS_CREATE_VARIABLE(double, PRESSUREAUX)
KRATOS_CREATE_VARIABLE(double, NODAL_MAUX)
KRATOS_CREATE_VARIABLE(double, NODAL_PAUX)
KRATOS_CREATE_VARIABLE(double, HEAT_FLUX)
KRATOS_CREATE_VARIABLE(double, TC)
KRATOS_CREATE_VARIABLE(double, CONDUCTIVITY)
KRATOS_CREATE_VARIABLE(double, SPECIFIC_HEAT)
KRATOS_CREATE_VARIABLE(double, MATERIAL_VARIABLE)
KRATOS_CREATE_VARIABLE(double, FUEL)
KRATOS_CREATE_VARIABLE(double, YO)
KRATOS_CREATE_VARIABLE(double, YF)
KRATOS_CREATE_VARIABLE(double, YI)
KRATOS_CREATE_VARIABLE(double, Y1)
KRATOS_CREATE_VARIABLE(double, Y2)
KRATOS_CREATE_VARIABLE(double, YP)

KRATOS_CREATE_VARIABLE(double, ABSORPTION_COEFFICIENT)
KRATOS_CREATE_VARIABLE(double, STEFAN_BOLTZMANN_CONSTANT)

KRATOS_CREATE_VARIABLE(double, EMISSIVITY)
KRATOS_CREATE_VARIABLE(double, ENTHALPY)
KRATOS_CREATE_VARIABLE(double, MIXTURE_FRACTION)

KRATOS_CREATE_VARIABLE(double, YCH4)
KRATOS_CREATE_VARIABLE(double, YO2)
KRATOS_CREATE_VARIABLE(double, YCO2)
KRATOS_CREATE_VARIABLE(double, YH2O)
KRATOS_CREATE_VARIABLE(double, YN2)

KRATOS_CREATE_VARIABLE(double, WET_VOLUME)
KRATOS_CREATE_VARIABLE(double, CUTTED_AREA)
KRATOS_CREATE_VARIABLE(double, NET_INPUT_MATERIAL)

KRATOS_CREATE_VARIABLE(double, INCIDENT_RADIATION_FUNCTION)

KRATOS_CREATE_VARIABLE(double, SWITCH_TEMPERATURE)
KRATOS_CREATE_VARIABLE(double, NODAL_SWITCH)

//for Xfem application:
KRATOS_CREATE_VARIABLE(double, CRACK_OPENING)
KRATOS_CREATE_VARIABLE(double, CRACK_TRANSLATION)

//for Level Set application:
KRATOS_CREATE_VARIABLE(double, MIN_DT)
KRATOS_CREATE_VARIABLE(double, MAX_DT)
KRATOS_CREATE_VARIABLE(double, VEL_ART_VISC)
KRATOS_CREATE_VARIABLE(double, PR_ART_VISC)

//for Vulcan application
KRATOS_CREATE_VARIABLE(double, LATENT_HEAT)
 KRATOS_CREATE_VARIABLE(double, AMBIENT_TEMPERATURE)


//vectors

//for General kratos application:
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(ROTATION)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(DELTA_ROTATION)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(TORQUE)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(ANGULAR_VELOCITY)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(ANGULAR_ACCELERATION)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(VELOCITY_LAPLACIAN)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(VELOCITY_LAPLACIAN_RATE)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(DISPLACEMENT)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(REACTION)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(VELOCITY)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(ACCELERATION)

KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(VOLUME_ACCELERATION)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(FORCE)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(MOMENT)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(FACE_LOAD)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(NORMAL)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(BODY_FORCE)

KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(FORCE_RESIDUAL)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(MOMENT_RESIDUAL)

KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(EXTERNAL_FORCE)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(INTERNAL_FORCE)

KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(CONTACT_FORCE)

KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(LINEAR_MOMENTUM)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(ANGULAR_MOMENTUM)

KRATOS_CREATE_VARIABLE(Vector, MARKER_LABELS)
KRATOS_CREATE_VARIABLE(Vector, MARKER_MESHES)

KRATOS_CREATE_VARIABLE(Vector, CONSTRAINT_LABELS)
KRATOS_CREATE_VARIABLE(Vector, CONSTRAINT_MESHES)

KRATOS_CREATE_VARIABLE(Vector, LOAD_LABELS)
KRATOS_CREATE_VARIABLE(Vector, LOAD_MESHES)

//for Structural application:
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(MOMENTUM)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(LAGRANGE_DISPLACEMENT)

KRATOS_CREATE_VARIABLE(Vector, ELEMENTAL_DISTANCES)
KRATOS_CREATE_VARIABLE(Vector, MATERIAL_PARAMETERS)
KRATOS_CREATE_VARIABLE(Vector, INTERNAL_VARIABLES)
KRATOS_CREATE_VARIABLE(Vector, INSITU_STRESS)

KRATOS_CREATE_VARIABLE(Vector, PENALTY)
KRATOS_CREATE_VARIABLE(Vector, NORMAL_STRESS)
KRATOS_CREATE_VARIABLE(Vector, TANGENTIAL_STRESS)
KRATOS_CREATE_VARIABLE(Vector, STRESSES)
KRATOS_CREATE_VARIABLE(Vector, STRAIN)

KRATOS_CREATE_VARIABLE(vector<int>, NEIGHBOURS_INDICES)

//ALE Application
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(DETERMINANT)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(ELEMENTSHAPE)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(MESH_VELOCITY)

//for PFEM fluids application:
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(GRAVITY)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(NORMAL_TO_WALL)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(STRUCTURE_VELOCITY)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(DRAG_FORCE)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(EMBEDDED_VELOCITY)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(FRACT_VEL)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(ROTATION_CENTER)

//for Other applications:
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(SEEPAGE_DRAG)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(MASS)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(RHS)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(FORCE_CM)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(MOMENTUM_CM)

KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(DIRECTION)
KRATOS_CREATE_3D_VARIABLE_WITH_COMPONENTS(Y)

KRATOS_CREATE_VARIABLE(Vector, BDF_COEFFICIENTS)

//for Vulcan application
KRATOS_CREATE_VARIABLE(Vector, ENRICHED_PRESSURES)

//matrices

//for General kratos application:
KRATOS_CREATE_VARIABLE(Matrix, GREEN_LAGRANGE_STRAIN_TENSOR)
KRATOS_CREATE_VARIABLE(Matrix, PK2_STRESS_TENSOR)
KRATOS_CREATE_VARIABLE(Matrix, CAUCHY_STRESS_TENSOR)
//  KRATOS_CREATE_VARIABLE(Matrix, LOCAL_INERTIA)
KRATOS_CREATE_VARIABLE(Matrix, LOCAL_CONSTITUTIVE_MATRIX)

//for Structural application
KRATOS_CREATE_VARIABLE(Matrix, INERTIA)

//for General kratos application:
KRATOS_CREATE_VARIABLE(ConstitutiveLaw::Pointer, CONSTITUTIVE_LAW)
//NEIGHBOUR_NODES defined in node.h
KRATOS_CREATE_VARIABLE(WeakPointerVector<Node<3> >, NEIGHBOUR_NODES)
//FATHER_NODES defined in node.h
KRATOS_CREATE_VARIABLE(WeakPointerVector<Node<3> >, FATHER_NODES)
//NEIGHBOR_ELEMENTS defined in element.h
KRATOS_CREATE_VARIABLE(WeakPointerVector<Element >, NEIGHBOUR_ELEMENTS)
//NEIGHBOR_CONDITIONS defined in condition.h
KRATOS_CREATE_VARIABLE(WeakPointerVector<Condition >, NEIGHBOUR_CONDITIONS)


//for Structural application:
KRATOS_CREATE_VARIABLE(WeakPointerVector< GeometricalObject >, NEIGHBOUR_EMBEDDED_FACES)
KRATOS_CREATE_VARIABLE(ConvectionDiffusionSettings::Pointer,  CONVECTION_DIFFUSION_SETTINGS)
KRATOS_CREATE_VARIABLE(RadiationSettings::Pointer,  RADIATION_SETTINGS)


KRATOS_CREATE_VARIABLE(PeriodicVariablesContainer, PERIODIC_VARIABLES)

// Variables that should be moved to applications (but have too many dependencies)
KRATOS_CREATE_VARIABLE(int, FRACTIONAL_STEP)
KRATOS_CREATE_VARIABLE(double, POWER_LAW_N)
KRATOS_CREATE_VARIABLE(double, POWER_LAW_K)
KRATOS_CREATE_VARIABLE(double, EQ_STRAIN_RATE)
KRATOS_CREATE_VARIABLE(double, YIELD_STRESS)
KRATOS_CREATE_VARIABLE(double, MU)
KRATOS_CREATE_VARIABLE(double, TAU)

KRATOS_CREATE_VARIABLE(double, SEARCH_RADIUS)

//for Vulcan application
//   Kratos::Variable<double> LAST_AIR( "LAST AIR");
//   Kratos::Variable<double> PRESSURES( "PRESSURES (N/m2)");
//   Kratos::Variable<Kratos::array_1d<double, 3> > VELOCITIES( "VELOCITIES (m/s)", Kratos::zero_vector<double>( 3));
//   Kratos::Variable<double> TEMPERATURES( "TEMPERATURES (C)");
//   /*const*/
//   Kratos::VariableComponent<Kratos::VectorComponentAdaptor<Kratos::array_1d<double, 3> > >
//   VELOCITIES_X( "X-VELOCITIES (m/s)", Kratos::VectorComponentAdaptor<Kratos::array_1d<double, 3> >( VELOCITIES, 0));
//
//   /*const*/
//   Kratos::VariableComponent<Kratos::VectorComponentAdaptor<Kratos::array_1d<double, 3> > >
//   VELOCITIES_Y( "Y-VELOCITIES (m/s)", Kratos::VectorComponentAdaptor<Kratos::array_1d<double, 3> >( VELOCITIES, 1));
//
//   /*const*/
//   Kratos::VariableComponent<Kratos::VectorComponentAdaptor<Kratos::array_1d<double, 3> > >
//   VELOCITIES_Z( "Z-VELOCITIES (m/s)", Kratos::VectorComponentAdaptor<Kratos::array_1d<double, 3> >( VELOCITIES, 2));
//
//   // for Vulcan application virtual mould properties
//   KRATOS_CREATE_VARIABLE(double,  MOULD_DENSITY)
//   KRATOS_CREATE_VARIABLE(double,  MOULD_SPECIFIC_HEAT)
//   KRATOS_CREATE_VARIABLE(double,  MOULD_THICKNESS)
//   KRATOS_CREATE_VARIABLE(double,  MOULD_SFACT)
//   KRATOS_CREATE_VARIABLE(double,  MOULD_VFACT)
//   KRATOS_CREATE_VARIABLE(double,  MOULD_CONDUCTIVITY)
//   KRATOS_CREATE_VARIABLE(double,  MOULD_HTC_ENVIRONMENT)
//   KRATOS_CREATE_VARIABLE(double,  MOULD_TEMPERATURE)
//   KRATOS_CREATE_VARIABLE(double,  MOULD_INNER_TEMPERATURE)
//   // for Click2Cast Application
//   KRATOS_CREATE_VARIABLE(int, NODE_PROPERTY_ID)
//   KRATOS_CREATE_VARIABLE(double,  HTC)
//   KRATOS_CREATE_VARIABLE(int, REF_ID)
//   KRATOS_CREATE_VARIABLE(double, PARTICLE_RADIUS)
//   KRATOS_CREATE_VARIABLE(double, POSETIVE_DISTANCE)
//   KRATOS_CREATE_VARIABLE(double, NAGATIVE_DISTANCE)
//   KRATOS_CREATE_VARIABLE(bool, IS_ESCAPED)
//   KRATOS_CREATE_VARIABLE(int, IS_SOLIDIFIED)
//   Kratos::Variable<double> SOLIDFRACTION( "SOLID FRACTION");
//   Kratos::Variable<double> SOLIDIF_TIME( "SOLIDIF TIME (s)");
//   Kratos::Variable<double> SOLIDIF_MODULUS( "SOLIDIF MODULUS (cm)");
//   Kratos::Variable<double> FILLTIME( "FILLTIME (s)");
//   KRATOS_CREATE_VARIABLE(double, MACRO_POROSITY)
//   Kratos::Variable<double> SHRINKAGE_POROSITY( "SHRINKAGE_POROSITY (m^3)");
//   Kratos::Variable<double> MAX_VEL( "MAX VEL (m/s)");
//   KRATOS_CREATE_VARIABLE(int, IS_GRAVITY_FILLING)
//   KRATOS_CREATE_VARIABLE(double, VOLUME_FRACTION)
//   KRATOS_CREATE_VARIABLE(double, KAPPA)
//   KRATOS_CREATE_VARIABLE(double, EPSILON)
//   Kratos::Variable<double> SHRINKAGE_POROSITY_US( "SHRINKAGE_POROSITY (in^3)");
//   Kratos::Variable<double> SOLIDIF_MODULUS_US( "SOLIDIF MODULUS (in)");
//   Kratos::Variable<double> TEMPERATURES_US( "TEMPERATURES (F)");
//   KRATOS_CREATE_VARIABLE(double,FRONT_MEETING)
//   KRATOS_CREATE_VARIABLE(double, MOULD_AVERAGE_TEMPERATURE)

}  // namespace Kratos.
