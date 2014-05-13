#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_pxText_PxFontSymbol
#include <flixel/text/pxText/PxFontSymbol.h>
#endif
namespace flixel{
namespace text{
namespace pxText{

Void PxFontSymbol_obj::__construct()
{
HX_STACK_FRAME("flixel.text.pxText.PxFontSymbol","new",0xfc377b8b,"flixel.text.pxText.PxFontSymbol.new","flixel/text/pxText/PxFontSymbol.hx",26,0xc0d74bc4)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//PxFontSymbol_obj::~PxFontSymbol_obj() { }

Dynamic PxFontSymbol_obj::__CreateEmpty() { return  new PxFontSymbol_obj; }
hx::ObjectPtr< PxFontSymbol_obj > PxFontSymbol_obj::__new()
{  hx::ObjectPtr< PxFontSymbol_obj > result = new PxFontSymbol_obj();
	result->__construct();
	return result;}

Dynamic PxFontSymbol_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PxFontSymbol_obj > result = new PxFontSymbol_obj();
	result->__construct();
	return result;}


PxFontSymbol_obj::PxFontSymbol_obj()
{
}

Dynamic PxFontSymbol_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tileID") ) { return tileID; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xoffset") ) { return xoffset; }
		if (HX_FIELD_EQ(inName,"yoffset") ) { return yoffset; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { return xadvance; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PxFontSymbol_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tileID") ) { tileID=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xoffset") ) { xoffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yoffset") ) { yoffset=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { xadvance=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PxFontSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("xoffset"));
	outFields->push(HX_CSTRING("yoffset"));
	outFields->push(HX_CSTRING("xadvance"));
	outFields->push(HX_CSTRING("tileID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(PxFontSymbol_obj,xoffset),HX_CSTRING("xoffset")},
	{hx::fsInt,(int)offsetof(PxFontSymbol_obj,yoffset),HX_CSTRING("yoffset")},
	{hx::fsInt,(int)offsetof(PxFontSymbol_obj,xadvance),HX_CSTRING("xadvance")},
	{hx::fsInt,(int)offsetof(PxFontSymbol_obj,tileID),HX_CSTRING("tileID")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("xoffset"),
	HX_CSTRING("yoffset"),
	HX_CSTRING("xadvance"),
	HX_CSTRING("tileID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PxFontSymbol_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PxFontSymbol_obj::__mClass,"__mClass");
};

#endif

Class PxFontSymbol_obj::__mClass;

void PxFontSymbol_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.text.pxText.PxFontSymbol"), hx::TCanCast< PxFontSymbol_obj> ,sStaticFields,sMemberFields,
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

void PxFontSymbol_obj::__boot()
{
}

} // end namespace flixel
} // end namespace text
} // end namespace pxText
