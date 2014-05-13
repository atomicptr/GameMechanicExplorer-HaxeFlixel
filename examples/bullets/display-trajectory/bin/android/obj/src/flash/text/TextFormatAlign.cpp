#include <hxcpp.h>

#ifndef INCLUDED_flash_text_TextFormatAlign
#include <flash/text/TextFormatAlign.h>
#endif
namespace flash{
namespace text{

Void TextFormatAlign_obj::__construct()
{
	return null();
}

//TextFormatAlign_obj::~TextFormatAlign_obj() { }

Dynamic TextFormatAlign_obj::__CreateEmpty() { return  new TextFormatAlign_obj; }
hx::ObjectPtr< TextFormatAlign_obj > TextFormatAlign_obj::__new()
{  hx::ObjectPtr< TextFormatAlign_obj > result = new TextFormatAlign_obj();
	result->__construct();
	return result;}

Dynamic TextFormatAlign_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextFormatAlign_obj > result = new TextFormatAlign_obj();
	result->__construct();
	return result;}

::String TextFormatAlign_obj::LEFT;

::String TextFormatAlign_obj::RIGHT;

::String TextFormatAlign_obj::CENTER;

::String TextFormatAlign_obj::JUSTIFY;


TextFormatAlign_obj::TextFormatAlign_obj()
{
}

Dynamic TextFormatAlign_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { return LEFT; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { return RIGHT; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CENTER") ) { return CENTER; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"JUSTIFY") ) { return JUSTIFY; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextFormatAlign_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { LEFT=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { RIGHT=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CENTER") ) { CENTER=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"JUSTIFY") ) { JUSTIFY=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextFormatAlign_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LEFT"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("CENTER"),
	HX_CSTRING("JUSTIFY"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFormatAlign_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextFormatAlign_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(TextFormatAlign_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(TextFormatAlign_obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(TextFormatAlign_obj::JUSTIFY,"JUSTIFY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::JUSTIFY,"JUSTIFY");
};

#endif

Class TextFormatAlign_obj::__mClass;

void TextFormatAlign_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.text.TextFormatAlign"), hx::TCanCast< TextFormatAlign_obj> ,sStaticFields,sMemberFields,
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

void TextFormatAlign_obj::__boot()
{
	LEFT= HX_CSTRING("left");
	RIGHT= HX_CSTRING("right");
	CENTER= HX_CSTRING("center");
	JUSTIFY= HX_CSTRING("justify");
}

} // end namespace flash
} // end namespace text
