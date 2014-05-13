#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#define INCLUDED_flixel_system_layer_DrawStackItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,system,layer,DrawStackItem)
HX_DECLARE_CLASS3(flixel,util,loaders,CachedGraphics)
namespace flixel{
namespace system{
namespace layer{


class HXCPP_CLASS_ATTRIBUTES  DrawStackItem_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DrawStackItem_obj OBJ_;
		DrawStackItem_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DrawStackItem_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DrawStackItem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DrawStackItem"); }

		::flixel::util::loaders::CachedGraphics graphics;
		Array< Float > drawData;
		int position;
		::flixel::system::layer::DrawStackItem next;
		bool colored;
		int blending;
		bool initialized;
		bool antialiasing;
		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace layer

#endif /* INCLUDED_flixel_system_layer_DrawStackItem */ 
