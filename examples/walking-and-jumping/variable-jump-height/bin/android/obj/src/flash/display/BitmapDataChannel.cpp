#include <hxcpp.h>

#ifndef INCLUDED_flash_display_BitmapDataChannel
#include <flash/display/BitmapDataChannel.h>
#endif
namespace flash{
namespace display{

Void BitmapDataChannel_obj::__construct()
{
	return null();
}

//BitmapDataChannel_obj::~BitmapDataChannel_obj() { }

Dynamic BitmapDataChannel_obj::__CreateEmpty() { return  new BitmapDataChannel_obj; }
hx::ObjectPtr< BitmapDataChannel_obj > BitmapDataChannel_obj::__new()
{  hx::ObjectPtr< BitmapDataChannel_obj > result = new BitmapDataChannel_obj();
	result->__construct();
	return result;}

Dynamic BitmapDataChannel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapDataChannel_obj > result = new BitmapDataChannel_obj();
	result->__construct();
	return result;}

int BitmapDataChannel_obj::ALPHA;

int BitmapDataChannel_obj::BLUE;

int BitmapDataChannel_obj::GREEN;

int BitmapDataChannel_obj::RED;


BitmapDataChannel_obj::BitmapDataChannel_obj()
{
}

Dynamic BitmapDataChannel_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapDataChannel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapDataChannel_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ALPHA"),
	HX_CSTRING("BLUE"),
	HX_CSTRING("GREEN"),
	HX_CSTRING("RED"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapDataChannel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BitmapDataChannel_obj::ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(BitmapDataChannel_obj::BLUE,"BLUE");
	HX_MARK_MEMBER_NAME(BitmapDataChannel_obj::GREEN,"GREEN");
	HX_MARK_MEMBER_NAME(BitmapDataChannel_obj::RED,"RED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapDataChannel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BitmapDataChannel_obj::ALPHA,"ALPHA");
	HX_VISIT_MEMBER_NAME(BitmapDataChannel_obj::BLUE,"BLUE");
	HX_VISIT_MEMBER_NAME(BitmapDataChannel_obj::GREEN,"GREEN");
	HX_VISIT_MEMBER_NAME(BitmapDataChannel_obj::RED,"RED");
};

#endif

Class BitmapDataChannel_obj::__mClass;

void BitmapDataChannel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display.BitmapDataChannel"), hx::TCanCast< BitmapDataChannel_obj> ,sStaticFields,sMemberFields,
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

void BitmapDataChannel_obj::__boot()
{
	ALPHA= (int)8;
	BLUE= (int)4;
	GREEN= (int)2;
	RED= (int)1;
}

} // end namespace flash
} // end namespace display
