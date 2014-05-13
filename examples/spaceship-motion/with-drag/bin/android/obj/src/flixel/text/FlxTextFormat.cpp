#include <hxcpp.h>

#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
namespace flixel{
namespace text{

Void FlxTextFormat_obj::__construct(Dynamic FontColor,Dynamic Bold,Dynamic Italic,Dynamic BorderColor,Dynamic __o_Start,Dynamic __o_End)
{
HX_STACK_FRAME("flixel.text.FlxTextFormat","new",0x67be2279,"flixel.text.FlxTextFormat.new","flixel/text/FlxText.hx",952,0xdf165a6e)
HX_STACK_THIS(this)
HX_STACK_ARG(FontColor,"FontColor")
HX_STACK_ARG(Bold,"Bold")
HX_STACK_ARG(Italic,"Italic")
HX_STACK_ARG(BorderColor,"BorderColor")
HX_STACK_ARG(__o_Start,"Start")
HX_STACK_ARG(__o_End,"End")
Dynamic Start = __o_Start.Default(-1);
Dynamic End = __o_End.Default(-1);
{
	HX_STACK_LINE(966)
	this->end = (int)-1;
	HX_STACK_LINE(962)
	this->start = (int)-1;
	HX_STACK_LINE(983)
	if (((FontColor != null()))){
		HX_STACK_LINE(985)
		hx::AndEq(FontColor,(int)16777215);
	}
	HX_STACK_LINE(987)
	if (((BorderColor != null()))){
		HX_STACK_LINE(989)
		hx::AndEq(BorderColor,(int)16777215);
	}
	HX_STACK_LINE(991)
	::flash::text::TextFormat _g = ::flash::text::TextFormat_obj::__new(null(),null(),FontColor,Bold,Italic,null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(991)
	this->format = _g;
	HX_STACK_LINE(993)
	if (((Start > (int)-1))){
		HX_STACK_LINE(995)
		this->start = Start;
	}
	HX_STACK_LINE(997)
	if (((End > (int)-1))){
		HX_STACK_LINE(999)
		this->end = End;
	}
	HX_STACK_LINE(1002)
	if (((BorderColor == null()))){
		HX_STACK_LINE(1002)
		this->borderColor = (int)0;
	}
	else{
		HX_STACK_LINE(1002)
		this->borderColor = BorderColor;
	}
}
;
	return null();
}

//FlxTextFormat_obj::~FlxTextFormat_obj() { }

Dynamic FlxTextFormat_obj::__CreateEmpty() { return  new FlxTextFormat_obj; }
hx::ObjectPtr< FlxTextFormat_obj > FlxTextFormat_obj::__new(Dynamic FontColor,Dynamic Bold,Dynamic Italic,Dynamic BorderColor,Dynamic __o_Start,Dynamic __o_End)
{  hx::ObjectPtr< FlxTextFormat_obj > result = new FlxTextFormat_obj();
	result->__construct(FontColor,Bold,Italic,BorderColor,__o_Start,__o_End);
	return result;}

Dynamic FlxTextFormat_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTextFormat_obj > result = new FlxTextFormat_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

hx::Object *FlxTextFormat_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void FlxTextFormat_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.text.FlxTextFormat","destroy",0xc985ff93,"flixel.text.FlxTextFormat.destroy","flixel/text/FlxText.hx",1007,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1007)
		this->format = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTextFormat_obj,destroy,(void))


FlxTextFormat_obj::FlxTextFormat_obj()
{
}

void FlxTextFormat_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTextFormat);
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_END_CLASS();
}

void FlxTextFormat_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(format,"format");
}

Dynamic FlxTextFormat_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTextFormat_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { borderColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTextFormat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("borderColor"));
	outFields->push(HX_CSTRING("start"));
	outFields->push(HX_CSTRING("end"));
	outFields->push(HX_CSTRING("format"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxTextFormat_obj,borderColor),HX_CSTRING("borderColor")},
	{hx::fsInt,(int)offsetof(FlxTextFormat_obj,start),HX_CSTRING("start")},
	{hx::fsInt,(int)offsetof(FlxTextFormat_obj,end),HX_CSTRING("end")},
	{hx::fsObject /*::flash::text::TextFormat*/ ,(int)offsetof(FlxTextFormat_obj,format),HX_CSTRING("format")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("borderColor"),
	HX_CSTRING("start"),
	HX_CSTRING("end"),
	HX_CSTRING("format"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTextFormat_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTextFormat_obj::__mClass,"__mClass");
};

#endif

Class FlxTextFormat_obj::__mClass;

void FlxTextFormat_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.text.FlxTextFormat"), hx::TCanCast< FlxTextFormat_obj> ,sStaticFields,sMemberFields,
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

void FlxTextFormat_obj::__boot()
{
}

} // end namespace flixel
} // end namespace text
