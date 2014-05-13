#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKey
#include <flixel/input/keyboard/FlxKey.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
namespace flixel{
namespace input{
namespace keyboard{

Void FlxKeyList_obj::__construct(int CheckStatus)
{
HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","new",0xfff37fce,"flixel.input.keyboard.FlxKeyList.new","flixel/input/keyboard/FlxKeyList.hx",16,0xb04d5f03)
HX_STACK_THIS(this)
HX_STACK_ARG(CheckStatus,"CheckStatus")
{
	HX_STACK_LINE(16)
	this->checkStatus = CheckStatus;
}
;
	return null();
}

//FlxKeyList_obj::~FlxKeyList_obj() { }

Dynamic FlxKeyList_obj::__CreateEmpty() { return  new FlxKeyList_obj; }
hx::ObjectPtr< FlxKeyList_obj > FlxKeyList_obj::__new(int CheckStatus)
{  hx::ObjectPtr< FlxKeyList_obj > result = new FlxKeyList_obj();
	result->__construct(CheckStatus);
	return result;}

Dynamic FlxKeyList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxKeyList_obj > result = new FlxKeyList_obj();
	result->__construct(inArgs[0]);
	return result;}

bool FlxKeyList_obj::get_A( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_A",0x7bdd8c06,"flixel.input.keyboard.FlxKeyList.get_A","flixel/input/keyboard/FlxKeyList.hx",19,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	return ::flixel::FlxG_obj::keys->checkStatus((int)65,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_A,return )

bool FlxKeyList_obj::get_B( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_B",0x7bdd8c07,"flixel.input.keyboard.FlxKeyList.get_B","flixel/input/keyboard/FlxKeyList.hx",20,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	return ::flixel::FlxG_obj::keys->checkStatus((int)66,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_B,return )

bool FlxKeyList_obj::get_C( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_C",0x7bdd8c08,"flixel.input.keyboard.FlxKeyList.get_C","flixel/input/keyboard/FlxKeyList.hx",21,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	return ::flixel::FlxG_obj::keys->checkStatus((int)67,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_C,return )

bool FlxKeyList_obj::get_D( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_D",0x7bdd8c09,"flixel.input.keyboard.FlxKeyList.get_D","flixel/input/keyboard/FlxKeyList.hx",22,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	return ::flixel::FlxG_obj::keys->checkStatus((int)68,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_D,return )

bool FlxKeyList_obj::get_E( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_E",0x7bdd8c0a,"flixel.input.keyboard.FlxKeyList.get_E","flixel/input/keyboard/FlxKeyList.hx",23,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	return ::flixel::FlxG_obj::keys->checkStatus((int)69,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_E,return )

bool FlxKeyList_obj::get_F( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F",0x7bdd8c0b,"flixel.input.keyboard.FlxKeyList.get_F","flixel/input/keyboard/FlxKeyList.hx",24,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	return ::flixel::FlxG_obj::keys->checkStatus((int)70,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F,return )

bool FlxKeyList_obj::get_G( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_G",0x7bdd8c0c,"flixel.input.keyboard.FlxKeyList.get_G","flixel/input/keyboard/FlxKeyList.hx",25,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	return ::flixel::FlxG_obj::keys->checkStatus((int)71,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_G,return )

bool FlxKeyList_obj::get_H( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_H",0x7bdd8c0d,"flixel.input.keyboard.FlxKeyList.get_H","flixel/input/keyboard/FlxKeyList.hx",26,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	return ::flixel::FlxG_obj::keys->checkStatus((int)72,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_H,return )

bool FlxKeyList_obj::get_I( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_I",0x7bdd8c0e,"flixel.input.keyboard.FlxKeyList.get_I","flixel/input/keyboard/FlxKeyList.hx",27,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	return ::flixel::FlxG_obj::keys->checkStatus((int)73,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_I,return )

bool FlxKeyList_obj::get_J( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_J",0x7bdd8c0f,"flixel.input.keyboard.FlxKeyList.get_J","flixel/input/keyboard/FlxKeyList.hx",28,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	return ::flixel::FlxG_obj::keys->checkStatus((int)74,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_J,return )

bool FlxKeyList_obj::get_K( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_K",0x7bdd8c10,"flixel.input.keyboard.FlxKeyList.get_K","flixel/input/keyboard/FlxKeyList.hx",29,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	return ::flixel::FlxG_obj::keys->checkStatus((int)75,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_K,return )

bool FlxKeyList_obj::get_L( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_L",0x7bdd8c11,"flixel.input.keyboard.FlxKeyList.get_L","flixel/input/keyboard/FlxKeyList.hx",30,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	return ::flixel::FlxG_obj::keys->checkStatus((int)76,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_L,return )

bool FlxKeyList_obj::get_M( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_M",0x7bdd8c12,"flixel.input.keyboard.FlxKeyList.get_M","flixel/input/keyboard/FlxKeyList.hx",31,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	return ::flixel::FlxG_obj::keys->checkStatus((int)77,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_M,return )

bool FlxKeyList_obj::get_N( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_N",0x7bdd8c13,"flixel.input.keyboard.FlxKeyList.get_N","flixel/input/keyboard/FlxKeyList.hx",32,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	return ::flixel::FlxG_obj::keys->checkStatus((int)78,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_N,return )

bool FlxKeyList_obj::get_O( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_O",0x7bdd8c14,"flixel.input.keyboard.FlxKeyList.get_O","flixel/input/keyboard/FlxKeyList.hx",33,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	return ::flixel::FlxG_obj::keys->checkStatus((int)79,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_O,return )

bool FlxKeyList_obj::get_P( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_P",0x7bdd8c15,"flixel.input.keyboard.FlxKeyList.get_P","flixel/input/keyboard/FlxKeyList.hx",34,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	return ::flixel::FlxG_obj::keys->checkStatus((int)80,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_P,return )

bool FlxKeyList_obj::get_Q( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_Q",0x7bdd8c16,"flixel.input.keyboard.FlxKeyList.get_Q","flixel/input/keyboard/FlxKeyList.hx",35,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	return ::flixel::FlxG_obj::keys->checkStatus((int)81,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_Q,return )

bool FlxKeyList_obj::get_R( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_R",0x7bdd8c17,"flixel.input.keyboard.FlxKeyList.get_R","flixel/input/keyboard/FlxKeyList.hx",36,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	return ::flixel::FlxG_obj::keys->checkStatus((int)82,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_R,return )

bool FlxKeyList_obj::get_S( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_S",0x7bdd8c18,"flixel.input.keyboard.FlxKeyList.get_S","flixel/input/keyboard/FlxKeyList.hx",37,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	return ::flixel::FlxG_obj::keys->checkStatus((int)83,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_S,return )

bool FlxKeyList_obj::get_T( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_T",0x7bdd8c19,"flixel.input.keyboard.FlxKeyList.get_T","flixel/input/keyboard/FlxKeyList.hx",38,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	return ::flixel::FlxG_obj::keys->checkStatus((int)84,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_T,return )

bool FlxKeyList_obj::get_U( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_U",0x7bdd8c1a,"flixel.input.keyboard.FlxKeyList.get_U","flixel/input/keyboard/FlxKeyList.hx",39,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	return ::flixel::FlxG_obj::keys->checkStatus((int)85,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_U,return )

bool FlxKeyList_obj::get_V( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_V",0x7bdd8c1b,"flixel.input.keyboard.FlxKeyList.get_V","flixel/input/keyboard/FlxKeyList.hx",40,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	return ::flixel::FlxG_obj::keys->checkStatus((int)86,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_V,return )

bool FlxKeyList_obj::get_W( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_W",0x7bdd8c1c,"flixel.input.keyboard.FlxKeyList.get_W","flixel/input/keyboard/FlxKeyList.hx",41,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	return ::flixel::FlxG_obj::keys->checkStatus((int)87,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_W,return )

bool FlxKeyList_obj::get_X( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_X",0x7bdd8c1d,"flixel.input.keyboard.FlxKeyList.get_X","flixel/input/keyboard/FlxKeyList.hx",42,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	return ::flixel::FlxG_obj::keys->checkStatus((int)88,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_X,return )

bool FlxKeyList_obj::get_Y( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_Y",0x7bdd8c1e,"flixel.input.keyboard.FlxKeyList.get_Y","flixel/input/keyboard/FlxKeyList.hx",43,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	return ::flixel::FlxG_obj::keys->checkStatus((int)89,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_Y,return )

bool FlxKeyList_obj::get_Z( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_Z",0x7bdd8c1f,"flixel.input.keyboard.FlxKeyList.get_Z","flixel/input/keyboard/FlxKeyList.hx",44,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	return ::flixel::FlxG_obj::keys->checkStatus((int)90,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_Z,return )

bool FlxKeyList_obj::get_ZERO( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_ZERO",0x2ad43483,"flixel.input.keyboard.FlxKeyList.get_ZERO","flixel/input/keyboard/FlxKeyList.hx",45,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	return ::flixel::FlxG_obj::keys->checkStatus((int)48,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ZERO,return )

bool FlxKeyList_obj::get_ONE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_ONE",0x5767fd4b,"flixel.input.keyboard.FlxKeyList.get_ONE","flixel/input/keyboard/FlxKeyList.hx",46,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	return ::flixel::FlxG_obj::keys->checkStatus((int)49,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ONE,return )

bool FlxKeyList_obj::get_TWO( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_TWO",0x576bd071,"flixel.input.keyboard.FlxKeyList.get_TWO","flixel/input/keyboard/FlxKeyList.hx",47,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	return ::flixel::FlxG_obj::keys->checkStatus((int)50,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_TWO,return )

bool FlxKeyList_obj::get_THREE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_THREE",0xdc6dde83,"flixel.input.keyboard.FlxKeyList.get_THREE","flixel/input/keyboard/FlxKeyList.hx",48,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	return ::flixel::FlxG_obj::keys->checkStatus((int)51,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_THREE,return )

bool FlxKeyList_obj::get_FOUR( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_FOUR",0x1da38941,"flixel.input.keyboard.FlxKeyList.get_FOUR","flixel/input/keyboard/FlxKeyList.hx",49,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	return ::flixel::FlxG_obj::keys->checkStatus((int)52,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_FOUR,return )

bool FlxKeyList_obj::get_FIVE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_FIVE",0x1d9efc8d,"flixel.input.keyboard.FlxKeyList.get_FIVE","flixel/input/keyboard/FlxKeyList.hx",50,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	return ::flixel::FlxG_obj::keys->checkStatus((int)53,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_FIVE,return )

bool FlxKeyList_obj::get_SIX( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_SIX",0x576b0207,"flixel.input.keyboard.FlxKeyList.get_SIX","flixel/input/keyboard/FlxKeyList.hx",51,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	return ::flixel::FlxG_obj::keys->checkStatus((int)54,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SIX,return )

bool FlxKeyList_obj::get_SEVEN( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_SEVEN",0x470eaf32,"flixel.input.keyboard.FlxKeyList.get_SEVEN","flixel/input/keyboard/FlxKeyList.hx",52,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	return ::flixel::FlxG_obj::keys->checkStatus((int)55,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SEVEN,return )

bool FlxKeyList_obj::get_EIGHT( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_EIGHT",0x3a0c0b74,"flixel.input.keyboard.FlxKeyList.get_EIGHT","flixel/input/keyboard/FlxKeyList.hx",53,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	return ::flixel::FlxG_obj::keys->checkStatus((int)56,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_EIGHT,return )

bool FlxKeyList_obj::get_NINE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NINE",0x22e8aa8d,"flixel.input.keyboard.FlxKeyList.get_NINE","flixel/input/keyboard/FlxKeyList.hx",54,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	return ::flixel::FlxG_obj::keys->checkStatus((int)57,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NINE,return )

bool FlxKeyList_obj::get_PAGEUP( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_PAGEUP",0x5b340885,"flixel.input.keyboard.FlxKeyList.get_PAGEUP","flixel/input/keyboard/FlxKeyList.hx",55,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	return ::flixel::FlxG_obj::keys->checkStatus((int)33,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_PAGEUP,return )

bool FlxKeyList_obj::get_PAGEDOWN( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_PAGEDOWN",0x8b6ddd0c,"flixel.input.keyboard.FlxKeyList.get_PAGEDOWN","flixel/input/keyboard/FlxKeyList.hx",56,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	return ::flixel::FlxG_obj::keys->checkStatus((int)34,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_PAGEDOWN,return )

bool FlxKeyList_obj::get_HOME( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_HOME",0x1ef5ef7a,"flixel.input.keyboard.FlxKeyList.get_HOME","flixel/input/keyboard/FlxKeyList.hx",57,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	return ::flixel::FlxG_obj::keys->checkStatus((int)36,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_HOME,return )

bool FlxKeyList_obj::get_END( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_END",0x576066c0,"flixel.input.keyboard.FlxKeyList.get_END","flixel/input/keyboard/FlxKeyList.hx",58,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	return ::flixel::FlxG_obj::keys->checkStatus((int)35,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_END,return )

bool FlxKeyList_obj::get_INSERT( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_INSERT",0x12d89954,"flixel.input.keyboard.FlxKeyList.get_INSERT","flixel/input/keyboard/FlxKeyList.hx",59,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	return ::flixel::FlxG_obj::keys->checkStatus((int)45,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_INSERT,return )

bool FlxKeyList_obj::get_ESCAPE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_ESCAPE",0x4fd5999c,"flixel.input.keyboard.FlxKeyList.get_ESCAPE","flixel/input/keyboard/FlxKeyList.hx",60,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	return ::flixel::FlxG_obj::keys->checkStatus((int)27,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ESCAPE,return )

bool FlxKeyList_obj::get_MINUS( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_MINUS",0xd5460a95,"flixel.input.keyboard.FlxKeyList.get_MINUS","flixel/input/keyboard/FlxKeyList.hx",61,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	return ::flixel::FlxG_obj::keys->checkStatus((int)189,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_MINUS,return )

bool FlxKeyList_obj::get_PLUS( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_PLUS",0x243d64b5,"flixel.input.keyboard.FlxKeyList.get_PLUS","flixel/input/keyboard/FlxKeyList.hx",62,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	return ::flixel::FlxG_obj::keys->checkStatus((int)187,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_PLUS,return )

bool FlxKeyList_obj::get_DELETE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_DELETE",0xdfd41646,"flixel.input.keyboard.FlxKeyList.get_DELETE","flixel/input/keyboard/FlxKeyList.hx",63,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(63)
	return ::flixel::FlxG_obj::keys->checkStatus((int)46,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_DELETE,return )

bool FlxKeyList_obj::get_BACKSPACE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_BACKSPACE",0x4ee94de4,"flixel.input.keyboard.FlxKeyList.get_BACKSPACE","flixel/input/keyboard/FlxKeyList.hx",64,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(64)
	return ::flixel::FlxG_obj::keys->checkStatus((int)8,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_BACKSPACE,return )

bool FlxKeyList_obj::get_LBRACKET( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_LBRACKET",0xe7dfe217,"flixel.input.keyboard.FlxKeyList.get_LBRACKET","flixel/input/keyboard/FlxKeyList.hx",65,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	return ::flixel::FlxG_obj::keys->checkStatus((int)219,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_LBRACKET,return )

bool FlxKeyList_obj::get_RBRACKET( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_RBRACKET",0x3f0e8ed1,"flixel.input.keyboard.FlxKeyList.get_RBRACKET","flixel/input/keyboard/FlxKeyList.hx",66,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	return ::flixel::FlxG_obj::keys->checkStatus((int)221,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_RBRACKET,return )

bool FlxKeyList_obj::get_BACKSLASH( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_BACKSLASH",0x4c44815b,"flixel.input.keyboard.FlxKeyList.get_BACKSLASH","flixel/input/keyboard/FlxKeyList.hx",67,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	return ::flixel::FlxG_obj::keys->checkStatus((int)220,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_BACKSLASH,return )

bool FlxKeyList_obj::get_CAPSLOCK( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_CAPSLOCK",0x51fa1367,"flixel.input.keyboard.FlxKeyList.get_CAPSLOCK","flixel/input/keyboard/FlxKeyList.hx",68,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	return ::flixel::FlxG_obj::keys->checkStatus((int)20,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_CAPSLOCK,return )

bool FlxKeyList_obj::get_SEMICOLON( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_SEMICOLON",0xd1d0ded6,"flixel.input.keyboard.FlxKeyList.get_SEMICOLON","flixel/input/keyboard/FlxKeyList.hx",69,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(69)
	return ::flixel::FlxG_obj::keys->checkStatus((int)186,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SEMICOLON,return )

bool FlxKeyList_obj::get_QUOTE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_QUOTE",0x2acfad61,"flixel.input.keyboard.FlxKeyList.get_QUOTE","flixel/input/keyboard/FlxKeyList.hx",70,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	return ::flixel::FlxG_obj::keys->checkStatus((int)222,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_QUOTE,return )

bool FlxKeyList_obj::get_ENTER( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_ENTER",0x3d63f73d,"flixel.input.keyboard.FlxKeyList.get_ENTER","flixel/input/keyboard/FlxKeyList.hx",71,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	return ::flixel::FlxG_obj::keys->checkStatus((int)13,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ENTER,return )

bool FlxKeyList_obj::get_SHIFT( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_SHIFT",0x490076a7,"flixel.input.keyboard.FlxKeyList.get_SHIFT","flixel/input/keyboard/FlxKeyList.hx",72,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	return ::flixel::FlxG_obj::keys->checkStatus((int)16,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SHIFT,return )

bool FlxKeyList_obj::get_COMMA( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_COMMA",0x173abbfa,"flixel.input.keyboard.FlxKeyList.get_COMMA","flixel/input/keyboard/FlxKeyList.hx",73,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	return ::flixel::FlxG_obj::keys->checkStatus((int)188,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_COMMA,return )

bool FlxKeyList_obj::get_PERIOD( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_PERIOD",0xb016b71c,"flixel.input.keyboard.FlxKeyList.get_PERIOD","flixel/input/keyboard/FlxKeyList.hx",74,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	return ::flixel::FlxG_obj::keys->checkStatus((int)190,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_PERIOD,return )

bool FlxKeyList_obj::get_SLASH( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_SLASH",0x4b9f4a62,"flixel.input.keyboard.FlxKeyList.get_SLASH","flixel/input/keyboard/FlxKeyList.hx",75,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	return ::flixel::FlxG_obj::keys->checkStatus((int)191,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SLASH,return )

bool FlxKeyList_obj::get_NUMPADSLASH( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADSLASH",0xec483635,"flixel.input.keyboard.FlxKeyList.get_NUMPADSLASH","flixel/input/keyboard/FlxKeyList.hx",76,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	return ::flixel::FlxG_obj::keys->checkStatus((int)191,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADSLASH,return )

bool FlxKeyList_obj::get_GRAVEACCENT( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_GRAVEACCENT",0xd01c3774,"flixel.input.keyboard.FlxKeyList.get_GRAVEACCENT","flixel/input/keyboard/FlxKeyList.hx",77,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	return ::flixel::FlxG_obj::keys->checkStatus((int)192,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_GRAVEACCENT,return )

bool FlxKeyList_obj::get_CONTROL( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_CONTROL",0x00716cc2,"flixel.input.keyboard.FlxKeyList.get_CONTROL","flixel/input/keyboard/FlxKeyList.hx",78,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	return ::flixel::FlxG_obj::keys->checkStatus((int)17,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_CONTROL,return )

bool FlxKeyList_obj::get_ALT( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_ALT",0x575d5c0e,"flixel.input.keyboard.FlxKeyList.get_ALT","flixel/input/keyboard/FlxKeyList.hx",79,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	return ::flixel::FlxG_obj::keys->checkStatus((int)18,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ALT,return )

bool FlxKeyList_obj::get_SPACE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_SPACE",0x4e4416eb,"flixel.input.keyboard.FlxKeyList.get_SPACE","flixel/input/keyboard/FlxKeyList.hx",80,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	return ::flixel::FlxG_obj::keys->checkStatus((int)32,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SPACE,return )

bool FlxKeyList_obj::get_UP( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_UP",0xe5fd0af6,"flixel.input.keyboard.FlxKeyList.get_UP","flixel/input/keyboard/FlxKeyList.hx",81,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	return ::flixel::FlxG_obj::keys->checkStatus((int)38,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_UP,return )

bool FlxKeyList_obj::get_DOWN( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_DOWN",0x1c511dbd,"flixel.input.keyboard.FlxKeyList.get_DOWN","flixel/input/keyboard/FlxKeyList.hx",82,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	return ::flixel::FlxG_obj::keys->checkStatus((int)40,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_DOWN,return )

bool FlxKeyList_obj::get_LEFT( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_LEFT",0x21932d62,"flixel.input.keyboard.FlxKeyList.get_LEFT","flixel/input/keyboard/FlxKeyList.hx",83,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	return ::flixel::FlxG_obj::keys->checkStatus((int)37,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_LEFT,return )

bool FlxKeyList_obj::get_RIGHT( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_RIGHT",0xb6419601,"flixel.input.keyboard.FlxKeyList.get_RIGHT","flixel/input/keyboard/FlxKeyList.hx",84,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(84)
	return ::flixel::FlxG_obj::keys->checkStatus((int)39,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_RIGHT,return )

bool FlxKeyList_obj::get_TAB( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_TAB",0x576bbd3a,"flixel.input.keyboard.FlxKeyList.get_TAB","flixel/input/keyboard/FlxKeyList.hx",85,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(85)
	return ::flixel::FlxG_obj::keys->checkStatus((int)9,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_TAB,return )

bool FlxKeyList_obj::get_PRINTSCREEN( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_PRINTSCREEN",0xd1fe533e,"flixel.input.keyboard.FlxKeyList.get_PRINTSCREEN","flixel/input/keyboard/FlxKeyList.hx",86,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	return ::flixel::FlxG_obj::keys->checkStatus((int)301,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_PRINTSCREEN,return )

bool FlxKeyList_obj::get_F1( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F1",0xe5fcfdc6,"flixel.input.keyboard.FlxKeyList.get_F1","flixel/input/keyboard/FlxKeyList.hx",87,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(87)
	return ::flixel::FlxG_obj::keys->checkStatus((int)112,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F1,return )

bool FlxKeyList_obj::get_F2( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F2",0xe5fcfdc7,"flixel.input.keyboard.FlxKeyList.get_F2","flixel/input/keyboard/FlxKeyList.hx",88,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	return ::flixel::FlxG_obj::keys->checkStatus((int)113,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F2,return )

bool FlxKeyList_obj::get_F3( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F3",0xe5fcfdc8,"flixel.input.keyboard.FlxKeyList.get_F3","flixel/input/keyboard/FlxKeyList.hx",89,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(89)
	return ::flixel::FlxG_obj::keys->checkStatus((int)114,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F3,return )

bool FlxKeyList_obj::get_F4( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F4",0xe5fcfdc9,"flixel.input.keyboard.FlxKeyList.get_F4","flixel/input/keyboard/FlxKeyList.hx",90,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	return ::flixel::FlxG_obj::keys->checkStatus((int)115,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F4,return )

bool FlxKeyList_obj::get_F5( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F5",0xe5fcfdca,"flixel.input.keyboard.FlxKeyList.get_F5","flixel/input/keyboard/FlxKeyList.hx",91,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	return ::flixel::FlxG_obj::keys->checkStatus((int)116,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F5,return )

bool FlxKeyList_obj::get_F6( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F6",0xe5fcfdcb,"flixel.input.keyboard.FlxKeyList.get_F6","flixel/input/keyboard/FlxKeyList.hx",92,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	return ::flixel::FlxG_obj::keys->checkStatus((int)117,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F6,return )

bool FlxKeyList_obj::get_F7( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F7",0xe5fcfdcc,"flixel.input.keyboard.FlxKeyList.get_F7","flixel/input/keyboard/FlxKeyList.hx",93,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(93)
	return ::flixel::FlxG_obj::keys->checkStatus((int)118,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F7,return )

bool FlxKeyList_obj::get_F8( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F8",0xe5fcfdcd,"flixel.input.keyboard.FlxKeyList.get_F8","flixel/input/keyboard/FlxKeyList.hx",94,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(94)
	return ::flixel::FlxG_obj::keys->checkStatus((int)119,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F8,return )

bool FlxKeyList_obj::get_F9( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F9",0xe5fcfdce,"flixel.input.keyboard.FlxKeyList.get_F9","flixel/input/keyboard/FlxKeyList.hx",95,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	return ::flixel::FlxG_obj::keys->checkStatus((int)120,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F9,return )

bool FlxKeyList_obj::get_F10( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F10",0x57610faa,"flixel.input.keyboard.FlxKeyList.get_F10","flixel/input/keyboard/FlxKeyList.hx",96,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(96)
	return ::flixel::FlxG_obj::keys->checkStatus((int)121,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F10,return )

bool FlxKeyList_obj::get_F11( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F11",0x57610fab,"flixel.input.keyboard.FlxKeyList.get_F11","flixel/input/keyboard/FlxKeyList.hx",97,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	return ::flixel::FlxG_obj::keys->checkStatus((int)122,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F11,return )

bool FlxKeyList_obj::get_F12( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F12",0x57610fac,"flixel.input.keyboard.FlxKeyList.get_F12","flixel/input/keyboard/FlxKeyList.hx",98,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(98)
	return ::flixel::FlxG_obj::keys->checkStatus((int)123,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F12,return )

bool FlxKeyList_obj::get_NUMPADONE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADONE",0xe4b03e5e,"flixel.input.keyboard.FlxKeyList.get_NUMPADONE","flixel/input/keyboard/FlxKeyList.hx",99,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(99)
	return ::flixel::FlxG_obj::keys->checkStatus((int)97,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADONE,return )

bool FlxKeyList_obj::get_NUMPADTWO( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADTWO",0xe4b41184,"flixel.input.keyboard.FlxKeyList.get_NUMPADTWO","flixel/input/keyboard/FlxKeyList.hx",100,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(100)
	return ::flixel::FlxG_obj::keys->checkStatus((int)98,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADTWO,return )

bool FlxKeyList_obj::get_NUMPADTHREE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADTHREE",0x7d16ca56,"flixel.input.keyboard.FlxKeyList.get_NUMPADTHREE","flixel/input/keyboard/FlxKeyList.hx",101,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	return ::flixel::FlxG_obj::keys->checkStatus((int)99,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADTHREE,return )

bool FlxKeyList_obj::get_NUMPADFOUR( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADFOUR",0x2f9438ce,"flixel.input.keyboard.FlxKeyList.get_NUMPADFOUR","flixel/input/keyboard/FlxKeyList.hx",102,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	return ::flixel::FlxG_obj::keys->checkStatus((int)100,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADFOUR,return )

bool FlxKeyList_obj::get_NUMPADFIVE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADFIVE",0x2f8fac1a,"flixel.input.keyboard.FlxKeyList.get_NUMPADFIVE","flixel/input/keyboard/FlxKeyList.hx",103,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	return ::flixel::FlxG_obj::keys->checkStatus((int)101,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADFIVE,return )

bool FlxKeyList_obj::get_NUMPADSIX( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADSIX",0xe4b3431a,"flixel.input.keyboard.FlxKeyList.get_NUMPADSIX","flixel/input/keyboard/FlxKeyList.hx",104,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(104)
	return ::flixel::FlxG_obj::keys->checkStatus((int)102,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADSIX,return )

bool FlxKeyList_obj::get_NUMPADSEVEN( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADSEVEN",0xe7b79b05,"flixel.input.keyboard.FlxKeyList.get_NUMPADSEVEN","flixel/input/keyboard/FlxKeyList.hx",105,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(105)
	return ::flixel::FlxG_obj::keys->checkStatus((int)103,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADSEVEN,return )

bool FlxKeyList_obj::get_NUMPADEIGHT( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADEIGHT",0xdab4f747,"flixel.input.keyboard.FlxKeyList.get_NUMPADEIGHT","flixel/input/keyboard/FlxKeyList.hx",106,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	return ::flixel::FlxG_obj::keys->checkStatus((int)104,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADEIGHT,return )

bool FlxKeyList_obj::get_NUMPADNINE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADNINE",0x34d95a1a,"flixel.input.keyboard.FlxKeyList.get_NUMPADNINE","flixel/input/keyboard/FlxKeyList.hx",107,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(107)
	return ::flixel::FlxG_obj::keys->checkStatus((int)105,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADNINE,return )

bool FlxKeyList_obj::get_NUMPADZERO( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADZERO",0x3cc4e410,"flixel.input.keyboard.FlxKeyList.get_NUMPADZERO","flixel/input/keyboard/FlxKeyList.hx",108,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(108)
	return ::flixel::FlxG_obj::keys->checkStatus((int)96,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADZERO,return )

bool FlxKeyList_obj::get_NUMPADMINUS( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADMINUS",0x75eef668,"flixel.input.keyboard.FlxKeyList.get_NUMPADMINUS","flixel/input/keyboard/FlxKeyList.hx",109,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(109)
	return ::flixel::FlxG_obj::keys->checkStatus((int)109,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADMINUS,return )

bool FlxKeyList_obj::get_NUMPADPLUS( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADPLUS",0x362e1442,"flixel.input.keyboard.FlxKeyList.get_NUMPADPLUS","flixel/input/keyboard/FlxKeyList.hx",110,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(110)
	return ::flixel::FlxG_obj::keys->checkStatus((int)107,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADPLUS,return )

bool FlxKeyList_obj::get_NUMPADPERIOD( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADPERIOD",0xa33c23e9,"flixel.input.keyboard.FlxKeyList.get_NUMPADPERIOD","flixel/input/keyboard/FlxKeyList.hx",111,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(111)
	return ::flixel::FlxG_obj::keys->checkStatus((int)110,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADPERIOD,return )

bool FlxKeyList_obj::get_NUMPADMULTIPLY( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADMULTIPLY",0xde92130c,"flixel.input.keyboard.FlxKeyList.get_NUMPADMULTIPLY","flixel/input/keyboard/FlxKeyList.hx",112,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(112)
	return ::flixel::FlxG_obj::keys->checkStatus((int)106,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADMULTIPLY,return )

bool FlxKeyList_obj::get_ANY( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_ANY",0x575d5dd1,"flixel.input.keyboard.FlxKeyList.get_ANY","flixel/input/keyboard/FlxKeyList.hx",117,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	::flixel::input::keyboard::FlxKey key = null();		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(119)
	int keyCode = (int)256;		HX_STACK_VAR(keyCode,"keyCode");
	HX_STACK_LINE(120)
	while((true)){
		HX_STACK_LINE(120)
		int _g = (keyCode)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		if ((!(((_g >= (int)0))))){
			HX_STACK_LINE(120)
			break;
		}
		HX_STACK_LINE(122)
		key = ::flixel::FlxG_obj::keys->_keyList->__get(keyCode).StaticCast< ::flixel::input::keyboard::FlxKey >();
		HX_STACK_LINE(123)
		if (((key != null()))){
			HX_STACK_LINE(125)
			if ((::flixel::FlxG_obj::keys->checkStatus(keyCode,this->checkStatus))){
				HX_STACK_LINE(127)
				return true;
			}
		}
	}
	HX_STACK_LINE(132)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ANY,return )

bool FlxKeyList_obj::check( int keyCode){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","check",0x30337fb6,"flixel.input.keyboard.FlxKeyList.check","flixel/input/keyboard/FlxKeyList.hx",137,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(keyCode,"keyCode")
	HX_STACK_LINE(137)
	return ::flixel::FlxG_obj::keys->checkStatus(keyCode,this->checkStatus);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyList_obj,check,return )


FlxKeyList_obj::FlxKeyList_obj()
{
}

Dynamic FlxKeyList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"A") ) { return get_A(); }
		if (HX_FIELD_EQ(inName,"B") ) { return get_B(); }
		if (HX_FIELD_EQ(inName,"C") ) { return get_C(); }
		if (HX_FIELD_EQ(inName,"D") ) { return get_D(); }
		if (HX_FIELD_EQ(inName,"E") ) { return get_E(); }
		if (HX_FIELD_EQ(inName,"F") ) { return get_F(); }
		if (HX_FIELD_EQ(inName,"G") ) { return get_G(); }
		if (HX_FIELD_EQ(inName,"H") ) { return get_H(); }
		if (HX_FIELD_EQ(inName,"I") ) { return get_I(); }
		if (HX_FIELD_EQ(inName,"J") ) { return get_J(); }
		if (HX_FIELD_EQ(inName,"K") ) { return get_K(); }
		if (HX_FIELD_EQ(inName,"L") ) { return get_L(); }
		if (HX_FIELD_EQ(inName,"M") ) { return get_M(); }
		if (HX_FIELD_EQ(inName,"N") ) { return get_N(); }
		if (HX_FIELD_EQ(inName,"O") ) { return get_O(); }
		if (HX_FIELD_EQ(inName,"P") ) { return get_P(); }
		if (HX_FIELD_EQ(inName,"Q") ) { return get_Q(); }
		if (HX_FIELD_EQ(inName,"R") ) { return get_R(); }
		if (HX_FIELD_EQ(inName,"S") ) { return get_S(); }
		if (HX_FIELD_EQ(inName,"T") ) { return get_T(); }
		if (HX_FIELD_EQ(inName,"U") ) { return get_U(); }
		if (HX_FIELD_EQ(inName,"V") ) { return get_V(); }
		if (HX_FIELD_EQ(inName,"W") ) { return get_W(); }
		if (HX_FIELD_EQ(inName,"X") ) { return get_X(); }
		if (HX_FIELD_EQ(inName,"Y") ) { return get_Y(); }
		if (HX_FIELD_EQ(inName,"Z") ) { return get_Z(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"UP") ) { return get_UP(); }
		if (HX_FIELD_EQ(inName,"F1") ) { return get_F1(); }
		if (HX_FIELD_EQ(inName,"F2") ) { return get_F2(); }
		if (HX_FIELD_EQ(inName,"F3") ) { return get_F3(); }
		if (HX_FIELD_EQ(inName,"F4") ) { return get_F4(); }
		if (HX_FIELD_EQ(inName,"F5") ) { return get_F5(); }
		if (HX_FIELD_EQ(inName,"F6") ) { return get_F6(); }
		if (HX_FIELD_EQ(inName,"F7") ) { return get_F7(); }
		if (HX_FIELD_EQ(inName,"F8") ) { return get_F8(); }
		if (HX_FIELD_EQ(inName,"F9") ) { return get_F9(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ONE") ) { return get_ONE(); }
		if (HX_FIELD_EQ(inName,"TWO") ) { return get_TWO(); }
		if (HX_FIELD_EQ(inName,"SIX") ) { return get_SIX(); }
		if (HX_FIELD_EQ(inName,"END") ) { return get_END(); }
		if (HX_FIELD_EQ(inName,"ALT") ) { return get_ALT(); }
		if (HX_FIELD_EQ(inName,"TAB") ) { return get_TAB(); }
		if (HX_FIELD_EQ(inName,"F10") ) { return get_F10(); }
		if (HX_FIELD_EQ(inName,"F11") ) { return get_F11(); }
		if (HX_FIELD_EQ(inName,"F12") ) { return get_F12(); }
		if (HX_FIELD_EQ(inName,"ANY") ) { return get_ANY(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ZERO") ) { return get_ZERO(); }
		if (HX_FIELD_EQ(inName,"FOUR") ) { return get_FOUR(); }
		if (HX_FIELD_EQ(inName,"FIVE") ) { return get_FIVE(); }
		if (HX_FIELD_EQ(inName,"NINE") ) { return get_NINE(); }
		if (HX_FIELD_EQ(inName,"HOME") ) { return get_HOME(); }
		if (HX_FIELD_EQ(inName,"PLUS") ) { return get_PLUS(); }
		if (HX_FIELD_EQ(inName,"DOWN") ) { return get_DOWN(); }
		if (HX_FIELD_EQ(inName,"LEFT") ) { return get_LEFT(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_A") ) { return get_A_dyn(); }
		if (HX_FIELD_EQ(inName,"get_B") ) { return get_B_dyn(); }
		if (HX_FIELD_EQ(inName,"get_C") ) { return get_C_dyn(); }
		if (HX_FIELD_EQ(inName,"get_D") ) { return get_D_dyn(); }
		if (HX_FIELD_EQ(inName,"get_E") ) { return get_E_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F") ) { return get_F_dyn(); }
		if (HX_FIELD_EQ(inName,"get_G") ) { return get_G_dyn(); }
		if (HX_FIELD_EQ(inName,"get_H") ) { return get_H_dyn(); }
		if (HX_FIELD_EQ(inName,"get_I") ) { return get_I_dyn(); }
		if (HX_FIELD_EQ(inName,"get_J") ) { return get_J_dyn(); }
		if (HX_FIELD_EQ(inName,"get_K") ) { return get_K_dyn(); }
		if (HX_FIELD_EQ(inName,"get_L") ) { return get_L_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M") ) { return get_M_dyn(); }
		if (HX_FIELD_EQ(inName,"get_N") ) { return get_N_dyn(); }
		if (HX_FIELD_EQ(inName,"get_O") ) { return get_O_dyn(); }
		if (HX_FIELD_EQ(inName,"get_P") ) { return get_P_dyn(); }
		if (HX_FIELD_EQ(inName,"get_Q") ) { return get_Q_dyn(); }
		if (HX_FIELD_EQ(inName,"get_R") ) { return get_R_dyn(); }
		if (HX_FIELD_EQ(inName,"get_S") ) { return get_S_dyn(); }
		if (HX_FIELD_EQ(inName,"get_T") ) { return get_T_dyn(); }
		if (HX_FIELD_EQ(inName,"get_U") ) { return get_U_dyn(); }
		if (HX_FIELD_EQ(inName,"get_V") ) { return get_V_dyn(); }
		if (HX_FIELD_EQ(inName,"get_W") ) { return get_W_dyn(); }
		if (HX_FIELD_EQ(inName,"get_X") ) { return get_X_dyn(); }
		if (HX_FIELD_EQ(inName,"get_Y") ) { return get_Y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_Z") ) { return get_Z_dyn(); }
		if (HX_FIELD_EQ(inName,"THREE") ) { return get_THREE(); }
		if (HX_FIELD_EQ(inName,"SEVEN") ) { return get_SEVEN(); }
		if (HX_FIELD_EQ(inName,"EIGHT") ) { return get_EIGHT(); }
		if (HX_FIELD_EQ(inName,"MINUS") ) { return get_MINUS(); }
		if (HX_FIELD_EQ(inName,"QUOTE") ) { return get_QUOTE(); }
		if (HX_FIELD_EQ(inName,"ENTER") ) { return get_ENTER(); }
		if (HX_FIELD_EQ(inName,"SHIFT") ) { return get_SHIFT(); }
		if (HX_FIELD_EQ(inName,"COMMA") ) { return get_COMMA(); }
		if (HX_FIELD_EQ(inName,"SLASH") ) { return get_SLASH(); }
		if (HX_FIELD_EQ(inName,"SPACE") ) { return get_SPACE(); }
		if (HX_FIELD_EQ(inName,"RIGHT") ) { return get_RIGHT(); }
		if (HX_FIELD_EQ(inName,"check") ) { return check_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"PAGEUP") ) { return get_PAGEUP(); }
		if (HX_FIELD_EQ(inName,"INSERT") ) { return get_INSERT(); }
		if (HX_FIELD_EQ(inName,"ESCAPE") ) { return get_ESCAPE(); }
		if (HX_FIELD_EQ(inName,"DELETE") ) { return get_DELETE(); }
		if (HX_FIELD_EQ(inName,"PERIOD") ) { return get_PERIOD(); }
		if (HX_FIELD_EQ(inName,"get_UP") ) { return get_UP_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F1") ) { return get_F1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F2") ) { return get_F2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F3") ) { return get_F3_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F4") ) { return get_F4_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F5") ) { return get_F5_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F6") ) { return get_F6_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F7") ) { return get_F7_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F8") ) { return get_F8_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F9") ) { return get_F9_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_ONE") ) { return get_ONE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_TWO") ) { return get_TWO_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SIX") ) { return get_SIX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_END") ) { return get_END_dyn(); }
		if (HX_FIELD_EQ(inName,"CONTROL") ) { return get_CONTROL(); }
		if (HX_FIELD_EQ(inName,"get_ALT") ) { return get_ALT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_TAB") ) { return get_TAB_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F10") ) { return get_F10_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F11") ) { return get_F11_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F12") ) { return get_F12_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ANY") ) { return get_ANY_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_ZERO") ) { return get_ZERO_dyn(); }
		if (HX_FIELD_EQ(inName,"get_FOUR") ) { return get_FOUR_dyn(); }
		if (HX_FIELD_EQ(inName,"get_FIVE") ) { return get_FIVE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NINE") ) { return get_NINE_dyn(); }
		if (HX_FIELD_EQ(inName,"PAGEDOWN") ) { return get_PAGEDOWN(); }
		if (HX_FIELD_EQ(inName,"get_HOME") ) { return get_HOME_dyn(); }
		if (HX_FIELD_EQ(inName,"get_PLUS") ) { return get_PLUS_dyn(); }
		if (HX_FIELD_EQ(inName,"LBRACKET") ) { return get_LBRACKET(); }
		if (HX_FIELD_EQ(inName,"RBRACKET") ) { return get_RBRACKET(); }
		if (HX_FIELD_EQ(inName,"CAPSLOCK") ) { return get_CAPSLOCK(); }
		if (HX_FIELD_EQ(inName,"get_DOWN") ) { return get_DOWN_dyn(); }
		if (HX_FIELD_EQ(inName,"get_LEFT") ) { return get_LEFT_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_THREE") ) { return get_THREE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SEVEN") ) { return get_SEVEN_dyn(); }
		if (HX_FIELD_EQ(inName,"get_EIGHT") ) { return get_EIGHT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_MINUS") ) { return get_MINUS_dyn(); }
		if (HX_FIELD_EQ(inName,"BACKSPACE") ) { return get_BACKSPACE(); }
		if (HX_FIELD_EQ(inName,"BACKSLASH") ) { return get_BACKSLASH(); }
		if (HX_FIELD_EQ(inName,"SEMICOLON") ) { return get_SEMICOLON(); }
		if (HX_FIELD_EQ(inName,"get_QUOTE") ) { return get_QUOTE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ENTER") ) { return get_ENTER_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SHIFT") ) { return get_SHIFT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_COMMA") ) { return get_COMMA_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SLASH") ) { return get_SLASH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SPACE") ) { return get_SPACE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_RIGHT") ) { return get_RIGHT_dyn(); }
		if (HX_FIELD_EQ(inName,"NUMPADONE") ) { return get_NUMPADONE(); }
		if (HX_FIELD_EQ(inName,"NUMPADTWO") ) { return get_NUMPADTWO(); }
		if (HX_FIELD_EQ(inName,"NUMPADSIX") ) { return get_NUMPADSIX(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_PAGEUP") ) { return get_PAGEUP_dyn(); }
		if (HX_FIELD_EQ(inName,"get_INSERT") ) { return get_INSERT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ESCAPE") ) { return get_ESCAPE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_DELETE") ) { return get_DELETE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_PERIOD") ) { return get_PERIOD_dyn(); }
		if (HX_FIELD_EQ(inName,"NUMPADFOUR") ) { return get_NUMPADFOUR(); }
		if (HX_FIELD_EQ(inName,"NUMPADFIVE") ) { return get_NUMPADFIVE(); }
		if (HX_FIELD_EQ(inName,"NUMPADNINE") ) { return get_NUMPADNINE(); }
		if (HX_FIELD_EQ(inName,"NUMPADZERO") ) { return get_NUMPADZERO(); }
		if (HX_FIELD_EQ(inName,"NUMPADPLUS") ) { return get_NUMPADPLUS(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkStatus") ) { return checkStatus; }
		if (HX_FIELD_EQ(inName,"NUMPADSLASH") ) { return get_NUMPADSLASH(); }
		if (HX_FIELD_EQ(inName,"GRAVEACCENT") ) { return get_GRAVEACCENT(); }
		if (HX_FIELD_EQ(inName,"get_CONTROL") ) { return get_CONTROL_dyn(); }
		if (HX_FIELD_EQ(inName,"PRINTSCREEN") ) { return get_PRINTSCREEN(); }
		if (HX_FIELD_EQ(inName,"NUMPADTHREE") ) { return get_NUMPADTHREE(); }
		if (HX_FIELD_EQ(inName,"NUMPADSEVEN") ) { return get_NUMPADSEVEN(); }
		if (HX_FIELD_EQ(inName,"NUMPADEIGHT") ) { return get_NUMPADEIGHT(); }
		if (HX_FIELD_EQ(inName,"NUMPADMINUS") ) { return get_NUMPADMINUS(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_PAGEDOWN") ) { return get_PAGEDOWN_dyn(); }
		if (HX_FIELD_EQ(inName,"get_LBRACKET") ) { return get_LBRACKET_dyn(); }
		if (HX_FIELD_EQ(inName,"get_RBRACKET") ) { return get_RBRACKET_dyn(); }
		if (HX_FIELD_EQ(inName,"get_CAPSLOCK") ) { return get_CAPSLOCK_dyn(); }
		if (HX_FIELD_EQ(inName,"NUMPADPERIOD") ) { return get_NUMPADPERIOD(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_BACKSPACE") ) { return get_BACKSPACE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_BACKSLASH") ) { return get_BACKSLASH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SEMICOLON") ) { return get_SEMICOLON_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADONE") ) { return get_NUMPADONE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADTWO") ) { return get_NUMPADTWO_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADSIX") ) { return get_NUMPADSIX_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_NUMPADFOUR") ) { return get_NUMPADFOUR_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADFIVE") ) { return get_NUMPADFIVE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADNINE") ) { return get_NUMPADNINE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADZERO") ) { return get_NUMPADZERO_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADPLUS") ) { return get_NUMPADPLUS_dyn(); }
		if (HX_FIELD_EQ(inName,"NUMPADMULTIPLY") ) { return get_NUMPADMULTIPLY(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_NUMPADSLASH") ) { return get_NUMPADSLASH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_GRAVEACCENT") ) { return get_GRAVEACCENT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_PRINTSCREEN") ) { return get_PRINTSCREEN_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADTHREE") ) { return get_NUMPADTHREE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADSEVEN") ) { return get_NUMPADSEVEN_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADEIGHT") ) { return get_NUMPADEIGHT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADMINUS") ) { return get_NUMPADMINUS_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_NUMPADPERIOD") ) { return get_NUMPADPERIOD_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_NUMPADMULTIPLY") ) { return get_NUMPADMULTIPLY_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxKeyList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"checkStatus") ) { checkStatus=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxKeyList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("checkStatus"));
	outFields->push(HX_CSTRING("A"));
	outFields->push(HX_CSTRING("B"));
	outFields->push(HX_CSTRING("C"));
	outFields->push(HX_CSTRING("D"));
	outFields->push(HX_CSTRING("E"));
	outFields->push(HX_CSTRING("F"));
	outFields->push(HX_CSTRING("G"));
	outFields->push(HX_CSTRING("H"));
	outFields->push(HX_CSTRING("I"));
	outFields->push(HX_CSTRING("J"));
	outFields->push(HX_CSTRING("K"));
	outFields->push(HX_CSTRING("L"));
	outFields->push(HX_CSTRING("M"));
	outFields->push(HX_CSTRING("N"));
	outFields->push(HX_CSTRING("O"));
	outFields->push(HX_CSTRING("P"));
	outFields->push(HX_CSTRING("Q"));
	outFields->push(HX_CSTRING("R"));
	outFields->push(HX_CSTRING("S"));
	outFields->push(HX_CSTRING("T"));
	outFields->push(HX_CSTRING("U"));
	outFields->push(HX_CSTRING("V"));
	outFields->push(HX_CSTRING("W"));
	outFields->push(HX_CSTRING("X"));
	outFields->push(HX_CSTRING("Y"));
	outFields->push(HX_CSTRING("Z"));
	outFields->push(HX_CSTRING("ZERO"));
	outFields->push(HX_CSTRING("ONE"));
	outFields->push(HX_CSTRING("TWO"));
	outFields->push(HX_CSTRING("THREE"));
	outFields->push(HX_CSTRING("FOUR"));
	outFields->push(HX_CSTRING("FIVE"));
	outFields->push(HX_CSTRING("SIX"));
	outFields->push(HX_CSTRING("SEVEN"));
	outFields->push(HX_CSTRING("EIGHT"));
	outFields->push(HX_CSTRING("NINE"));
	outFields->push(HX_CSTRING("PAGEUP"));
	outFields->push(HX_CSTRING("PAGEDOWN"));
	outFields->push(HX_CSTRING("HOME"));
	outFields->push(HX_CSTRING("END"));
	outFields->push(HX_CSTRING("INSERT"));
	outFields->push(HX_CSTRING("ESCAPE"));
	outFields->push(HX_CSTRING("MINUS"));
	outFields->push(HX_CSTRING("PLUS"));
	outFields->push(HX_CSTRING("DELETE"));
	outFields->push(HX_CSTRING("BACKSPACE"));
	outFields->push(HX_CSTRING("LBRACKET"));
	outFields->push(HX_CSTRING("RBRACKET"));
	outFields->push(HX_CSTRING("BACKSLASH"));
	outFields->push(HX_CSTRING("CAPSLOCK"));
	outFields->push(HX_CSTRING("SEMICOLON"));
	outFields->push(HX_CSTRING("QUOTE"));
	outFields->push(HX_CSTRING("ENTER"));
	outFields->push(HX_CSTRING("SHIFT"));
	outFields->push(HX_CSTRING("COMMA"));
	outFields->push(HX_CSTRING("PERIOD"));
	outFields->push(HX_CSTRING("SLASH"));
	outFields->push(HX_CSTRING("NUMPADSLASH"));
	outFields->push(HX_CSTRING("GRAVEACCENT"));
	outFields->push(HX_CSTRING("CONTROL"));
	outFields->push(HX_CSTRING("ALT"));
	outFields->push(HX_CSTRING("SPACE"));
	outFields->push(HX_CSTRING("UP"));
	outFields->push(HX_CSTRING("DOWN"));
	outFields->push(HX_CSTRING("LEFT"));
	outFields->push(HX_CSTRING("RIGHT"));
	outFields->push(HX_CSTRING("TAB"));
	outFields->push(HX_CSTRING("PRINTSCREEN"));
	outFields->push(HX_CSTRING("F1"));
	outFields->push(HX_CSTRING("F2"));
	outFields->push(HX_CSTRING("F3"));
	outFields->push(HX_CSTRING("F4"));
	outFields->push(HX_CSTRING("F5"));
	outFields->push(HX_CSTRING("F6"));
	outFields->push(HX_CSTRING("F7"));
	outFields->push(HX_CSTRING("F8"));
	outFields->push(HX_CSTRING("F9"));
	outFields->push(HX_CSTRING("F10"));
	outFields->push(HX_CSTRING("F11"));
	outFields->push(HX_CSTRING("F12"));
	outFields->push(HX_CSTRING("NUMPADONE"));
	outFields->push(HX_CSTRING("NUMPADTWO"));
	outFields->push(HX_CSTRING("NUMPADTHREE"));
	outFields->push(HX_CSTRING("NUMPADFOUR"));
	outFields->push(HX_CSTRING("NUMPADFIVE"));
	outFields->push(HX_CSTRING("NUMPADSIX"));
	outFields->push(HX_CSTRING("NUMPADSEVEN"));
	outFields->push(HX_CSTRING("NUMPADEIGHT"));
	outFields->push(HX_CSTRING("NUMPADNINE"));
	outFields->push(HX_CSTRING("NUMPADZERO"));
	outFields->push(HX_CSTRING("NUMPADMINUS"));
	outFields->push(HX_CSTRING("NUMPADPLUS"));
	outFields->push(HX_CSTRING("NUMPADPERIOD"));
	outFields->push(HX_CSTRING("NUMPADMULTIPLY"));
	outFields->push(HX_CSTRING("ANY"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxKeyList_obj,checkStatus),HX_CSTRING("checkStatus")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("checkStatus"),
	HX_CSTRING("get_A"),
	HX_CSTRING("get_B"),
	HX_CSTRING("get_C"),
	HX_CSTRING("get_D"),
	HX_CSTRING("get_E"),
	HX_CSTRING("get_F"),
	HX_CSTRING("get_G"),
	HX_CSTRING("get_H"),
	HX_CSTRING("get_I"),
	HX_CSTRING("get_J"),
	HX_CSTRING("get_K"),
	HX_CSTRING("get_L"),
	HX_CSTRING("get_M"),
	HX_CSTRING("get_N"),
	HX_CSTRING("get_O"),
	HX_CSTRING("get_P"),
	HX_CSTRING("get_Q"),
	HX_CSTRING("get_R"),
	HX_CSTRING("get_S"),
	HX_CSTRING("get_T"),
	HX_CSTRING("get_U"),
	HX_CSTRING("get_V"),
	HX_CSTRING("get_W"),
	HX_CSTRING("get_X"),
	HX_CSTRING("get_Y"),
	HX_CSTRING("get_Z"),
	HX_CSTRING("get_ZERO"),
	HX_CSTRING("get_ONE"),
	HX_CSTRING("get_TWO"),
	HX_CSTRING("get_THREE"),
	HX_CSTRING("get_FOUR"),
	HX_CSTRING("get_FIVE"),
	HX_CSTRING("get_SIX"),
	HX_CSTRING("get_SEVEN"),
	HX_CSTRING("get_EIGHT"),
	HX_CSTRING("get_NINE"),
	HX_CSTRING("get_PAGEUP"),
	HX_CSTRING("get_PAGEDOWN"),
	HX_CSTRING("get_HOME"),
	HX_CSTRING("get_END"),
	HX_CSTRING("get_INSERT"),
	HX_CSTRING("get_ESCAPE"),
	HX_CSTRING("get_MINUS"),
	HX_CSTRING("get_PLUS"),
	HX_CSTRING("get_DELETE"),
	HX_CSTRING("get_BACKSPACE"),
	HX_CSTRING("get_LBRACKET"),
	HX_CSTRING("get_RBRACKET"),
	HX_CSTRING("get_BACKSLASH"),
	HX_CSTRING("get_CAPSLOCK"),
	HX_CSTRING("get_SEMICOLON"),
	HX_CSTRING("get_QUOTE"),
	HX_CSTRING("get_ENTER"),
	HX_CSTRING("get_SHIFT"),
	HX_CSTRING("get_COMMA"),
	HX_CSTRING("get_PERIOD"),
	HX_CSTRING("get_SLASH"),
	HX_CSTRING("get_NUMPADSLASH"),
	HX_CSTRING("get_GRAVEACCENT"),
	HX_CSTRING("get_CONTROL"),
	HX_CSTRING("get_ALT"),
	HX_CSTRING("get_SPACE"),
	HX_CSTRING("get_UP"),
	HX_CSTRING("get_DOWN"),
	HX_CSTRING("get_LEFT"),
	HX_CSTRING("get_RIGHT"),
	HX_CSTRING("get_TAB"),
	HX_CSTRING("get_PRINTSCREEN"),
	HX_CSTRING("get_F1"),
	HX_CSTRING("get_F2"),
	HX_CSTRING("get_F3"),
	HX_CSTRING("get_F4"),
	HX_CSTRING("get_F5"),
	HX_CSTRING("get_F6"),
	HX_CSTRING("get_F7"),
	HX_CSTRING("get_F8"),
	HX_CSTRING("get_F9"),
	HX_CSTRING("get_F10"),
	HX_CSTRING("get_F11"),
	HX_CSTRING("get_F12"),
	HX_CSTRING("get_NUMPADONE"),
	HX_CSTRING("get_NUMPADTWO"),
	HX_CSTRING("get_NUMPADTHREE"),
	HX_CSTRING("get_NUMPADFOUR"),
	HX_CSTRING("get_NUMPADFIVE"),
	HX_CSTRING("get_NUMPADSIX"),
	HX_CSTRING("get_NUMPADSEVEN"),
	HX_CSTRING("get_NUMPADEIGHT"),
	HX_CSTRING("get_NUMPADNINE"),
	HX_CSTRING("get_NUMPADZERO"),
	HX_CSTRING("get_NUMPADMINUS"),
	HX_CSTRING("get_NUMPADPLUS"),
	HX_CSTRING("get_NUMPADPERIOD"),
	HX_CSTRING("get_NUMPADMULTIPLY"),
	HX_CSTRING("get_ANY"),
	HX_CSTRING("check"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxKeyList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxKeyList_obj::__mClass,"__mClass");
};

#endif

Class FlxKeyList_obj::__mClass;

void FlxKeyList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.keyboard.FlxKeyList"), hx::TCanCast< FlxKeyList_obj> ,sStaticFields,sMemberFields,
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

void FlxKeyList_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
} // end namespace keyboard
