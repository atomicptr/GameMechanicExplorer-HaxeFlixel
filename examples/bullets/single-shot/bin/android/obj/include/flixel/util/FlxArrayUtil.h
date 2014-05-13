#ifndef INCLUDED_flixel_util_FlxArrayUtil
#define INCLUDED_flixel_util_FlxArrayUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,input,FlxSwipe)
HX_DECLARE_CLASS3(flixel,input,keyboard,FlxKey)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,system,replay,FrameRecord)
HX_DECLARE_CLASS2(flixel,text,FlxTextFormat)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,FlxArrayUtil)
HX_DECLARE_CLASS2(flixel,util,FlxPath)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxArrayUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxArrayUtil_obj OBJ_;
		FlxArrayUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxArrayUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxArrayUtil_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxArrayUtil"); }

		static Array< ::Dynamic > fastSplice_flixel_text_FlxTextFormat( Array< ::Dynamic > array,::flixel::text::FlxTextFormat element);
		static Dynamic fastSplice_flixel_text_FlxTextFormat_dyn();

		static Void clearArray_flixel_input_FlxSwipe( Array< ::Dynamic > array,hx::Null< bool >  recursive);
		static Dynamic clearArray_flixel_input_FlxSwipe_dyn();

		static Void setLength_flixel_system_replay_FrameRecord( Array< ::Dynamic > array,int newLength);
		static Dynamic setLength_flixel_system_replay_FrameRecord_dyn();

		static Void setLength_flixel_group_FlxTypedGroup_T( Dynamic array,int newLength);
		static Dynamic setLength_flixel_group_FlxTypedGroup_T_dyn();

		static Void setLength_flixel_input_keyboard_FlxKey( Array< ::Dynamic > array,int newLength);
		static Dynamic setLength_flixel_input_keyboard_FlxKey_dyn();

		static Void clearArray_flixel_group_FlxTypedGroup_T( Dynamic array,hx::Null< bool >  recursive);
		static Dynamic clearArray_flixel_group_FlxTypedGroup_T_dyn();

		static Dynamic getRandom_flixel_group_FlxTypedGroup_T( Dynamic Objects,hx::Null< int >  StartIndex,hx::Null< int >  EndIndex);
		static Dynamic getRandom_flixel_group_FlxTypedGroup_T_dyn();

		static Void setLength_Int( Array< int > array,int newLength);
		static Dynamic setLength_Int_dyn();

		static Array< ::Dynamic > fastSplice_flixel_tweens_FlxTween( Array< ::Dynamic > array,::flixel::tweens::FlxTween element);
		static Dynamic fastSplice_flixel_tweens_FlxTween_dyn();

		static Void clearArray_flixel_util_FlxTimer( Array< ::Dynamic > array,hx::Null< bool >  recursive);
		static Dynamic clearArray_flixel_util_FlxTimer_dyn();

		static Array< ::Dynamic > fastSplice_flixel_util_FlxTimer( Array< ::Dynamic > array,::flixel::util::FlxTimer element);
		static Dynamic fastSplice_flixel_util_FlxTimer_dyn();

		static Void clearArray_flixel_util_FlxPath( Array< ::Dynamic > array,hx::Null< bool >  recursive);
		static Dynamic clearArray_flixel_util_FlxPath_dyn();

		static Array< ::Dynamic > fastSplice_flixel_util_FlxPath( Array< ::Dynamic > array,::flixel::util::FlxPath element);
		static Dynamic fastSplice_flixel_util_FlxPath_dyn();

		static Dynamic clearArray_clearArray_T;
		static Dynamic &clearArray_clearArray_T_dyn() { return clearArray_clearArray_T;}
		static Dynamic swapAndPop_fastSplice_T( Dynamic array,int index);
		static Dynamic swapAndPop_fastSplice_T_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxArrayUtil */ 
