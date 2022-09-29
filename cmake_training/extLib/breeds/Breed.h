#ifndef _breeds_CBreed_
#define _breeds_CBreed_

//! \file Breeds.h
//! \brief Defines CBreed
//! \author http://www.surgiqual-institute.com/
//! \date November 2020


// Qt

// Project dependencies
#include <string>


namespace breeds
{
    //----------------------------------------------------------------------------------------
    /*! \class CBreed
     *! \brief \todo Add a brief
     *///-------------------------------------------------------------------------------------
    class CBreed
    {

    public:

        //------------------------------------------------------------------------------------
        /*! Default constructor
         *///---------------------------------------------------------------------------------
        explicit CBreed() = default;

        //------------------------------------------------------------------------------------
        /*! Copy constructor
         *! \param[in] p_Other Object to copy
         *///---------------------------------------------------------------------------------
        CBreed(const CBreed& p_Other) = default; // To implement if copying is non-trivial

        //! \brief Copy assignment operator
        //! \param[in] p_Other Object to copy
        CBreed& operator=(const CBreed& p_Other) = default; // To implement if copying is non-trivial

        //------------------------------------------------------------------------------------
        /*! Destructor
         *///---------------------------------------------------------------------------------
        virtual ~CBreed() = default;

        //------------------------------------------------------------------------------------
        /*! Move constructor
         *! \param[in] p_Other Object to move
         *///---------------------------------------------------------------------------------
        CBreed(CBreed&& p_Other) = default; // To implement if moving is non trivial

        //------------------------------------------------------------------------------------
        /*! Move assignment operator
         *! \param[in] p_Other Object to move
         *///---------------------------------------------------------------------------------
        CBreed& operator=(CBreed&& p_Other) = default; // To implement if moving is non trivial

        std::string Int2String(int p_breed);

    protected:

    private:

    };

} // breeds

#endif // _breeds_CBreed_
