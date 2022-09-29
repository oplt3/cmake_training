#ifndef _animals_CDog_
#define _animals_CDog_

//! \file Dog.h
//! \brief Defines CDog
//! \author http://www.surgiqual-institute.com/
//! \date November 2020


// Qt

#include <string>

// Project dependencies


namespace animals
{
    //----------------------------------------------------------------------------------------
    /*! \class CDog
     *! \brief \todo Add a brief
     *///-------------------------------------------------------------------------------------
    class CDog
    {

    public:

        //------------------------------------------------------------------------------------
        /*! Default constructor
         *///---------------------------------------------------------------------------------
        explicit CDog(const std::string& p_Name="");

        //------------------------------------------------------------------------------------
        /*! Copy constructor
         *! \param[in] p_Other Object to copy
         *///---------------------------------------------------------------------------------
        CDog(const CDog& p_Other) = default; // To implement if copying is non-trivial

        //! \brief Copy assignment operator
        //! \param[in] p_Other Object to copy
        CDog& operator=(const CDog& p_Other) = default; // To implement if copying is non-trivial

        //------------------------------------------------------------------------------------
        /*! Destructor
         *///---------------------------------------------------------------------------------
        virtual ~CDog() = default;

        //------------------------------------------------------------------------------------
        /*! Move constructor
         *! \param[in] p_Other Object to move
         *///---------------------------------------------------------------------------------
        CDog(CDog&& p_Other) = default; // To implement if moving is non trivial

        //------------------------------------------------------------------------------------
        /*! Move assignment operator
         *! \param[in] p_Other Object to move
         *///---------------------------------------------------------------------------------
        CDog& operator=(CDog&& p_Other) = default; // To implement if moving is non trivial

        const std::string& GetName();

    protected:

    private:
        std::string m_Name;

    };

} // animals

#endif // _animals_CDog_
