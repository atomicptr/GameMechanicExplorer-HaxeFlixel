#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#define INCLUDED_flixel_system_layer_frames_FlxFrame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Matrix)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS3(flixel,system,layer,TileSheetData)
HX_DECLARE_CLASS4(flixel,system,layer,frames,FlxFrame)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace system{
namespace layer{
namespace frames{


class HXCPP_CLASS_ATTRIBUTES  FlxFrame_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxFrame_obj OBJ_;
		FlxFrame_obj();
		Void __construct(::flixel::system::layer::TileSheetData tileSheet);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxFrame_obj > __new(::flixel::system::layer::TileSheetData tileSheet);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxFrame_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxFrame"); }

		::String name;
		::flash::geom::Rectangle frame;
		bool rotated;
		bool trimmed;
		int tileID;
		Float additionalAngle;
		::flixel::util::FlxPoint sourceSize;
		::flixel::util::FlxPoint offset;
		::flixel::util::FlxPoint center;
		::flash::display::BitmapData _bitmapData;
		::flash::display::BitmapData _hReversedBitmapData;
		::flash::display::BitmapData _vReversedBitmapData;
		::flash::display::BitmapData _hvReversedBitmapData;
		::flixel::system::layer::TileSheetData _tileSheet;
		virtual ::flash::display::BitmapData getBitmap( );
		Dynamic getBitmap_dyn();

		virtual ::flash::display::BitmapData getHReversedBitmap( );
		Dynamic getHReversedBitmap_dyn();

		virtual ::flash::display::BitmapData getVReversedBitmap( );
		Dynamic getVReversedBitmap_dyn();

		virtual ::flash::display::BitmapData getHVReversedBitmap( );
		Dynamic getHVReversedBitmap_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void destroyBitmapDatas( );
		Dynamic destroyBitmapDatas_dyn();

		static ::flash::geom::Point POINT;
		static ::flash::geom::Matrix MATRIX;
};

} // end namespace flixel
} // end namespace system
} // end namespace layer
} // end namespace frames

#endif /* INCLUDED_flixel_system_layer_frames_FlxFrame */ 
