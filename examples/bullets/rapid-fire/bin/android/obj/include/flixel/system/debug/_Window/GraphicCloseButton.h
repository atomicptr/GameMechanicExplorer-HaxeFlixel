#ifndef INCLUDED_flixel_system_debug__Window_GraphicCloseButton
#define INCLUDED_flixel_system_debug__Window_GraphicCloseButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/BitmapData.h>
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS4(flixel,system,debug,_Window,GraphicCloseButton)
namespace flixel{
namespace system{
namespace debug{
namespace _Window{


class HXCPP_CLASS_ATTRIBUTES  GraphicCloseButton_obj : public ::flash::display::BitmapData_obj{
	public:
		typedef ::flash::display::BitmapData_obj super;
		typedef GraphicCloseButton_obj OBJ_;
		GraphicCloseButton_obj();
		Void __construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GraphicCloseButton_obj > __new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicCloseButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GraphicCloseButton"); }

		static ::String resourceName;
};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace _Window

#endif /* INCLUDED_flixel_system_debug__Window_GraphicCloseButton */ 
