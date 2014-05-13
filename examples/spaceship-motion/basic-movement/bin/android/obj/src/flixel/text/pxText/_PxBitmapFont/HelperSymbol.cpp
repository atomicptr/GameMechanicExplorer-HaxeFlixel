#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_pxText__PxBitmapFont_HelperSymbol
#include <flixel/text/pxText/_PxBitmapFont/HelperSymbol.h>
#endif
namespace flixel{
namespace text{
namespace pxText{
namespace _PxBitmapFont{

Void HelperSymbol_obj::__construct()
{
HX_STACK_FRAME("flixel.text.pxText._PxBitmapFont.HelperSymbol","new",0xac5d2b4b,"flixel.text.pxText._PxBitmapFont.HelperSymbol.new","flixel/text/pxText/PxBitmapFont.hx",737,0xb7b5754d)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//HelperSymbol_obj::~HelperSymbol_obj() { }

Dynamic HelperSymbol_obj::__CreateEmpty() { return  new HelperSymbol_obj; }
hx::ObjectPtr< HelperSymbol_obj > HelperSymbol_obj::__new()
{  hx::ObjectPtr< HelperSymbol_obj > result = new HelperSymbol_obj();
	result->__construct();
	return result;}

Dynamic HelperSymbol_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HelperSymbol_obj > result = new HelperSymbol_obj();
	result->__construct();
	return result;}


HelperSymbol_obj::HelperSymbol_obj()
{
}

Dynamic HelperSymbol_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xoffset") ) { return xoffset; }
		if (HX_FIELD_EQ(inName,"yoffset") ) { return yoffset; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { return xadvance; }
		if (HX_FIELD_EQ(inName,"charCode") ) { return charCode; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HelperSymbol_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xoffset") ) { xoffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yoffset") ) { yoffset=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { xadvance=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"charCode") ) { charCode=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HelperSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("xoffset"));
	outFields->push(HX_CSTRING("yoffset"));
	outFields->push(HX_CSTRING("xadvance"));
	outFields->push(HX_CSTRING("charCode"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(HelperSymbol_obj,x),HX_CSTRING("x")},
	{hx::fsInt,(int)offsetof(HelperSymbol_obj,y),HX_CSTRING("y")},
	{hx::fsInt,(int)offsetof(HelperSymbol_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(HelperSymbol_obj,height),HX_CSTRING("height")},
	{hx::fsInt,(int)offsetof(HelperSymbol_obj,xoffset),HX_CSTRING("xoffset")},
	{hx::fsInt,(int)offsetof(HelperSymbol_obj,yoffset),HX_CSTRING("yoffset")},
	{hx::fsInt,(int)offsetof(HelperSymbol_obj,xadvance),HX_CSTRING("xadvance")},
	{hx::fsInt,(int)offsetof(HelperSymbol_obj,charCode),HX_CSTRING("charCode")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("xoffset"),
	HX_CSTRING("yoffset"),
	HX_CSTRING("xadvance"),
	HX_CSTRING("charCode"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HelperSymbol_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HelperSymbol_obj::__mClass,"__mClass");
};

#endif

Class HelperSymbol_obj::__mClass;

void HelperSymbol_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.text.pxText._PxBitmapFont.HelperSymbol"), hx::TCanCast< HelperSymbol_obj> ,sStaticFields,sMemberFields,
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

void HelperSymbol_obj::__boot()
{
}

} // end namespace flixel
} // end namespace text
} // end namespace pxText
} // end namespace _PxBitmapFont
