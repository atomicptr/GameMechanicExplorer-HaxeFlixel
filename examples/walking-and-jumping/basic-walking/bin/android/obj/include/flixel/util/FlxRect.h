#ifndef INCLUDED_flixel_util_FlxRect
#define INCLUDED_flixel_util_FlxRect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/interfaces/IFlxPooled.h>
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxPool_flixel_util_FlxRect)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxRect_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxRect_obj OBJ_;
		FlxRect_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxRect_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxRect_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::flixel::interfaces::IFlxDestroyable_obj *()
			{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxRect_obj >(this); }
		inline operator ::flixel::interfaces::IFlxPooled_obj *()
			{ return new ::flixel::interfaces::IFlxPooled_delegate_< FlxRect_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxRect"); }

		Float x;
		Float y;
		Float width;
		Float height;
		bool _inPool;
		virtual Void put( );
		Dynamic put_dyn();

		virtual ::flixel::util::FlxRect setSize( Float Width,Float Height);
		Dynamic setSize_dyn();

		virtual ::flixel::util::FlxRect set( hx::Null< Float >  X,hx::Null< Float >  Y,hx::Null< Float >  Width,hx::Null< Float >  Height);
		Dynamic set_dyn();

		virtual ::flixel::util::FlxRect copyFrom( ::flixel::util::FlxRect Rect);
		Dynamic copyFrom_dyn();

		virtual ::flixel::util::FlxRect copyTo( ::flixel::util::FlxRect Rect);
		Dynamic copyTo_dyn();

		virtual ::flixel::util::FlxRect copyFromFlash( ::flash::geom::Rectangle FlashRect);
		Dynamic copyFromFlash_dyn();

		virtual ::flash::geom::Rectangle copyToFlash( ::flash::geom::Rectangle FlashRect);
		Dynamic copyToFlash_dyn();

		virtual bool overlaps( ::flixel::util::FlxRect Rect);
		Dynamic overlaps_dyn();

		virtual bool containsFlxPoint( ::flixel::util::FlxPoint Point);
		Dynamic containsFlxPoint_dyn();

		virtual ::flixel::util::FlxRect _union( ::flixel::util::FlxRect Rect);
		Dynamic _union_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Float get_left( );
		Dynamic get_left_dyn();

		virtual Float set_left( Float Value);
		Dynamic set_left_dyn();

		virtual Float get_right( );
		Dynamic get_right_dyn();

		virtual Float set_right( Float Value);
		Dynamic set_right_dyn();

		virtual Float get_top( );
		Dynamic get_top_dyn();

		virtual Float set_top( Float Value);
		Dynamic set_top_dyn();

		virtual Float get_bottom( );
		Dynamic get_bottom_dyn();

		virtual Float set_bottom( Float Value);
		Dynamic set_bottom_dyn();

		static ::flixel::util::FlxPool_flixel_util_FlxRect _pool;
		static ::flixel::util::FlxRect get( hx::Null< Float >  X,hx::Null< Float >  Y,hx::Null< Float >  Width,hx::Null< Float >  Height);
		static Dynamic get_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxRect */ 
