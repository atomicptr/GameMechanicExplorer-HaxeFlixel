#include <hxcpp.h>

#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_system_debug_ButtonAlignment
#include <flixel/system/debug/ButtonAlignment.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerLayout
#include <flixel/system/debug/DebuggerLayout.h>
#endif
#ifndef INCLUDED_flixel_system_debug_TrackerProfile
#include <flixel/system/debug/TrackerProfile.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void DebuggerFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","new",0x8bc76b9f,"flixel.system.frontEnds.DebuggerFrontEnd.new","flixel/system/frontEnds/DebuggerFrontEnd.hx",13,0x2ebb4b30)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(37)
	this->visible = false;
	HX_STACK_LINE(31)
	this->drawDebug = false;
	HX_STACK_LINE(18)
	this->precision = (int)3;
	HX_STACK_LINE(141)
	this->toggleKeys = Array_obj< ::String >::__new().Add(HX_CSTRING("GRAVEACCENT")).Add(HX_CSTRING("BACKSLASH"));
	HX_STACK_LINE(143)
	::flixel::util::_FlxSignal::FlxSignal0 _g = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(143)
	this->drawDebugChanged = _g;
}
;
	return null();
}

//DebuggerFrontEnd_obj::~DebuggerFrontEnd_obj() { }

Dynamic DebuggerFrontEnd_obj::__CreateEmpty() { return  new DebuggerFrontEnd_obj; }
hx::ObjectPtr< DebuggerFrontEnd_obj > DebuggerFrontEnd_obj::__new()
{  hx::ObjectPtr< DebuggerFrontEnd_obj > result = new DebuggerFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic DebuggerFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DebuggerFrontEnd_obj > result = new DebuggerFrontEnd_obj();
	result->__construct();
	return result;}

