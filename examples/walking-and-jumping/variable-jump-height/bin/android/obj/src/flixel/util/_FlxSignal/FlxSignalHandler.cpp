#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalHandler
#include <flixel/util/_FlxSignal/FlxSignalHandler.h>
#endif
namespace flixel{
namespace util{
namespace _FlxSignal{

Void FlxSignalHandler_obj::__construct(Dynamic listener,bool dispatchOnce)
{
HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignalHandler","new",0x24d8c59b,"flixel.util._FlxSignal.FlxSignalHandler.new","flixel/util/FlxSignal.hx",80,0x3c758c5e)
HX_STACK_THIS(this)
HX_STACK_ARG(listener,"listener")
HX_STACK_ARG(dispatchOnce,"dispatchOnce")
{
	HX_STACK_LINE(83)
	this->dispatchOnce = false;
	HX_STACK_LINE(87)
	this->listener = listener;
	HX_STACK_LINE(88)
	this->dispatchOnce = dispatchOnce;
}
;
	return null();
}

//FlxSignalHandler_obj::~FlxSignalHandler_obj() { }

Dynamic FlxSignalHandler_obj::__CreateEmpty() { return  new FlxSignalHandler_obj; }
hx::ObjectPtr< FlxSignalHandler_obj > FlxSignalHandler_obj::__new(Dynamic listener,bool dispatchOnce)
{  hx::ObjectPtr< FlxSignalHandler_obj > result = new FlxSignalHandler_obj();
	result->__construct(listener,dispatchOnce);
	return result;}

Dynamic FlxSignalHandler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSignalHandler_obj > result = new FlxSignalHandler_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *FlxSignalHandler_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void FlxSignalHandler_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignalHandler","destroy",0xffcddbb5,"flixel.util._FlxSignal.FlxSignalHandler.destroy","flixel/util/FlxSignal.hx",93,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		this->listener = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSignalHandler_obj,destroy,(void))


FlxSignalHandler_obj::FlxSignalHandler_obj()
{
}

void FlxSignalHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSignalHandler);
	HX_MARK_MEMBER_NAME(listener,"listener");
	HX_MARK_MEMBER_NAME(dispatchOnce,"dispatchOnce");
	HX_MARK_END_CLASS();
}

void FlxSignalHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(listener,"listener");
	HX_VISIT_MEMBER_NAME(dispatchOnce,"dispatchOnce");
}

Dynamic FlxSignalHandler_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { return listener; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dispatchOnce") ) { return dispatchOnce; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSignalHandler_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { listener=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dispatchOnce") ) { dispatchOnce=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSignalHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("listener"));
	outFields->push(HX_CSTRING("dispatchOnce"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxSignalHandler_obj,listener),HX_CSTRING("listener")},
	{hx::fsBool,(int)offsetof(FlxSignalHandler_obj,dispatchOnce),HX_CSTRING("dispatchOnce")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("listener"),
	HX_CSTRING("dispatchOnce"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSignalHandler_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSignalHandler_obj::__mClass,"__mClass");
};

#endif

Class FlxSignalHandler_obj::__mClass;

void FlxSignalHandler_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util._FlxSignal.FlxSignalHandler"), hx::TCanCast< FlxSignalHandler_obj> ,sStaticFields,sMemberFields,
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

void FlxSignalHandler_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal
