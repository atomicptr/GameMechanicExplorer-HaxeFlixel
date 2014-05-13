#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCallbackPoint
#include <flixel/util/FlxCallbackPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace util{

Void FlxCallbackPoint_obj::__construct(Dynamic setXCallback,Dynamic setYCallback,Dynamic setXYCallback)
{
HX_STACK_FRAME("flixel.util.FlxCallbackPoint","new",0xcabf2565,"flixel.util.FlxCallbackPoint.new","flixel/util/FlxPoint.hx",311,0xb59f5266)
HX_STACK_THIS(this)
HX_STACK_ARG(setXCallback,"setXCallback")
HX_STACK_ARG(setYCallback,"setYCallback")
HX_STACK_ARG(setXYCallback,"setXYCallback")
{
	HX_STACK_LINE(312)
	super::__construct(null(),null());
	HX_STACK_LINE(314)
	this->_setXCallback = setXCallback;
	HX_STACK_LINE(315)
	this->_setYCallback = setXYCallback;
	HX_STACK_LINE(316)
	this->_setXYCallback = setXYCallback;
	HX_STACK_LINE(318)
	if (((this->_setXCallback_dyn() != null()))){
		HX_STACK_LINE(320)
		if (((this->_setYCallback_dyn() == null()))){
			HX_STACK_LINE(321)
			this->_setYCallback = setXCallback;
		}
		HX_STACK_LINE(322)
		if (((this->_setXYCallback_dyn() == null()))){
			HX_STACK_LINE(323)
			this->_setXYCallback = setXCallback;
		}
	}
}
;
	return null();
}

//FlxCallbackPoint_obj::~FlxCallbackPoint_obj() { }

Dynamic FlxCallbackPoint_obj::__CreateEmpty() { return  new FlxCallbackPoint_obj; }
hx::ObjectPtr< FlxCallbackPoint_obj > FlxCallbackPoint_obj::__new(Dynamic setXCallback,Dynamic setYCallback,Dynamic setXYCallback)
{  hx::ObjectPtr< FlxCallbackPoint_obj > result = new FlxCallbackPoint_obj();
	result->__construct(setXCallback,setYCallback,setXYCallback);
	return result;}

Dynamic FlxCallbackPoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCallbackPoint_obj > result = new FlxCallbackPoint_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::flixel::util::FlxPoint FlxCallbackPoint_obj::set( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.util.FlxCallbackPoint","set",0xcac2f0a7,"flixel.util.FlxCallbackPoint.set","flixel/util/FlxPoint.hx",328,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(329)
		this->super::set(X,Y);
		HX_STACK_LINE(330)
		if (((this->_setXYCallback_dyn() != null()))){
			HX_STACK_LINE(331)
			this->_setXYCallback(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(332)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


Float FlxCallbackPoint_obj::set_x( Float Value){
	HX_STACK_FRAME("flixel.util.FlxCallbackPoint","set_x",0x35ddfba0,"flixel.util.FlxCallbackPoint.set_x","flixel/util/FlxPoint.hx",336,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(337)
	this->super::set_x(Value);
	HX_STACK_LINE(338)
	if (((this->_setXCallback_dyn() != null()))){
		HX_STACK_LINE(339)
		this->_setXCallback(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(340)
	return Value;
}


Float FlxCallbackPoint_obj::set_y( Float Value){
	HX_STACK_FRAME("flixel.util.FlxCallbackPoint","set_y",0x35ddfba1,"flixel.util.FlxCallbackPoint.set_y","flixel/util/FlxPoint.hx",344,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(345)
	this->super::set_y(Value);
	HX_STACK_LINE(346)
	if (((this->_setYCallback_dyn() != null()))){
		HX_STACK_LINE(347)
		this->_setYCallback(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(348)
	return Value;
}


Void FlxCallbackPoint_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.FlxCallbackPoint","destroy",0xf0c0e87f,"flixel.util.FlxCallbackPoint.destroy","flixel/util/FlxPoint.hx",352,0xb59f5266)
		HX_STACK_THIS(this)
		HX_STACK_LINE(353)
		this->super::destroy();
		HX_STACK_LINE(354)
		this->_setXCallback = null();
		HX_STACK_LINE(355)
		this->_setYCallback = null();
		HX_STACK_LINE(356)
		this->_setXYCallback = null();
	}
return null();
}


Void FlxCallbackPoint_obj::put( ){
{
		HX_STACK_FRAME("flixel.util.FlxCallbackPoint","put",0xcac0b7d4,"flixel.util.FlxCallbackPoint.put","flixel/util/FlxPoint.hx",359,0xb59f5266)
		HX_STACK_THIS(this)
	}
return null();
}



FlxCallbackPoint_obj::FlxCallbackPoint_obj()
{
}

void FlxCallbackPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCallbackPoint);
	HX_MARK_MEMBER_NAME(_setXCallback,"_setXCallback");
	HX_MARK_MEMBER_NAME(_setYCallback,"_setYCallback");
	HX_MARK_MEMBER_NAME(_setXYCallback,"_setXYCallback");
	HX_MARK_END_CLASS();
}

void FlxCallbackPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_setXCallback,"_setXCallback");
	HX_VISIT_MEMBER_NAME(_setYCallback,"_setYCallback");
	HX_VISIT_MEMBER_NAME(_setXYCallback,"_setXYCallback");
}

Dynamic FlxCallbackPoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_setXCallback") ) { return _setXCallback; }
		if (HX_FIELD_EQ(inName,"_setYCallback") ) { return _setYCallback; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_setXYCallback") ) { return _setXYCallback; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxCallbackPoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_setXCallback") ) { _setXCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_setYCallback") ) { _setYCallback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_setXYCallback") ) { _setXYCallback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxCallbackPoint_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCallbackPoint_obj,_setXCallback),HX_CSTRING("_setXCallback")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCallbackPoint_obj,_setYCallback),HX_CSTRING("_setYCallback")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCallbackPoint_obj,_setXYCallback),HX_CSTRING("_setXYCallback")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_setXCallback"),
	HX_CSTRING("_setYCallback"),
	HX_CSTRING("_setXYCallback"),
	HX_CSTRING("set"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_y"),
	HX_CSTRING("destroy"),
	HX_CSTRING("put"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCallbackPoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCallbackPoint_obj::__mClass,"__mClass");
};

#endif

Class FlxCallbackPoint_obj::__mClass;

void FlxCallbackPoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxCallbackPoint"), hx::TCanCast< FlxCallbackPoint_obj> ,sStaticFields,sMemberFields,
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

void FlxCallbackPoint_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
