#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
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

Void FlxSignal2_obj::__construct()
{
HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignal2","new",0xab2cb8e3,"flixel.util._FlxSignal.FlxSignal2.new","flixel/util/FlxSignal.hx",239,0x3c758c5e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(240)
	super::__construct();
	HX_STACK_LINE(241)
	this->dispatch = this->dispatch2_dyn();
}
;
	return null();
}

//FlxSignal2_obj::~FlxSignal2_obj() { }

Dynamic FlxSignal2_obj::__CreateEmpty() { return  new FlxSignal2_obj; }
hx::ObjectPtr< FlxSignal2_obj > FlxSignal2_obj::__new()
{  hx::ObjectPtr< FlxSignal2_obj > result = new FlxSignal2_obj();
	result->__construct();
	return result;}

Dynamic FlxSignal2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSignal2_obj > result = new FlxSignal2_obj();
	result->__construct();
	return result;}

Void FlxSignal2_obj::dispatch2( Dynamic value1,Dynamic value2){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignal2","dispatch2",0x90e3c0fb,"flixel.util._FlxSignal.FlxSignal2.dispatch2","flixel/util/FlxSignal.hx",103,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
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
			handler->listener(value1,value2);
			HX_STACK_LINE(107)
			if ((handler->dispatchOnce)){
				HX_STACK_LINE(108)
				this->remove(handler->listener);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSignal2_obj,dispatch2,(void))


FlxSignal2_obj::FlxSignal2_obj()
{
}

Dynamic FlxSignal2_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"dispatch2") ) { return dispatch2_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSignal2_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSignal2_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("dispatch2"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSignal2_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSignal2_obj::__mClass,"__mClass");
};

#endif

Class FlxSignal2_obj::__mClass;

void FlxSignal2_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util._FlxSignal.FlxSignal2"), hx::TCanCast< FlxSignal2_obj> ,sStaticFields,sMemberFields,
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

void FlxSignal2_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal
