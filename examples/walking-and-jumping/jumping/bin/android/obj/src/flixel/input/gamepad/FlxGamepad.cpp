#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
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
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void FlxGamepad_obj::__construct(int ID,hx::Null< Float >  __o_GlobalDeadZone)
{
HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","new",0x48c92544,"flixel.input.gamepad.FlxGamepad.new","flixel/input/gamepad/FlxGamepad.hx",15,0xdb78a809)
HX_STACK_THIS(this)
HX_STACK_ARG(ID,"ID")
HX_STACK_ARG(__o_GlobalDeadZone,"GlobalDeadZone")
Float GlobalDeadZone = __o_GlobalDeadZone.Default(0);
{
	HX_STACK_LINE(42)
	this->dpadRight = false;
	HX_STACK_LINE(41)
	this->dpadLeft = false;
	HX_STACK_LINE(40)
	this->dpadDown = false;
	HX_STACK_LINE(39)
	this->dpadUp = false;
	HX_STACK_LINE(30)
	this->deadZone = 0.15;
	HX_STACK_LINE(56)
	this->buttons = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(57)
	Array< Float > _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		Array< Float > _g1 = Array_obj< Float >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(57)
			while((true)){
				HX_STACK_LINE(57)
				if ((!(((_g11 < (int)6))))){
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(57)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(57)
				_g1->push((int)0);
			}
		}
		HX_STACK_LINE(57)
		_g = _g1;
	}
	HX_STACK_LINE(57)
	this->axis = _g;
	HX_STACK_LINE(58)
	this->id = ID;
	HX_STACK_LINE(60)
	if (((GlobalDeadZone != (int)0))){
		HX_STACK_LINE(62)
		this->deadZone = GlobalDeadZone;
	}
	HX_STACK_LINE(66)
	::flixel::util::FlxPoint _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(66)
	{
		HX_STACK_LINE(66)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(66)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(66)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(66)
		point->_inPool = false;
		HX_STACK_LINE(66)
		_g1 = point;
	}
	HX_STACK_LINE(66)
	this->ball = _g1;
	HX_STACK_LINE(67)
	::flixel::util::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(67)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(67)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(67)
		point->_inPool = false;
		HX_STACK_LINE(67)
		_g2 = point;
	}
	HX_STACK_LINE(67)
	this->hat = _g2;
}
;
	return null();
}

//FlxGamepad_obj::~FlxGamepad_obj() { }

Dynamic FlxGamepad_obj::__CreateEmpty() { return  new FlxGamepad_obj; }
hx::ObjectPtr< FlxGamepad_obj > FlxGamepad_obj::__new(int ID,hx::Null< Float >  __o_GlobalDeadZone)
{  hx::ObjectPtr< FlxGamepad_obj > result = new FlxGamepad_obj();
	result->__construct(ID,__o_GlobalDeadZone);
	return result;}

Dynamic FlxGamepad_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepad_obj > result = new FlxGamepad_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *FlxGamepad_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

