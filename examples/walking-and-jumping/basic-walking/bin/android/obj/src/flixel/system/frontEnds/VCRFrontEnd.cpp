#include <hxcpp.h>

#ifndef INCLUDED_flash_ui_Mouse
#include <flash/ui/Mouse.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void VCRFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.VCRFrontEnd","new",0x9592d9ef,"flixel.system.frontEnds.VCRFrontEnd.new","flixel/system/frontEnds/VCRFrontEnd.hx",16,0xa1666a42)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(50)
	this->stepRequested = false;
	HX_STACK_LINE(46)
	this->paused = false;
}
;
	return null();
}

//VCRFrontEnd_obj::~VCRFrontEnd_obj() { }

Dynamic VCRFrontEnd_obj::__CreateEmpty() { return  new VCRFrontEnd_obj; }
hx::ObjectPtr< VCRFrontEnd_obj > VCRFrontEnd_obj::__new()
{  hx::ObjectPtr< VCRFrontEnd_obj > result = new VCRFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic VCRFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VCRFrontEnd_obj > result = new VCRFrontEnd_obj();
	result->__construct();
	return result;}

Void VCRFrontEnd_obj::pause( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.VCRFrontEnd","pause",0x6797a245,"flixel.system.frontEnds.VCRFrontEnd.pause","flixel/system/frontEnds/VCRFrontEnd.hx",57,0xa1666a42)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		if ((!(this->paused))){
			HX_STACK_LINE(60)
			if ((!(::flixel::FlxG_obj::mouse->useSystemCursor))){
				HX_STACK_LINE(61)
				::flash::ui::Mouse_obj::show();
			}
			HX_STACK_LINE(64)
			this->paused = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCRFrontEnd_obj,pause,(void))

Void VCRFrontEnd_obj::resume( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.VCRFrontEnd","resume",0x5616837e,"flixel.system.frontEnds.VCRFrontEnd.resume","flixel/system/frontEnds/VCRFrontEnd.hx",77,0xa1666a42)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		if ((this->paused)){
			HX_STACK_LINE(80)
			if ((!(::flixel::FlxG_obj::mouse->useSystemCursor))){
				HX_STACK_LINE(81)
				::flash::ui::Mouse_obj::hide();
			}
			HX_STACK_LINE(84)
			this->paused = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCRFrontEnd_obj,resume,(void))


VCRFrontEnd_obj::VCRFrontEnd_obj()
{
}

Dynamic VCRFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stepRequested") ) { return stepRequested; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VCRFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stepRequested") ) { stepRequested=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VCRFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("paused"));
	outFields->push(HX_CSTRING("stepRequested"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(VCRFrontEnd_obj,paused),HX_CSTRING("paused")},
	{hx::fsBool,(int)offsetof(VCRFrontEnd_obj,stepRequested),HX_CSTRING("stepRequested")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("paused"),
	HX_CSTRING("stepRequested"),
	HX_CSTRING("pause"),
	HX_CSTRING("resume"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VCRFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VCRFrontEnd_obj::__mClass,"__mClass");
};

#endif

Class VCRFrontEnd_obj::__mClass;

void VCRFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.VCRFrontEnd"), hx::TCanCast< VCRFrontEnd_obj> ,sStaticFields,sMemberFields,
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

void VCRFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
