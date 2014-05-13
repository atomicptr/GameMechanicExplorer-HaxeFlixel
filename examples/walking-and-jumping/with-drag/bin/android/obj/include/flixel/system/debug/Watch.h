#ifndef INCLUDED_flixel_system_debug_Watch
#define INCLUDED_flixel_system_debug_Watch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/system/debug/Window.h>
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS3(flixel,system,debug,Watch)
HX_DECLARE_CLASS3(flixel,system,debug,Window)
namespace flixel{
namespace system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Watch_obj : public ::flixel::system::debug::Window_obj{
	public:
		typedef ::flixel::system::debug::Window_obj super;
		typedef Watch_obj OBJ_;
		Watch_obj();
		Void __construct(::String Title,::flash::display::BitmapData Icon,Dynamic Width,Dynamic Height,Dynamic Resizable,::flash::geom::Rectangle Bounds,Dynamic Closable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Watch_obj > __new(::String Title,::flash::display::BitmapData Icon,Dynamic Width,Dynamic Height,Dynamic Resizable,::flash::geom::Rectangle Bounds,Dynamic Closable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Watch_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Watch"); }

};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_Watch */ 
