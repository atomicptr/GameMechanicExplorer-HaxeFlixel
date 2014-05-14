#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#define INCLUDED_flixel_system_frontEnds_BitmapFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS3(flixel,system,frontEnds,BitmapFrontEnd)
HX_DECLARE_CLASS3(flixel,util,loaders,CachedGraphics)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace flixel{
namespace system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES  BitmapFrontEnd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapFrontEnd_obj OBJ_;
		BitmapFrontEnd_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BitmapFrontEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapFrontEnd_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BitmapFrontEnd"); }

		::haxe::ds::StringMap _cache;
		::flixel::util::loaders::CachedGraphics whitePixel;
		::flixel::util::loaders::CachedGraphics _whitePixel;
		virtual ::flixel::util::loaders::CachedGraphics get_whitePixel( );
		Dynamic get_whitePixel_dyn();

		virtual Void onContext( );
		Dynamic onContext_dyn();

		virtual Void dumpCache( );
		Dynamic dumpCache_dyn();

		virtual bool checkCache( ::String Key);
		Dynamic checkCache_dyn();

		virtual ::flixel::util::loaders::CachedGraphics create( int Width,int Height,int Color,hx::Null< bool >  Unique,::String Key);
		Dynamic create_dyn();

		virtual ::flixel::util::loaders::CachedGraphics add( Dynamic Graphic,hx::Null< bool >  Unique,::String Key);
		Dynamic add_dyn();

		virtual ::flixel::util::loaders::CachedGraphics addWithSpaces( Dynamic Graphic,int FrameWidth,int FrameHeight,hx::Null< int >  SpacingX,hx::Null< int >  SpacingY,hx::Null< bool >  Unique,::String Key);
		Dynamic addWithSpaces_dyn();

		virtual ::flixel::util::loaders::CachedGraphics get( ::String key);
		Dynamic get_dyn();

		virtual ::String getCacheKeyFor( ::flash::display::BitmapData bmd);
		Dynamic getCacheKeyFor_dyn();

		virtual ::String getUniqueKey( ::String baseKey);
		Dynamic getUniqueKey_dyn();

		virtual Void remove( ::String key);
		Dynamic remove_dyn();

		virtual Void clearCache( );
		Dynamic clearCache_dyn();

		virtual bool inOpenFlAssets( ::flash::display::BitmapData bitmap);
		Dynamic inOpenFlAssets_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_BitmapFrontEnd */ 
