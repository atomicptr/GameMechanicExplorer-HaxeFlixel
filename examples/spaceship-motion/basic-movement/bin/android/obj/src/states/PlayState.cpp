#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace states{

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("states.PlayState","new",0x0e695aa3,"states.PlayState.new","states/PlayState.hx",16,0x36e487ae)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(23)
	this->MAX_SPEED = (int)250;
	HX_STACK_LINE(22)
	this->ACCELERATION = (int)200;
	HX_STACK_LINE(21)
	this->ROTATION_SPEED = (int)180;
	HX_STACK_LINE(16)
	super::__construct(MaxSize);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("states.PlayState","create",0x0cd56899,"states.PlayState.create","states/PlayState.hx",26,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		this->super::create();
		HX_STACK_LINE(29)
		::flixel::FlxG_obj::mouse->set_visible(false);
		HX_STACK_LINE(32)
		::flixel::FlxG_obj::cameras->set_bgColor((int)-13421773);
		HX_STACK_LINE(35)
		::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new((Float(::flixel::FlxG_obj::width) / Float((int)2)),(Float(::flixel::FlxG_obj::height) / Float((int)2)),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		this->ship = _g;
		HX_STACK_LINE(36)
		this->ship->loadGraphic(HX_CSTRING("assets/ship.png"),true,(int)32,(int)32,null(),null());
		HX_STACK_LINE(37)
		this->ship->set_angle((int)-90);
		HX_STACK_LINE(39)
		this->ship->maxVelocity->set_x(this->MAX_SPEED);
		HX_STACK_LINE(40)
		this->ship->maxVelocity->set_y(this->MAX_SPEED);
		HX_STACK_LINE(42)
		this->add(this->ship);
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("states.PlayState","destroy",0x410194bd,"states.PlayState.destroy","states/PlayState.hx",46,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("states.PlayState","update",0x17cb87a6,"states.PlayState.update","states/PlayState.hx",50,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		if (((this->ship->x > ::flixel::FlxG_obj::width))){
			HX_STACK_LINE(53)
			this->ship->set_x((int)0);
		}
		HX_STACK_LINE(56)
		if (((this->ship->x < (int)0))){
			HX_STACK_LINE(57)
			this->ship->set_x(::flixel::FlxG_obj::width);
		}
		HX_STACK_LINE(60)
		if (((this->ship->y > ::flixel::FlxG_obj::height))){
			HX_STACK_LINE(61)
			this->ship->set_y((int)0);
		}
		HX_STACK_LINE(64)
		if (((this->ship->y < (int)0))){
			HX_STACK_LINE(65)
			this->ship->set_y(::flixel::FlxG_obj::height);
		}
		HX_STACK_LINE(68)
		if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("LEFT")),(int)1))){
			HX_STACK_LINE(70)
			this->ship->angularVelocity = -(this->ROTATION_SPEED);
		}
		else{
			HX_STACK_LINE(71)
			if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("RIGHT")),(int)1))){
				HX_STACK_LINE(73)
				this->ship->angularVelocity = this->ROTATION_SPEED;
			}
			else{
				HX_STACK_LINE(76)
				this->ship->angularVelocity = (int)0;
			}
		}
		HX_STACK_LINE(79)
		if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("UP")),(int)1))){
			HX_STACK_LINE(82)
			Float _g = ::Math_obj::cos((this->ship->angle * ((Float(::Math_obj::PI) / Float((int)180)))));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(82)
			Float _g1 = (_g * this->ACCELERATION);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(82)
			this->ship->acceleration->set_x(_g1);
			HX_STACK_LINE(83)
			Float _g2 = ::Math_obj::sin((this->ship->angle * ((Float(::Math_obj::PI) / Float((int)180)))));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(83)
			Float _g3 = (_g2 * this->ACCELERATION);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(83)
			this->ship->acceleration->set_y(_g3);
			HX_STACK_LINE(86)
			this->ship->animation->set_frameIndex((int)1);
		}
		else{
			HX_STACK_LINE(89)
			this->ship->acceleration->set_x((int)0);
			HX_STACK_LINE(90)
			this->ship->acceleration->set_y((int)0);
			HX_STACK_LINE(93)
			this->ship->animation->set_frameIndex((int)0);
		}
		HX_STACK_LINE(96)
		this->super::update();
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(ship,"ship");
	HX_MARK_MEMBER_NAME(ROTATION_SPEED,"ROTATION_SPEED");
	HX_MARK_MEMBER_NAME(ACCELERATION,"ACCELERATION");
	HX_MARK_MEMBER_NAME(MAX_SPEED,"MAX_SPEED");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ship,"ship");
	HX_VISIT_MEMBER_NAME(ROTATION_SPEED,"ROTATION_SPEED");
	HX_VISIT_MEMBER_NAME(ACCELERATION,"ACCELERATION");
	HX_VISIT_MEMBER_NAME(MAX_SPEED,"MAX_SPEED");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ship") ) { return ship; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MAX_SPEED") ) { return MAX_SPEED; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ACCELERATION") ) { return ACCELERATION; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ROTATION_SPEED") ) { return ROTATION_SPEED; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ship") ) { ship=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MAX_SPEED") ) { MAX_SPEED=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ACCELERATION") ) { ACCELERATION=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ROTATION_SPEED") ) { ROTATION_SPEED=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ship"));
	outFields->push(HX_CSTRING("ROTATION_SPEED"));
	outFields->push(HX_CSTRING("ACCELERATION"));
	outFields->push(HX_CSTRING("MAX_SPEED"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,ship),HX_CSTRING("ship")},
	{hx::fsInt,(int)offsetof(PlayState_obj,ROTATION_SPEED),HX_CSTRING("ROTATION_SPEED")},
	{hx::fsInt,(int)offsetof(PlayState_obj,ACCELERATION),HX_CSTRING("ACCELERATION")},
	{hx::fsInt,(int)offsetof(PlayState_obj,MAX_SPEED),HX_CSTRING("MAX_SPEED")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("ship"),
	HX_CSTRING("ROTATION_SPEED"),
	HX_CSTRING("ACCELERATION"),
	HX_CSTRING("MAX_SPEED"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("states.PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
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

void PlayState_obj::__boot()
{
}

} // end namespace states
