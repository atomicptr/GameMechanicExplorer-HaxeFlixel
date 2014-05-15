#ifndef INCLUDED_flixel_system_FlxAssets
#define INCLUDED_flixel_system_FlxAssets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,media,Sound)
HX_DECLARE_CLASS2(flixel,system,FlxAssets)
namespace flixel{
namespace system{


class HXCPP_CLASS_ATTRIBUTES  FlxAssets_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxAssets_obj OBJ_;
		FlxAssets_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxAssets_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxAssets_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxAssets"); }

		static ::String FONT_DEFAULT;
		static ::String FONT_DEBUGGER;
		static Void init( );
		static Dynamic init_dyn();

		static Void drawLogo( ::flash::display::Graphics graph);
		static Dynamic drawLogo_dyn();

		static ::flash::display::BitmapData getBitmapData( ::String id);
		static Dynamic getBitmapData_dyn();

		static ::flash::media::Sound getSound( ::String id);
		static Dynamic getSound_dyn();

		static Void cacheSounds( );
		static Dynamic cacheSounds_dyn();

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxAssets */ 
