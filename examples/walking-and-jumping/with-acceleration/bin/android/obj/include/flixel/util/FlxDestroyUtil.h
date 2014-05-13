#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#define INCLUDED_flixel_util_FlxDestroyUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxDestroyUtil)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxDestroyUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxDestroyUtil_obj OBJ_;
		FlxDestroyUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxDestroyUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxDestroyUtil_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxDestroyUtil"); }

		static Dynamic destroy( ::flixel::interfaces::IFlxDestroyable object);
		static Dynamic destroy_dyn();

		static Dynamic destroyArray( Dynamic array);
		static Dynamic destroyArray_dyn();

		static Dynamic put( ::flixel::interfaces::IFlxPooled object);
		static Dynamic put_dyn();

		static Dynamic putArray( Dynamic array);
		static Dynamic putArray_dyn();

		static ::flash::display::BitmapData dispose( ::flash::display::BitmapData Bitmap);
		static Dynamic dispose_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxDestroyUtil */ 
