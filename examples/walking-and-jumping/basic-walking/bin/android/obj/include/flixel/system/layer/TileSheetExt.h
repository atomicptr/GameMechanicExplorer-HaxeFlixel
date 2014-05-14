#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#define INCLUDED_flixel_system_layer_TileSheetExt

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Tilesheet.h>
#include <flixel/interfaces/IFlxDestroyable.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,system,layer,TileSheetExt)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
namespace flixel{
namespace system{
namespace layer{


class HXCPP_CLASS_ATTRIBUTES  TileSheetExt_obj : public ::openfl::display::Tilesheet_obj{
	public:
		typedef ::openfl::display::Tilesheet_obj super;
		typedef TileSheetExt_obj OBJ_;
		TileSheetExt_obj();
		Void __construct(::flash::display::BitmapData bitmap);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TileSheetExt_obj > __new(::flash::display::BitmapData bitmap);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TileSheetExt_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::interfaces::IFlxDestroyable_obj *()
			{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< TileSheetExt_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("TileSheetExt"); }

		int numTiles;
		::haxe::ds::StringMap tileIDs;
		Array< ::String > tileOrder;
		virtual Void rebuildFromOld( ::flixel::system::layer::TileSheetExt old);
		Dynamic rebuildFromOld_dyn();

		virtual ::String getKey( ::flash::geom::Rectangle rect,::flash::geom::Point point);
		Dynamic getKey_dyn();

		virtual int addTileRectID( ::flash::geom::Rectangle rect,::flash::geom::Point point);
		Dynamic addTileRectID_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::flash::display::BitmapData get_nmeBitmap( );
		Dynamic get_nmeBitmap_dyn();

		static int _DRAWCALLS;
};

} // end namespace flixel
} // end namespace system
} // end namespace layer

#endif /* INCLUDED_flixel_system_layer_TileSheetExt */ 
