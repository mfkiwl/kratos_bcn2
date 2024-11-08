// Kratos Multi-Physics
//
// Copyright (c) 2016 Pooyan Dadvand, Riccardo Rossi, CIMNE (International Center for Numerical Methods in Engineering)
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
//
// 	-	Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
// 	-	Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer
// 		in the documentation and/or other materials provided with the distribution.
// 	-	All advertising materials mentioning features or use of this software must display the following acknowledgement:
// 			This product includes Kratos Multi-Physics technology.
// 	-	Neither the name of the CIMNE nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ''AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// HOLDERS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED ANDON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THISSOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


#if !defined(KRATOS_BOUNDED_VECTOR_VECTOR_ASSIGNMENT_OPERATOR_PYTHON_H_INCLUDED )
#define  KRATOS_BOUNDED_VECTOR_VECTOR_ASSIGNMENT_OPERATOR_PYTHON_H_INCLUDED



// System includes


// External includes


// Project includes
#include "includes/define.h"


namespace Kratos
{

namespace Python
{

///@name Kratos Globals
///@{

///@}
///@name Type Definitions
///@{

///@}
///@name  Enum's
///@{

///@}
///@name  Functions
///@{

///@}
///@name Kratos Classes
///@{

/// Short class definition.
/** Detail class definition.
*/
template<class TContainerType, class TOtherContainerType>
class BoundedVectorVectorAssignmentOperatorPython : public def_visitor<BoundedVectorVectorAssignmentOperatorPython<TContainerType, TOtherContainerType> >
{
public:
    ///@name Type Definitions
    ///@{

    /// Pointer definition of BoundedVectorVectorAssignmentOperatorPython
    KRATOS_CLASS_POINTER_DEFINITION(BoundedVectorVectorAssignmentOperatorPython);

    ///@}
    ///@name Life Cycle
    ///@{

    /// Default constructor.
    BoundedVectorVectorAssignmentOperatorPython() {}

    /// Copy constructor.
    BoundedVectorVectorAssignmentOperatorPython(const BoundedVectorVectorAssignmentOperatorPython& rOther);

    /// Destructor.
    virtual ~BoundedVectorVectorAssignmentOperatorPython() {}


    ///@}
    ///@name Operators
    ///@{


    ///@}
    ///@name Operations
    ///@{

    template <class TClassType>
    void visit(TClassType& ThisClass) const
    {
        implicitly_convertible<TOtherContainerType, TContainerType>();
        ThisClass
        .def("__iadd__", &iadd, return_internal_reference<1>())
        .def("__isub__", &isub, return_internal_reference<1>())
        ;
    }

    ///@}
    ///@name Access
    ///@{


    ///@}
    ///@name Inquiry
    ///@{


    ///@}
    ///@name Input and output
    ///@{


    ///@}
    ///@name Friends
    ///@{


    ///@}


private:
    ///@name Static Member Variables
    ///@{


    ///@}
    ///@name Member Variables
    ///@{


    ///@}
    ///@name Private Operators
    ///@{


    ///@}
    ///@name Private Operations
    ///@{

    static
    TContainerType&
    iadd(TContainerType& ThisContainer, TOtherContainerType const& OtherContainer)
    {
        if(ThisContainer.size()!=OtherContainer.size())
            KRATOS_THROW_ERROR(std::invalid_argument, "different size of vectors to sum", "");
        for(typename TContainerType::size_type i = 0 ; i < ThisContainer.size() ; i++)
            ThisContainer[i] += OtherContainer[i];
        return ThisContainer;
    }

    static
    TContainerType&
    isub(TContainerType& ThisContainer, TOtherContainerType const& OtherContainer)
    {
        if(ThisContainer.size()!=OtherContainer.size())
            KRATOS_THROW_ERROR(std::invalid_argument, "different size of vectors to subtract", "");
        for(typename TContainerType::size_type i = 0 ; i < ThisContainer.size() ; i++)
            ThisContainer[i] -= OtherContainer[i];
        return ThisContainer;
    }




    ///@}
    ///@name Private  Access
    ///@{


    ///@}
    ///@name Private Inquiry
    ///@{


    ///@}
    ///@name Un accessible methods
    ///@{

    /// Assignment operator.
    BoundedVectorVectorAssignmentOperatorPython& operator=(const BoundedVectorVectorAssignmentOperatorPython& rOther);


    ///@}

}; // Class BoundedVectorVectorAssignmentOperatorPython

///@}

///@name Type Definitions
///@{


///@}
///@name Input and output
///@{

///@}

}  // namespace Python.

}  // namespace Kratos.

#endif // KRATOS_BOUNDED_VECTOR_VECTOR_ASSIGNMENT_OPERATOR_PYTHON_H_INCLUDED  defined 


