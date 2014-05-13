#ifndef INCLUDED_flixel_util_FlxVelocity
#define INCLUDED_flixel_util_FlxVelocity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouch)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxVelocity)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxVelocity_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxVelocity_obj OBJ_;
		FlxVelocity_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxVelocity_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxVelocity_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxVelocity"); }

		static Void moveTowardsObject( ::flixel::FlxSprite Source,::flixel::FlxSprite Dest,hx::Null< Float >  Speed,hx::Null< int >  MaxTime);
		static Dynamic moveTowardsObject_dyn();

		static Void accelerateTowardsObject( ::flixel::FlxSprite Source,::flixel::FlxSprite Dest,Float Acceleration,Float MaxXSpeed,Float MaxYSpeed);
		static Dynamic accelerateTowardsObject_dyn();

		static Void moveTowardsMouse( ::flixel::FlxSprite Source,hx::Null< Float >  Speed,hx::Null< int >  MaxTime);
		static Dynamic moveTowardsMouse_dyn();

		static Void moveTowardsTouch( ::flixel::FlxSprite Source,::flixel::input::touch::FlxTouch Touch,hx::Null< Float >  Speed,hx::Null< int >  MaxTime);
		static Dynamic moveTowardsTouch_dyn();

		static Void accelerateTowardsMouse( ::flixel::FlxSprite Source,Float Acceleration,Float MaxXSpeed,Float MaxYSpeed);
		static Dynamic accelerateTowardsMouse_dyn();

		static Void accelerateTowardsTouch( ::flixel::FlxSprite Source,::flixel::input::touch::FlxTouch Touch,Float Acceleration,Float MaxXSpeed,Float MaxYSpeed);
		static Dynamic accelerateTowardsTouch_dyn();

		static Void moveTowardsPoint( ::flixel::FlxSprite Source,::flixel::util::FlxPoint Target,hx::Null< Float >  Speed,hx::Null< int >  MaxTime);
		static Dynamic moveTowardsPoint_dyn();

		static Void accelerateTowardsPoint( ::flixel::FlxSprite Source,::flixel::util::FlxPoint Target,Float Acceleration,Float MaxXSpeed,Float MaxYSpeed);
		static Dynamic accelerateTowardsPoint_dyn();

		static ::flixel::util::FlxPoint velocityFromAngle( Float Angle,Float Speed);
		static Dynamic velocityFromAngle_dyn();

		static ::flixel::util::FlxPoint velocityFromFacing( ::flixel::FlxSprite Parent,Float Speed);
		static Dynamic velocityFromFacing_dyn();

		static Float computeVelocity( Float Velocity,Float Acceleration,Float Drag,Float Max);
		static Dynamic computeVelocity_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxVelocity */ 
