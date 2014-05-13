#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_util_FlxAngle
#include <flixel/util/FlxAngle.h>
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
HX_STACK_FRAME("states.PlayState","new",0x0e695aa3,"states.PlayState.new","states/PlayState.hx",18,0x36e487ae)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(39)
	this->GRAVITY = (int)980;
	HX_STACK_LINE(38)
	this->NUMBER_OF_BULLETS = (int)20;
	HX_STACK_LINE(37)
	this->BULLET_SPEED = (int)800;
	HX_STACK_LINE(36)
	this->SHOT_DELAY = 0.3;
	HX_STACK_LINE(33)
	this->elapsed = (int)65535;
	HX_STACK_LINE(18)
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
		HX_STACK_FRAME("states.PlayState","create",0x0cd56899,"states.PlayState.create","states/PlayState.hx",42,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		this->super::create();
		HX_STACK_LINE(46)
		::flixel::FlxG_obj::cameras->set_bgColor((int)-12285748);
		HX_STACK_LINE(49)
		::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new((int)50,(::flixel::FlxG_obj::height - (int)74),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(49)
		this->gun = _g;
		HX_STACK_LINE(50)
		this->gun->loadGraphic(HX_CSTRING("assets/bullet.png"),null(),null(),null(),null(),null());
		HX_STACK_LINE(53)
		::flixel::group::FlxTypedGroup _g1 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(53)
		this->bulletPool = _g1;
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(56)
			int _g2 = this->NUMBER_OF_BULLETS;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(56)
			while((true)){
				HX_STACK_LINE(56)
				if ((!(((_g11 < _g2))))){
					HX_STACK_LINE(56)
					break;
				}
				HX_STACK_LINE(56)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(58)
				::flixel::FlxSprite bullet = ::flixel::FlxSprite_obj::__new(this->gun->x,this->gun->y,null());		HX_STACK_VAR(bullet,"bullet");
				HX_STACK_LINE(59)
				bullet->loadGraphic(HX_CSTRING("assets/bullet.png"),null(),null(),null(),null(),null());
				HX_STACK_LINE(62)
				bullet->acceleration->set_y(this->GRAVITY);
				HX_STACK_LINE(65)
				this->bulletPool->add(bullet);
				HX_STACK_LINE(68)
				bullet->kill();
			}
		}
		HX_STACK_LINE(72)
		::flixel::group::FlxTypedGroup _g2 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(72)
		this->ground = _g2;
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(75)
			int _g3 = ::Std_obj::_int((Float(::flixel::FlxG_obj::width) / Float((int)32)));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(75)
			while((true)){
				HX_STACK_LINE(75)
				if ((!(((_g11 < _g3))))){
					HX_STACK_LINE(75)
					break;
				}
				HX_STACK_LINE(75)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(76)
				int x = (i * (int)32);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(78)
				::flixel::FlxSprite groundBlock = ::flixel::FlxSprite_obj::__new(x,(::flixel::FlxG_obj::height - (int)32),null());		HX_STACK_VAR(groundBlock,"groundBlock");
				HX_STACK_LINE(79)
				groundBlock->loadGraphic(HX_CSTRING("assets/ground.png"),null(),null(),null(),null(),null());
				HX_STACK_LINE(81)
				groundBlock->set_immovable(true);
				HX_STACK_LINE(84)
				this->ground->add(groundBlock);
			}
		}
		HX_STACK_LINE(88)
		::flixel::group::FlxTypedGroup _g3 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(88)
		this->explosionPool = _g3;
		HX_STACK_LINE(91)
		this->add(this->ground);
		HX_STACK_LINE(92)
		this->add(this->gun);
		HX_STACK_LINE(93)
		this->add(this->bulletPool);
		HX_STACK_LINE(94)
		this->add(this->explosionPool);
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("states.PlayState","destroy",0x410194bd,"states.PlayState.destroy","states/PlayState.hx",98,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("states.PlayState","update",0x17cb87a6,"states.PlayState.update","states/PlayState.hx",102,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		hx::AddEq(this->elapsed,::flixel::FlxG_obj::elapsed);
		HX_STACK_LINE(107)
		Float _g = ::flixel::util::FlxAngle_obj::angleBetweenMouse(this->gun,true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(107)
		this->gun->set_angle(_g);
		HX_STACK_LINE(110)
		if (((bool((::flixel::FlxG_obj::mouse->_leftButton->current > (int)0)) && bool((this->elapsed >= this->SHOT_DELAY))))){
			HX_STACK_LINE(111)
			this->shootBullet();
			HX_STACK_LINE(114)
			this->elapsed = (int)0;
		}
		HX_STACK_LINE(118)
		for(::cpp::FastIterator_obj< ::flixel::FlxSprite > *__it = ::cpp::CreateFastIterator< ::flixel::FlxSprite >(::flixel::group::FlxTypedGroupIterator_obj::__new(this->bulletPool->members,null()));  __it->hasNext(); ){
			::flixel::FlxSprite bullet = __it->next();
			if ((bullet->alive)){
				HX_STACK_LINE(120)
				Float _g1 = ::Math_obj::atan2(bullet->velocity->y,bullet->velocity->x);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(120)
				Float _g2 = (_g1 * ((Float((int)180) / Float(::Math_obj::PI))));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(120)
				bullet->set_angle(_g2);
				HX_STACK_LINE(122)
				if ((!(bullet->isOnScreen(::flixel::FlxG_obj::camera)))){
					HX_STACK_LINE(123)
					bullet->kill();
				}
			}
;
		}
		HX_STACK_LINE(129)
		for(::cpp::FastIterator_obj< ::flixel::FlxSprite > *__it = ::cpp::CreateFastIterator< ::flixel::FlxSprite >(::flixel::group::FlxTypedGroupIterator_obj::__new(this->explosionPool->members,null()));  __it->hasNext(); ){
			::flixel::FlxSprite explosion = __it->next();
			if (((  ((explosion->alive)) ? bool(explosion->animation->get_finished()) : bool(false) ))){
				HX_STACK_LINE(131)
				explosion->kill();
			}
;
		}
		HX_STACK_LINE(135)
		this->super::update();
		HX_STACK_LINE(138)
		::flixel::FlxG_obj::overlap(this->bulletPool,this->ground,this->onBulletHitsGround_dyn(),::flixel::FlxObject_obj::separate_dyn());
	}
return null();
}


Void PlayState_obj::shootBullet( ){
{
		HX_STACK_FRAME("states.PlayState","shootBullet",0x2973bec4,"states.PlayState.shootBullet","states/PlayState.hx",141,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(143)
		::flixel::FlxSprite bullet = this->bulletPool->getFirstDead();		HX_STACK_VAR(bullet,"bullet");
		HX_STACK_LINE(146)
		if (((bullet == null()))){
			HX_STACK_LINE(147)
			return null();
		}
		HX_STACK_LINE(150)
		bullet->revive();
		HX_STACK_LINE(153)
		bullet->reset(this->gun->x,this->gun->y);
		HX_STACK_LINE(156)
		Float _g = ::flixel::util::FlxAngle_obj::angleBetweenMouse(bullet,true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(156)
		bullet->set_angle(_g);
		HX_STACK_LINE(159)
		Float _g1 = ::Math_obj::cos((bullet->angle * ((Float(::Math_obj::PI) / Float((int)180)))));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(159)
		Float _g2 = (_g1 * this->BULLET_SPEED);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(159)
		bullet->velocity->set_x(_g2);
		HX_STACK_LINE(160)
		Float _g3 = ::Math_obj::sin((bullet->angle * ((Float(::Math_obj::PI) / Float((int)180)))));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(160)
		Float _g4 = (_g3 * this->BULLET_SPEED);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(160)
		bullet->velocity->set_y(_g4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,shootBullet,(void))

Void PlayState_obj::onBulletHitsGround( ::flixel::FlxObject bullet,::flixel::FlxObject ground){
{
		HX_STACK_FRAME("states.PlayState","onBulletHitsGround",0x40294aa5,"states.PlayState.onBulletHitsGround","states/PlayState.hx",163,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bullet,"bullet")
		HX_STACK_ARG(ground,"ground")
		HX_STACK_LINE(164)
		this->getExplosion(bullet->x,bullet->y);
		HX_STACK_LINE(166)
		bullet->kill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,onBulletHitsGround,(void))

::flixel::FlxSprite PlayState_obj::getExplosion( Float x,Float y){
	HX_STACK_FRAME("states.PlayState","getExplosion",0x2d5e057c,"states.PlayState.getExplosion","states/PlayState.hx",169,0x36e487ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(171)
	::flixel::FlxSprite explosion = this->explosionPool->getFirstDead();		HX_STACK_VAR(explosion,"explosion");
	HX_STACK_LINE(174)
	if (((explosion == null()))){
		HX_STACK_LINE(175)
		::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(175)
		explosion = _g;
		HX_STACK_LINE(176)
		explosion->loadGraphic(HX_CSTRING("assets/explosion.png"),true,null(),null(),null(),null());
		HX_STACK_LINE(178)
		explosion->animation->add(HX_CSTRING("boom"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3),(int)60,false);
		HX_STACK_LINE(180)
		this->explosionPool->add(explosion);
	}
	HX_STACK_LINE(184)
	explosion->revive();
	HX_STACK_LINE(187)
	explosion->set_x((x - (int)64));
	HX_STACK_LINE(188)
	explosion->set_y((y - (int)64));
	HX_STACK_LINE(191)
	int _g1 = ::Std_obj::random((int)360);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(191)
	explosion->set_angle(_g1);
	HX_STACK_LINE(194)
	explosion->animation->play(HX_CSTRING("boom"),null(),null());
	HX_STACK_LINE(196)
	return explosion;
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,getExplosion,return )


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(gun,"gun");
	HX_MARK_MEMBER_NAME(bulletPool,"bulletPool");
	HX_MARK_MEMBER_NAME(explosionPool,"explosionPool");
	HX_MARK_MEMBER_NAME(ground,"ground");
	HX_MARK_MEMBER_NAME(elapsed,"elapsed");
	HX_MARK_MEMBER_NAME(SHOT_DELAY,"SHOT_DELAY");
	HX_MARK_MEMBER_NAME(BULLET_SPEED,"BULLET_SPEED");
	HX_MARK_MEMBER_NAME(NUMBER_OF_BULLETS,"NUMBER_OF_BULLETS");
	HX_MARK_MEMBER_NAME(GRAVITY,"GRAVITY");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gun,"gun");
	HX_VISIT_MEMBER_NAME(bulletPool,"bulletPool");
	HX_VISIT_MEMBER_NAME(explosionPool,"explosionPool");
	HX_VISIT_MEMBER_NAME(ground,"ground");
	HX_VISIT_MEMBER_NAME(elapsed,"elapsed");
	HX_VISIT_MEMBER_NAME(SHOT_DELAY,"SHOT_DELAY");
	HX_VISIT_MEMBER_NAME(BULLET_SPEED,"BULLET_SPEED");
	HX_VISIT_MEMBER_NAME(NUMBER_OF_BULLETS,"NUMBER_OF_BULLETS");
	HX_VISIT_MEMBER_NAME(GRAVITY,"GRAVITY");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"gun") ) { return gun; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ground") ) { return ground; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { return elapsed; }
		if (HX_FIELD_EQ(inName,"GRAVITY") ) { return GRAVITY; }
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
		if (HX_FIELD_EQ(inName,"getExplosion") ) { return getExplosion_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"explosionPool") ) { return explosionPool; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"NUMBER_OF_BULLETS") ) { return NUMBER_OF_BULLETS; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onBulletHitsGround") ) { return onBulletHitsGround_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"gun") ) { gun=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ground") ) { ground=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { elapsed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GRAVITY") ) { GRAVITY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bulletPool") ) { bulletPool=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHOT_DELAY") ) { SHOT_DELAY=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"BULLET_SPEED") ) { BULLET_SPEED=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"explosionPool") ) { explosionPool=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
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
	outFields->push(HX_CSTRING("explosionPool"));
	outFields->push(HX_CSTRING("ground"));
	outFields->push(HX_CSTRING("elapsed"));
	outFields->push(HX_CSTRING("SHOT_DELAY"));
	outFields->push(HX_CSTRING("BULLET_SPEED"));
	outFields->push(HX_CSTRING("NUMBER_OF_BULLETS"));
	outFields->push(HX_CSTRING("GRAVITY"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,gun),HX_CSTRING("gun")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,bulletPool),HX_CSTRING("bulletPool")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,explosionPool),HX_CSTRING("explosionPool")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,ground),HX_CSTRING("ground")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,elapsed),HX_CSTRING("elapsed")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,SHOT_DELAY),HX_CSTRING("SHOT_DELAY")},
	{hx::fsInt,(int)offsetof(PlayState_obj,BULLET_SPEED),HX_CSTRING("BULLET_SPEED")},
	{hx::fsInt,(int)offsetof(PlayState_obj,NUMBER_OF_BULLETS),HX_CSTRING("NUMBER_OF_BULLETS")},
	{hx::fsInt,(int)offsetof(PlayState_obj,GRAVITY),HX_CSTRING("GRAVITY")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("gun"),
	HX_CSTRING("bulletPool"),
	HX_CSTRING("explosionPool"),
	HX_CSTRING("ground"),
	HX_CSTRING("elapsed"),
	HX_CSTRING("SHOT_DELAY"),
	HX_CSTRING("BULLET_SPEED"),
	HX_CSTRING("NUMBER_OF_BULLETS"),
	HX_CSTRING("GRAVITY"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("shootBullet"),
	HX_CSTRING("onBulletHitsGround"),
	HX_CSTRING("getExplosion"),
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
