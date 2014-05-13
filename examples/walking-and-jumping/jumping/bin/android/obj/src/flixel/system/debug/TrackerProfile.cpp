#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_debug_TrackerProfile
#include <flixel/system/debug/TrackerProfile.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void TrackerProfile_obj::__construct(::Class ObjectClass,Array< ::String > Variables,Array< ::Dynamic > Extensions)
{
HX_STACK_FRAME("flixel.system.debug.TrackerProfile","new",0xa683e46b,"flixel.system.debug.TrackerProfile.new","flixel/system/debug/Tracker.hx",243,0x59950a0f)
HX_STACK_THIS(this)
HX_STACK_ARG(ObjectClass,"ObjectClass")
HX_STACK_ARG(Variables,"Variables")
HX_STACK_ARG(Extensions,"Extensions")
{
	HX_STACK_LINE(244)
	this->objectClass = ObjectClass;
	HX_STACK_LINE(245)
	this->variables = Variables;
	HX_STACK_LINE(246)
	this->extensions = Extensions;
}
;
	return null();
}

//TrackerProfile_obj::~TrackerProfile_obj() { }

Dynamic TrackerProfile_obj::__CreateEmpty() { return  new TrackerProfile_obj; }
hx::ObjectPtr< TrackerProfile_obj > TrackerProfile_obj::__new(::Class ObjectClass,Array< ::String > Variables,Array< ::Dynamic > Extensions)
{  hx::ObjectPtr< TrackerProfile_obj > result = new TrackerProfile_obj();
	result->__construct(ObjectClass,Variables,Extensions);
	return result;}

Dynamic TrackerProfile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TrackerProfile_obj > result = new TrackerProfile_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String TrackerProfile_obj::toString( ){
	HX_STACK_FRAME("flixel.system.debug.TrackerProfile","toString",0xad6334c1,"flixel.system.debug.TrackerProfile.toString","flixel/system/debug/Tracker.hx",250,0x59950a0f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(252)
	::flixel::util::LabelValuePair _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(252)
	{
		HX_STACK_LINE(252)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(252)
		_this->label = HX_CSTRING("variables");
		HX_STACK_LINE(252)
		_this->value = this->variables;
		HX_STACK_LINE(252)
		_g = _this;
	}
	HX_STACK_LINE(253)
	::flixel::util::LabelValuePair _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(253)
	{
		HX_STACK_LINE(253)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(253)
		_this->label = HX_CSTRING("extensions");
		HX_STACK_LINE(253)
		_this->value = this->extensions;
		HX_STACK_LINE(253)
		_g1 = _this;
	}
	HX_STACK_LINE(251)
	Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(251)
	return ::flixel::util::FlxStringUtil_obj::getDebugString(_g2);
}


HX_DEFINE_DYNAMIC_FUNC0(TrackerProfile_obj,toString,return )


TrackerProfile_obj::TrackerProfile_obj()
{
}

void TrackerProfile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TrackerProfile);
	HX_MARK_MEMBER_NAME(objectClass,"objectClass");
	HX_MARK_MEMBER_NAME(variables,"variables");
	HX_MARK_MEMBER_NAME(extensions,"extensions");
	HX_MARK_END_CLASS();
}

void TrackerProfile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectClass,"objectClass");
	HX_VISIT_MEMBER_NAME(variables,"variables");
	HX_VISIT_MEMBER_NAME(extensions,"extensions");
}

Dynamic TrackerProfile_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { return variables; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"extensions") ) { return extensions; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectClass") ) { return objectClass; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TrackerProfile_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { variables=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"extensions") ) { extensions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectClass") ) { objectClass=inValue.Cast< ::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TrackerProfile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("objectClass"));
	outFields->push(HX_CSTRING("variables"));
	outFields->push(HX_CSTRING("extensions"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Class*/ ,(int)offsetof(TrackerProfile_obj,objectClass),HX_CSTRING("objectClass")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TrackerProfile_obj,variables),HX_CSTRING("variables")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TrackerProfile_obj,extensions),HX_CSTRING("extensions")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("objectClass"),
	HX_CSTRING("variables"),
	HX_CSTRING("extensions"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TrackerProfile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TrackerProfile_obj::__mClass,"__mClass");
};

#endif

Class TrackerProfile_obj::__mClass;

void TrackerProfile_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.TrackerProfile"), hx::TCanCast< TrackerProfile_obj> ,sStaticFields,sMemberFields,
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

void TrackerProfile_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
