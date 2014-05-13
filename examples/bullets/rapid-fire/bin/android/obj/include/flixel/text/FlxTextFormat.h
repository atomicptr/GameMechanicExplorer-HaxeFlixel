#ifndef INCLUDED_flixel_text_FlxTextFormat
#define INCLUDED_flixel_text_FlxTextFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/interfaces/IFlxDestroyable.h>
HX_DECLARE_CLASS2(flash,text,TextFormat)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxTextFormat)
namespace flixel{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  FlxTextFormat_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxTextFormat_obj OBJ_;
		FlxTextFormat_obj();
		Void __construct(Dynamic FontColor,Dynamic Bold,Dynamic Italic,Dynamic BorderColor,Dynamic __o_Start,Dynamic __o_End);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxTextFormat_obj > __new(Dynamic FontColor,Dynamic Bold,Dynamic Italic,Dynamic BorderColor,Dynamic __o_Start,Dynamic __o_End);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTextFormat_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::interfaces::IFlxDestroyable_obj *()
			{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxTextFormat_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxTextFormat"); }

		int borderColor;
		int start;
		int end;
		::flash::text::TextFormat format;
		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace text

#endif /* INCLUDED_flixel_text_FlxTextFormat */ 
