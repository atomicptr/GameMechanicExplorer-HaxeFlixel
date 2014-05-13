#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal3
#include <flixel/util/_FlxSignal/FlxSignal3.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal4
#include <flixel/util/_FlxSignal/FlxSignal4.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxTypedSignal_Impl_
#include <flixel/util/_FlxSignal/FlxTypedSignal_Impl_.h>
#endif
namespace flixel{
namespace util{
namespace _FlxSignal{

Void FlxTypedSignal_Impl__obj::__construct()
{
	return null();
}

//FlxTypedSignal_Impl__obj::~FlxTypedSignal_Impl__obj() { }

Dynamic FlxTypedSignal_Impl__obj::__CreateEmpty() { return  new FlxTypedSignal_Impl__obj; }
hx::ObjectPtr< FlxTypedSignal_Impl__obj > FlxTypedSignal_Impl__obj::__new()
{  hx::ObjectPtr< FlxTypedSignal_Impl__obj > result = new FlxTypedSignal_Impl__obj();
	result->__construct();
	return result;}

Dynamic FlxTypedSignal_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedSignal_Impl__obj > result = new FlxTypedSignal_Impl__obj();
	result->__construct();
	return result;}

Dynamic FlxTypedSignal_Impl__obj::_new;

Void FlxTypedSignal_Impl__obj::add( ::flixel::interfaces::IFlxSignal this1,Dynamic listener){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","add",0x0a4ba52c,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.add","flixel/util/FlxSignal.hx",21,0x3c758c5e)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(21)
		this1->add(listener);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSignal_Impl__obj,add,(void))

Void FlxTypedSignal_Impl__obj::addOnce( ::flixel::interfaces::IFlxSignal this1,Dynamic listener){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","addOnce",0x33af54cd,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.addOnce","flixel/util/FlxSignal.hx",26,0x3c758c5e)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(26)
		this1->addOnce(listener);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSignal_Impl__obj,addOnce,(void))

Void FlxTypedSignal_Impl__obj::remove( ::flixel::interfaces::IFlxSignal this1,Dynamic listener){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","remove",0xc99e2219,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.remove","flixel/util/FlxSignal.hx",31,0x3c758c5e)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(31)
		this1->remove(listener);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSignal_Impl__obj,remove,(void))

bool FlxTypedSignal_Impl__obj::has( ::flixel::interfaces::IFlxSignal this1,Dynamic listener){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","has",0x0a50f265,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.has","flixel/util/FlxSignal.hx",36,0x3c758c5e)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(36)
	return this1->has(listener);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSignal_Impl__obj,has,return )

Void FlxTypedSignal_Impl__obj::removeAll( ::flixel::interfaces::IFlxSignal this1){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","removeAll",0x171b2488,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.removeAll","flixel/util/FlxSignal.hx",41,0x3c758c5e)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(41)
		this1->removeAll();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSignal_Impl__obj,removeAll,(void))

Dynamic FlxTypedSignal_Impl__obj::get_dispatch( ::flixel::interfaces::IFlxSignal this1){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","get_dispatch",0x56609658,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.get_dispatch","flixel/util/FlxSignal.hx",46,0x3c758c5e)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(46)
	return this1->__Field(HX_CSTRING("dispatch"),true);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSignal_Impl__obj,get_dispatch,return )

::flixel::util::_FlxSignal::FlxSignal0 FlxTypedSignal_Impl__obj::toSignal0( ::flixel::interfaces::IFlxSignal signal){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","toSignal0",0xbcacb1d8,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.toSignal0","flixel/util/FlxSignal.hx",52,0x3c758c5e)
	HX_STACK_ARG(signal,"signal")
	HX_STACK_LINE(52)
	return ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSignal_Impl__obj,toSignal0,return )

::flixel::util::_FlxSignal::FlxSignal1 FlxTypedSignal_Impl__obj::toSignal1( ::flixel::interfaces::IFlxSignal signal){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","toSignal1",0xbcacb1d9,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.toSignal1","flixel/util/FlxSignal.hx",58,0x3c758c5e)
	HX_STACK_ARG(signal,"signal")
	HX_STACK_LINE(58)
	return ::flixel::util::_FlxSignal::FlxSignal1_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSignal_Impl__obj,toSignal1,return )

::flixel::util::_FlxSignal::FlxSignal2 FlxTypedSignal_Impl__obj::toSignal2( ::flixel::interfaces::IFlxSignal signal){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","toSignal2",0xbcacb1da,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.toSignal2","flixel/util/FlxSignal.hx",64,0x3c758c5e)
	HX_STACK_ARG(signal,"signal")
	HX_STACK_LINE(64)
	return ::flixel::util::_FlxSignal::FlxSignal2_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSignal_Impl__obj,toSignal2,return )

::flixel::util::_FlxSignal::FlxSignal3 FlxTypedSignal_Impl__obj::toSignal3( ::flixel::interfaces::IFlxSignal signal){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","toSignal3",0xbcacb1db,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.toSignal3","flixel/util/FlxSignal.hx",70,0x3c758c5e)
	HX_STACK_ARG(signal,"signal")
	HX_STACK_LINE(70)
	return ::flixel::util::_FlxSignal::FlxSignal3_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSignal_Impl__obj,toSignal3,return )

::flixel::util::_FlxSignal::FlxSignal4 FlxTypedSignal_Impl__obj::toSignal4( ::flixel::interfaces::IFlxSignal signal){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","toSignal4",0xbcacb1dc,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.toSignal4","flixel/util/FlxSignal.hx",76,0x3c758c5e)
	HX_STACK_ARG(signal,"signal")
	HX_STACK_LINE(76)
	return ::flixel::util::_FlxSignal::FlxSignal4_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSignal_Impl__obj,toSignal4,return )


FlxTypedSignal_Impl__obj::FlxTypedSignal_Impl__obj()
{
}

Dynamic FlxTypedSignal_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addOnce") ) { return addOnce_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"toSignal0") ) { return toSignal0_dyn(); }
		if (HX_FIELD_EQ(inName,"toSignal1") ) { return toSignal1_dyn(); }
		if (HX_FIELD_EQ(inName,"toSignal2") ) { return toSignal2_dyn(); }
		if (HX_FIELD_EQ(inName,"toSignal3") ) { return toSignal3_dyn(); }
		if (HX_FIELD_EQ(inName,"toSignal4") ) { return toSignal4_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_dispatch") ) { return get_dispatch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedSignal_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { _new=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedSignal_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_new"),
	HX_CSTRING("add"),
	HX_CSTRING("addOnce"),
	HX_CSTRING("remove"),
	HX_CSTRING("has"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("get_dispatch"),
	HX_CSTRING("toSignal0"),
	HX_CSTRING("toSignal1"),
	HX_CSTRING("toSignal2"),
	HX_CSTRING("toSignal3"),
	HX_CSTRING("toSignal4"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedSignal_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTypedSignal_Impl__obj::_new,"_new");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedSignal_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTypedSignal_Impl__obj::_new,"_new");
};

#endif

Class FlxTypedSignal_Impl__obj::__mClass;

void FlxTypedSignal_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util._FlxSignal.FlxTypedSignal_Impl_"), hx::TCanCast< FlxTypedSignal_Impl__obj> ,sStaticFields,sMemberFields,
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

void FlxTypedSignal_Impl__obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal
