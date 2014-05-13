#include <hxcpp.h>

#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
namespace flixel{
namespace util{

Void FlxDestroyUtil_obj::__construct()
{
	return null();
}

//FlxDestroyUtil_obj::~FlxDestroyUtil_obj() { }

Dynamic FlxDestroyUtil_obj::__CreateEmpty() { return  new FlxDestroyUtil_obj; }
hx::ObjectPtr< FlxDestroyUtil_obj > FlxDestroyUtil_obj::__new()
{  hx::ObjectPtr< FlxDestroyUtil_obj > result = new FlxDestroyUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxDestroyUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxDestroyUtil_obj > result = new FlxDestroyUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxDestroyUtil_obj::destroy( ::flixel::interfaces::IFlxDestroyable object){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","destroy",0xd7e4dd50,"flixel.util.FlxDestroyUtil.destroy","flixel/util/FlxDestroyUtil.hx",16,0xaf22421a)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(17)
	if (((object != null()))){
		HX_STACK_LINE(18)
		object->destroy();
	}
	HX_STACK_LINE(19)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,destroy,return )

Dynamic FlxDestroyUtil_obj::destroyArray( Dynamic array){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","destroyArray",0xa1a3be29,"flixel.util.FlxDestroyUtil.destroyArray","flixel/util/FlxDestroyUtil.hx",31,0xaf22421a)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(32)
	if (((array != null()))){
		HX_STACK_LINE(34)
		while((true)){
			HX_STACK_LINE(34)
			if ((!(((array->__Field(HX_CSTRING("length"),true) > (int)0))))){
				HX_STACK_LINE(34)
				break;
			}
			HX_STACK_LINE(36)
			Dynamic _g = array->__Field(HX_CSTRING("pop"),true)();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(36)
			::flixel::util::FlxDestroyUtil_obj::destroy(_g);
		}
	}
	HX_STACK_LINE(39)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,destroyArray,return )

Dynamic FlxDestroyUtil_obj::put( ::flixel::interfaces::IFlxPooled object){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","put",0xdd93b025,"flixel.util.FlxDestroyUtil.put","flixel/util/FlxDestroyUtil.hx",49,0xaf22421a)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(50)
	if (((object != null()))){
		HX_STACK_LINE(51)
		object->put();
	}
	HX_STACK_LINE(52)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,put,return )

Dynamic FlxDestroyUtil_obj::putArray( Dynamic array){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","putArray",0x60ff8734,"flixel.util.FlxDestroyUtil.putArray","flixel/util/FlxDestroyUtil.hx",63,0xaf22421a)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(64)
	if (((array != null()))){
		HX_STACK_LINE(66)
		while((true)){
			HX_STACK_LINE(66)
			if ((!(((array->__Field(HX_CSTRING("length"),true) > (int)0))))){
				HX_STACK_LINE(66)
				break;
			}
			HX_STACK_LINE(68)
			Dynamic _g = array->__Field(HX_CSTRING("pop"),true)();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(68)
			::flixel::util::FlxDestroyUtil_obj::put(_g);
		}
	}
	HX_STACK_LINE(71)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,putArray,return )

::flash::display::BitmapData FlxDestroyUtil_obj::dispose( ::flash::display::BitmapData Bitmap){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","dispose",0x6eab30f5,"flixel.util.FlxDestroyUtil.dispose","flixel/util/FlxDestroyUtil.hx",81,0xaf22421a)
	HX_STACK_ARG(Bitmap,"Bitmap")
	HX_STACK_LINE(82)
	if (((Bitmap != null()))){
		HX_STACK_LINE(83)
		Bitmap->dispose();
	}
	HX_STACK_LINE(84)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,dispose,return )


FlxDestroyUtil_obj::FlxDestroyUtil_obj()
{
}

Dynamic FlxDestroyUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"putArray") ) { return putArray_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"destroyArray") ) { return destroyArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxDestroyUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxDestroyUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("destroyArray"),
	HX_CSTRING("put"),
	HX_CSTRING("putArray"),
	HX_CSTRING("dispose"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDestroyUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDestroyUtil_obj::__mClass,"__mClass");
};

#endif

Class FlxDestroyUtil_obj::__mClass;

void FlxDestroyUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxDestroyUtil"), hx::TCanCast< FlxDestroyUtil_obj> ,sStaticFields,sMemberFields,
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

void FlxDestroyUtil_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
