#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
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
	HX_STACK_LINE(30)
	this->NUMBER_OF_BULLETS = (int)20;
	HX_STACK_LINE(29)
	this->BULLET_SPEED = (int)500;
	HX_STACK_LINE(28)
	this->SHOT_DELAY = 0.1;
	HX_STACK_LINE(25)
	this->elapsed = (int)65535;
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
		HX_STACK_FRAME("states.PlayState","create",0x0cd56899,"states.PlayState.create","states/PlayState.hx",33,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		this->super::create();
		HX_STACK_LINE(37)
		::flixel::FlxG_obj::cameras->set_bgColor((int)-12285748);
		HX_STACK_LINE(40)
		::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new((int)50,(Float(::flixel::FlxG_obj::height) / Float((int)2)),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		this->gun = _g;
		HX_STACK_LINE(41)
		this->gun->loadGraphic(HX_CSTRING("assets/bullet.png"),null(),null(),null(),null(),null());
		HX_STACK_LINE(44)
		::flixel::group::FlxTypedGroup _g1 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(44)
		this->bulletPool = _g1;
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(47)
			int _g2 = this->NUMBER_OF_BULLETS;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(47)
			while((true)){
				HX_STACK_LINE(47)
				if ((!(((_g11 < _g2))))){
					HX_STACK_LINE(47)
					break;
				}
				HX_STACK_LINE(47)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(49)
				::flixel::FlxSprite bullet = ::flixel::FlxSprite_obj::__new(this->gun->x,this->gun->y,null());		HX_STACK_VAR(bullet,"bullet");
				HX_STACK_LINE(50)
				bullet->loadGraphic(HX_CSTRING("assets/bullet.png"),null(),null(),null(),null(),null());
				HX_STACK_LINE(53)
				this->bulletPool->add(bullet);
				HX_STACK_LINE(56)
				bullet->kill();
			}
		}
		HX_STACK_LINE(60)
		this->add(this->gun);
		HX_STACK_LINE(61)
		this->add(this->bulletPool);
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("states.PlayState","destroy",0x410194bd,"states.PlayState.destroy","states/PlayState.hx",65,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("states.PlayState","update",0x17cb87a6,"states.PlayState.update","states/PlayState.hx",69,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		hx::AddEq(this->elapsed,::flixel::FlxG_obj::elapsed);
		HX_STACK_LINE(74)
		if (((bool((::flixel::FlxG_obj::mouse->_leftButton->current > (int)0)) && bool((this->elapsed >= this->SHOT_DELAY))))){
			HX_STACK_LINE(75)
			this->shootBullet();
			HX_STACK_LINE(78)
			this->elapsed = (int)0;
		}
		HX_STACK_LINE(82)
		for(::cpp::FastIterator_obj< ::flixel::FlxSprite > *__it = ::cpp::CreateFastIterator< ::flixel::FlxSprite >(::flixel::group::FlxTypedGroupIterator_obj::__new(this->bulletPool->members,null()));  __it->hasNext(); ){
			::flixel::FlxSprite bullet = __it->next();
			if (((  ((bullet->alive)) ? bool(!(bullet->isOnScreen(::flixel::FlxG_obj::camera))) : bool(false) ))){
				HX_STACK_LINE(84)
				bullet->kill();
			}
;
		}
		HX_STACK_LINE(88)
		this->super::update();
	}
return null();
}


Void PlayState_obj::shootBullet( ){
{
		HX_STACK_FRAME("states.PlayState","shootBullet",0x2973bec4,"states.PlayState.shootBullet","states/PlayState.hx",91,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		Dynamic bullet = this->bulletPool->getFirstDead();		HX_STACK_VAR(bullet,"bullet");
		HX_STACK_LINE(96)
		if (((bullet == null()))){
			HX_STACK_LINE(97)
			return null();
		}
		HX_STACK_LINE(101)
		bullet->__Field(HX_CSTRING("revive"),true)();
		HX_STACK_LINE(104)
		bullet->__Field(HX_CSTRING("reset"),true)(this->gun->x,this->gun->y);
		HX_STACK_LINE(107)
		bullet->__Field(HX_CSTRING("velocity"),true)->__FieldRef(HX_CSTRING("x")) = this->BULLET_SPEED;
		HX_STACK_LINE(108)
		bullet->__Field(HX_CSTRING("velocity"),true)->__FieldRef(HX_CSTRING("y")) = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,shootBullet,(void))


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(gun,"gun");
	HX_MARK_MEMBER_NAME(bulletPool,"bulletPool");
	HX_MARK_MEMBER_NAME(elapsed,"elapsed");
	HX_MARK_MEMBER_NAME(SHOT_DELAY,"SHOT_DELAY");
	HX_MARK_MEMBER_NAME(BULLET_SPEED,"BULLET_SPEED");
	HX_MARK_MEMBER_NAME(NUMBER_OF_BULLETS,"NUMBER_OF_BULLETS");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gun,"gun");
	HX_VISIT_MEMBER_NAME(bulletPool,"bulletPool");
	HX_VISIT_MEMBER_NAME(elapsed,"elapsed");
	HX_VISIT_MEMBER_NAME(SHOT_DELAY,"SHOT_DELAY");
	HX_VISIT_MEMBER_NAME(BULLET_SPEED,"BULLET_SPEED");
	HX_VISIT_MEMBER_NAME(NUMBER_OF_BULLETS,"NUMBER_OF_BULLETS");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"gun") ) { return gun; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { return elapsed; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bulletPool") ) { return bulletPool; }
		if (HX_FIELD_EQ(inName,"SHOT_DELAY") ) { return SHOT_DELAY; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shootBullet") ) { return shootBullet_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"BULLET_SPEED") ) { return BULLET_SPEED; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"NUMBER_OF_BULLETS") ) { return NUMBER_OF_BULLETS; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"gun") ) { gun=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { elapsed=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bulletPool") ) { bulletPool=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHOT_DELAY") ) { SHOT_DELAY=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"BULLET_SPEED") ) { BULLET_SPEED=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"NUMBER_OF_BULLETS") ) { NUMBER_OF_BULLETS=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("gun"));
	outFields->push(HX_CSTRING("bulletPool"));
	outFields->push(HX_CSTRING("elapsed"));
	outFields->push(HX_CSTRING("SHOT_DELAY"));
	outFields->push(HX_CSTRING("BULLET_SPEED"));
	outFields->push(HX_CSTRING("NUMBER_OF_BULLETS"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,gun),HX_CSTRING("gun")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,bulletPool),HX_CSTRING("bulletPool")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,elapsed),HX_CSTRING("elapsed")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,SHOT_DELAY),HX_CSTRING("SHOT_DELAY")},
	{hx::fsInt,(int)offsetof(PlayState_obj,BULLET_SPEED),HX_CSTRING("BULLET_SPEED")},
	{hx::fsInt,(int)offsetof(PlayState_obj,NUMBER_OF_BULLETS),HX_CSTRING("NUMBER_OF_BULLETS")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("gun"),
	HX_CSTRING("bulletPool"),
	HX_CSTRING("elapsed"),
	HX_CSTRING("SHOT_DELAY"),
	HX_CSTRING("BULLET_SPEED"),
	HX_CSTRING("NUMBER_OF_BULLETS"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("shootBullet"),
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
