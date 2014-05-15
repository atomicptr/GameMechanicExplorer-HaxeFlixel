#ifndef INCLUDED_flixel_util_FlxCollision
#define INCLUDED_flixel_util_FlxCollision

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,geom,Matrix)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,FlxCollision)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxCollision_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxCollision_obj OBJ_;
		FlxCollision_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxCollision_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxCollision_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxCollision"); }

		static int CAMERA_WALL_OUTSIDE;
		static int CAMERA_WALL_INSIDE;
		static ::flash::geom::Point pointA;
		static ::flash::geom::Point pointB;
		static ::flash::geom::Point centerA;
		static ::flash::geom::Point centerB;
		static ::flash::geom::Matrix matrixA;
		static ::flash::geom::Matrix matrixB;
		static ::flash::geom::Matrix testMatrix;
		static ::flash::geom::Rectangle boundsA;
		static ::flash::geom::Rectangle boundsB;
		static bool pixelPerfectCheck( ::flixel::FlxSprite Contact,::flixel::FlxSprite Target,hx::Null< int >  AlphaTolerance,::flixel::FlxCamera Camera);
		static Dynamic pixelPerfectCheck_dyn();

		static bool pixelPerfectPointCheck( int PointX,int PointY,::flixel::FlxSprite Target,hx::Null< int >  AlphaTolerance);
		static Dynamic pixelPerfectPointCheck_dyn();

		static ::flixel::group::FlxGroup createCameraWall( ::flixel::FlxCamera Camera,int Placement,int Thickness,hx::Null< bool >  AdjustWorldBounds);
		static Dynamic createCameraWall_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxCollision */ 
