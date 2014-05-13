#ifndef INCLUDED_flixel_system__FlxCollisionType_FlxCollisionType_Impl_
#define INCLUDED_flixel_system__FlxCollisionType_FlxCollisionType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,system,_FlxCollisionType,FlxCollisionType_Impl_)
namespace flixel{
namespace system{
namespace _FlxCollisionType{


class HXCPP_CLASS_ATTRIBUTES  FlxCollisionType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxCollisionType_Impl__obj OBJ_;
		FlxCollisionType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxCollisionType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxCollisionType_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxCollisionType_Impl_"); }

		static int NONE;
		static int OBJECT;
		static int GROUP;
		static int TILEMAP;
		static int SPRITEGROUP;
};

} // end namespace flixel
} // end namespace system
} // end namespace _FlxCollisionType

#endif /* INCLUDED_flixel_system__FlxCollisionType_FlxCollisionType_Impl_ */ 
