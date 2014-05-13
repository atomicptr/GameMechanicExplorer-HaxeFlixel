#ifndef INCLUDED_flixel_system_layer_frames_FlxRotatedFrame
#define INCLUDED_flixel_system_layer_frames_FlxRotatedFrame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/system/layer/frames/FlxFrame.h>
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,system,layer,TileSheetData)
HX_DECLARE_CLASS4(flixel,system,layer,frames,FlxFrame)
HX_DECLARE_CLASS4(flixel,system,layer,frames,FlxRotatedFrame)
namespace flixel{
namespace system{
namespace layer{
namespace frames{


class HXCPP_CLASS_ATTRIBUTES  FlxRotatedFrame_obj : public ::flixel::system::layer::frames::FlxFrame_obj{
	public:
		typedef ::flixel::system::layer::frames::FlxFrame_obj super;
		typedef FlxRotatedFrame_obj OBJ_;
		FlxRotatedFrame_obj();
		Void __construct(::flixel::system::layer::TileSheetData tileSheet);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxRotatedFrame_obj > __new(::flixel::system::layer::TileSheetData tileSheet);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxRotatedFrame_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxRotatedFrame"); }

		virtual ::flash::display::BitmapData paintOnBitmap( ::flash::display::BitmapData bmd);

};

} // end namespace flixel
} // end namespace system
} // end namespace layer
} // end namespace frames

#endif /* INCLUDED_flixel_system_layer_frames_FlxRotatedFrame */ 
