#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_input_android_FlxAndroidKeys
#include <flixel/input/android/FlxAndroidKeys.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKey
#include <flixel/input/keyboard/FlxKey.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace flixel{
namespace input{
namespace android{

Void FlxAndroidKeys_obj::__construct()
{
HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","new",0x7d1b2d18,"flixel.input.android.FlxAndroidKeys.new","flixel/input/android/FlxAndroidKeys.hx",17,0x680fe935)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(40)
	this->preventDefaultBackAction = false;
	HX_STACK_LINE(22)
	this->enabled = true;
	HX_STACK_LINE(163)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(163)
	this->_keyLookup = _g;
	HX_STACK_LINE(165)
	::haxe::ds::IntMap _g1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(165)
	this->_keyList = _g1;
	HX_STACK_LINE(167)
	this->addKey(HX_CSTRING("BACK"),(int)27);
	HX_STACK_LINE(168)
	this->addKey(HX_CSTRING("MENU"),(int)16777234);
	HX_STACK_LINE(170)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyDown_dyn(),null(),null(),null());
	HX_STACK_LINE(171)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,this->onKeyUp_dyn(),null(),null(),null());
	HX_STACK_LINE(173)
	Dynamic _g2 = ::Reflect_obj::makeVarArgs(this->anyPressed_dyn());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(173)
	this->pressed = _g2;
	HX_STACK_LINE(174)
	Dynamic _g3 = ::Reflect_obj::makeVarArgs(this->anyJustPressed_dyn());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(174)
	this->justPressed = _g3;
	HX_STACK_LINE(175)
	Dynamic _g4 = ::Reflect_obj::makeVarArgs(this->anyJustReleased_dyn());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(175)
	this->justReleased = _g4;
}
;
	return null();
}

//FlxAndroidKeys_obj::~FlxAndroidKeys_obj() { }

Dynamic FlxAndroidKeys_obj::__CreateEmpty() { return  new FlxAndroidKeys_obj; }
hx::ObjectPtr< FlxAndroidKeys_obj > FlxAndroidKeys_obj::__new()
{  hx::ObjectPtr< FlxAndroidKeys_obj > result = new FlxAndroidKeys_obj();
	result->__construct();
	return result;}

Dynamic FlxAndroidKeys_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAndroidKeys_obj > result = new FlxAndroidKeys_obj();
	result->__construct();
	return result;}

hx::Object *FlxAndroidKeys_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxInput_obj)) return operator ::flixel::interfaces::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

