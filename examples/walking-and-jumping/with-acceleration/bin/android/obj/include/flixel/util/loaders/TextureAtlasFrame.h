#ifndef INCLUDED_flixel_util_loaders_TextureAtlasFrame
#define INCLUDED_flixel_util_loaders_TextureAtlasFrame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/interfaces/IFlxDestroyable.h>
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS3(flixel,util,loaders,TextureAtlasFrame)
namespace flixel{
namespace util{
namespace loaders{


class HXCPP_CLASS_ATTRIBUTES  TextureAtlasFrame_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextureAtlasFrame_obj OBJ_;
		TextureAtlasFrame_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TextureAtlasFrame_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextureAtlasFrame_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::interfaces::IFlxDestroyable_obj *()
			{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< TextureAtlasFrame_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("TextureAtlasFrame"); }

		::String name;
		::flash::geom::Rectangle frame;
		bool rotated;
		bool trimmed;
		::flixel::util::FlxPoint sourceSize;
		::flixel::util::FlxPoint offset;
		int additionalAngle;
		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace loaders

#endif /* INCLUDED_flixel_util_loaders_TextureAtlasFrame */ 
