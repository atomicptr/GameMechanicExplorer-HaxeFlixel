#include <hxcpp.h>

#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_media_Sound
#include <flash/media/Sound.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system__FlxAssets_FontDefault
#include <flixel/system/_FlxAssets/FontDefault.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_AssetLibrary
#include <openfl/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_AssetType
#include <openfl/AssetType.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace system{

Void FlxAssets_obj::__construct()
{
	return null();
}

//FlxAssets_obj::~FlxAssets_obj() { }

Dynamic FlxAssets_obj::__CreateEmpty() { return  new FlxAssets_obj; }
hx::ObjectPtr< FlxAssets_obj > FlxAssets_obj::__new()
{  hx::ObjectPtr< FlxAssets_obj > result = new FlxAssets_obj();
	result->__construct();
	return result;}

Dynamic FlxAssets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAssets_obj > result = new FlxAssets_obj();
	result->__construct();
	return result;}

::String FlxAssets_obj::FONT_DEFAULT;

::String FlxAssets_obj::FONT_DEBUGGER;

Void FlxAssets_obj::init( ){
{
		HX_STACK_FRAME("flixel.system.FlxAssets","init",0x4cb026b6,"flixel.system.FlxAssets.init","flixel/system/FlxAssets.hx",100,0xd3ac1356)
		HX_STACK_LINE(100)
		::flash::text::Font_obj::registerFont(hx::ClassOf< ::flixel::system::_FlxAssets::FontDefault >());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAssets_obj,init,(void))

Void FlxAssets_obj::drawLogo( ::flash::display::Graphics graph){
{
		HX_STACK_FRAME("flixel.system.FlxAssets","drawLogo",0xabec0035,"flixel.system.FlxAssets.drawLogo","flixel/system/FlxAssets.hx",108,0xd3ac1356)
		HX_STACK_ARG(graph,"graph")
		HX_STACK_LINE(110)
		graph->beginFill((int)47394,null());
		HX_STACK_LINE(111)
		graph->moveTo((int)50,(int)13);
		HX_STACK_LINE(112)
		graph->lineTo((int)51,(int)13);
		HX_STACK_LINE(113)
		graph->lineTo((int)87,(int)50);
		HX_STACK_LINE(114)
		graph->lineTo((int)87,(int)51);
		HX_STACK_LINE(115)
		graph->lineTo((int)51,(int)87);
		HX_STACK_LINE(116)
		graph->lineTo((int)50,(int)87);
		HX_STACK_LINE(117)
		graph->lineTo((int)13,(int)51);
		HX_STACK_LINE(118)
		graph->lineTo((int)13,(int)50);
		HX_STACK_LINE(119)
		graph->lineTo((int)50,(int)13);
		HX_STACK_LINE(120)
		graph->endFill();
		HX_STACK_LINE(123)
		graph->beginFill((int)16761138,null());
		HX_STACK_LINE(124)
		graph->moveTo((int)0,(int)0);
		HX_STACK_LINE(125)
		graph->lineTo((int)25,(int)0);
		HX_STACK_LINE(126)
		graph->lineTo((int)50,(int)13);
		HX_STACK_LINE(127)
		graph->lineTo((int)13,(int)50);
		HX_STACK_LINE(128)
		graph->lineTo((int)0,(int)25);
		HX_STACK_LINE(129)
		graph->lineTo((int)0,(int)0);
		HX_STACK_LINE(130)
		graph->endFill();
		HX_STACK_LINE(133)
		graph->beginFill((int)16066382,null());
		HX_STACK_LINE(134)
		graph->moveTo((int)100,(int)0);
		HX_STACK_LINE(135)
		graph->lineTo((int)75,(int)0);
		HX_STACK_LINE(136)
		graph->lineTo((int)51,(int)13);
		HX_STACK_LINE(137)
		graph->lineTo((int)87,(int)50);
		HX_STACK_LINE(138)
		graph->lineTo((int)100,(int)25);
		HX_STACK_LINE(139)
		graph->lineTo((int)100,(int)0);
		HX_STACK_LINE(140)
		graph->endFill();
		HX_STACK_LINE(143)
		graph->beginFill((int)3555839,null());
		HX_STACK_LINE(144)
		graph->moveTo((int)0,(int)100);
		HX_STACK_LINE(145)
		graph->lineTo((int)25,(int)100);
		HX_STACK_LINE(146)
		graph->lineTo((int)50,(int)87);
		HX_STACK_LINE(147)
		graph->lineTo((int)13,(int)51);
		HX_STACK_LINE(148)
		graph->lineTo((int)0,(int)75);
		HX_STACK_LINE(149)
		graph->lineTo((int)0,(int)100);
		HX_STACK_LINE(150)
		graph->endFill();
		HX_STACK_LINE(153)
		graph->beginFill((int)314875,null());
		HX_STACK_LINE(154)
		graph->moveTo((int)100,(int)100);
		HX_STACK_LINE(155)
		graph->lineTo((int)75,(int)100);
		HX_STACK_LINE(156)
		graph->lineTo((int)51,(int)87);
		HX_STACK_LINE(157)
		graph->lineTo((int)87,(int)51);
		HX_STACK_LINE(158)
		graph->lineTo((int)100,(int)75);
		HX_STACK_LINE(159)
		graph->lineTo((int)100,(int)100);
		HX_STACK_LINE(160)
		graph->endFill();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,drawLogo,(void))

::flash::display::BitmapData FlxAssets_obj::getBitmapData( ::String id){
	HX_STACK_FRAME("flixel.system.FlxAssets","getBitmapData",0x17128189,"flixel.system.FlxAssets.getBitmapData","flixel/system/FlxAssets.hx",165,0xd3ac1356)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(165)
	return ::openfl::Assets_obj::getBitmapData(id,false);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,getBitmapData,return )

::flash::media::Sound FlxAssets_obj::getSound( ::String id){
	HX_STACK_FRAME("flixel.system.FlxAssets","getSound",0x306e52ff,"flixel.system.FlxAssets.getSound","flixel/system/FlxAssets.hx",169,0xd3ac1356)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(170)
	::String extension = HX_CSTRING("");		HX_STACK_VAR(extension,"extension");
	HX_STACK_LINE(174)
	extension = HX_CSTRING(".ogg");
	HX_STACK_LINE(176)
	return ::openfl::Assets_obj::getSound((id + extension),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,getSound,return )

Void FlxAssets_obj::cacheSounds( ){
{
		HX_STACK_FRAME("flixel.system.FlxAssets","cacheSounds",0x35d449c0,"flixel.system.FlxAssets.cacheSounds","flixel/system/FlxAssets.hx",186,0xd3ac1356)
		HX_STACK_LINE(187)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(189)
		::openfl::AssetLibrary defaultLibrary = ::openfl::Assets_obj::libraries->get(HX_CSTRING("default"));		HX_STACK_VAR(defaultLibrary,"defaultLibrary");
		HX_STACK_LINE(191)
		if (((defaultLibrary == null()))){
			HX_STACK_LINE(192)
			return null();
		}
		HX_STACK_LINE(194)
		::haxe::ds::StringMap types = ::DefaultAssetLibrary_obj::type;		HX_STACK_VAR(types,"types");
		HX_STACK_LINE(196)
		if (((types == null()))){
			HX_STACK_LINE(197)
			return null();
		}
		HX_STACK_LINE(199)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(types->keys());  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(201)
				Dynamic _g = types->get(key);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(201)
				if (((_g == ::openfl::AssetType_obj::SOUND))){
					HX_STACK_LINE(203)
					::flixel::FlxG_obj::sound->cache(key);
				}
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAssets_obj,cacheSounds,(void))


FlxAssets_obj::FlxAssets_obj()
{
}

Dynamic FlxAssets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawLogo") ) { return drawLogo_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cacheSounds") ) { return cacheSounds_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"FONT_DEFAULT") ) { return FONT_DEFAULT; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FONT_DEBUGGER") ) { return FONT_DEBUGGER; }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAssets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"FONT_DEFAULT") ) { FONT_DEFAULT=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FONT_DEBUGGER") ) { FONT_DEBUGGER=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAssets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FONT_DEFAULT"),
	HX_CSTRING("FONT_DEBUGGER"),
	HX_CSTRING("init"),
	HX_CSTRING("drawLogo"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getSound"),
	HX_CSTRING("cacheSounds"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAssets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::FONT_DEFAULT,"FONT_DEFAULT");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::FONT_DEBUGGER,"FONT_DEBUGGER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::FONT_DEFAULT,"FONT_DEFAULT");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::FONT_DEBUGGER,"FONT_DEBUGGER");
};

#endif

Class FlxAssets_obj::__mClass;

void FlxAssets_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.FlxAssets"), hx::TCanCast< FlxAssets_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void FlxAssets_obj::__boot()
{
	FONT_DEFAULT= HX_CSTRING("Nokia Cellphone FC Small");
	FONT_DEBUGGER= HX_CSTRING("Arial");
}

} // end namespace flixel
} // end namespace system
