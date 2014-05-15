#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
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
#ifndef INCLUDED_flash_events_KeyboardEvent
#include <flash/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_replay_CodeValuePair
#include <flixel/system/replay/CodeValuePair.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#include <flixel/system/ui/FlxSoundTray.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace flixel{
namespace input{
namespace keyboard{

Void FlxKeyboard_obj::__construct()
{
HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","new",0xa12d657a,"flixel.input.keyboard.FlxKeyboard.new","flixel/input/keyboard/FlxKeyboard.hx",17,0x41882875)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(27)
	this->enabled = true;
	HX_STACK_LINE(239)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(239)
	this->_keyLookup = _g;
	HX_STACK_LINE(241)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(241)
	this->_keyList = _g1;
	HX_STACK_LINE(242)
	::flixel::util::FlxArrayUtil_obj::setLength_flixel_input_keyboard_FlxKey(this->_keyList,(int)256);
	HX_STACK_LINE(244)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(247)
	i = (int)65;
	HX_STACK_LINE(249)
	while((true)){
		HX_STACK_LINE(249)
		if ((!(((i <= (int)90))))){
			HX_STACK_LINE(249)
			break;
		}
		HX_STACK_LINE(251)
		::String _g2 = ::String::fromCharCode(i);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(251)
		this->addKey(_g2,i);
		HX_STACK_LINE(252)
		(i)++;
	}
	HX_STACK_LINE(256)
	i = (int)48;
	HX_STACK_LINE(257)
	int _g3 = (i)++;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(257)
	this->addKey(HX_CSTRING("ZERO"),_g3);
	HX_STACK_LINE(258)
	int _g4 = (i)++;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(258)
	this->addKey(HX_CSTRING("ONE"),_g4);
	HX_STACK_LINE(259)
	int _g5 = (i)++;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(259)
	this->addKey(HX_CSTRING("TWO"),_g5);
	HX_STACK_LINE(260)
	int _g6 = (i)++;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(260)
	this->addKey(HX_CSTRING("THREE"),_g6);
	HX_STACK_LINE(261)
	int _g7 = (i)++;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(261)
	this->addKey(HX_CSTRING("FOUR"),_g7);
	HX_STACK_LINE(262)
	int _g8 = (i)++;		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(262)
	this->addKey(HX_CSTRING("FIVE"),_g8);
	HX_STACK_LINE(263)
	int _g9 = (i)++;		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(263)
	this->addKey(HX_CSTRING("SIX"),_g9);
	HX_STACK_LINE(264)
	int _g10 = (i)++;		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(264)
	this->addKey(HX_CSTRING("SEVEN"),_g10);
	HX_STACK_LINE(265)
	int _g11 = (i)++;		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(265)
	this->addKey(HX_CSTRING("EIGHT"),_g11);
	HX_STACK_LINE(266)
	int _g12 = (i)++;		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(266)
	this->addKey(HX_CSTRING("NINE"),_g12);
	HX_STACK_LINE(267)
	i = (int)96;
	HX_STACK_LINE(268)
	int _g13 = (i)++;		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(268)
	this->addKey(HX_CSTRING("NUMPADZERO"),_g13);
	HX_STACK_LINE(269)
	int _g14 = (i)++;		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(269)
	this->addKey(HX_CSTRING("NUMPADONE"),_g14);
	HX_STACK_LINE(270)
	int _g15 = (i)++;		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(270)
	this->addKey(HX_CSTRING("NUMPADTWO"),_g15);
	HX_STACK_LINE(271)
	int _g16 = (i)++;		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(271)
	this->addKey(HX_CSTRING("NUMPADTHREE"),_g16);
	HX_STACK_LINE(272)
	int _g17 = (i)++;		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(272)
	this->addKey(HX_CSTRING("NUMPADFOUR"),_g17);
	HX_STACK_LINE(273)
	int _g18 = (i)++;		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(273)
	this->addKey(HX_CSTRING("NUMPADFIVE"),_g18);
	HX_STACK_LINE(274)
	int _g19 = (i)++;		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(274)
	this->addKey(HX_CSTRING("NUMPADSIX"),_g19);
	HX_STACK_LINE(275)
	int _g20 = (i)++;		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(275)
	this->addKey(HX_CSTRING("NUMPADSEVEN"),_g20);
	HX_STACK_LINE(276)
	int _g21 = (i)++;		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(276)
	this->addKey(HX_CSTRING("NUMPADEIGHT"),_g21);
	HX_STACK_LINE(277)
	int _g22 = (i)++;		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(277)
	this->addKey(HX_CSTRING("NUMPADNINE"),_g22);
	HX_STACK_LINE(279)
	this->addKey(HX_CSTRING("PAGEUP"),(int)33);
	HX_STACK_LINE(280)
	this->addKey(HX_CSTRING("PAGEDOWN"),(int)34);
	HX_STACK_LINE(281)
	this->addKey(HX_CSTRING("HOME"),(int)36);
	HX_STACK_LINE(282)
	this->addKey(HX_CSTRING("END"),(int)35);
	HX_STACK_LINE(283)
	this->addKey(HX_CSTRING("INSERT"),(int)45);
	HX_STACK_LINE(286)
	i = (int)1;
	HX_STACK_LINE(287)
	while((true)){
		HX_STACK_LINE(287)
		if ((!(((i <= (int)12))))){
			HX_STACK_LINE(287)
			break;
		}
		HX_STACK_LINE(289)
		this->addKey((HX_CSTRING("F") + i),((int)111 + i));
		HX_STACK_LINE(290)
		(i)++;
	}
	HX_STACK_LINE(294)
	this->addKey(HX_CSTRING("ESCAPE"),(int)27);
	HX_STACK_LINE(295)
	this->addKey(HX_CSTRING("MINUS"),(int)189);
	HX_STACK_LINE(296)
	this->addKey(HX_CSTRING("PLUS"),(int)187);
	HX_STACK_LINE(297)
	this->addKey(HX_CSTRING("DELETE"),(int)46);
	HX_STACK_LINE(298)
	this->addKey(HX_CSTRING("BACKSPACE"),(int)8);
	HX_STACK_LINE(299)
	this->addKey(HX_CSTRING("LBRACKET"),(int)219);
	HX_STACK_LINE(300)
	this->addKey(HX_CSTRING("RBRACKET"),(int)221);
	HX_STACK_LINE(301)
	this->addKey(HX_CSTRING("BACKSLASH"),(int)220);
	HX_STACK_LINE(302)
	this->addKey(HX_CSTRING("CAPSLOCK"),(int)20);
	HX_STACK_LINE(303)
	this->addKey(HX_CSTRING("SEMICOLON"),(int)186);
	HX_STACK_LINE(304)
	this->addKey(HX_CSTRING("QUOTE"),(int)222);
	HX_STACK_LINE(305)
	this->addKey(HX_CSTRING("ENTER"),(int)13);
	HX_STACK_LINE(306)
	this->addKey(HX_CSTRING("SHIFT"),(int)16);
	HX_STACK_LINE(307)
	this->addKey(HX_CSTRING("COMMA"),(int)188);
	HX_STACK_LINE(308)
	this->addKey(HX_CSTRING("PERIOD"),(int)190);
	HX_STACK_LINE(309)
	this->addKey(HX_CSTRING("SLASH"),(int)191);
	HX_STACK_LINE(310)
	this->addKey(HX_CSTRING("NUMPADSLASH"),(int)191);
	HX_STACK_LINE(311)
	this->addKey(HX_CSTRING("GRAVEACCENT"),(int)192);
	HX_STACK_LINE(312)
	this->addKey(HX_CSTRING("CONTROL"),(int)17);
	HX_STACK_LINE(313)
	this->addKey(HX_CSTRING("ALT"),(int)18);
	HX_STACK_LINE(314)
	this->addKey(HX_CSTRING("SPACE"),(int)32);
	HX_STACK_LINE(315)
	this->addKey(HX_CSTRING("UP"),(int)38);
	HX_STACK_LINE(316)
	this->addKey(HX_CSTRING("DOWN"),(int)40);
	HX_STACK_LINE(317)
	this->addKey(HX_CSTRING("LEFT"),(int)37);
	HX_STACK_LINE(318)
	this->addKey(HX_CSTRING("RIGHT"),(int)39);
	HX_STACK_LINE(319)
	this->addKey(HX_CSTRING("TAB"),(int)9);
	HX_STACK_LINE(321)
	this->addKey(HX_CSTRING("NUMPADMULTIPLY"),(int)106);
	HX_STACK_LINE(322)
	this->addKey(HX_CSTRING("NUMPADMINUS"),(int)109);
	HX_STACK_LINE(323)
	this->addKey(HX_CSTRING("NUMPADPLUS"),(int)107);
	HX_STACK_LINE(324)
	this->addKey(HX_CSTRING("NUMPADPERIOD"),(int)110);
	HX_STACK_LINE(327)
	::haxe::ds::StringMap _g23 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(327)
	this->_nativeCorrection = _g23;
	HX_STACK_LINE(329)
	this->_nativeCorrection->set(HX_CSTRING("0_64"),(int)45);
	HX_STACK_LINE(330)
	this->_nativeCorrection->set(HX_CSTRING("0_65"),(int)35);
	HX_STACK_LINE(331)
	this->_nativeCorrection->set(HX_CSTRING("0_67"),(int)34);
	HX_STACK_LINE(332)
	this->_nativeCorrection->set(HX_CSTRING("0_69"),(int)-1);
	HX_STACK_LINE(333)
	this->_nativeCorrection->set(HX_CSTRING("0_73"),(int)33);
	HX_STACK_LINE(334)
	this->_nativeCorrection->set(HX_CSTRING("0_266"),(int)46);
	HX_STACK_LINE(335)
	this->_nativeCorrection->set(HX_CSTRING("123_222"),(int)219);
	HX_STACK_LINE(336)
	this->_nativeCorrection->set(HX_CSTRING("125_187"),(int)221);
	HX_STACK_LINE(337)
	this->_nativeCorrection->set(HX_CSTRING("126_233"),(int)192);
	HX_STACK_LINE(339)
	this->_nativeCorrection->set(HX_CSTRING("0_80"),(int)112);
	HX_STACK_LINE(340)
	this->_nativeCorrection->set(HX_CSTRING("0_81"),(int)113);
	HX_STACK_LINE(341)
	this->_nativeCorrection->set(HX_CSTRING("0_82"),(int)114);
	HX_STACK_LINE(342)
	this->_nativeCorrection->set(HX_CSTRING("0_83"),(int)115);
	HX_STACK_LINE(343)
	this->_nativeCorrection->set(HX_CSTRING("0_84"),(int)116);
	HX_STACK_LINE(344)
	this->_nativeCorrection->set(HX_CSTRING("0_85"),(int)117);
	HX_STACK_LINE(345)
	this->_nativeCorrection->set(HX_CSTRING("0_86"),(int)118);
	HX_STACK_LINE(346)
	this->_nativeCorrection->set(HX_CSTRING("0_87"),(int)119);
	HX_STACK_LINE(347)
	this->_nativeCorrection->set(HX_CSTRING("0_88"),(int)120);
	HX_STACK_LINE(348)
	this->_nativeCorrection->set(HX_CSTRING("0_89"),(int)121);
	HX_STACK_LINE(349)
	this->_nativeCorrection->set(HX_CSTRING("0_90"),(int)122);
	HX_STACK_LINE(351)
	this->_nativeCorrection->set(HX_CSTRING("48_224"),(int)48);
	HX_STACK_LINE(352)
	this->_nativeCorrection->set(HX_CSTRING("49_38"),(int)49);
	HX_STACK_LINE(353)
	this->_nativeCorrection->set(HX_CSTRING("50_233"),(int)50);
	HX_STACK_LINE(354)
	this->_nativeCorrection->set(HX_CSTRING("51_34"),(int)51);
	HX_STACK_LINE(355)
	this->_nativeCorrection->set(HX_CSTRING("52_222"),(int)52);
	HX_STACK_LINE(356)
	this->_nativeCorrection->set(HX_CSTRING("53_40"),(int)53);
	HX_STACK_LINE(357)
	this->_nativeCorrection->set(HX_CSTRING("54_189"),(int)54);
	HX_STACK_LINE(358)
	this->_nativeCorrection->set(HX_CSTRING("55_232"),(int)55);
	HX_STACK_LINE(359)
	this->_nativeCorrection->set(HX_CSTRING("56_95"),(int)56);
	HX_STACK_LINE(360)
	this->_nativeCorrection->set(HX_CSTRING("57_231"),(int)57);
	HX_STACK_LINE(362)
	this->_nativeCorrection->set(HX_CSTRING("48_64"),(int)96);
	HX_STACK_LINE(363)
	this->_nativeCorrection->set(HX_CSTRING("49_65"),(int)97);
	HX_STACK_LINE(364)
	this->_nativeCorrection->set(HX_CSTRING("50_66"),(int)98);
	HX_STACK_LINE(365)
	this->_nativeCorrection->set(HX_CSTRING("51_67"),(int)99);
	HX_STACK_LINE(366)
	this->_nativeCorrection->set(HX_CSTRING("52_68"),(int)100);
	HX_STACK_LINE(367)
	this->_nativeCorrection->set(HX_CSTRING("53_69"),(int)101);
	HX_STACK_LINE(368)
	this->_nativeCorrection->set(HX_CSTRING("54_70"),(int)102);
	HX_STACK_LINE(369)
	this->_nativeCorrection->set(HX_CSTRING("55_71"),(int)103);
	HX_STACK_LINE(370)
	this->_nativeCorrection->set(HX_CSTRING("56_72"),(int)104);
	HX_STACK_LINE(371)
	this->_nativeCorrection->set(HX_CSTRING("57_73"),(int)105);
	HX_STACK_LINE(373)
	this->_nativeCorrection->set(HX_CSTRING("43_75"),(int)107);
	HX_STACK_LINE(374)
	this->_nativeCorrection->set(HX_CSTRING("45_77"),(int)109);
	HX_STACK_LINE(375)
	this->_nativeCorrection->set(HX_CSTRING("47_79"),(int)191);
	HX_STACK_LINE(376)
	this->_nativeCorrection->set(HX_CSTRING("46_78"),(int)110);
	HX_STACK_LINE(377)
	this->_nativeCorrection->set(HX_CSTRING("42_74"),(int)106);
	HX_STACK_LINE(380)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyDown_dyn(),null(),null(),null());
	HX_STACK_LINE(381)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,this->onKeyUp_dyn(),null(),null(),null());
	HX_STACK_LINE(383)
	::flixel::input::keyboard::FlxKeyList _g24 = ::flixel::input::keyboard::FlxKeyList_obj::__new((int)1);		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(383)
	this->pressed = _g24;
	HX_STACK_LINE(384)
	::flixel::input::keyboard::FlxKeyList _g25 = ::flixel::input::keyboard::FlxKeyList_obj::__new((int)2);		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(384)
	this->justPressed = _g25;
	HX_STACK_LINE(385)
	::flixel::input::keyboard::FlxKeyList _g26 = ::flixel::input::keyboard::FlxKeyList_obj::__new((int)-1);		HX_STACK_VAR(_g26,"_g26");
	HX_STACK_LINE(385)
	this->justReleased = _g26;
}
;
	return null();
}

//FlxKeyboard_obj::~FlxKeyboard_obj() { }

Dynamic FlxKeyboard_obj::__CreateEmpty() { return  new FlxKeyboard_obj; }
hx::ObjectPtr< FlxKeyboard_obj > FlxKeyboard_obj::__new()
{  hx::ObjectPtr< FlxKeyboard_obj > result = new FlxKeyboard_obj();
	result->__construct();
	return result;}

Dynamic FlxKeyboard_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxKeyboard_obj > result = new FlxKeyboard_obj();
	result->__construct();
	return result;}

hx::Object *FlxKeyboard_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxInput_obj)) return operator ::flixel::interfaces::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

bool FlxKeyboard_obj::anyPressed( Array< ::String > KeyArray){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","anyPressed",0xd7d5173c,"flixel.input.keyboard.FlxKeyboard.anyPressed","flixel/input/keyboard/FlxKeyboard.hx",69,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_LINE(69)
	return this->checkKeyStatus(KeyArray,(int)1);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,anyPressed,return )

bool FlxKeyboard_obj::anyJustPressed( Array< ::String > KeyArray){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","anyJustPressed",0x0abca770,"flixel.input.keyboard.FlxKeyboard.anyJustPressed","flixel/input/keyboard/FlxKeyboard.hx",81,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_LINE(81)
	return this->checkKeyStatus(KeyArray,(int)2);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,anyJustPressed,return )

