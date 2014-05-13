#ifndef INCLUDED_flixel_plugin_FlxPlugin
#define INCLUDED_flixel_plugin_FlxPlugin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxBasic.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,plugin,FlxPlugin)
namespace flixel{
namespace plugin{


class HXCPP_CLASS_ATTRIBUTES  FlxPlugin_obj : public ::flixel::FlxBasic_obj{
	public:
		typedef ::flixel::FlxBasic_obj super;
		typedef FlxPlugin_obj OBJ_;
		FlxPlugin_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxPlugin_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxPlugin_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxPlugin"); }

		virtual Void onStateSwitch( );
		Dynamic onStateSwitch_dyn();

		virtual Void onResize( int Width,int Height);
		Dynamic onResize_dyn();

};

} // end namespace flixel
} // end namespace plugin

#endif /* INCLUDED_flixel_plugin_FlxPlugin */ 