::flixel::input::gamepad::FlxGamepadButton FlxGamepad_obj::getButton( int ButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getButton",0xf881030c,"flixel.input.gamepad.FlxGamepad.getButton","flixel/input/gamepad/FlxGamepad.hx",72,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_LINE(73)
	::flixel::input::gamepad::FlxGamepadButton gamepadButton = this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(gamepadButton,"gamepadButton");
	HX_STACK_LINE(75)
	if (((gamepadButton == null()))){
		HX_STACK_LINE(77)
		::flixel::input::gamepad::FlxGamepadButton _g = ::flixel::input::gamepad::FlxGamepadButton_obj::__new(ButtonID,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		gamepadButton = _g;
		HX_STACK_LINE(78)
		this->buttons[ButtonID] = gamepadButton;
	}
	HX_STACK_LINE(81)
	return gamepadButton;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getButton,return )

Void FlxGamepad_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","update",0x525157a5,"flixel.input.gamepad.FlxGamepad.update","flixel/input/gamepad/FlxGamepad.hx",115,0xdb78a809)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(115)
		Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(115)
		while((true)){
			HX_STACK_LINE(115)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(115)
				break;
			}
			HX_STACK_LINE(115)
			::flixel::input::gamepad::FlxGamepadButton button = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(button,"button");
			HX_STACK_LINE(115)
			++(_g);
			HX_STACK_LINE(117)
			if (((button == null()))){
				HX_STACK_LINE(119)
				return null();
			}
			HX_STACK_LINE(122)
			if (((bool((button->last == (int)-1)) && bool((button->current == (int)-1))))){
				HX_STACK_LINE(124)
				button->current = (int)0;
			}
			else{
				HX_STACK_LINE(126)
				if (((bool((button->last == (int)2)) && bool((button->current == (int)2))))){
					HX_STACK_LINE(128)
					button->current = (int)1;
				}
			}
			HX_STACK_LINE(131)
			button->last = button->current;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,update,(void))

Void FlxGamepad_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","reset",0x36e79fb3,"flixel.input.gamepad.FlxGamepad.reset","flixel/input/gamepad/FlxGamepad.hx",136,0xdb78a809)
		HX_STACK_THIS(this)
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(137)
			Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(137)
			while((true)){
				HX_STACK_LINE(137)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(137)
					break;
				}
				HX_STACK_LINE(137)
				::flixel::input::gamepad::FlxGamepadButton button = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(button,"button");
				HX_STACK_LINE(137)
				++(_g);
				HX_STACK_LINE(139)
				if (((button != null()))){
					HX_STACK_LINE(141)
					button->current = (int)0;
					HX_STACK_LINE(142)
					button->last = (int)0;
				}
			}
		}
		HX_STACK_LINE(146)
		int numAxis = this->axis->length;		HX_STACK_VAR(numAxis,"numAxis");
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(148)
			while((true)){
				HX_STACK_LINE(148)
				if ((!(((_g < numAxis))))){
					HX_STACK_LINE(148)
					break;
				}
				HX_STACK_LINE(148)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(150)
				this->axis[i] = (int)0;
			}
		}
		HX_STACK_LINE(154)
		this->hat->set(null(),null());
		HX_STACK_LINE(155)
		this->ball->set(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,reset,(void))

Void FlxGamepad_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","destroy",0x3b91c3de,"flixel.input.gamepad.FlxGamepad.destroy","flixel/input/gamepad/FlxGamepad.hx",160,0xdb78a809)
		HX_STACK_THIS(this)
		HX_STACK_LINE(161)
		this->buttons = null();
		HX_STACK_LINE(162)
		this->axis = null();
		HX_STACK_LINE(165)
		::flixel::util::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->hat);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(165)
		this->hat = _g;
		HX_STACK_LINE(166)
		::flixel::util::FlxPoint _g1 = ::flixel::util::FlxDestroyUtil_obj::put(this->ball);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(166)
		this->ball = _g1;
		HX_STACK_LINE(168)
		this->hat = null();
		HX_STACK_LINE(169)
		this->ball = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,destroy,(void))

bool FlxGamepad_obj::checkStatus( int ButtonID,int Status){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","checkStatus",0x42f892fe,"flixel.input.gamepad.FlxGamepad.checkStatus","flixel/input/gamepad/FlxGamepad.hx",181,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_ARG(Status,"Status")
	HX_STACK_LINE(182)
	if (((this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >() != null()))){
		HX_STACK_LINE(184)
		return (this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >()->current == Status);
	}
	HX_STACK_LINE(186)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepad_obj,checkStatus,return )

