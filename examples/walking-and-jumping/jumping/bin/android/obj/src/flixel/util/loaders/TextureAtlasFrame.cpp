#include <hxcpp.h>

#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureAtlasFrame
#include <flixel/util/loaders/TextureAtlasFrame.h>
#endif
namespace flixel{
namespace util{
namespace loaders{

Void TextureAtlasFrame_obj::__construct()
{
HX_STACK_FRAME("flixel.util.loaders.TextureAtlasFrame","new",0x3c7b6a67,"flixel.util.loaders.TextureAtlasFrame.new","flixel/util/loaders/TextureAtlasFrame.hx",7,0x8cfab1ca)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->additionalAngle = (int)0;
	HX_STACK_LINE(15)
	this->offset = null();
	HX_STACK_LINE(14)
	this->sourceSize = null();
	HX_STACK_LINE(13)
	this->trimmed = false;
	HX_STACK_LINE(12)
	this->rotated = false;
	HX_STACK_LINE(10)
	this->frame = null();
	HX_STACK_LINE(9)
	this->name = null();
}
;
	return null();
}

//TextureAtlasFrame_obj::~TextureAtlasFrame_obj() { }

Dynamic TextureAtlasFrame_obj::__CreateEmpty() { return  new TextureAtlasFrame_obj; }
hx::ObjectPtr< TextureAtlasFrame_obj > TextureAtlasFrame_obj::__new()
{  hx::ObjectPtr< TextureAtlasFrame_obj > result = new TextureAtlasFrame_obj();
	result->__construct();
	return result;}

Dynamic TextureAtlasFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureAtlasFrame_obj > result = new TextureAtlasFrame_obj();
	result->__construct();
	return result;}

hx::Object *TextureAtlasFrame_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void TextureAtlasFrame_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.loaders.TextureAtlasFrame","destroy",0xbd50d681,"flixel.util.loaders.TextureAtlasFrame.destroy","flixel/util/loaders/TextureAtlasFrame.hx",22,0x8cfab1ca)
		HX_STACK_THIS(this)
		HX_STACK_LINE(23)
		this->name = null();
		HX_STACK_LINE(24)
		this->frame = null();
		HX_STACK_LINE(25)
		this->sourceSize = null();
		HX_STACK_LINE(26)
		this->offset = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextureAtlasFrame_obj,destroy,(void))


TextureAtlasFrame_obj::TextureAtlasFrame_obj()
{
}

void TextureAtlasFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureAtlasFrame);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(rotated,"rotated");
	HX_MARK_MEMBER_NAME(trimmed,"trimmed");
	HX_MARK_MEMBER_NAME(sourceSize,"sourceSize");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(additionalAngle,"additionalAngle");
	HX_MARK_END_CLASS();
}

void TextureAtlasFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(rotated,"rotated");
	HX_VISIT_MEMBER_NAME(trimmed,"trimmed");
	HX_VISIT_MEMBER_NAME(sourceSize,"sourceSize");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(additionalAngle,"additionalAngle");
}

Dynamic TextureAtlasFrame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rotated") ) { return rotated; }
		if (HX_FIELD_EQ(inName,"trimmed") ) { return trimmed; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceSize") ) { return sourceSize; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"additionalAngle") ) { return additionalAngle; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureAtlasFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rotated") ) { rotated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"trimmed") ) { trimmed=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceSize") ) { sourceSize=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"additionalAngle") ) { additionalAngle=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureAtlasFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("frame"));
	outFields->push(HX_CSTRING("rotated"));
	outFields->push(HX_CSTRING("trimmed"));
	outFields->push(HX_CSTRING("sourceSize"));
	outFields->push(HX_CSTRING("offset"));
	outFields->push(HX_CSTRING("additionalAngle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TextureAtlasFrame_obj,name),HX_CSTRING("name")},
	{hx::fsObject /*::flash::geom::Rectangle*/ ,(int)offsetof(TextureAtlasFrame_obj,frame),HX_CSTRING("frame")},
	{hx::fsBool,(int)offsetof(TextureAtlasFrame_obj,rotated),HX_CSTRING("rotated")},
	{hx::fsBool,(int)offsetof(TextureAtlasFrame_obj,trimmed),HX_CSTRING("trimmed")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(TextureAtlasFrame_obj,sourceSize),HX_CSTRING("sourceSize")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(TextureAtlasFrame_obj,offset),HX_CSTRING("offset")},
	{hx::fsInt,(int)offsetof(TextureAtlasFrame_obj,additionalAngle),HX_CSTRING("additionalAngle")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("frame"),
	HX_CSTRING("rotated"),
	HX_CSTRING("trimmed"),
	HX_CSTRING("sourceSize"),
	HX_CSTRING("offset"),
	HX_CSTRING("additionalAngle"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureAtlasFrame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureAtlasFrame_obj::__mClass,"__mClass");
};

#endif

Class TextureAtlasFrame_obj::__mClass;

void TextureAtlasFrame_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.loaders.TextureAtlasFrame"), hx::TCanCast< TextureAtlasFrame_obj> ,sStaticFields,sMemberFields,
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

void TextureAtlasFrame_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
} // end namespace loaders
