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
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
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
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_events_JoystickEvent
#include <openfl/events/JoystickEvent.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void FlxGamepadManager_obj::__construct()
{
HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","new",0x05218fad,"flixel.input.gamepad.FlxGamepadManager.new","flixel/input/gamepad/FlxGamepadManager.hx",23,0xccfee0a6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(43)
	this->globalDeadZone = (int)0;
	HX_STACK_LINE(279)
	this->_gamepads = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(282)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("axisMove"),this->handleAxisMove_dyn(),null(),null(),null());
	HX_STACK_LINE(283)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("ballMove"),this->handleBallMove_dyn(),null(),null(),null());
	HX_STACK_LINE(284)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("buttonDown"),this->handleButtonDown_dyn(),null(),null(),null());
	HX_STACK_LINE(285)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("buttonUp"),this->handleButtonUp_dyn(),null(),null(),null());
	HX_STACK_LINE(286)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("hatMove"),this->handleHatMove_dyn(),null(),null(),null());
}
;
	return null();
}

//FlxGamepadManager_obj::~FlxGamepadManager_obj() { }

Dynamic FlxGamepadManager_obj::__CreateEmpty() { return  new FlxGamepadManager_obj; }
hx::ObjectPtr< FlxGamepadManager_obj > FlxGamepadManager_obj::__new()
{  hx::ObjectPtr< FlxGamepadManager_obj > result = new FlxGamepadManager_obj();
	result->__construct();
	return result;}

Dynamic FlxGamepadManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepadManager_obj > result = new FlxGamepadManager_obj();
	result->__construct();
	return result;}

hx::Object *FlxGamepadManager_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxInput_obj)) return operator ::flixel::interfaces::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

::flixel::input::gamepad::FlxGamepad FlxGamepadManager_obj::getByID( int GamepadID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getByID",0xe19992f5,"flixel.input.gamepad.FlxGamepadManager.getByID","flixel/input/gamepad/FlxGamepadManager.hx",58,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(GamepadID,"GamepadID")
	HX_STACK_LINE(59)
	::flixel::input::gamepad::FlxGamepad gamepad = this->_gamepads->__get(GamepadID).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
	HX_STACK_LINE(61)
	if (((gamepad == null()))){
		HX_STACK_LINE(63)
		::flixel::input::gamepad::FlxGamepad _g = ::flixel::input::gamepad::FlxGamepad_obj::__new(GamepadID,this->globalDeadZone);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		gamepad = _g;
		HX_STACK_LINE(64)
		this->_gamepads[GamepadID] = gamepad;
		HX_STACK_LINE(66)
		this->lastActive = gamepad;
		HX_STACK_LINE(67)
		if (((this->firstActive == null()))){
			HX_STACK_LINE(69)
			this->firstActive = gamepad;
		}
	}
	HX_STACK_LINE(73)
	return gamepad;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getByID,return )

Array< int > FlxGamepadManager_obj::getActiveGamepadIDs( Array< int > IDsArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getActiveGamepadIDs",0x2dbae5a0,"flixel.input.gamepad.FlxGamepadManager.getActiveGamepadIDs","flixel/input/gamepad/FlxGamepadManager.hx",83,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(IDsArray,"IDsArray")
	HX_STACK_LINE(84)
	if (((IDsArray == null()))){
		HX_STACK_LINE(86)
		IDsArray = Array_obj< int >::__new();
	}
	HX_STACK_LINE(89)
	{
		HX_STACK_LINE(89)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(89)
		while((true)){
			HX_STACK_LINE(89)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(89)
				break;
			}
			HX_STACK_LINE(89)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(89)
			++(_g);
			HX_STACK_LINE(91)
			if (((  (((gamepad != null()))) ? bool(gamepad->anyInput()) : bool(false) ))){
				HX_STACK_LINE(93)
				IDsArray->push(gamepad->id);
			}
		}
	}
	HX_STACK_LINE(97)
	return IDsArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getActiveGamepadIDs,return )

Array< ::Dynamic > FlxGamepadManager_obj::getActiveGamepads( Array< ::Dynamic > GamepadArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getActiveGamepads",0xd3d79bdb,"flixel.input.gamepad.FlxGamepadManager.getActiveGamepads","flixel/input/gamepad/FlxGamepadManager.hx",107,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(GamepadArray,"GamepadArray")
	HX_STACK_LINE(108)
	if (((GamepadArray == null()))){
		HX_STACK_LINE(110)
		GamepadArray = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(113)
	{
		HX_STACK_LINE(113)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(113)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(113)
		while((true)){
			HX_STACK_LINE(113)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(113)
				break;
			}
			HX_STACK_LINE(113)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(113)
			++(_g);
			HX_STACK_LINE(115)
			if (((  (((gamepad != null()))) ? bool(gamepad->anyInput()) : bool(false) ))){
				HX_STACK_LINE(117)
				GamepadArray->push(gamepad);
			}
		}
	}
	HX_STACK_LINE(121)
	return GamepadArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getActiveGamepads,return )

int FlxGamepadManager_obj::getFirstActiveGamepadID( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getFirstActiveGamepadID",0x40a7d549,"flixel.input.gamepad.FlxGamepadManager.getFirstActiveGamepadID","flixel/input/gamepad/FlxGamepadManager.hx",129,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(130)
	::flixel::input::gamepad::FlxGamepad firstActive = this->getFirstActiveGamepad();		HX_STACK_VAR(firstActive,"firstActive");
	HX_STACK_LINE(131)
	if (((firstActive == null()))){
		HX_STACK_LINE(131)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(131)
		return firstActive->id;
	}
	HX_STACK_LINE(131)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,getFirstActiveGamepadID,return )

::flixel::input::gamepad::FlxGamepad FlxGamepadManager_obj::getFirstActiveGamepad( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getFirstActiveGamepad",0x4c49bdee,"flixel.input.gamepad.FlxGamepadManager.getFirstActiveGamepad","flixel/input/gamepad/FlxGamepadManager.hx",139,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(140)
		while((true)){
			HX_STACK_LINE(140)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(140)
				break;
			}
			HX_STACK_LINE(140)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(140)
			++(_g);
			HX_STACK_LINE(142)
			if (((  (((gamepad != null()))) ? bool(gamepad->anyInput()) : bool(false) ))){
				HX_STACK_LINE(144)
				return gamepad;
			}
		}
	}
	HX_STACK_LINE(148)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,getFirstActiveGamepad,return )

bool FlxGamepadManager_obj::anyButton( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyButton",0x595b810b,"flixel.input.gamepad.FlxGamepadManager.anyButton","flixel/input/gamepad/FlxGamepadManager.hx",155,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(156)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(156)
		while((true)){
			HX_STACK_LINE(156)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(156)
				break;
			}
			HX_STACK_LINE(156)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(156)
			++(_g);
			HX_STACK_LINE(158)
			if (((  (((gamepad != null()))) ? bool(gamepad->anyButton()) : bool(false) ))){
				HX_STACK_LINE(160)
				return true;
			}
		}
	}
	HX_STACK_LINE(164)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,anyButton,return )

bool FlxGamepadManager_obj::anyInput( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyInput",0xa448cb11,"flixel.input.gamepad.FlxGamepadManager.anyInput","flixel/input/gamepad/FlxGamepadManager.hx",171,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(172)
	{
		HX_STACK_LINE(172)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(172)
		while((true)){
			HX_STACK_LINE(172)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(172)
				break;
			}
			HX_STACK_LINE(172)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(172)
			++(_g);
			HX_STACK_LINE(174)
			if (((  (((gamepad != null()))) ? bool(gamepad->anyInput()) : bool(false) ))){
				HX_STACK_LINE(176)
				return true;
			}
		}
	}
	HX_STACK_LINE(180)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,anyInput,return )

