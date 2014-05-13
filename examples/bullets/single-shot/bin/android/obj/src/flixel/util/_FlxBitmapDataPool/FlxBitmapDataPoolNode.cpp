#include <hxcpp.h>

#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxBitmapDataPool_FlxBitmapDataPoolNode
#include <flixel/util/_FlxBitmapDataPool/FlxBitmapDataPoolNode.h>
#endif
namespace flixel{
namespace util{
namespace _FlxBitmapDataPool{

Void FlxBitmapDataPoolNode_obj::__construct(::flash::display::BitmapData bmd,::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode prev,::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode next)
{
HX_STACK_FRAME("flixel.util._FlxBitmapDataPool.FlxBitmapDataPoolNode","new",0x6f761b8f,"flixel.util._FlxBitmapDataPool.FlxBitmapDataPoolNode.new","flixel/util/FlxBitmapDataPool.hx",159,0x992b0db1)
HX_STACK_THIS(this)
HX_STACK_ARG(bmd,"bmd")
HX_STACK_ARG(prev,"prev")
HX_STACK_ARG(next,"next")
{
	HX_STACK_LINE(160)
	this->bmd = bmd;
	HX_STACK_LINE(161)
	this->prev = prev;
	HX_STACK_LINE(162)
	this->next = next;
}
;
	return null();
}

//FlxBitmapDataPoolNode_obj::~FlxBitmapDataPoolNode_obj() { }

Dynamic FlxBitmapDataPoolNode_obj::__CreateEmpty() { return  new FlxBitmapDataPoolNode_obj; }
hx::ObjectPtr< FlxBitmapDataPoolNode_obj > FlxBitmapDataPoolNode_obj::__new(::flash::display::BitmapData bmd,::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode prev,::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode next)
{  hx::ObjectPtr< FlxBitmapDataPoolNode_obj > result = new FlxBitmapDataPoolNode_obj();
	result->__construct(bmd,prev,next);
	return result;}

Dynamic FlxBitmapDataPoolNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBitmapDataPoolNode_obj > result = new FlxBitmapDataPoolNode_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


FlxBitmapDataPoolNode_obj::FlxBitmapDataPoolNode_obj()
{
}

void FlxBitmapDataPoolNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBitmapDataPoolNode);
	HX_MARK_MEMBER_NAME(bmd,"bmd");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void FlxBitmapDataPoolNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bmd,"bmd");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic FlxBitmapDataPoolNode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bmd") ) { return bmd; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBitmapDataPoolNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bmd") ) { bmd=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBitmapDataPoolNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bmd"));
	outFields->push(HX_CSTRING("prev"));
	outFields->push(HX_CSTRING("next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flash::display::BitmapData*/ ,(int)offsetof(FlxBitmapDataPoolNode_obj,bmd),HX_CSTRING("bmd")},
	{hx::fsObject /*::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode*/ ,(int)offsetof(FlxBitmapDataPoolNode_obj,prev),HX_CSTRING("prev")},
	{hx::fsObject /*::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode*/ ,(int)offsetof(FlxBitmapDataPoolNode_obj,next),HX_CSTRING("next")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bmd"),
	HX_CSTRING("prev"),
	HX_CSTRING("next"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBitmapDataPoolNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBitmapDataPoolNode_obj::__mClass,"__mClass");
};

#endif

Class FlxBitmapDataPoolNode_obj::__mClass;

void FlxBitmapDataPoolNode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util._FlxBitmapDataPool.FlxBitmapDataPoolNode"), hx::TCanCast< FlxBitmapDataPoolNode_obj> ,sStaticFields,sMemberFields,
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

void FlxBitmapDataPoolNode_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxBitmapDataPool
