#ifndef INCLUDED_flixel_system__FlxAssets_FontDefault
#define INCLUDED_flixel_system__FlxAssets_FontDefault

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/text/Font.h>
HX_DECLARE_CLASS2(flash,text,Font)
HX_DECLARE_CLASS2(flash,text,FontStyle)
HX_DECLARE_CLASS2(flash,text,FontType)
HX_DECLARE_CLASS3(flixel,system,_FlxAssets,FontDefault)
namespace flixel{
namespace system{
namespace _FlxAssets{


class HXCPP_CLASS_ATTRIBUTES  FontDefault_obj : public ::flash::text::Font_obj{
	public:
		typedef ::flash::text::Font_obj super;
		typedef FontDefault_obj OBJ_;
		FontDefault_obj();
		Void __construct(::String __o_filename,::flash::text::FontStyle style,::flash::text::FontType type);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FontDefault_obj > __new(::String __o_filename,::flash::text::FontStyle style,::flash::text::FontType type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FontDefault_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FontDefault"); }

		static ::String resourceName;
};

} // end namespace flixel
} // end namespace system
} // end namespace _FlxAssets

#endif /* INCLUDED_flixel_system__FlxAssets_FontDefault */ 