bool FlxGamepadManager_obj::anyPressed( int ButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyPressed",0x4626e969,"flixel.input.gamepad.FlxGamepadManager.anyPressed","flixel/input/gamepad/FlxGamepadManager.hx",190,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_LINE(191)
	{
		HX_STACK_LINE(191)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(191)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(191)
		while((true)){
			HX_STACK_LINE(191)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(191)
				break;
			}
			HX_STACK_LINE(191)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(191)
			++(_g);
			HX_STACK_LINE(193)
			if (((  (((gamepad != null()))) ? bool(gamepad->pressed(ButtonID)) : bool(false) ))){
				HX_STACK_LINE(195)
				return true;
			}
		}
	}
	HX_STACK_LINE(199)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyPressed,return )

bool FlxGamepadManager_obj::anyJustPressed( int ButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyJustPressed",0x8467941d,"flixel.input.gamepad.FlxGamepadManager.anyJustPressed","flixel/input/gamepad/FlxGamepadManager.hx",209,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_LINE(210)
	{
		HX_STACK_LINE(210)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(210)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(210)
		while((true)){
			HX_STACK_LINE(210)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(210)
				break;
			}
			HX_STACK_LINE(210)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(210)
			++(_g);
			HX_STACK_LINE(212)
			if (((  (((gamepad != null()))) ? bool(gamepad->justPressed(ButtonID)) : bool(false) ))){
				HX_STACK_LINE(214)
				return true;
			}
		}
	}
	HX_STACK_LINE(218)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyJustPressed,return )

bool FlxGamepadManager_obj::anyJustReleased( int ButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyJustReleased",0x5d1012e2,"flixel.input.gamepad.FlxGamepadManager.anyJustReleased","flixel/input/gamepad/FlxGamepadManager.hx",228,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_LINE(229)
	{
		HX_STACK_LINE(229)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(229)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(229)
		while((true)){
			HX_STACK_LINE(229)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(229)
				break;
			}
			HX_STACK_LINE(229)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(229)
			++(_g);
			HX_STACK_LINE(231)
			if (((  (((gamepad != null()))) ? bool(gamepad->justReleased(ButtonID)) : bool(false) ))){
				HX_STACK_LINE(233)
				return true;
			}
		}
	}
	HX_STACK_LINE(237)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyJustReleased,return )

Void FlxGamepadManager_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","destroy",0xf27a16c7,"flixel.input.gamepad.FlxGamepadManager.destroy","flixel/input/gamepad/FlxGamepadManager.hx",245,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(246)
		{
			HX_STACK_LINE(246)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(246)
			Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(246)
			while((true)){
				HX_STACK_LINE(246)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(246)
					break;
				}
				HX_STACK_LINE(246)
				::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
				HX_STACK_LINE(246)
				++(_g);
				HX_STACK_LINE(248)
				::flixel::input::gamepad::FlxGamepad _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(gamepad);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(248)
				gamepad = _g2;
			}
		}
		HX_STACK_LINE(251)
		this->firstActive = null();
		HX_STACK_LINE(252)
		this->lastActive = null();
		HX_STACK_LINE(253)
		this->_gamepads = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,destroy,(void))

Void FlxGamepadManager_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","reset",0x09fe365c,"flixel.input.gamepad.FlxGamepadManager.reset","flixel/input/gamepad/FlxGamepadManager.hx",267,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(267)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(267)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(267)
		while((true)){
			HX_STACK_LINE(267)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(267)
				break;
			}
			HX_STACK_LINE(267)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(267)
			++(_g);
			HX_STACK_LINE(269)
			if (((gamepad != null()))){
				HX_STACK_LINE(271)
				gamepad->reset();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,reset,(void))

