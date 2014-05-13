#ifndef INCLUDED_flixel_util_FlxPoint
#define INCLUDED_flixel_util_FlxPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/interfaces/IFlxPooled.h>
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxPool_flixel_util_FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxPoint_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxPoint_obj OBJ_;
		FlxPoint_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxPoint_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxPoint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::flixel::interfaces::IFlxDestroyable_obj *()
			{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxPoint_obj >(this); }
		inline operator ::flixel::interfaces::IFlxPooled_obj *()
			{ return new ::flixel::interfaces::IFlxPooled_delegate_< FlxPoint_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxPoint"); }

		Float x;
		Float y;
		bool _weak;
		bool _inPool;
		virtual Void put( );
		Dynamic put_dyn();

		virtual Void putWeak( );
		Dynamic putWeak_dyn();

		virtual ::flixel::util::FlxPoint set( hx::Null< Float >  X,hx::Null< Float >  Y);
		Dynamic set_dyn();

		virtual ::flixel::util::FlxPoint add( hx::Null< Float >  X,hx::Null< Float >  Y);
		Dynamic add_dyn();

		virtual ::flixel::util::FlxPoint addPoint( ::flixel::util::FlxPoint point);
		Dynamic addPoint_dyn();

		virtual ::flixel::util::FlxPoint subtract( hx::Null< Float >  X,hx::Null< Float >  Y);
		Dynamic subtract_dyn();

		virtual ::flixel::util::FlxPoint subtractPoint( ::flixel::util::FlxPoint point);
		Dynamic subtractPoint_dyn();

		virtual ::flixel::util::FlxPoint copyFrom( ::flixel::util::FlxPoint point);
		Dynamic copyFrom_dyn();

		virtual ::flixel::util::FlxPoint copyTo( ::flixel::util::FlxPoint point);
		Dynamic copyTo_dyn();

		virtual ::flixel::util::FlxPoint copyFromFlash( ::flash::geom::Point FlashPoint);
		Dynamic copyFromFlash_dyn();

		virtual ::flash::geom::Point copyToFlash( ::flash::geom::Point FlashPoint);
		Dynamic copyToFlash_dyn();

		virtual bool inCoords( Float RectX,Float RectY,Float RectWidth,Float RectHeight);
		Dynamic inCoords_dyn();

		virtual bool inFlxRect( ::flixel::util::FlxRect Rect);
		Dynamic inFlxRect_dyn();

		virtual Float distanceTo( ::flixel::util::FlxPoint AnotherPoint);
		Dynamic distanceTo_dyn();

		virtual ::flixel::util::FlxPoint floor( );
		Dynamic floor_dyn();

		virtual ::flixel::util::FlxPoint ceil( );
		Dynamic ceil_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Float set_x( Float Value);
		Dynamic set_x_dyn();

		virtual Float set_y( Float Value);
		Dynamic set_y_dyn();

		static ::flixel::util::FlxPool_flixel_util_FlxPoint _pool;
		static ::flixel::util::FlxPoint get( hx::Null< Float >  X,hx::Null< Float >  Y);
		static Dynamic get_dyn();

		static ::flixel::util::FlxPoint weak( hx::Null< Float >  X,hx::Null< Float >  Y);
		static Dynamic weak_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxPoint */ 
