#include <hxcpp.h>

#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_ui_Mouse
#include <flash/ui/Mouse.h>
#endif
namespace flash{
namespace ui{

Void Mouse_obj::__construct()
{
	return null();
}

//Mouse_obj::~Mouse_obj() { }

Dynamic Mouse_obj::__CreateEmpty() { return  new Mouse_obj; }
hx::ObjectPtr< Mouse_obj > Mouse_obj::__new()
{  hx::ObjectPtr< Mouse_obj > result = new Mouse_obj();
	result->__construct();
	return result;}

Dynamic Mouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mouse_obj > result = new Mouse_obj();
	result->__construct();
	return result;}

Void Mouse_obj::hide( ){
{
		HX_STACK_FRAME("flash.ui.Mouse","hide",0xa303c867,"flash.ui.Mouse.hide","flash/ui/Mouse.hx",10,0x813e2215)
		HX_STACK_LINE(12)
		::flash::display::Stage _g = ::flash::Lib_obj::get_stage();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(12)
		if (((_g != null()))){
			HX_STACK_LINE(14)
			::flash::Lib_obj::get_stage()->showCursor(false);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,hide,(void))

Void Mouse_obj::show( ){
{
		HX_STACK_FRAME("flash.ui.Mouse","show",0xaa4868a2,"flash.ui.Mouse.show","flash/ui/Mouse.hx",21,0x813e2215)
		HX_STACK_LINE(23)
		::flash::display::Stage _g = ::flash::Lib_obj::get_stage();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(23)
		if (((_g != null()))){
			HX_STACK_LINE(25)
			::flash::Lib_obj::get_stage()->showCursor(true);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,show,(void))


Mouse_obj::Mouse_obj()
{
}

Dynamic Mouse_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mouse_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Mouse_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hide"),
	HX_CSTRING("show"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
};

#endif

Class Mouse_obj::__mClass;

void Mouse_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.ui.Mouse"), hx::TCanCast< Mouse_obj> ,sStaticFields,sMemberFields,
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

void Mouse_obj::__boot()
{
}

} // end namespace flash
} // end namespace ui
