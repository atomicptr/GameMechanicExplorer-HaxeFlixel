#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal3
#include <flixel/util/_FlxSignal/FlxSignal3.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalHandler
#include <flixel/util/_FlxSignal/FlxSignalHandler.h>
#endif
namespace flixel{
namespace util{
namespace _FlxSignal{

Void FlxSignal3_obj::__construct()
{
HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignal3","new",0x3e934d64,"flixel.util._FlxSignal.FlxSignal3.new","flixel/util/FlxSignal.hx",253,0x3c758c5e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(254)
	super::__construct();
	HX_STACK_LINE(255)
	this->dispatch = this->dispatch3_dyn();
}
;
	return null();
}

//FlxSignal3_obj::~FlxSignal3_obj() { }

Dynamic FlxSignal3_obj::__CreateEmpty() { return  new FlxSignal3_obj; }
hx::ObjectPtr< FlxSignal3_obj > FlxSignal3_obj::__new()
{  hx::ObjectPtr< FlxSignal3_obj > result = new FlxSignal3_obj();
	result->__construct();
	return result;}

Dynamic FlxSignal3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSignal3_obj > result = new FlxSignal3_obj();
	result->__construct();
	return result;}

Void FlxSignal3_obj::dispatch3( Dynamic value1,Dynamic value2,Dynamic value3){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignal3","dispatch3",0x11c22c3d,"flixel.util._FlxSignal.FlxSignal3.dispatch3","flixel/util/FlxSignal.hx",103,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(103)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(103)
		Array< ::Dynamic > _g1 = this->_handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(103)
		while((true)){
			HX_STACK_LINE(103)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(103)
				break;
			}
			HX_STACK_LINE(103)
			::flixel::util::_FlxSignal::FlxSignalHandler handler = _g1->__get(_g).StaticCast< ::flixel::util::_FlxSignal::FlxSignalHandler >();		HX_STACK_VAR(handler,"handler");
			HX_STACK_LINE(103)
			++(_g);
			HX_STACK_LINE(105)
			handler->listener(value1,value2,value3);
			HX_STACK_LINE(107)
			if ((handler->dispatchOnce)){
				HX_STACK_LINE(108)
				this->remove(handler->listener);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSignal3_obj,dispatch3,(void))


FlxSignal3_obj::FlxSignal3_obj()
{
}

Dynamic FlxSignal3_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"dispatch3") ) { return dispatch3_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSignal3_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSignal3_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("dispatch3"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSignal3_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSignal3_obj::__mClass,"__mClass");
};

#endif

Class FlxSignal3_obj::__mClass;

void FlxSignal3_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util._FlxSignal.FlxSignal3"), hx::TCanCast< FlxSignal3_obj> ,sStaticFields,sMemberFields,
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

void FlxSignal3_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal
