//! \file Dog.cpp
//! \brief Implements CDog
//! \author http://www.surgiqual-institute.com/
//! \date November


// Library dependencies

// Project dependencies
#include "Dog.h"


namespace animals
{
    CDog::CDog(const std::string& p_Name)
    {
        m_Name = p_Name;
    }

    const std::string& CDog::GetName()
    {
        return m_Name;
    }
} // Namespace
