#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_RatioScaleMode
#include <flixel/system/scaleModes/RatioScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace system{
namespace scaleModes{

Void RatioScaleMode_obj::__construct()
{
HX_STACK_FRAME("flixel.system.scaleModes.RatioScaleMode","new",0x00d4d0cf,"flixel.system.scaleModes.RatioScaleMode.new","flixel/system/scaleModes/RatioScaleMode.hx",5,0x35e4ce80)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
}
;
	return null();
}

//RatioScaleMode_obj::~RatioScaleMode_obj() { }

Dynamic RatioScaleMode_obj::__CreateEmpty() { return  new RatioScaleMode_obj; }
hx::ObjectPtr< RatioScaleMode_obj > RatioScaleMode_obj::__new()
{  hx::ObjectPtr< RatioScaleMode_obj > result = new RatioScaleMode_obj();
	result->__construct();
	return result;}

Dynamic RatioScaleMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RatioScaleMode_obj > result = new RatioScaleMode_obj();
	result->__construct();
	return result;}

Void RatioScaleMode_obj::updateGameSize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.system.scaleModes.RatioScaleMode","updateGameSize",0xacc31ced,"flixel.system.scaleModes.RatioScaleMode.updateGameSize","flixel/system/scaleModes/RatioScaleMode.hx",8,0x35e4ce80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(9)
		Float ratio = (Float(::flixel::FlxG_obj::width) / Float(::flixel::FlxG_obj::height));		HX_STACK_VAR(ratio,"ratio");
		HX_STACK_LINE(10)
		Float realRatio = (Float(Width) / Float(Height));		HX_STACK_VAR(realRatio,"realRatio");
		HX_STACK_LINE(12)
		if (((realRatio < ratio))){
			HX_STACK_LINE(14)
			this->gameSize->set_x(Width);
			HX_STACK_LINE(15)
			int _g = ::Math_obj::floor((Float(this->gameSize->x) / Float(ratio)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(15)
			this->gameSize->set_y(_g);
		}
		else{
			HX_STACK_LINE(19)
			this->gameSize->set_y(Height);
			HX_STACK_LINE(20)
			int _g1 = ::Math_obj::floor((this->gameSize->y * ratio));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(20)
			this->gameSize->set_x(_g1);
		}
	}
return null();
}



RatioScaleMode_obj::RatioScaleMode_obj()
{
}

Dynamic RatioScaleMode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"updateGameSize") ) { return updateGameSize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RatioScaleMode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void RatioScaleMode_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("updateGameSize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RatioScaleMode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RatioScaleMode_obj::__mClass,"__mClass");
};

#endif

Class RatioScaleMode_obj::__mClass;

void RatioScaleMode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.scaleModes.RatioScaleMode"), hx::TCanCast< RatioScaleMode_obj> ,sStaticFields,sMemberFields,
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

void RatioScaleMode_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace scaleModes
