#ifndef INCLUDED_flixel_util_FlxCallbackPoint
#define INCLUDED_flixel_util_FlxCallbackPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/util/FlxPoint.h>
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxCallbackPoint)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxCallbackPoint_obj : public ::flixel::util::FlxPoint_obj{
	public:
		typedef ::flixel::util::FlxPoint_obj super;
		typedef FlxCallbackPoint_obj OBJ_;
		FlxCallbackPoint_obj();
		Void __construct(Dynamic setXCallback,Dynamic setYCallback,Dynamic setXYCallback);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxCallbackPoint_obj > __new(Dynamic setXCallback,Dynamic setYCallback,Dynamic setXYCallback);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxCallbackPoint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxCallbackPoint"); }

		Dynamic _setXCallback;
		Dynamic &_setXCallback_dyn() { return _setXCallback;}
		Dynamic _setYCallback;
		Dynamic &_setYCallback_dyn() { return _setYCallback;}
		Dynamic _setXYCallback;
		Dynamic &_setXYCallback_dyn() { return _setXYCallback;}
		virtual ::flixel::util::FlxPoint set( hx::Null< Float >  X,hx::Null< Float >  Y);

		virtual Float set_x( Float Value);

		virtual Float set_y( Float Value);

		virtual Void destroy( );

		virtual Void put( );

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxCallbackPoint */ 
