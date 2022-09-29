//! \file Dog.cpp
//! \brief Implements CDog
//! \author http://www.surgiqual-institute.com/
//! \date November

// Library dependencies
#include <breeds/Breed.h>

// Project dependencies
#include "Dog.h"

namespace animals
{
    CDog::CDog(const std::string &p_Name, int p_Breed) : m_Name{p_Name}, m_Breed{p_Breed}
    {
    }

    const std::string &CDog::GetName()
    {
        return m_Name;
    }

    std::string CDog::GetBreed()
    {
        breeds::CBreed l_Helper;
        return l_Helper.Int2String(m_Breed);
    }
} // Namespace