bool FlxGamepad_obj::anyPressed( Array< int > ButtonIDArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyPressed",0xee8d44b2,"flixel.input.gamepad.FlxGamepad.anyPressed","flixel/input/gamepad/FlxGamepad.hx",196,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonIDArray,"ButtonIDArray")
	HX_STACK_LINE(197)
	{
		HX_STACK_LINE(197)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(197)
		while((true)){
			HX_STACK_LINE(197)
			if ((!(((_g < ButtonIDArray->length))))){
				HX_STACK_LINE(197)
				break;
			}
			HX_STACK_LINE(197)
			int b = ButtonIDArray->__get(_g);		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(197)
			++(_g);
			HX_STACK_LINE(199)
			if (((this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >() != null()))){
				HX_STACK_LINE(201)
				if (((this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >()->current == (int)1))){
					HX_STACK_LINE(202)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(206)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyPressed,return )

bool FlxGamepad_obj::anyJustPressed( Array< int > ButtonIDArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyJustPressed",0xd6d7c7e6,"flixel.input.gamepad.FlxGamepad.anyJustPressed","flixel/input/gamepad/FlxGamepad.hx",216,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonIDArray,"ButtonIDArray")
	HX_STACK_LINE(217)
	{
		HX_STACK_LINE(217)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(217)
		while((true)){
			HX_STACK_LINE(217)
			if ((!(((_g < ButtonIDArray->length))))){
				HX_STACK_LINE(217)
				break;
			}
			HX_STACK_LINE(217)
			int b = ButtonIDArray->__get(_g);		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(217)
			++(_g);
			HX_STACK_LINE(219)
			if (((this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >() != null()))){
				HX_STACK_LINE(221)
				if (((this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >()->current == (int)2))){
					HX_STACK_LINE(222)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(226)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyJustPressed,return )

bool FlxGamepad_obj::anyJustReleased( Array< int > ButtonIDArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyJustReleased",0x2ccd2ef9,"flixel.input.gamepad.FlxGamepad.anyJustReleased","flixel/input/gamepad/FlxGamepad.hx",236,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonIDArray,"ButtonIDArray")
	HX_STACK_LINE(237)
	{
		HX_STACK_LINE(237)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(237)
		while((true)){
			HX_STACK_LINE(237)
			if ((!(((_g < ButtonIDArray->length))))){
				HX_STACK_LINE(237)
				break;
			}
			HX_STACK_LINE(237)
			int b = ButtonIDArray->__get(_g);		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(237)
			++(_g);
			HX_STACK_LINE(239)
			if (((this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >() != null()))){
				HX_STACK_LINE(241)
				if (((this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >()->current == (int)-1))){
					HX_STACK_LINE(242)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(246)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyJustReleased,return )

bool FlxGamepad_obj::pressed( int ButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","pressed",0x50f26986,"flixel.input.gamepad.FlxGamepad.pressed","flixel/input/gamepad/FlxGamepad.hx",256,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_LINE(257)
	if (((this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >() != null()))){
		HX_STACK_LINE(259)
		return (this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >()->current > (int)0);
	}
	HX_STACK_LINE(262)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,pressed,return )

bool FlxGamepad_obj::justPressed( int ButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","justPressed",0x4d91e6ba,"flixel.input.gamepad.FlxGamepad.justPressed","flixel/input/gamepad/FlxGamepad.hx",272,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_LINE(273)
	if (((this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >() != null()))){
		HX_STACK_LINE(275)
		return (this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >()->current == (int)2);
	}
	HX_STACK_LINE(278)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,justPressed,return )

bool FlxGamepad_obj::justReleased( int ButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","justReleased",0x98ee09a5,"flixel.input.gamepad.FlxGamepad.justReleased","flixel/input/gamepad/FlxGamepad.hx",288,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_LINE(289)
	if (((this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >() != null()))){
		HX_STACK_LINE(291)
		return (this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >()->current == (int)-1);
	}
	HX_STACK_LINE(294)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,justReleased,return )

int FlxGamepad_obj::firstPressedButtonID( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","firstPressedButtonID",0xdedbb35b,"flixel.input.gamepad.FlxGamepad.firstPressedButtonID","flixel/input/gamepad/FlxGamepad.hx",302,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(303)
	{
		HX_STACK_LINE(303)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(303)
		Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(303)
		while((true)){
			HX_STACK_LINE(303)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(303)
				break;
			}
			HX_STACK_LINE(303)
			::flixel::input::gamepad::FlxGamepadButton button = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(button,"button");
			HX_STACK_LINE(303)
			++(_g);
			HX_STACK_LINE(305)
			if (((bool((button != null())) && bool((button->current > (int)0))))){
				HX_STACK_LINE(307)
				return button->id;
			}
		}
	}
	HX_STACK_LINE(311)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstPressedButtonID,return )

int FlxGamepad_obj::firstJustPressedButtonID( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","firstJustPressedButtonID",0x2f24588f,"flixel.input.gamepad.FlxGamepad.firstJustPressedButtonID","flixel/input/gamepad/FlxGamepad.hx",319,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(320)
	{
		HX_STACK_LINE(320)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(320)
		Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(320)
		while((true)){
			HX_STACK_LINE(320)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(320)
				break;
			}
			HX_STACK_LINE(320)
			::flixel::input::gamepad::FlxGamepadButton button = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(button,"button");
			HX_STACK_LINE(320)
			++(_g);
			HX_STACK_LINE(322)
			if (((bool((button != null())) && bool((button->current == (int)2))))){
				HX_STACK_LINE(324)
				return button->id;
			}
		}
	}
	HX_STACK_LINE(328)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstJustPressedButtonID,return )

int FlxGamepad_obj::firstJustReleasedButtonID( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","firstJustReleasedButtonID",0x67d646aa,"flixel.input.gamepad.FlxGamepad.firstJustReleasedButtonID","flixel/input/gamepad/FlxGamepad.hx",336,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(337)
	{
		HX_STACK_LINE(337)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(337)
		Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(337)
		while((true)){
			HX_STACK_LINE(337)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(337)
				break;
			}
			HX_STACK_LINE(337)
			::flixel::input::gamepad::FlxGamepadButton button = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(button,"button");
			HX_STACK_LINE(337)
			++(_g);
			HX_STACK_LINE(339)
			if (((bool((button != null())) && bool((button->current == (int)-1))))){
				HX_STACK_LINE(341)
				return button->id;
			}
		}
	}
	HX_STACK_LINE(345)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstJustReleasedButtonID,return )

Float FlxGamepad_obj::getAxis( int AxisID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getAxis",0x2a07633b,"flixel.input.gamepad.FlxGamepad.getAxis","flixel/input/gamepad/FlxGamepad.hx",354,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AxisID,"AxisID")
	HX_STACK_LINE(354)
	return this->getAxisValue(AxisID);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAxis,return )

Float FlxGamepad_obj::getXAxis( int AxisID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getXAxis",0xb657655f,"flixel.input.gamepad.FlxGamepad.getXAxis","flixel/input/gamepad/FlxGamepad.hx",362,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AxisID,"AxisID")
	HX_STACK_LINE(362)
	return this->getAxisValue(AxisID);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getXAxis,return )

Float FlxGamepad_obj::getYAxis( int AxisID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getYAxis",0x49bdf9e0,"flixel.input.gamepad.FlxGamepad.getYAxis","flixel/input/gamepad/FlxGamepad.hx",370,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AxisID,"AxisID")
	HX_STACK_LINE(371)
	Float axisValue = this->getAxisValue(AxisID);		HX_STACK_VAR(axisValue,"axisValue");
	HX_STACK_LINE(383)
	return axisValue;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getYAxis,return )

bool FlxGamepad_obj::anyButton( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyButton",0xd989e1e2,"flixel.input.gamepad.FlxGamepad.anyButton","flixel/input/gamepad/FlxGamepad.hx",390,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(391)
	{
		HX_STACK_LINE(391)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(391)
		Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(391)
		while((true)){
			HX_STACK_LINE(391)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(391)
				break;
			}
			HX_STACK_LINE(391)
			::flixel::input::gamepad::FlxGamepadButton button = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(button,"button");
			HX_STACK_LINE(391)
			++(_g);
			HX_STACK_LINE(393)
			if (((bool((button != null())) && bool((button->current > (int)0))))){
				HX_STACK_LINE(395)
				return true;
			}
		}
	}
	HX_STACK_LINE(399)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,anyButton,return )

bool FlxGamepad_obj::anyInput( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyInput",0x4fe8921a,"flixel.input.gamepad.FlxGamepad.anyInput","flixel/input/gamepad/FlxGamepad.hx",406,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(407)
	if ((this->anyButton())){
		HX_STACK_LINE(408)
		return true;
	}
	HX_STACK_LINE(410)
	int numAxis = this->axis->length;		HX_STACK_VAR(numAxis,"numAxis");
	HX_STACK_LINE(412)
	{
		HX_STACK_LINE(412)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(412)
		while((true)){
			HX_STACK_LINE(412)
			if ((!(((_g < numAxis))))){
				HX_STACK_LINE(412)
				break;
			}
			HX_STACK_LINE(412)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(414)
			if (((this->axis->__get((int)0) != (int)0))){
				HX_STACK_LINE(416)
				return true;
			}
		}
	}
	HX_STACK_LINE(421)
	if (((bool((this->ball->x != (int)0)) || bool((this->ball->y != (int)0))))){
		HX_STACK_LINE(423)
		return true;
	}
	HX_STACK_LINE(426)
	if (((bool((this->hat->x != (int)0)) || bool((this->hat->y != (int)0))))){
		HX_STACK_LINE(428)
		return true;
	}
	HX_STACK_LINE(432)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,anyInput,return )

Float FlxGamepad_obj::getAxisValue( int AxisID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getAxisValue",0xcd45f636,"flixel.input.gamepad.FlxGamepad.getAxisValue","flixel/input/gamepad/FlxGamepad.hx",436,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AxisID,"AxisID")
	HX_STACK_LINE(437)
	if (((bool((AxisID < (int)0)) || bool((AxisID >= this->axis->length))))){
		HX_STACK_LINE(439)
		return (int)0;
	}
	HX_STACK_LINE(442)
	Float axisValue = (int)0;		HX_STACK_VAR(axisValue,"axisValue");
	HX_STACK_LINE(450)
	axisValue = this->axis->__get(AxisID);
	HX_STACK_LINE(453)
	Float _g = ::Math_obj::abs(axisValue);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(453)
	if (((_g > this->deadZone))){
		HX_STACK_LINE(455)
		return axisValue;
	}
	HX_STACK_LINE(458)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAxisValue,return )

bool FlxGamepad_obj::get_dpadUp( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","get_dpadUp",0x080d2b0f,"flixel.input.gamepad.FlxGamepad.get_dpadUp","flixel/input/gamepad/FlxGamepad.hx",462,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(462)
	return (this->hat->y < (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,get_dpadUp,return )

bool FlxGamepad_obj::get_dpadDown( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","get_dpadDown",0xfabc5216,"flixel.input.gamepad.FlxGamepad.get_dpadDown","flixel/input/gamepad/FlxGamepad.hx",463,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(463)
	return (this->hat->y > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,get_dpadDown,return )

bool FlxGamepad_obj::get_dpadLeft( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","get_dpadLeft",0xfffe61bb,"flixel.input.gamepad.FlxGamepad.get_dpadLeft","flixel/input/gamepad/FlxGamepad.hx",464,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(464)
	return (this->hat->x < (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,get_dpadLeft,return )

bool FlxGamepad_obj::get_dpadRight( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","get_dpadRight",0x75a42fa8,"flixel.input.gamepad.FlxGamepad.get_dpadRight","flixel/input/gamepad/FlxGamepad.hx",465,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(465)
	return (this->hat->x > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,get_dpadRight,return )

int FlxGamepad_obj::JUST_RELEASED;

int FlxGamepad_obj::RELEASED;

int FlxGamepad_obj::PRESSED;

int FlxGamepad_obj::JUST_PRESSED;


FlxGamepad_obj::FlxGamepad_obj()
{
}

void FlxGamepad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepad);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(buttons,"buttons");
	HX_MARK_MEMBER_NAME(deadZone,"deadZone");
	HX_MARK_MEMBER_NAME(hat,"hat");
	HX_MARK_MEMBER_NAME(ball,"ball");
	HX_MARK_MEMBER_NAME(dpadUp,"dpadUp");
	HX_MARK_MEMBER_NAME(dpadDown,"dpadDown");
	HX_MARK_MEMBER_NAME(dpadLeft,"dpadLeft");
	HX_MARK_MEMBER_NAME(dpadRight,"dpadRight");
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_END_CLASS();
}

void FlxGamepad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(buttons,"buttons");
	HX_VISIT_MEMBER_NAME(deadZone,"deadZone");
	HX_VISIT_MEMBER_NAME(hat,"hat");
	HX_VISIT_MEMBER_NAME(ball,"ball");
	HX_VISIT_MEMBER_NAME(dpadUp,"dpadUp");
	HX_VISIT_MEMBER_NAME(dpadDown,"dpadDown");
	HX_VISIT_MEMBER_NAME(dpadLeft,"dpadLeft");
	HX_VISIT_MEMBER_NAME(dpadRight,"dpadRight");
	HX_VISIT_MEMBER_NAME(axis,"axis");
}

Dynamic FlxGamepad_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hat") ) { return hat; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		if (HX_FIELD_EQ(inName,"axis") ) { return axis; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"dpadUp") ) { return inCallProp ? get_dpadUp() : dpadUp; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { return buttons; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"getAxis") ) { return getAxis_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadZone") ) { return deadZone; }
		if (HX_FIELD_EQ(inName,"dpadDown") ) { return inCallProp ? get_dpadDown() : dpadDown; }
		if (HX_FIELD_EQ(inName,"dpadLeft") ) { return inCallProp ? get_dpadLeft() : dpadLeft; }
		if (HX_FIELD_EQ(inName,"getXAxis") ) { return getXAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"getYAxis") ) { return getYAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"anyInput") ) { return anyInput_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dpadRight") ) { return inCallProp ? get_dpadRight() : dpadRight; }
		if (HX_FIELD_EQ(inName,"getButton") ) { return getButton_dyn(); }
		if (HX_FIELD_EQ(inName,"anyButton") ) { return anyButton_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"anyPressed") ) { return anyPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dpadUp") ) { return get_dpadUp_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkStatus") ) { return checkStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"getAxisValue") ) { return getAxisValue_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dpadDown") ) { return get_dpadDown_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dpadLeft") ) { return get_dpadLeft_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_dpadRight") ) { return get_dpadRight_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return anyJustPressed_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return anyJustReleased_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"firstPressedButtonID") ) { return firstPressedButtonID_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"firstJustPressedButtonID") ) { return firstJustPressedButtonID_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"firstJustReleasedButtonID") ) { return firstJustReleasedButtonID_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepad_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hat") ) { hat=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"dpadUp") ) { dpadUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { buttons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadZone") ) { deadZone=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dpadDown") ) { dpadDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dpadLeft") ) { dpadLeft=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dpadRight") ) { dpadRight=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("buttons"));
	outFields->push(HX_CSTRING("deadZone"));
	outFields->push(HX_CSTRING("hat"));
	outFields->push(HX_CSTRING("ball"));
	outFields->push(HX_CSTRING("dpadUp"));
	outFields->push(HX_CSTRING("dpadDown"));
	outFields->push(HX_CSTRING("dpadLeft"));
	outFields->push(HX_CSTRING("dpadRight"));
	outFields->push(HX_CSTRING("axis"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("JUST_RELEASED"),
	HX_CSTRING("RELEASED"),
	HX_CSTRING("PRESSED"),
	HX_CSTRING("JUST_PRESSED"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxGamepad_obj,id),HX_CSTRING("id")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxGamepad_obj,buttons),HX_CSTRING("buttons")},
	{hx::fsFloat,(int)offsetof(FlxGamepad_obj,deadZone),HX_CSTRING("deadZone")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxGamepad_obj,hat),HX_CSTRING("hat")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxGamepad_obj,ball),HX_CSTRING("ball")},
	{hx::fsBool,(int)offsetof(FlxGamepad_obj,dpadUp),HX_CSTRING("dpadUp")},
	{hx::fsBool,(int)offsetof(FlxGamepad_obj,dpadDown),HX_CSTRING("dpadDown")},
	{hx::fsBool,(int)offsetof(FlxGamepad_obj,dpadLeft),HX_CSTRING("dpadLeft")},
	{hx::fsBool,(int)offsetof(FlxGamepad_obj,dpadRight),HX_CSTRING("dpadRight")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxGamepad_obj,axis),HX_CSTRING("axis")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("buttons"),
	HX_CSTRING("deadZone"),
	HX_CSTRING("hat"),
	HX_CSTRING("ball"),
	HX_CSTRING("dpadUp"),
	HX_CSTRING("dpadDown"),
	HX_CSTRING("dpadLeft"),
	HX_CSTRING("dpadRight"),
	HX_CSTRING("axis"),
	HX_CSTRING("getButton"),
	HX_CSTRING("update"),
	HX_CSTRING("reset"),
	HX_CSTRING("destroy"),
	HX_CSTRING("checkStatus"),
	HX_CSTRING("anyPressed"),
	HX_CSTRING("anyJustPressed"),
	HX_CSTRING("anyJustReleased"),
	HX_CSTRING("pressed"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("firstPressedButtonID"),
	HX_CSTRING("firstJustPressedButtonID"),
	HX_CSTRING("firstJustReleasedButtonID"),
	HX_CSTRING("getAxis"),
	HX_CSTRING("getXAxis"),
	HX_CSTRING("getYAxis"),
	HX_CSTRING("anyButton"),
	HX_CSTRING("anyInput"),
	HX_CSTRING("getAxisValue"),
	HX_CSTRING("get_dpadUp"),
	HX_CSTRING("get_dpadDown"),
	HX_CSTRING("get_dpadLeft"),
	HX_CSTRING("get_dpadRight"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepad_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxGamepad_obj::JUST_RELEASED,"JUST_RELEASED");
	HX_MARK_MEMBER_NAME(FlxGamepad_obj::RELEASED,"RELEASED");
	HX_MARK_MEMBER_NAME(FlxGamepad_obj::PRESSED,"PRESSED");
	HX_MARK_MEMBER_NAME(FlxGamepad_obj::JUST_PRESSED,"JUST_PRESSED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepad_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxGamepad_obj::JUST_RELEASED,"JUST_RELEASED");
	HX_VISIT_MEMBER_NAME(FlxGamepad_obj::RELEASED,"RELEASED");
	HX_VISIT_MEMBER_NAME(FlxGamepad_obj::PRESSED,"PRESSED");
	HX_VISIT_MEMBER_NAME(FlxGamepad_obj::JUST_PRESSED,"JUST_PRESSED");
};

#endif

Class FlxGamepad_obj::__mClass;

void FlxGamepad_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.gamepad.FlxGamepad"), hx::TCanCast< FlxGamepad_obj> ,sStaticFields,sMemberFields,
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

void FlxGamepad_obj::__boot()
{
	JUST_RELEASED= (int)-1;
	RELEASED= (int)0;
	PRESSED= (int)1;
	JUST_PRESSED= (int)2;
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