bool FlxKeyboard_obj::anyJustReleased( Array< ::String > KeyArray){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","anyJustReleased",0x612be82f,"flixel.input.keyboard.FlxKeyboard.anyJustReleased","flixel/input/keyboard/FlxKeyboard.hx",93,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_LINE(93)
	return this->checkKeyStatus(KeyArray,(int)-1);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,anyJustReleased,return )

::String FlxKeyboard_obj::firstPressed( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","firstPressed",0x3e8adff8,"flixel.input.keyboard.FlxKeyboard.firstPressed","flixel/input/keyboard/FlxKeyboard.hx",102,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	{
		HX_STACK_LINE(103)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(103)
		Array< ::Dynamic > _g1 = this->_keyList;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(103)
		while((true)){
			HX_STACK_LINE(103)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(103)
				break;
			}
			HX_STACK_LINE(103)
			::flixel::input::keyboard::FlxKey key = _g1->__get(_g).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(103)
			++(_g);
			HX_STACK_LINE(105)
			if (((bool((key != null())) && bool((key->current == (int)1))))){
				HX_STACK_LINE(107)
				return key->name;
			}
		}
	}
	HX_STACK_LINE(110)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,firstPressed,return )

::String FlxKeyboard_obj::firstJustPressed( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","firstJustPressed",0xd34b7e2c,"flixel.input.keyboard.FlxKeyboard.firstJustPressed","flixel/input/keyboard/FlxKeyboard.hx",119,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	{
		HX_STACK_LINE(120)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		Array< ::Dynamic > _g1 = this->_keyList;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(120)
		while((true)){
			HX_STACK_LINE(120)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(120)
				break;
			}
			HX_STACK_LINE(120)
			::flixel::input::keyboard::FlxKey key = _g1->__get(_g).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(120)
			++(_g);
			HX_STACK_LINE(122)
			if (((bool((key != null())) && bool((key->current == (int)2))))){
				HX_STACK_LINE(124)
				return key->name;
			}
		}
	}
	HX_STACK_LINE(127)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,firstJustPressed,return )

