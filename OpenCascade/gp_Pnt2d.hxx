// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gp_Pnt2d_HeaderFile
#define _gp_Pnt2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_XY_HeaderFile
#include <gp_XY.hxx>
#endif
#ifndef _Standard_Storable_HeaderFile
#include <Standard_Storable.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_OutOfRange;
class gp_XY;
class gp_Ax2d;
class gp_Trsf2d;
class gp_Vec2d;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(gp_Pnt2d);

//!  Defines  a non-persistent 2D cartesian point. <br>
class gp_Pnt2d  {

public:
  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Creates a point with zero coordinates. <br>
      gp_Pnt2d();
  //! Creates a point with a doublet of coordinates. <br>
      gp_Pnt2d(const gp_XY& Coord);
  
//!  Creates a  point with its 2 cartesian's coordinates : Xp, Yp. <br>
      gp_Pnt2d(const Standard_Real Xp,const Standard_Real Yp);
  
//!  Assigns the value Xi to the coordinate that corresponds to Index: <br>
//!  Index = 1 => X is modified <br>
//!  Index = 2 => Y is modified <br>
//! Raises OutOfRange if Index != {1, 2}. <br>
        void SetCoord(const Standard_Integer Index,const Standard_Real Xi) ;
  //! For this point, assigns the values Xp and Yp to its two coordinates <br>
        void SetCoord(const Standard_Real Xp,const Standard_Real Yp) ;
  //! Assigns the given value to the X  coordinate of this point. <br>
        void SetX(const Standard_Real X) ;
  //! Assigns the given value to the Y  coordinate of this point. <br>
        void SetY(const Standard_Real Y) ;
  //! Assigns the two coordinates of Coord to this point. <br>
        void SetXY(const gp_XY& Coord) ;
  
//!  Returns the coordinate of range Index : <br>
//!  Index = 1 => X is returned <br>
//!  Index = 2 => Y is returned <br>
//! Raises OutOfRange if Index != {1, 2}. <br>
  Standard_EXPORT     Standard_Real Coord(const Standard_Integer Index) const;
  //! For this point returns its two coordinates as a number pair. <br>
        void Coord(Standard_Real& Xp,Standard_Real& Yp) const;
  //! For this point, returns its X  coordinate. <br>
        Standard_Real X() const;
  //! For this point, returns its Y coordinate. <br>
        Standard_Real Y() const;
  //! For this point, returns its two coordinates as a number pair. <br>
       const gp_XY& XY() const;
  //! For this point, returns its two coordinates as a number pair. <br>
       const gp_XY& Coord() const;
  
//! Returns the coordinates of this point. <br>
//! Note: This syntax allows direct modification of the returned value. <br>
        gp_XY& ChangeCoord() ;
  //! Comparison <br>
//!  Returns True if the distance between the two <br>
//!  points is lower or equal to LinearTolerance. <br>
        Standard_Boolean IsEqual(const gp_Pnt2d& Other,const Standard_Real LinearTolerance) const;
  //! Computes the distance between two points. <br>
        Standard_Real Distance(const gp_Pnt2d& Other) const;
  //! Computes the square distance between two points. <br>
        Standard_Real SquareDistance(const gp_Pnt2d& Other) const;
  
//!  Performs the symmetrical transformation of a point <br>
//!  with respect to the point P which is the center of <br>
//!  the  symmetry. <br>
  Standard_EXPORT     void Mirror(const gp_Pnt2d& P) ;
  
//!  Performs the symmetrical transformation of a point <br>
//!  with respect to an axis placement which is the axis <br>
  Standard_EXPORT     gp_Pnt2d Mirrored(const gp_Pnt2d& P) const;
  
  Standard_EXPORT     void Mirror(const gp_Ax2d& A) ;
  
//!  Rotates a point. A1 is the axis of the rotation. <br>
//!  Ang is the angular value of the rotation in radians. <br>
  Standard_EXPORT     gp_Pnt2d Mirrored(const gp_Ax2d& A) const;
  
        void Rotate(const gp_Pnt2d& P,const Standard_Real Ang) ;
  //! Scales a point. S is the scaling value. <br>
        gp_Pnt2d Rotated(const gp_Pnt2d& P,const Standard_Real Ang) const;
  
        void Scale(const gp_Pnt2d& P,const Standard_Real S) ;
  //! Transforms a point with the transformation T. <br>
        gp_Pnt2d Scaled(const gp_Pnt2d& P,const Standard_Real S) const;
  
  Standard_EXPORT     void Transform(const gp_Trsf2d& T) ;
  
//!  Translates a point in the direction of the vector V. <br>
//!  The magnitude of the translation is the vector's magnitude. <br>
        gp_Pnt2d Transformed(const gp_Trsf2d& T) const;
  
        void Translate(const gp_Vec2d& V) ;
  
//!  Translates a point from the point P1 to the point P2. <br>
        gp_Pnt2d Translated(const gp_Vec2d& V) const;
  
        void Translate(const gp_Pnt2d& P1,const gp_Pnt2d& P2) ;
  
        gp_Pnt2d Translated(const gp_Pnt2d& P1,const gp_Pnt2d& P2) const;
    const gp_XY& _CSFDB_Getgp_Pnt2dcoord() const { return coord; }



protected:




private: 


gp_XY coord;


};


#include <gp_Pnt2d.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
