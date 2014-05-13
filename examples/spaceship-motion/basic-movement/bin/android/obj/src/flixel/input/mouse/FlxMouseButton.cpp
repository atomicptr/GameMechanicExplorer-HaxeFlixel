#include <hxcpp.h>

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
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
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
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
namespace flixel{
namespace input{
namespace mouse{

Void FlxMouseButton_obj::__construct(int ID)
{
HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","new",0xa21f5d96,"flixel.input.mouse.FlxMouseButton.new","flixel/input/mouse/FlxMouseButton.hx",11,0x7fcdf6f7)
HX_STACK_THIS(this)
HX_STACK_ARG(ID,"ID")
{
	HX_STACK_LINE(27)
	this->last = (int)0;
	HX_STACK_LINE(26)
	this->current = (int)0;
	HX_STACK_LINE(36)
	this->_ID = ID;
	HX_STACK_LINE(37)
	::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(37)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(37)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(37)
		point->_inPool = false;
		HX_STACK_LINE(37)
		_g = point;
	}
	HX_STACK_LINE(37)
	this->_justPressedPosition = _g;
}
;
	return null();
}

//FlxMouseButton_obj::~FlxMouseButton_obj() { }

Dynamic FlxMouseButton_obj::__CreateEmpty() { return  new FlxMouseButton_obj; }
hx::ObjectPtr< FlxMouseButton_obj > FlxMouseButton_obj::__new(int ID)
{  hx::ObjectPtr< FlxMouseButton_obj > result = new FlxMouseButton_obj();
	result->__construct(ID);
	return result;}

Dynamic FlxMouseButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMouseButton_obj > result = new FlxMouseButton_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *FlxMouseButton_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void FlxMouseButton_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","update",0x2ce19e93,"flixel.input.mouse.FlxMouseButton.update","flixel/input/mouse/FlxMouseButton.hx",44,0x7fcdf6f7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		if (((bool((this->last == (int)-1)) && bool((this->current == (int)-1))))){
			HX_STACK_LINE(47)
			this->current = (int)0;
		}
		else{
			HX_STACK_LINE(49)
			if (((bool((this->last == (int)2)) && bool((this->current == (int)2))))){
				HX_STACK_LINE(51)
				this->current = (int)1;
			}
			else{
				HX_STACK_LINE(53)
				if (((bool((this->last == (int)-2)) && bool((this->current == (int)-2))))){
					HX_STACK_LINE(55)
					this->current = (int)0;
				}
			}
		}
		HX_STACK_LINE(58)
		this->last = this->current;
		HX_STACK_LINE(60)
		if (((bool((this->current == (int)2)) || bool((this->current == (int)-2))))){
			HX_STACK_LINE(62)
			this->_justPressedPosition->set(::flixel::FlxG_obj::mouse->screenX,::flixel::FlxG_obj::mouse->screenY);
			HX_STACK_LINE(63)
			this->_justPressedTimeInTicks = ::flixel::FlxG_obj::game->ticks;
		}
		else{
			HX_STACK_LINE(65)
			if (((bool((this->current == (int)-1)) || bool((this->current == (int)-2))))){
				HX_STACK_LINE(67)
				::flixel::util::FlxPoint _g = ::flixel::FlxG_obj::mouse->getScreenPosition(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(67)
				::flixel::input::FlxSwipe _g1 = ::flixel::input::FlxSwipe_obj::__new(this->_ID,this->_justPressedPosition,_g,this->_justPressedTimeInTicks);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(67)
				::flixel::FlxG_obj::swipes->push(_g1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseButton_obj,update,(void))

Void FlxMouseButton_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","destroy",0x9f3f8d30,"flixel.input.mouse.FlxMouseButton.destroy","flixel/input/mouse/FlxMouseButton.hx",72,0x7fcdf6f7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		::flixel::util::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->_justPressedPosition);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		this->_justPressedPosition = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseButton_obj,destroy,(void))

Void FlxMouseButton_obj::onDown( ::flash::events::MouseEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","onDown",0x8ad419ab,"flixel.input.mouse.FlxMouseButton.onDown","flixel/input/mouse/FlxMouseButton.hx",116,0x7fcdf6f7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(116)
		if (((this->current > (int)0))){
			HX_STACK_LINE(118)
			this->current = (int)1;
		}
		else{
			HX_STACK_LINE(122)
			this->current = (int)2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseButton_obj,onDown,(void))

Void FlxMouseButton_obj::onUp( ::flash::events::MouseEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","onUp",0x3a027364,"flixel.input.mouse.FlxMouseButton.onUp","flixel/input/mouse/FlxMouseButton.hx",140,0x7fcdf6f7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(140)
		if (((this->current == (int)2))){
			HX_STACK_LINE(142)
			this->current = (int)-2;
		}
		else{
			HX_STACK_LINE(144)
			if (((this->current > (int)0))){
				HX_STACK_LINE(146)
				this->current = (int)-1;
			}
			else{
				HX_STACK_LINE(150)
				this->current = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseButton_obj,onUp,(void))

Void FlxMouseButton_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","reset",0x3c7a1085,"flixel.input.mouse.FlxMouseButton.reset","flixel/input/mouse/FlxMouseButton.hx",158,0x7fcdf6f7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(159)
		this->current = (int)0;
		HX_STACK_LINE(160)
		this->last = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseButton_obj,reset,(void))

bool FlxMouseButton_obj::pressed( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","pressed",0xb4a032d8,"flixel.input.mouse.FlxMouseButton.pressed","flixel/input/mouse/FlxMouseButton.hx",167,0x7fcdf6f7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(167)
	return (this->current > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseButton_obj,pressed,return )

bool FlxMouseButton_obj::justPressed( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","justPressed",0x4d33c10c,"flixel.input.mouse.FlxMouseButton.justPressed","flixel/input/mouse/FlxMouseButton.hx",173,0x7fcdf6f7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(173)
	return (bool((this->current == (int)2)) || bool((this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseButton_obj,justPressed,return )

bool FlxMouseButton_obj::justReleased( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","justReleased",0x46eb3713,"flixel.input.mouse.FlxMouseButton.justReleased","flixel/input/mouse/FlxMouseButton.hx",179,0x7fcdf6f7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(179)
	return (bool((this->current == (int)-1)) || bool((this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseButton_obj,justReleased,return )

int FlxMouseButton_obj::LEFT;

int FlxMouseButton_obj::MIDDLE;

int FlxMouseButton_obj::RIGHT;

int FlxMouseButton_obj::FAST_PRESS_RELEASE;

int FlxMouseButton_obj::JUST_RELEASED;

int FlxMouseButton_obj::RELEASED;

int FlxMouseButton_obj::PRESSED;

int FlxMouseButton_obj::JUST_PRESSED;


FlxMouseButton_obj::FlxMouseButton_obj()
{
}

void FlxMouseButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMouseButton);
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(_ID,"_ID");
	HX_MARK_MEMBER_NAME(_justPressedPosition,"_justPressedPosition");
	HX_MARK_MEMBER_NAME(_justPressedTimeInTicks,"_justPressedTimeInTicks");
	HX_MARK_END_CLASS();
}

void FlxMouseButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(_ID,"_ID");
	HX_VISIT_MEMBER_NAME(_justPressedPosition,"_justPressedPosition");
	HX_VISIT_MEMBER_NAME(_justPressedTimeInTicks,"_justPressedTimeInTicks");
}

Dynamic FlxMouseButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ID") ) { return _ID; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		if (HX_FIELD_EQ(inName,"onUp") ) { return onUp_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"onDown") ) { return onDown_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_justPressedPosition") ) { return _justPressedPosition; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_justPressedTimeInTicks") ) { return _justPressedTimeInTicks; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMouseButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ID") ) { _ID=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_justPressedPosition") ) { _justPressedPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_justPressedTimeInTicks") ) { _justPressedTimeInTicks=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMouseButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("current"));
	outFields->push(HX_CSTRING("last"));
	outFields->push(HX_CSTRING("_ID"));
	outFields->push(HX_CSTRING("_justPressedPosition"));
	outFields->push(HX_CSTRING("_justPressedTimeInTicks"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LEFT"),
	HX_CSTRING("MIDDLE"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("FAST_PRESS_RELEASE"),
	HX_CSTRING("JUST_RELEASED"),
	HX_CSTRING("RELEASED"),
	HX_CSTRING("PRESSED"),
	HX_CSTRING("JUST_PRESSED"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxMouseButton_obj,current),HX_CSTRING("current")},
	{hx::fsInt,(int)offsetof(FlxMouseButton_obj,last),HX_CSTRING("last")},
	{hx::fsInt,(int)offsetof(FlxMouseButton_obj,_ID),HX_CSTRING("_ID")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxMouseButton_obj,_justPressedPosition),HX_CSTRING("_justPressedPosition")},
	{hx::fsFloat,(int)offsetof(FlxMouseButton_obj,_justPressedTimeInTicks),HX_CSTRING("_justPressedTimeInTicks")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("current"),
	HX_CSTRING("last"),
	HX_CSTRING("_ID"),
	HX_CSTRING("_justPressedPosition"),
	HX_CSTRING("_justPressedTimeInTicks"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("onDown"),
	HX_CSTRING("onUp"),
	HX_CSTRING("reset"),
	HX_CSTRING("pressed"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("justReleased"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::MIDDLE,"MIDDLE");
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::FAST_PRESS_RELEASE,"FAST_PRESS_RELEASE");
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::JUST_RELEASED,"JUST_RELEASED");
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::RELEASED,"RELEASED");
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::PRESSED,"PRESSED");
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::JUST_PRESSED,"JUST_PRESSED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::MIDDLE,"MIDDLE");
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::FAST_PRESS_RELEASE,"FAST_PRESS_RELEASE");
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::JUST_RELEASED,"JUST_RELEASED");
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::RELEASED,"RELEASED");
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::PRESSED,"PRESSED");
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::JUST_PRESSED,"JUST_PRESSED");
};

#endif

Class FlxMouseButton_obj::__mClass;

void FlxMouseButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.mouse.FlxMouseButton"), hx::TCanCast< FlxMouseButton_obj> ,sStaticFields,sMemberFields,
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

void FlxMouseButton_obj::__boot()
{
	LEFT= (int)-1;
	MIDDLE= (int)-2;
	RIGHT= (int)-3;
	FAST_PRESS_RELEASE= (int)-2;
	JUST_RELEASED= (int)-1;
	RELEASED= (int)0;
	PRESSED= (int)1;
	JUST_PRESSED= (int)2;
}

} // end namespace flixel
} // end namespace input
} // end namespace mouse