Void DebuggerFrontEnd_obj::setLayout( ::flixel::system::debug::DebuggerLayout Layout){
{
		HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","setLayout",0x96c2386b,"flixel.system.frontEnds.DebuggerFrontEnd.setLayout","flixel/system/frontEnds/DebuggerFrontEnd.hx",45,0x2ebb4b30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Layout,"Layout")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,setLayout,(void))

Void DebuggerFrontEnd_obj::resetLayout( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","resetLayout",0xc33ca418,"flixel.system.frontEnds.DebuggerFrontEnd.resetLayout","flixel/system/frontEnds/DebuggerFrontEnd.hx",55,0x2ebb4b30)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DebuggerFrontEnd_obj,resetLayout,(void))

::flixel::system::ui::FlxSystemButton DebuggerFrontEnd_obj::addButton( ::flixel::system::debug::ButtonAlignment Alignment,::flash::display::BitmapData Icon,Dynamic UpHandler,hx::Null< bool >  __o_ToggleMode,hx::Null< bool >  __o_UpdateLayout){
bool ToggleMode = __o_ToggleMode.Default(false);
bool UpdateLayout = __o_UpdateLayout.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","addButton",0x7066ab72,"flixel.system.frontEnds.DebuggerFrontEnd.addButton","flixel/system/frontEnds/DebuggerFrontEnd.hx",76,0x2ebb4b30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alignment,"Alignment")
	HX_STACK_ARG(Icon,"Icon")
	HX_STACK_ARG(UpHandler,"UpHandler")
	HX_STACK_ARG(ToggleMode,"ToggleMode")
	HX_STACK_ARG(UpdateLayout,"UpdateLayout")
{
		HX_STACK_LINE(76)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC5(DebuggerFrontEnd_obj,addButton,return )

::flixel::system::debug::Window DebuggerFrontEnd_obj::track( Dynamic Object,::String WindowTitle){
	HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","track",0x1a1fb78a,"flixel.system.frontEnds.DebuggerFrontEnd.track","flixel/system/frontEnds/DebuggerFrontEnd.hx",108,0x2ebb4b30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(WindowTitle,"WindowTitle")
	HX_STACK_LINE(108)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerFrontEnd_obj,track,return )

Void DebuggerFrontEnd_obj::addTrackerProfile( ::flixel::system::debug::TrackerProfile Profile){
{
		HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","addTrackerProfile",0xb36941d1,"flixel.system.frontEnds.DebuggerFrontEnd.addTrackerProfile","flixel/system/frontEnds/DebuggerFrontEnd.hx",118,0x2ebb4b30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Profile,"Profile")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,addTrackerProfile,(void))

Void DebuggerFrontEnd_obj::removeButton( ::flixel::system::ui::FlxSystemButton Button,hx::Null< bool >  __o_UpdateLayout){
bool UpdateLayout = __o_UpdateLayout.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","removeButton",0xa0228237,"flixel.system.frontEnds.DebuggerFrontEnd.removeButton","flixel/system/frontEnds/DebuggerFrontEnd.hx",131,0x2ebb4b30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Button,"Button")
	HX_STACK_ARG(UpdateLayout,"UpdateLayout")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerFrontEnd_obj,removeButton,(void))

bool DebuggerFrontEnd_obj::set_drawDebug( bool Value){
	HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","set_drawDebug",0x8073fd91,"flixel.system.frontEnds.DebuggerFrontEnd.set_drawDebug","flixel/system/frontEnds/DebuggerFrontEnd.hx",153,0x2ebb4b30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(153)
	return this->drawDebug = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,set_drawDebug,return )

bool DebuggerFrontEnd_obj::set_visible( bool Value){
	HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","set_visible",0xfdfb51d4,"flixel.system.frontEnds.DebuggerFrontEnd.set_visible","flixel/system/frontEnds/DebuggerFrontEnd.hx",162,0x2ebb4b30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(162)
	return this->visible = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,set_visible,return )


DebuggerFrontEnd_obj::DebuggerFrontEnd_obj()
{
}

void DebuggerFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DebuggerFrontEnd);
	HX_MARK_MEMBER_NAME(precision,"precision");
	HX_MARK_MEMBER_NAME(toggleKeys,"toggleKeys");
	HX_MARK_MEMBER_NAME(drawDebug,"drawDebug");
	HX_MARK_MEMBER_NAME(drawDebugChanged,"drawDebugChanged");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_END_CLASS();
}

void DebuggerFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(precision,"precision");
	HX_VISIT_MEMBER_NAME(toggleKeys,"toggleKeys");
	HX_VISIT_MEMBER_NAME(drawDebug,"drawDebug");
	HX_VISIT_MEMBER_NAME(drawDebugChanged,"drawDebugChanged");
	HX_VISIT_MEMBER_NAME(visible,"visible");
}

Dynamic DebuggerFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"track") ) { return track_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"precision") ) { return precision; }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return drawDebug; }
		if (HX_FIELD_EQ(inName,"setLayout") ) { return setLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"addButton") ) { return addButton_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleKeys") ) { return toggleKeys; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resetLayout") ) { return resetLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeButton") ) { return removeButton_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_drawDebug") ) { return set_drawDebug_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawDebugChanged") ) { return drawDebugChanged; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"addTrackerProfile") ) { return addTrackerProfile_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DebuggerFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"precision") ) { precision=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { if (inCallProp) return set_drawDebug(inValue);drawDebug=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleKeys") ) { toggleKeys=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawDebugChanged") ) { drawDebugChanged=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DebuggerFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("precision"));
	outFields->push(HX_CSTRING("toggleKeys"));
	outFields->push(HX_CSTRING("drawDebug"));
	outFields->push(HX_CSTRING("drawDebugChanged"));
	outFields->push(HX_CSTRING("visible"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DebuggerFrontEnd_obj,precision),HX_CSTRING("precision")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(DebuggerFrontEnd_obj,toggleKeys),HX_CSTRING("toggleKeys")},
	{hx::fsBool,(int)offsetof(DebuggerFrontEnd_obj,drawDebug),HX_CSTRING("drawDebug")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(DebuggerFrontEnd_obj,drawDebugChanged),HX_CSTRING("drawDebugChanged")},
	{hx::fsBool,(int)offsetof(DebuggerFrontEnd_obj,visible),HX_CSTRING("visible")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("precision"),
	HX_CSTRING("toggleKeys"),
	HX_CSTRING("drawDebug"),
	HX_CSTRING("drawDebugChanged"),
	HX_CSTRING("visible"),
	HX_CSTRING("setLayout"),
	HX_CSTRING("resetLayout"),
	HX_CSTRING("addButton"),
	HX_CSTRING("track"),
	HX_CSTRING("addTrackerProfile"),
	HX_CSTRING("removeButton"),
	HX_CSTRING("set_drawDebug"),
	HX_CSTRING("set_visible"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DebuggerFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DebuggerFrontEnd_obj::__mClass,"__mClass");
};

#endif

Class DebuggerFrontEnd_obj::__mClass;

void DebuggerFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.DebuggerFrontEnd"), hx::TCanCast< DebuggerFrontEnd_obj> ,sStaticFields,sMemberFields,
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

void DebuggerFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