::String FlxKeyboard_obj::firstJustReleased( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","firstJustReleased",0x1598f5f3,"flixel.input.keyboard.FlxKeyboard.firstJustReleased","flixel/input/keyboard/FlxKeyboard.hx",136,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(137)
		Array< ::Dynamic > _g1 = this->_keyList;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(137)
		while((true)){
			HX_STACK_LINE(137)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(137)
				break;
			}
			HX_STACK_LINE(137)
			::flixel::input::keyboard::FlxKey key = _g1->__get(_g).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(137)
			++(_g);
			HX_STACK_LINE(139)
			if (((bool((key != null())) && bool((key->current == (int)-1))))){
				HX_STACK_LINE(141)
				return key->name;
			}
		}
	}
	HX_STACK_LINE(144)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,firstJustReleased,return )

bool FlxKeyboard_obj::checkStatus( int KeyCode,int Status){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","checkStatus",0x7888f934,"flixel.input.keyboard.FlxKeyboard.checkStatus","flixel/input/keyboard/FlxKeyboard.hx",155,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyCode,"KeyCode")
	HX_STACK_ARG(Status,"Status")
	HX_STACK_LINE(156)
	::flixel::input::keyboard::FlxKey k = this->_keyList->__get(KeyCode).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(157)
	if (((k != null()))){
		HX_STACK_LINE(159)
		if (((k->current == Status))){
			HX_STACK_LINE(161)
			return true;
		}
		else{
			HX_STACK_LINE(163)
			if (((bool((Status == (int)1)) && bool((k->current == (int)2))))){
				HX_STACK_LINE(165)
				return true;
			}
			else{
				HX_STACK_LINE(167)
				if (((bool((Status == (int)0)) && bool((k->current == (int)-1))))){
					HX_STACK_LINE(169)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(179)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyboard_obj,checkStatus,return )

int FlxKeyboard_obj::getKeyCode( ::String KeyName){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","getKeyCode",0x32d24a9c,"flixel.input.keyboard.FlxKeyboard.getKeyCode","flixel/input/keyboard/FlxKeyboard.hx",190,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyName,"KeyName")
	HX_STACK_LINE(190)
	return this->_keyLookup->get(KeyName);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,getKeyCode,return )

Array< ::Dynamic > FlxKeyboard_obj::getIsDown( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","getIsDown",0x5d10ab3c,"flixel.input.keyboard.FlxKeyboard.getIsDown","flixel/input/keyboard/FlxKeyboard.hx",199,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_LINE(200)
	Array< ::Dynamic > keysDown = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(keysDown,"keysDown");
	HX_STACK_LINE(202)
	{
		HX_STACK_LINE(202)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(202)
		Array< ::Dynamic > _g1 = this->_keyList;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(202)
		while((true)){
			HX_STACK_LINE(202)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(202)
				break;
			}
			HX_STACK_LINE(202)
			::flixel::input::keyboard::FlxKey key = _g1->__get(_g).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(202)
			++(_g);
			HX_STACK_LINE(204)
			if (((bool((key != null())) && bool((key->current > (int)0))))){
				HX_STACK_LINE(206)
				keysDown->push(key);
			}
		}
	}
	HX_STACK_LINE(209)
	return keysDown;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,getIsDown,return )

Void FlxKeyboard_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","destroy",0x52b95714,"flixel.input.keyboard.FlxKeyboard.destroy","flixel/input/keyboard/FlxKeyboard.hx",216,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_LINE(217)
		this->_keyList = null();
		HX_STACK_LINE(218)
		this->_keyLookup = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,destroy,(void))

Void FlxKeyboard_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","reset",0xa104d969,"flixel.input.keyboard.FlxKeyboard.reset","flixel/input/keyboard/FlxKeyboard.hx",226,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_LINE(226)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(226)
		Array< ::Dynamic > _g1 = this->_keyList;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(226)
		while((true)){
			HX_STACK_LINE(226)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(226)
				break;
			}
			HX_STACK_LINE(226)
			::flixel::input::keyboard::FlxKey key = _g1->__get(_g).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(226)
			++(_g);
			HX_STACK_LINE(228)
			if (((key != null()))){
				HX_STACK_LINE(230)
				key->current = (int)0;
				HX_STACK_LINE(231)
				key->last = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,reset,(void))

Void FlxKeyboard_obj::addKey( ::String KeyName,int KeyCode){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","addKey",0xd9c3b124,"flixel.input.keyboard.FlxKeyboard.addKey","flixel/input/keyboard/FlxKeyboard.hx",395,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_ARG(KeyName,"KeyName")
		HX_STACK_ARG(KeyCode,"KeyCode")
		HX_STACK_LINE(396)
		this->_keyLookup->set(KeyName,KeyCode);
		HX_STACK_LINE(397)
		this->_keyList[KeyCode] = ::flixel::input::keyboard::FlxKey_obj::__new(KeyName);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyboard_obj,addKey,(void))

Void FlxKeyboard_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","update",0xc1c69d2f,"flixel.input.keyboard.FlxKeyboard.update","flixel/input/keyboard/FlxKeyboard.hx",405,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_LINE(405)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(405)
		Array< ::Dynamic > _g1 = this->_keyList;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(405)
		while((true)){
			HX_STACK_LINE(405)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(405)
				break;
			}
			HX_STACK_LINE(405)
			::flixel::input::keyboard::FlxKey key = _g1->__get(_g).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(405)
			++(_g);
			HX_STACK_LINE(407)
			if (((key == null()))){
				HX_STACK_LINE(409)
				continue;
			}
			HX_STACK_LINE(412)
			if (((bool((key->last == (int)-1)) && bool((key->current == (int)-1))))){
				HX_STACK_LINE(414)
				key->current = (int)0;
			}
			else{
				HX_STACK_LINE(416)
				if (((bool((key->last == (int)2)) && bool((key->current == (int)2))))){
					HX_STACK_LINE(418)
					key->current = (int)1;
				}
			}
			HX_STACK_LINE(421)
			key->last = key->current;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,update,(void))

bool FlxKeyboard_obj::checkKeyStatus( Array< ::String > KeyArray,int Status){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","checkKeyStatus",0x68c0016f,"flixel.input.keyboard.FlxKeyboard.checkKeyStatus","flixel/input/keyboard/FlxKeyboard.hx",433,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_ARG(Status,"Status")
	HX_STACK_LINE(434)
	if (((KeyArray == null()))){
		HX_STACK_LINE(436)
		return false;
	}
	HX_STACK_LINE(439)
	{
		HX_STACK_LINE(439)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(439)
		while((true)){
			HX_STACK_LINE(439)
			if ((!(((_g < KeyArray->length))))){
				HX_STACK_LINE(439)
				break;
			}
			HX_STACK_LINE(439)
			::String code = KeyArray->__get(_g);		HX_STACK_VAR(code,"code");
			HX_STACK_LINE(439)
			++(_g);
			HX_STACK_LINE(441)
			::flixel::input::keyboard::FlxKey key;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(444)
			::String _g1 = code.toUpperCase();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(444)
			code = _g1;
			HX_STACK_LINE(445)
			Dynamic _g11 = this->_keyLookup->get(code);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(445)
			::flixel::input::keyboard::FlxKey _g2 = this->_keyList->__get(_g11).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(445)
			key = _g2;
			HX_STACK_LINE(447)
			if (((key != null()))){
				HX_STACK_LINE(449)
				if (((key->current == Status))){
					HX_STACK_LINE(451)
					return true;
				}
				else{
					HX_STACK_LINE(453)
					if (((bool((Status == (int)1)) && bool((key->current == (int)2))))){
						HX_STACK_LINE(455)
						return true;
					}
					else{
						HX_STACK_LINE(457)
						if (((bool((Status == (int)0)) && bool((key->current == (int)-1))))){
							HX_STACK_LINE(459)
							return true;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(464)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyboard_obj,checkKeyStatus,return )

Void FlxKeyboard_obj::onKeyUp( ::flash::events::KeyboardEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","onKeyUp",0xa36f8255,"flixel.input.keyboard.FlxKeyboard.onKeyUp","flixel/input/keyboard/FlxKeyboard.hx",471,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(472)
		int c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(472)
		{
			HX_STACK_LINE(472)
			Dynamic code = this->_nativeCorrection->get(((FlashEvent->charCode + HX_CSTRING("_")) + FlashEvent->keyCode));		HX_STACK_VAR(code,"code");
			HX_STACK_LINE(472)
			if (((code == null()))){
				HX_STACK_LINE(472)
				c = FlashEvent->keyCode;
			}
			else{
				HX_STACK_LINE(472)
				c = code;
			}
		}
		HX_STACK_LINE(483)
		if ((!(this->enabled))){
			HX_STACK_LINE(485)
			return null();
		}
		HX_STACK_LINE(491)
		if ((this->inKeyArray(::flixel::FlxG_obj::sound->muteKeys,c))){
			HX_STACK_LINE(493)
			::flixel::FlxG_obj::sound->muted = !(::flixel::FlxG_obj::sound->muted);
			HX_STACK_LINE(495)
			if (((::flixel::FlxG_obj::sound->volumeHandler != null()))){
				HX_STACK_LINE(497)
				::flixel::FlxG_obj::sound->volumeHandler((  ((::flixel::FlxG_obj::sound->muted)) ? Float((int)0) : Float(::flixel::FlxG_obj::sound->volume) ));
			}
			HX_STACK_LINE(501)
			if (((bool((::flixel::FlxG_obj::game->soundTray != null())) && bool(::flixel::FlxG_obj::sound->soundTrayEnabled)))){
				HX_STACK_LINE(503)
				::flixel::FlxG_obj::game->soundTray->show(null());
			}
		}
		else{
			HX_STACK_LINE(508)
			if ((this->inKeyArray(::flixel::FlxG_obj::sound->volumeDownKeys,c))){
				HX_STACK_LINE(510)
				::flixel::FlxG_obj::sound->muted = false;
				HX_STACK_LINE(511)
				{
					HX_STACK_LINE(511)
					::flixel::system::frontEnds::SoundFrontEnd _g = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(511)
					_g->set_volume((_g->volume - 0.1));
				}
				HX_STACK_LINE(514)
				if (((bool((::flixel::FlxG_obj::game->soundTray != null())) && bool(::flixel::FlxG_obj::sound->soundTrayEnabled)))){
					HX_STACK_LINE(516)
					::flixel::FlxG_obj::game->soundTray->show(null());
				}
			}
			else{
				HX_STACK_LINE(521)
				if ((this->inKeyArray(::flixel::FlxG_obj::sound->volumeUpKeys,c))){
					HX_STACK_LINE(523)
					::flixel::FlxG_obj::sound->muted = false;
					HX_STACK_LINE(524)
					{
						HX_STACK_LINE(524)
						::flixel::system::frontEnds::SoundFrontEnd _g = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(524)
						_g->set_volume((_g->volume + 0.1));
					}
					HX_STACK_LINE(527)
					if (((bool((::flixel::FlxG_obj::game->soundTray != null())) && bool(::flixel::FlxG_obj::sound->soundTrayEnabled)))){
						HX_STACK_LINE(529)
						::flixel::FlxG_obj::game->soundTray->show(null());
					}
				}
			}
		}
		HX_STACK_LINE(535)
		{
			HX_STACK_LINE(535)
			::flixel::input::keyboard::FlxKey obj = this->_keyList->__get(c).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(535)
			if (((obj != null()))){
				HX_STACK_LINE(535)
				if (((obj->current > (int)0))){
					HX_STACK_LINE(535)
					obj->current = (int)-1;
				}
				else{
					HX_STACK_LINE(535)
					obj->current = (int)0;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,onKeyUp,(void))

Void FlxKeyboard_obj::onKeyDown( ::flash::events::KeyboardEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","onKeyDown",0xf4d786dc,"flixel.input.keyboard.FlxKeyboard.onKeyDown","flixel/input/keyboard/FlxKeyboard.hx",542,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(543)
		int c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(543)
		{
			HX_STACK_LINE(543)
			Dynamic code = this->_nativeCorrection->get(((FlashEvent->charCode + HX_CSTRING("_")) + FlashEvent->keyCode));		HX_STACK_VAR(code,"code");
			HX_STACK_LINE(543)
			if (((code == null()))){
				HX_STACK_LINE(543)
				c = FlashEvent->keyCode;
			}
			else{
				HX_STACK_LINE(543)
				c = code;
			}
		}
		HX_STACK_LINE(561)
		if ((this->enabled)){
			HX_STACK_LINE(563)
			::flixel::input::keyboard::FlxKey obj = this->_keyList->__get(c).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(563)
			if (((obj != null()))){
				HX_STACK_LINE(563)
				if (((obj->current > (int)0))){
					HX_STACK_LINE(563)
					obj->current = (int)1;
				}
				else{
					HX_STACK_LINE(563)
					obj->current = (int)2;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,onKeyDown,(void))

bool FlxKeyboard_obj::inKeyArray( Array< ::String > KeyArray,int KeyCode){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","inKeyArray",0x0dc3baa5,"flixel.input.keyboard.FlxKeyboard.inKeyArray","flixel/input/keyboard/FlxKeyboard.hx",572,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_ARG(KeyCode,"KeyCode")
	HX_STACK_LINE(573)
	if (((KeyArray == null()))){
		HX_STACK_LINE(575)
		return false;
	}
	else{
		HX_STACK_LINE(579)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(579)
		while((true)){
			HX_STACK_LINE(579)
			if ((!(((_g < KeyArray->length))))){
				HX_STACK_LINE(579)
				break;
			}
			HX_STACK_LINE(579)
			::String keyString = KeyArray->__get(_g);		HX_STACK_VAR(keyString,"keyString");
			HX_STACK_LINE(579)
			++(_g);
			struct _Function_3_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::input::keyboard::FlxKeyboard_obj > __this,::String &keyString,int &KeyCode){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/keyboard/FlxKeyboard.hx",581,0x41882875)
					{
						HX_STACK_LINE(581)
						Dynamic _g1 = __this->_keyLookup->get(keyString);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(581)
						return (_g1 == KeyCode);
					}
					return null();
				}
			};
			HX_STACK_LINE(581)
			if (((  ((!(((keyString == HX_CSTRING("ANY")))))) ? bool(_Function_3_1::Block(this,keyString,KeyCode)) : bool(true) ))){
				HX_STACK_LINE(583)
				return true;
			}
		}
	}
	HX_STACK_LINE(588)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyboard_obj,inKeyArray,return )

int FlxKeyboard_obj::resolveKeyCode( ::flash::events::KeyboardEvent e){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","resolveKeyCode",0x581c5a06,"flixel.input.keyboard.FlxKeyboard.resolveKeyCode","flixel/input/keyboard/FlxKeyboard.hx",592,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(596)
	Dynamic code = this->_nativeCorrection->get(((e->charCode + HX_CSTRING("_")) + e->keyCode));		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(597)
	if (((code == null()))){
		HX_STACK_LINE(597)
		return e->keyCode;
	}
	else{
		HX_STACK_LINE(597)
		return code;
	}
	HX_STACK_LINE(597)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,resolveKeyCode,return )

Void FlxKeyboard_obj::updateKeyStates( int KeyCode,bool Down){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","updateKeyStates",0x0e7ffd12,"flixel.input.keyboard.FlxKeyboard.updateKeyStates","flixel/input/keyboard/FlxKeyboard.hx",605,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_ARG(KeyCode,"KeyCode")
		HX_STACK_ARG(Down,"Down")
		HX_STACK_LINE(606)
		::flixel::input::keyboard::FlxKey obj = this->_keyList->__get(KeyCode).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(608)
		if (((obj != null()))){
			HX_STACK_LINE(610)
			if (((obj->current > (int)0))){
				HX_STACK_LINE(612)
				if ((Down)){
					HX_STACK_LINE(614)
					obj->current = (int)1;
				}
				else{
					HX_STACK_LINE(618)
					obj->current = (int)-1;
				}
			}
			else{
				HX_STACK_LINE(623)
				if ((Down)){
					HX_STACK_LINE(625)
					obj->current = (int)2;
				}
				else{
					HX_STACK_LINE(629)
					obj->current = (int)0;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyboard_obj,updateKeyStates,(void))

Void FlxKeyboard_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","onFocus",0xc8fa2853,"flixel.input.keyboard.FlxKeyboard.onFocus","flixel/input/keyboard/FlxKeyboard.hx",635,0x41882875)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,onFocus,(void))

Void FlxKeyboard_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","onFocusLost",0xd20123d7,"flixel.input.keyboard.FlxKeyboard.onFocusLost","flixel/input/keyboard/FlxKeyboard.hx",639,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_LINE(639)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,onFocusLost,(void))

Array< ::Dynamic > FlxKeyboard_obj::record( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","record",0x38ad8db7,"flixel.input.keyboard.FlxKeyboard.record","flixel/input/keyboard/FlxKeyboard.hx",652,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_LINE(653)
	Array< ::Dynamic > data = null();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(654)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(656)
	while((true)){
		HX_STACK_LINE(656)
		if ((!(((i < (int)256))))){
			HX_STACK_LINE(656)
			break;
		}
		HX_STACK_LINE(658)
		int _g = (i)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(658)
		::flixel::input::keyboard::FlxKey key = this->_keyList->__get(_g).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(660)
		if (((bool((key == null())) || bool((key->current == (int)0))))){
			HX_STACK_LINE(662)
			continue;
		}
		HX_STACK_LINE(665)
		if (((data == null()))){
			HX_STACK_LINE(667)
			Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(667)
			data = _g1;
		}
		HX_STACK_LINE(670)
		::flixel::system::replay::CodeValuePair _g2 = ::flixel::system::replay::CodeValuePair_obj::__new((i - (int)1),key->current);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(670)
		data->push(_g2);
	}
	HX_STACK_LINE(672)
	return data;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,record,return )

Void FlxKeyboard_obj::playback( Array< ::Dynamic > Record){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","playback",0x84dcbec1,"flixel.input.keyboard.FlxKeyboard.playback","flixel/input/keyboard/FlxKeyboard.hx",682,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Record,"Record")
		HX_STACK_LINE(683)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(684)
		int l = Record->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(685)
		::flixel::system::replay::CodeValuePair o;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(686)
		::flixel::input::keyboard::FlxKey o2;		HX_STACK_VAR(o2,"o2");
		HX_STACK_LINE(688)
		while((true)){
			HX_STACK_LINE(688)
			if ((!(((i < l))))){
				HX_STACK_LINE(688)
				break;
			}
			HX_STACK_LINE(690)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(690)
			::flixel::system::replay::CodeValuePair _g1 = Record->__get(_g).StaticCast< ::flixel::system::replay::CodeValuePair >();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(690)
			o = _g1;
			HX_STACK_LINE(691)
			o2 = this->_keyList->__get(o->code).StaticCast< ::flixel::input::keyboard::FlxKey >();
			HX_STACK_LINE(692)
			o2->current = o->value;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,playback,(void))

int FlxKeyboard_obj::TOTAL;


FlxKeyboard_obj::FlxKeyboard_obj()
{
}

void FlxKeyboard_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxKeyboard);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(pressed,"pressed");
	HX_MARK_MEMBER_NAME(justPressed,"justPressed");
	HX_MARK_MEMBER_NAME(justReleased,"justReleased");
	HX_MARK_MEMBER_NAME(_keyList,"_keyList");
	HX_MARK_MEMBER_NAME(_keyLookup,"_keyLookup");
	HX_MARK_MEMBER_NAME(_nativeCorrection,"_nativeCorrection");
	HX_MARK_END_CLASS();
}

void FlxKeyboard_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(pressed,"pressed");
	HX_VISIT_MEMBER_NAME(justPressed,"justPressed");
	HX_VISIT_MEMBER_NAME(justReleased,"justReleased");
	HX_VISIT_MEMBER_NAME(_keyList,"_keyList");
	HX_VISIT_MEMBER_NAME(_keyLookup,"_keyLookup");
	HX_VISIT_MEMBER_NAME(_nativeCorrection,"_nativeCorrection");
}

Dynamic FlxKeyboard_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addKey") ) { return addKey_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"record") ) { return record_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_keyList") ) { return _keyList; }
		if (HX_FIELD_EQ(inName,"playback") ) { return playback_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getIsDown") ) { return getIsDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_keyLookup") ) { return _keyLookup; }
		if (HX_FIELD_EQ(inName,"anyPressed") ) { return anyPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"getKeyCode") ) { return getKeyCode_dyn(); }
		if (HX_FIELD_EQ(inName,"inKeyArray") ) { return inKeyArray_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed; }
		if (HX_FIELD_EQ(inName,"checkStatus") ) { return checkStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased; }
		if (HX_FIELD_EQ(inName,"firstPressed") ) { return firstPressed_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return anyJustPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"checkKeyStatus") ) { return checkKeyStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"resolveKeyCode") ) { return resolveKeyCode_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return anyJustReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"updateKeyStates") ) { return updateKeyStates_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"firstJustPressed") ) { return firstJustPressed_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_nativeCorrection") ) { return _nativeCorrection; }
		if (HX_FIELD_EQ(inName,"firstJustReleased") ) { return firstJustReleased_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxKeyboard_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pressed") ) { pressed=inValue.Cast< ::flixel::input::keyboard::FlxKeyList >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_keyList") ) { _keyList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_keyLookup") ) { _keyLookup=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { justPressed=inValue.Cast< ::flixel::input::keyboard::FlxKeyList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { justReleased=inValue.Cast< ::flixel::input::keyboard::FlxKeyList >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_nativeCorrection") ) { _nativeCorrection=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxKeyboard_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("enabled"));
	outFields->push(HX_CSTRING("pressed"));
	outFields->push(HX_CSTRING("justPressed"));
	outFields->push(HX_CSTRING("justReleased"));
	outFields->push(HX_CSTRING("_keyList"));
	outFields->push(HX_CSTRING("_keyLookup"));
	outFields->push(HX_CSTRING("_nativeCorrection"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TOTAL"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxKeyboard_obj,enabled),HX_CSTRING("enabled")},
	{hx::fsObject /*::flixel::input::keyboard::FlxKeyList*/ ,(int)offsetof(FlxKeyboard_obj,pressed),HX_CSTRING("pressed")},
	{hx::fsObject /*::flixel::input::keyboard::FlxKeyList*/ ,(int)offsetof(FlxKeyboard_obj,justPressed),HX_CSTRING("justPressed")},
	{hx::fsObject /*::flixel::input::keyboard::FlxKeyList*/ ,(int)offsetof(FlxKeyboard_obj,justReleased),HX_CSTRING("justReleased")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxKeyboard_obj,_keyList),HX_CSTRING("_keyList")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxKeyboard_obj,_keyLookup),HX_CSTRING("_keyLookup")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxKeyboard_obj,_nativeCorrection),HX_CSTRING("_nativeCorrection")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("enabled"),
	HX_CSTRING("pressed"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("_keyList"),
	HX_CSTRING("_keyLookup"),
	HX_CSTRING("_nativeCorrection"),
	HX_CSTRING("anyPressed"),
	HX_CSTRING("anyJustPressed"),
	HX_CSTRING("anyJustReleased"),
	HX_CSTRING("firstPressed"),
	HX_CSTRING("firstJustPressed"),
	HX_CSTRING("firstJustReleased"),
	HX_CSTRING("checkStatus"),
	HX_CSTRING("getKeyCode"),
	HX_CSTRING("getIsDown"),
	HX_CSTRING("destroy"),
	HX_CSTRING("reset"),
	HX_CSTRING("addKey"),
	HX_CSTRING("update"),
	HX_CSTRING("checkKeyStatus"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("inKeyArray"),
	HX_CSTRING("resolveKeyCode"),
	HX_CSTRING("updateKeyStates"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("record"),
	HX_CSTRING("playback"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxKeyboard_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxKeyboard_obj::TOTAL,"TOTAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxKeyboard_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxKeyboard_obj::TOTAL,"TOTAL");
};

#endif

Class FlxKeyboard_obj::__mClass;

void FlxKeyboard_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.keyboard.FlxKeyboard"), hx::TCanCast< FlxKeyboard_obj> ,sStaticFields,sMemberFields,
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

void FlxKeyboard_obj::__boot()
{
	TOTAL= (int)256;
}

} // end namespace flixel
} // end namespace input
} // end namespace keyboard