Void FlxAndroidKeys_obj::addKey( ::String KeyName,int KeyCode){
{
		HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","addKey",0x61dc0046,"flixel.input.android.FlxAndroidKeys.addKey","flixel/input/android/FlxAndroidKeys.hx",49,0x680fe935)
		HX_STACK_THIS(this)
		HX_STACK_ARG(KeyName,"KeyName")
		HX_STACK_ARG(KeyCode,"KeyCode")
		HX_STACK_LINE(50)
		this->_keyLookup->set(KeyName,KeyCode);
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			::flixel::input::keyboard::FlxKey value = ::flixel::input::keyboard::FlxKey_obj::__new(KeyName);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(51)
			this->_keyList->set(KeyCode,value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAndroidKeys_obj,addKey,(void))

bool FlxAndroidKeys_obj::anyPressed( Dynamic KeyArray){
	HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","anyPressed",0x87609f5e,"flixel.input.android.FlxAndroidKeys.anyPressed","flixel/input/android/FlxAndroidKeys.hx",68,0x680fe935)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_LINE(68)
	return this->checkKeyStatus(KeyArray,(int)1);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAndroidKeys_obj,anyPressed,return )

bool FlxAndroidKeys_obj::anyJustPressed( Dynamic KeyArray){
	HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","anyJustPressed",0xee4be892,"flixel.input.android.FlxAndroidKeys.anyJustPressed","flixel/input/android/FlxAndroidKeys.hx",85,0x680fe935)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_LINE(85)
	return this->checkKeyStatus(KeyArray,(int)2);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAndroidKeys_obj,anyJustPressed,return )

bool FlxAndroidKeys_obj::anyJustReleased( Dynamic KeyArray){
	HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","anyJustReleased",0x9af5a4cd,"flixel.input.android.FlxAndroidKeys.anyJustReleased","flixel/input/android/FlxAndroidKeys.hx",102,0x680fe935)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_LINE(102)
	return this->checkKeyStatus(KeyArray,(int)-1);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAndroidKeys_obj,anyJustReleased,return )

int FlxAndroidKeys_obj::getKeyCode( ::String KeyName){
	HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","getKeyCode",0xe25dd2be,"flixel.input.android.FlxAndroidKeys.getKeyCode","flixel/input/android/FlxAndroidKeys.hx",114,0x680fe935)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyName,"KeyName")
	HX_STACK_LINE(114)
	return this->_keyLookup->get(KeyName);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAndroidKeys_obj,getKeyCode,return )

Array< ::Dynamic > FlxAndroidKeys_obj::getIsDown( ){
	HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","getIsDown",0x424cfd5a,"flixel.input.android.FlxAndroidKeys.getIsDown","flixel/input/android/FlxAndroidKeys.hx",123,0x680fe935)
	HX_STACK_THIS(this)
	HX_STACK_LINE(124)
	Array< ::Dynamic > keysDown = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(keysDown,"keysDown");
	HX_STACK_LINE(126)
	for(::cpp::FastIterator_obj< ::flixel::input::keyboard::FlxKey > *__it = ::cpp::CreateFastIterator< ::flixel::input::keyboard::FlxKey >(this->_keyList->iterator());  __it->hasNext(); ){
		::flixel::input::keyboard::FlxKey key = __it->next();
		if (((bool((key != null())) && bool((key->current > (int)0))))){
			HX_STACK_LINE(130)
			keysDown->push(key);
		}
;
	}
	HX_STACK_LINE(133)
	return keysDown;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAndroidKeys_obj,getIsDown,return )

Void FlxAndroidKeys_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","destroy",0xdfe645b2,"flixel.input.android.FlxAndroidKeys.destroy","flixel/input/android/FlxAndroidKeys.hx",140,0x680fe935)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		this->_keyList = null();
		HX_STACK_LINE(142)
		this->_keyLookup = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAndroidKeys_obj,destroy,(void))

Void FlxAndroidKeys_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","reset",0xa9aa4487,"flixel.input.android.FlxAndroidKeys.reset","flixel/input/android/FlxAndroidKeys.hx",150,0x680fe935)
		HX_STACK_THIS(this)
		HX_STACK_LINE(150)
		for(::cpp::FastIterator_obj< ::flixel::input::keyboard::FlxKey > *__it = ::cpp::CreateFastIterator< ::flixel::input::keyboard::FlxKey >(this->_keyList->iterator());  __it->hasNext(); ){
			::flixel::input::keyboard::FlxKey key = __it->next();
			if (((key != null()))){
				HX_STACK_LINE(154)
				key->current = (int)0;
				HX_STACK_LINE(155)
				key->last = (int)0;
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAndroidKeys_obj,reset,(void))

bool FlxAndroidKeys_obj::checkKeyStatus( Dynamic KeyArray,int Status){
	HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","checkKeyStatus",0x4c4f4291,"flixel.input.android.FlxAndroidKeys.checkKeyStatus","flixel/input/android/FlxAndroidKeys.hx",186,0x680fe935)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_ARG(Status,"Status")
	HX_STACK_LINE(187)
	if (((KeyArray == null()))){
		HX_STACK_LINE(189)
		return false;
	}
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(192)
		while((true)){
			HX_STACK_LINE(192)
			if ((!(((_g < KeyArray->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(192)
				break;
			}
			HX_STACK_LINE(192)
			Dynamic key = KeyArray->__GetItem(_g);		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(192)
			++(_g);
			HX_STACK_LINE(195)
			::String _g1 = ::Std_obj::string(key).toUpperCase();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(195)
			key = _g1;
			HX_STACK_LINE(197)
			::flixel::input::keyboard::FlxKey k;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(197)
			{
				HX_STACK_LINE(197)
				int key1;		HX_STACK_VAR(key1,"key1");
				HX_STACK_LINE(197)
				{
					HX_STACK_LINE(197)
					::String key2 = key;		HX_STACK_VAR(key2,"key2");
					HX_STACK_LINE(197)
					key1 = this->_keyLookup->get(key2);
				}
				HX_STACK_LINE(197)
				k = this->_keyList->get(key1);
			}
			HX_STACK_LINE(198)
			if (((k != null()))){
				HX_STACK_LINE(200)
				if (((k->current == Status))){
					HX_STACK_LINE(202)
					return true;
				}
				else{
					HX_STACK_LINE(204)
					if (((bool((Status == (int)1)) && bool((k->current == (int)2))))){
						HX_STACK_LINE(206)
						return true;
					}
					else{
						HX_STACK_LINE(208)
						if (((bool((Status == (int)0)) && bool((k->current == (int)-1))))){
							HX_STACK_LINE(210)
							return true;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(215)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAndroidKeys_obj,checkKeyStatus,return )

Void FlxAndroidKeys_obj::onKeyUp( ::flash::events::KeyboardEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","onKeyUp",0x309c70f3,"flixel.input.android.FlxAndroidKeys.onKeyUp","flixel/input/android/FlxAndroidKeys.hx",224,0x680fe935)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(225)
		int c = FlashEvent->keyCode;		HX_STACK_VAR(c,"c");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::input::android::FlxAndroidKeys_obj > __this,int &c){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/android/FlxAndroidKeys.hx",227,0x680fe935)
				{
					HX_STACK_LINE(227)
					Dynamic _g = __this->_keyLookup->get(HX_CSTRING("BACK"));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(227)
					return (c == _g);
				}
				return null();
			}
		};
		HX_STACK_LINE(227)
		if (((  ((this->preventDefaultBackAction)) ? bool(_Function_1_1::Block(this,c)) : bool(false) ))){
			HX_STACK_LINE(230)
			FlashEvent->stopImmediatePropagation();
			HX_STACK_LINE(231)
			FlashEvent->stopPropagation();
		}
		HX_STACK_LINE(235)
		if ((!(this->enabled))){
			HX_STACK_LINE(237)
			return null();
		}
		HX_STACK_LINE(240)
		{
			HX_STACK_LINE(240)
			::flixel::input::keyboard::FlxKey obj = this->_keyList->get(c);		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(240)
			if (((obj != null()))){
				HX_STACK_LINE(240)
				if (((obj->current > (int)0))){
					HX_STACK_LINE(240)
					obj->current = (int)-1;
				}
				else{
					HX_STACK_LINE(240)
					obj->current = (int)0;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAndroidKeys_obj,onKeyUp,(void))

Void FlxAndroidKeys_obj::onKeyDown( ::flash::events::KeyboardEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","onKeyDown",0xda13d8fa,"flixel.input.android.FlxAndroidKeys.onKeyDown","flixel/input/android/FlxAndroidKeys.hx",249,0x680fe935)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(250)
		int c = FlashEvent->keyCode;		HX_STACK_VAR(c,"c");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::input::android::FlxAndroidKeys_obj > __this,int &c){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/android/FlxAndroidKeys.hx",252,0x680fe935)
				{
					HX_STACK_LINE(252)
					Dynamic _g = __this->_keyLookup->get(HX_CSTRING("BACK"));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(252)
					return (c == _g);
				}
				return null();
			}
		};
		HX_STACK_LINE(252)
		if (((  ((this->preventDefaultBackAction)) ? bool(_Function_1_1::Block(this,c)) : bool(false) ))){
			HX_STACK_LINE(254)
			FlashEvent->stopImmediatePropagation();
			HX_STACK_LINE(255)
			FlashEvent->stopPropagation();
		}
		HX_STACK_LINE(258)
		if ((this->enabled)){
			HX_STACK_LINE(260)
			::flixel::input::keyboard::FlxKey obj = this->_keyList->get(c);		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(260)
			if (((obj != null()))){
				HX_STACK_LINE(260)
				if (((obj->current > (int)0))){
					HX_STACK_LINE(260)
					obj->current = (int)1;
				}
				else{
					HX_STACK_LINE(260)
					obj->current = (int)2;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAndroidKeys_obj,onKeyDown,(void))

bool FlxAndroidKeys_obj::inKeyArray( Array< ::String > KeyArray,int KeyCode){
	HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","inKeyArray",0xbd4f42c7,"flixel.input.android.FlxAndroidKeys.inKeyArray","flixel/input/android/FlxAndroidKeys.hx",269,0x680fe935)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_ARG(KeyCode,"KeyCode")
	HX_STACK_LINE(270)
	if (((KeyArray == null()))){
		HX_STACK_LINE(272)
		return false;
	}
	else{
		HX_STACK_LINE(276)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(276)
		while((true)){
			HX_STACK_LINE(276)
			if ((!(((_g < KeyArray->length))))){
				HX_STACK_LINE(276)
				break;
			}
			HX_STACK_LINE(276)
			::String keyString = KeyArray->__get(_g);		HX_STACK_VAR(keyString,"keyString");
			HX_STACK_LINE(276)
			++(_g);
			struct _Function_3_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::input::android::FlxAndroidKeys_obj > __this,::String &keyString,int &KeyCode){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/android/FlxAndroidKeys.hx",278,0x680fe935)
					{
						HX_STACK_LINE(278)
						Dynamic _g1 = __this->_keyLookup->get(keyString);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(278)
						return (_g1 == KeyCode);
					}
					return null();
				}
			};
			HX_STACK_LINE(278)
			if (((  ((!(((keyString == HX_CSTRING("ANY")))))) ? bool(_Function_3_1::Block(this,keyString,KeyCode)) : bool(true) ))){
				HX_STACK_LINE(280)
				return true;
			}
		}
	}
	HX_STACK_LINE(285)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAndroidKeys_obj,inKeyArray,return )

Void FlxAndroidKeys_obj::updateKeyStates( int KeyCode,bool Down){
{
		HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","updateKeyStates",0x4849b9b0,"flixel.input.android.FlxAndroidKeys.updateKeyStates","flixel/input/android/FlxAndroidKeys.hx",292,0x680fe935)
		HX_STACK_THIS(this)
		HX_STACK_ARG(KeyCode,"KeyCode")
		HX_STACK_ARG(Down,"Down")
		HX_STACK_LINE(293)
		::flixel::input::keyboard::FlxKey obj = this->_keyList->get(KeyCode);		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(295)
		if (((obj != null()))){
			HX_STACK_LINE(297)
			if (((obj->current > (int)0))){
				HX_STACK_LINE(299)
				if ((Down)){
					HX_STACK_LINE(301)
					obj->current = (int)1;
				}
				else{
					HX_STACK_LINE(305)
					obj->current = (int)-1;
				}
			}
			else{
				HX_STACK_LINE(310)
				if ((Down)){
					HX_STACK_LINE(312)
					obj->current = (int)2;
				}
				else{
					HX_STACK_LINE(316)
					obj->current = (int)0;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAndroidKeys_obj,updateKeyStates,(void))

Void FlxAndroidKeys_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","onFocus",0x562716f1,"flixel.input.android.FlxAndroidKeys.onFocus","flixel/input/android/FlxAndroidKeys.hx",322,0x680fe935)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAndroidKeys_obj,onFocus,(void))

Void FlxAndroidKeys_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","onFocusLost",0xbc8cb975,"flixel.input.android.FlxAndroidKeys.onFocusLost","flixel/input/android/FlxAndroidKeys.hx",326,0x680fe935)
		HX_STACK_THIS(this)
		HX_STACK_LINE(326)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAndroidKeys_obj,onFocusLost,(void))

Void FlxAndroidKeys_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","update",0x49deec51,"flixel.input.android.FlxAndroidKeys.update","flixel/input/android/FlxAndroidKeys.hx",334,0x680fe935)
		HX_STACK_THIS(this)
		HX_STACK_LINE(334)
		for(::cpp::FastIterator_obj< ::flixel::input::keyboard::FlxKey > *__it = ::cpp::CreateFastIterator< ::flixel::input::keyboard::FlxKey >(this->_keyList->iterator());  __it->hasNext(); ){
			::flixel::input::keyboard::FlxKey key = __it->next();
			{
				HX_STACK_LINE(336)
				if (((key == null()))){
					HX_STACK_LINE(338)
					continue;
				}
				HX_STACK_LINE(341)
				if (((bool((key->last == (int)-1)) && bool((key->current == (int)-1))))){
					HX_STACK_LINE(343)
					key->current = (int)0;
				}
				else{
					HX_STACK_LINE(345)
					if (((bool((key->last == (int)2)) && bool((key->current == (int)2))))){
						HX_STACK_LINE(347)
						key->current = (int)1;
					}
				}
				HX_STACK_LINE(350)
				key->last = key->current;
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAndroidKeys_obj,update,(void))

int FlxAndroidKeys_obj::TOTAL;


FlxAndroidKeys_obj::FlxAndroidKeys_obj()
{
}

void FlxAndroidKeys_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAndroidKeys);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(_keyLookup,"_keyLookup");
	HX_MARK_MEMBER_NAME(_keyList,"_keyList");
	HX_MARK_MEMBER_NAME(preventDefaultBackAction,"preventDefaultBackAction");
	HX_MARK_MEMBER_NAME(pressed,"pressed");
	HX_MARK_MEMBER_NAME(justPressed,"justPressed");
	HX_MARK_MEMBER_NAME(justReleased,"justReleased");
	HX_MARK_END_CLASS();
}

void FlxAndroidKeys_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(_keyLookup,"_keyLookup");
	HX_VISIT_MEMBER_NAME(_keyList,"_keyList");
	HX_VISIT_MEMBER_NAME(preventDefaultBackAction,"preventDefaultBackAction");
	HX_VISIT_MEMBER_NAME(pressed,"pressed");
	HX_VISIT_MEMBER_NAME(justPressed,"justPressed");
	HX_VISIT_MEMBER_NAME(justReleased,"justReleased");
}

Dynamic FlxAndroidKeys_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addKey") ) { return addKey_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
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
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return anyJustPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"checkKeyStatus") ) { return checkKeyStatus_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return anyJustReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"updateKeyStates") ) { return updateKeyStates_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"preventDefaultBackAction") ) { return preventDefaultBackAction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAndroidKeys_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pressed") ) { pressed=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_keyList") ) { _keyList=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_keyLookup") ) { _keyLookup=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { justPressed=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { justReleased=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"preventDefaultBackAction") ) { preventDefaultBackAction=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAndroidKeys_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("enabled"));
	outFields->push(HX_CSTRING("_keyLookup"));
	outFields->push(HX_CSTRING("_keyList"));
	outFields->push(HX_CSTRING("preventDefaultBackAction"));
	outFields->push(HX_CSTRING("pressed"));
	outFields->push(HX_CSTRING("justPressed"));
	outFields->push(HX_CSTRING("justReleased"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TOTAL"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxAndroidKeys_obj,enabled),HX_CSTRING("enabled")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxAndroidKeys_obj,_keyLookup),HX_CSTRING("_keyLookup")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(FlxAndroidKeys_obj,_keyList),HX_CSTRING("_keyList")},
	{hx::fsBool,(int)offsetof(FlxAndroidKeys_obj,preventDefaultBackAction),HX_CSTRING("preventDefaultBackAction")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxAndroidKeys_obj,pressed),HX_CSTRING("pressed")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxAndroidKeys_obj,justPressed),HX_CSTRING("justPressed")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxAndroidKeys_obj,justReleased),HX_CSTRING("justReleased")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("enabled"),
	HX_CSTRING("_keyLookup"),
	HX_CSTRING("_keyList"),
	HX_CSTRING("preventDefaultBackAction"),
	HX_CSTRING("addKey"),
	HX_CSTRING("pressed"),
	HX_CSTRING("anyPressed"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("anyJustPressed"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("anyJustReleased"),
	HX_CSTRING("getKeyCode"),
	HX_CSTRING("getIsDown"),
	HX_CSTRING("destroy"),
	HX_CSTRING("reset"),
	HX_CSTRING("checkKeyStatus"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("inKeyArray"),
	HX_CSTRING("updateKeyStates"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAndroidKeys_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAndroidKeys_obj::TOTAL,"TOTAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAndroidKeys_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAndroidKeys_obj::TOTAL,"TOTAL");
};

#endif

Class FlxAndroidKeys_obj::__mClass;

void FlxAndroidKeys_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.android.FlxAndroidKeys"), hx::TCanCast< FlxAndroidKeys_obj> ,sStaticFields,sMemberFields,
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

void FlxAndroidKeys_obj::__boot()
{
	TOTAL= (int)2;
}

} // end namespace flixel
} // end namespace input
} // end namespace android
