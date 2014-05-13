#ifndef INCLUDED_flixel_util_loaders_TexturePackerData
#define INCLUDED_flixel_util_loaders_TexturePackerData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/interfaces/IFlxDestroyable.h>
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,util,loaders,TextureAtlasFrame)
HX_DECLARE_CLASS3(flixel,util,loaders,TexturePackerData)
namespace flixel{
namespace util{
namespace loaders{


class HXCPP_CLASS_ATTRIBUTES  TexturePackerData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TexturePackerData_obj OBJ_;
		TexturePackerData_obj();
		Void __construct(::String Description,::String AssetName);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TexturePackerData_obj > __new(::String Description,::String AssetName);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TexturePackerData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::interfaces::IFlxDestroyable_obj *()
			{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< TexturePackerData_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("TexturePackerData"); }

		Array< ::Dynamic > frames;
		::String assetName;
		::String description;
		::flash::display::BitmapData asset;
		virtual Void parseData( );
		Dynamic parseData_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace loaders

#endif /* INCLUDED_flixel_util_loaders_TexturePackerData */ 