Void FlxGamepadManager_obj::handleButtonDown( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleButtonDown",0x9a9405cf,"flixel.input.gamepad.FlxGamepadManager.handleButtonDown","flixel/input/gamepad/FlxGamepadManager.hx",361,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(362)
		::flixel::input::gamepad::FlxGamepad gamepad = this->getByID(FlashEvent->device);		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(363)
		::flixel::input::gamepad::FlxGamepadButton button = gamepad->getButton(FlashEvent->id);		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(365)
		if (((button != null()))){
			HX_STACK_LINE(367)
			button->press();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleButtonDown,(void))

Void FlxGamepadManager_obj::handleButtonUp( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleButtonUp",0x87ba4e88,"flixel.input.gamepad.FlxGamepadManager.handleButtonUp","flixel/input/gamepad/FlxGamepadManager.hx",372,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(373)
		::flixel::input::gamepad::FlxGamepad gamepad = this->getByID(FlashEvent->device);		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(374)
		::flixel::input::gamepad::FlxGamepadButton button = gamepad->getButton(FlashEvent->id);		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(376)
		if (((button != null()))){
			HX_STACK_LINE(378)
			button->release();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleButtonUp,(void))

Void FlxGamepadManager_obj::handleAxisMove( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleAxisMove",0xbb7c51ed,"flixel.input.gamepad.FlxGamepadManager.handleAxisMove","flixel/input/gamepad/FlxGamepadManager.hx",383,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(384)
		::flixel::input::gamepad::FlxGamepad gamepad = this->getByID(FlashEvent->device);		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(385)
		gamepad->axis = FlashEvent->axis;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleAxisMove,(void))

Void FlxGamepadManager_obj::handleBallMove( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleBallMove",0x63851e4b,"flixel.input.gamepad.FlxGamepadManager.handleBallMove","flixel/input/gamepad/FlxGamepadManager.hx",389,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(390)
		::flixel::input::gamepad::FlxGamepad gamepad = this->getByID(FlashEvent->device);		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(391)
		Float _g = ::Math_obj::abs(FlashEvent->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(391)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(391)
		if (((_g < gamepad->deadZone))){
			HX_STACK_LINE(391)
			_g1 = (int)0;
		}
		else{
			HX_STACK_LINE(391)
			_g1 = FlashEvent->x;
		}
		HX_STACK_LINE(391)
		gamepad->ball->set_x(_g1);
		HX_STACK_LINE(392)
		Float _g2 = ::Math_obj::abs(FlashEvent->y);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(392)
		Float _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(392)
		if (((_g2 < gamepad->deadZone))){
			HX_STACK_LINE(392)
			_g3 = (int)0;
		}
		else{
			HX_STACK_LINE(392)
			_g3 = FlashEvent->y;
		}
		HX_STACK_LINE(392)
		gamepad->ball->set_y(_g3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleBallMove,(void))

Void FlxGamepadManager_obj::handleHatMove( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleHatMove",0x5f7942d1,"flixel.input.gamepad.FlxGamepadManager.handleHatMove","flixel/input/gamepad/FlxGamepadManager.hx",396,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(397)
		::flixel::input::gamepad::FlxGamepad gamepad = this->getByID(FlashEvent->device);		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(398)
		Float _g = ::Math_obj::abs(FlashEvent->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(398)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(398)
		if (((_g < gamepad->deadZone))){
			HX_STACK_LINE(398)
			_g1 = (int)0;
		}
		else{
			HX_STACK_LINE(398)
			_g1 = FlashEvent->x;
		}
		HX_STACK_LINE(398)
		gamepad->hat->set_x(_g1);
		HX_STACK_LINE(399)
		Float _g2 = ::Math_obj::abs(FlashEvent->y);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(399)
		Float _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(399)
		if (((_g2 < gamepad->deadZone))){
			HX_STACK_LINE(399)
			_g3 = (int)0;
		}
		else{
			HX_STACK_LINE(399)
			_g3 = FlashEvent->y;
		}
		HX_STACK_LINE(399)
		gamepad->hat->set_y(_g3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleHatMove,(void))

Void FlxGamepadManager_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","update",0x32fe94dc,"flixel.input.gamepad.FlxGamepadManager.update","flixel/input/gamepad/FlxGamepadManager.hx",408,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(408)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(408)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(408)
		while((true)){
			HX_STACK_LINE(408)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(408)
				break;
			}
			HX_STACK_LINE(408)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(408)
			++(_g);
			HX_STACK_LINE(410)
			if (((gamepad != null()))){
				HX_STACK_LINE(412)
				gamepad->update();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,update,(void))

Void FlxGamepadManager_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","onFocus",0x68bae806,"flixel.input.gamepad.FlxGamepadManager.onFocus","flixel/input/gamepad/FlxGamepadManager.hx",417,0xccfee0a6)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,onFocus,(void))

Void FlxGamepadManager_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","onFocusLost",0xeb47390a,"flixel.input.gamepad.FlxGamepadManager.onFocusLost","flixel/input/gamepad/FlxGamepadManager.hx",421,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(421)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,onFocusLost,(void))

int FlxGamepadManager_obj::get_numActiveGamepads( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","get_numActiveGamepads",0x4cfd1ae2,"flixel.input.gamepad.FlxGamepadManager.get_numActiveGamepads","flixel/input/gamepad/FlxGamepadManager.hx",425,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(426)
	int count = (int)0;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(427)
	{
		HX_STACK_LINE(427)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(427)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(427)
		while((true)){
			HX_STACK_LINE(427)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(427)
				break;
			}
			HX_STACK_LINE(427)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(427)
			++(_g);
			HX_STACK_LINE(429)
			if (((gamepad != null()))){
				HX_STACK_LINE(431)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(434)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,get_numActiveGamepads,return )

Float FlxGamepadManager_obj::set_globalDeadZone( Float DeadZone){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","set_globalDeadZone",0x5e4d5a03,"flixel.input.gamepad.FlxGamepadManager.set_globalDeadZone","flixel/input/gamepad/FlxGamepadManager.hx",444,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(DeadZone,"DeadZone")
	HX_STACK_LINE(445)
	this->globalDeadZone = DeadZone;
	HX_STACK_LINE(446)
	{
		HX_STACK_LINE(446)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(446)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(446)
		while((true)){
			HX_STACK_LINE(446)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(446)
				break;
			}
			HX_STACK_LINE(446)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(446)
			++(_g);
			HX_STACK_LINE(448)
			if (((gamepad != null()))){
				HX_STACK_LINE(450)
				gamepad->deadZone = DeadZone;
			}
		}
	}
	HX_STACK_LINE(453)
	return this->globalDeadZone;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,set_globalDeadZone,return )


FlxGamepadManager_obj::FlxGamepadManager_obj()
{
}

void FlxGamepadManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadManager);
	HX_MARK_MEMBER_NAME(firstActive,"firstActive");
	HX_MARK_MEMBER_NAME(lastActive,"lastActive");
	HX_MARK_MEMBER_NAME(numActiveGamepads,"numActiveGamepads");
	HX_MARK_MEMBER_NAME(globalDeadZone,"globalDeadZone");
	HX_MARK_MEMBER_NAME(_gamepads,"_gamepads");
	HX_MARK_END_CLASS();
}

void FlxGamepadManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(firstActive,"firstActive");
	HX_VISIT_MEMBER_NAME(lastActive,"lastActive");
	HX_VISIT_MEMBER_NAME(numActiveGamepads,"numActiveGamepads");
	HX_VISIT_MEMBER_NAME(globalDeadZone,"globalDeadZone");
	HX_VISIT_MEMBER_NAME(_gamepads,"_gamepads");
}

Dynamic FlxGamepadManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getByID") ) { return getByID_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"anyInput") ) { return anyInput_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_gamepads") ) { return _gamepads; }
		if (HX_FIELD_EQ(inName,"anyButton") ) { return anyButton_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastActive") ) { return lastActive; }
		if (HX_FIELD_EQ(inName,"anyPressed") ) { return anyPressed_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstActive") ) { return firstActive; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handleHatMove") ) { return handleHatMove_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"globalDeadZone") ) { return globalDeadZone; }
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return anyJustPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"handleButtonUp") ) { return handleButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"handleAxisMove") ) { return handleAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"handleBallMove") ) { return handleBallMove_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return anyJustReleased_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handleButtonDown") ) { return handleButtonDown_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numActiveGamepads") ) { return inCallProp ? get_numActiveGamepads() : numActiveGamepads; }
		if (HX_FIELD_EQ(inName,"getActiveGamepads") ) { return getActiveGamepads_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_globalDeadZone") ) { return set_globalDeadZone_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getActiveGamepadIDs") ) { return getActiveGamepadIDs_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getFirstActiveGamepad") ) { return getFirstActiveGamepad_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numActiveGamepads") ) { return get_numActiveGamepads_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFirstActiveGamepadID") ) { return getFirstActiveGamepadID_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepadManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_gamepads") ) { _gamepads=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastActive") ) { lastActive=inValue.Cast< ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstActive") ) { firstActive=inValue.Cast< ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"globalDeadZone") ) { if (inCallProp) return set_globalDeadZone(inValue);globalDeadZone=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numActiveGamepads") ) { numActiveGamepads=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("firstActive"));
	outFields->push(HX_CSTRING("lastActive"));
	outFields->push(HX_CSTRING("numActiveGamepads"));
	outFields->push(HX_CSTRING("globalDeadZone"));
	outFields->push(HX_CSTRING("_gamepads"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepad*/ ,(int)offsetof(FlxGamepadManager_obj,firstActive),HX_CSTRING("firstActive")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepad*/ ,(int)offsetof(FlxGamepadManager_obj,lastActive),HX_CSTRING("lastActive")},
	{hx::fsInt,(int)offsetof(FlxGamepadManager_obj,numActiveGamepads),HX_CSTRING("numActiveGamepads")},
	{hx::fsFloat,(int)offsetof(FlxGamepadManager_obj,globalDeadZone),HX_CSTRING("globalDeadZone")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxGamepadManager_obj,_gamepads),HX_CSTRING("_gamepads")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("firstActive"),
	HX_CSTRING("lastActive"),
	HX_CSTRING("numActiveGamepads"),
	HX_CSTRING("globalDeadZone"),
	HX_CSTRING("_gamepads"),
	HX_CSTRING("getByID"),
	HX_CSTRING("getActiveGamepadIDs"),
	HX_CSTRING("getActiveGamepads"),
	HX_CSTRING("getFirstActiveGamepadID"),
	HX_CSTRING("getFirstActiveGamepad"),
	HX_CSTRING("anyButton"),
	HX_CSTRING("anyInput"),
	HX_CSTRING("anyPressed"),
	HX_CSTRING("anyJustPressed"),
	HX_CSTRING("anyJustReleased"),
	HX_CSTRING("destroy"),
	HX_CSTRING("reset"),
	HX_CSTRING("handleButtonDown"),
	HX_CSTRING("handleButtonUp"),
	HX_CSTRING("handleAxisMove"),
	HX_CSTRING("handleBallMove"),
	HX_CSTRING("handleHatMove"),
	HX_CSTRING("update"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("get_numActiveGamepads"),
	HX_CSTRING("set_globalDeadZone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadManager_obj::__mClass,"__mClass");
};

#endif

Class FlxGamepadManager_obj::__mClass;

void FlxGamepadManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.gamepad.FlxGamepadManager"), hx::TCanCast< FlxGamepadManager_obj> ,sStaticFields,sMemberFields,
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

void FlxGamepadManager_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
