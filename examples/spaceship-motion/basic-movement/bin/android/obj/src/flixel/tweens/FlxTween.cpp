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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
#ifndef INCLUDED_flixel_plugin_TweenManager
#include <flixel/plugin/TweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_AngleTween
#include <flixel/tweens/misc/AngleTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#include <flixel/tweens/motion/CircularMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#include <flixel/tweens/motion/CubicMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearMotion
#include <flixel/tweens/motion/LinearMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearPath
#include <flixel/tweens/motion/LinearPath.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadMotion
#include <flixel/tweens/motion/QuadMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadPath
#include <flixel/tweens/motion/QuadPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace tweens{

Void FlxTween_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.FlxTween","new",0xa442439f,"flixel.tweens.FlxTween.new","flixel/tweens/FlxTween.hx",22,0x5d58d691)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(356)
	this->_delayToUse = (int)0;
	HX_STACK_LINE(355)
	this->_secondsSinceStart = (int)0;
	HX_STACK_LINE(353)
	this->loopDelay = (int)0;
	HX_STACK_LINE(348)
	this->startDelay = (int)0;
	HX_STACK_LINE(343)
	this->executions = (int)0;
	HX_STACK_LINE(329)
	this->duration = (int)0;
	HX_STACK_LINE(328)
	this->active = true;
	HX_STACK_LINE(363)
	Dynamic _g = this->resolveTweenOptions(Options);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(363)
	Options = _g;
	HX_STACK_LINE(365)
	this->set_type(Options->__Field(HX_CSTRING("type"),true));
	HX_STACK_LINE(366)
	this->complete = Options->__Field(HX_CSTRING("complete"),true);
	HX_STACK_LINE(367)
	this->ease = Options->__Field(HX_CSTRING("ease"),true);
	HX_STACK_LINE(368)
	this->setDelays(Options->__Field(HX_CSTRING("startDelay"),true),Options->__Field(HX_CSTRING("loopDelay"),true));
}
;
	return null();
}

//FlxTween_obj::~FlxTween_obj() { }

Dynamic FlxTween_obj::__CreateEmpty() { return  new FlxTween_obj; }
hx::ObjectPtr< FlxTween_obj > FlxTween_obj::__new(Dynamic Options)
{  hx::ObjectPtr< FlxTween_obj > result = new FlxTween_obj();
	result->__construct(Options);
	return result;}

Dynamic FlxTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTween_obj > result = new FlxTween_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *FlxTween_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Dynamic FlxTween_obj::resolveTweenOptions( Dynamic Options){
	HX_STACK_FRAME("flixel.tweens.FlxTween","resolveTweenOptions",0x40bbd67e,"flixel.tweens.FlxTween.resolveTweenOptions","flixel/tweens/FlxTween.hx",372,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Options,"Options")
	HX_STACK_LINE(373)
	if (((Options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tweens/FlxTween.hx",374,0x5d58d691)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)8,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(374)
		Options = _Function_2_1::Block();
	}
	HX_STACK_LINE(376)
	if (((Options->__Field(HX_CSTRING("type"),true) == null()))){
		HX_STACK_LINE(377)
		Options->__FieldRef(HX_CSTRING("type")) = (int)8;
	}
	HX_STACK_LINE(379)
	return Options;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,resolveTweenOptions,return )

Void FlxTween_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","destroy",0xb268abb9,"flixel.tweens.FlxTween.destroy","flixel/tweens/FlxTween.hx",383,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(384)
		this->complete = null();
		HX_STACK_LINE(385)
		this->ease = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,destroy,(void))

Void FlxTween_obj::update( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","update",0xb905642a,"flixel.tweens.FlxTween.update","flixel/tweens/FlxTween.hx",389,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(390)
		hx::AddEq(this->_secondsSinceStart,::flixel::FlxG_obj::elapsed);
		HX_STACK_LINE(391)
		Float delay;		HX_STACK_VAR(delay,"delay");
		HX_STACK_LINE(391)
		if (((this->executions > (int)0))){
			HX_STACK_LINE(391)
			delay = this->loopDelay;
		}
		else{
			HX_STACK_LINE(391)
			delay = this->startDelay;
		}
		HX_STACK_LINE(392)
		Float _g = ::Math_obj::max((this->_secondsSinceStart - delay),(int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(392)
		Float _g1 = (Float(_g) / Float(this->duration));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(392)
		this->scale = _g1;
		HX_STACK_LINE(393)
		if (((this->ease_dyn() != null()))){
			HX_STACK_LINE(395)
			Float _g2 = this->ease(this->scale);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(395)
			this->scale = _g2;
		}
		HX_STACK_LINE(397)
		if ((this->backward)){
			HX_STACK_LINE(399)
			this->scale = ((int)1 - this->scale);
		}
		HX_STACK_LINE(401)
		if (((this->_secondsSinceStart >= (this->duration + delay)))){
			HX_STACK_LINE(403)
			if ((this->backward)){
				HX_STACK_LINE(403)
				this->scale = (int)0;
			}
			else{
				HX_STACK_LINE(403)
				this->scale = (int)1;
			}
			HX_STACK_LINE(404)
			this->finished = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,update,(void))

::flixel::tweens::FlxTween FlxTween_obj::start( ){
	HX_STACK_FRAME("flixel.tweens.FlxTween","start",0xd6ec7561,"flixel.tweens.FlxTween.start","flixel/tweens/FlxTween.hx",412,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_LINE(413)
	this->_secondsSinceStart = (int)0;
	HX_STACK_LINE(414)
	if (((this->executions > (int)0))){
		HX_STACK_LINE(414)
		this->_delayToUse = this->loopDelay;
	}
	else{
		HX_STACK_LINE(414)
		this->_delayToUse = this->startDelay;
	}
	HX_STACK_LINE(415)
	if (((this->duration == (int)0))){
		HX_STACK_LINE(417)
		this->active = false;
		HX_STACK_LINE(418)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(420)
	this->active = true;
	HX_STACK_LINE(421)
	this->finished = false;
	HX_STACK_LINE(422)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,start,return )

Void FlxTween_obj::cancel( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","cancel",0xea33cb9b,"flixel.tweens.FlxTween.cancel","flixel/tweens/FlxTween.hx",430,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(431)
		this->active = false;
		HX_STACK_LINE(432)
		this->finished = true;
		HX_STACK_LINE(433)
		::flixel::tweens::FlxTween_obj::manager->remove(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,cancel,(void))

Void FlxTween_obj::finish( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","finish",0xb87f1e74,"flixel.tweens.FlxTween.finish","flixel/tweens/FlxTween.hx",437,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(438)
		(this->executions)++;
		HX_STACK_LINE(440)
		if (((this->complete_dyn() != null()))){
			HX_STACK_LINE(441)
			this->complete(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(443)
		{
			HX_STACK_LINE(443)
			int _g = (int(this->type) & int((int)-17));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(443)
			switch( (int)(_g)){
				case (int)1: {
					HX_STACK_LINE(446)
					this->_secondsSinceStart = (this->duration + this->startDelay);
					HX_STACK_LINE(447)
					this->active = false;
					HX_STACK_LINE(448)
					this->finished = true;
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(451)
					this->active = false;
					HX_STACK_LINE(452)
					this->finished = true;
					HX_STACK_LINE(453)
					this->_secondsSinceStart = (this->duration + this->startDelay);
					HX_STACK_LINE(454)
					::flixel::tweens::FlxTween_obj::manager->remove(hx::ObjectPtr<OBJ_>(this));
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(457)
					this->_secondsSinceStart = (hx::Mod(((this->_secondsSinceStart - this->_delayToUse)),this->duration) + this->_delayToUse);
					HX_STACK_LINE(458)
					Float _g1 = ::Math_obj::max((this->_secondsSinceStart - this->_delayToUse),(int)0);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(458)
					Float _g11 = (Float(_g1) / Float(this->duration));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(458)
					this->scale = _g11;
					HX_STACK_LINE(459)
					if (((bool((bool((this->ease_dyn() != null())) && bool((this->scale > (int)0)))) && bool((this->scale < (int)1))))){
						HX_STACK_LINE(461)
						Float _g2 = this->ease(this->scale);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(461)
						this->scale = _g2;
					}
					HX_STACK_LINE(463)
					this->start();
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(466)
					this->_secondsSinceStart = (hx::Mod(((this->_secondsSinceStart - this->_delayToUse)),this->duration) + this->_delayToUse);
					HX_STACK_LINE(467)
					Float _g3 = ::Math_obj::max((this->_secondsSinceStart - this->_delayToUse),(int)0);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(467)
					Float _g4 = (Float(_g3) / Float(this->duration));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(467)
					this->scale = _g4;
					HX_STACK_LINE(468)
					if (((bool((bool((this->ease_dyn() != null())) && bool((this->scale > (int)0)))) && bool((this->scale < (int)1))))){
						HX_STACK_LINE(470)
						Float _g5 = this->ease(this->scale);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(470)
						this->scale = _g5;
					}
					HX_STACK_LINE(472)
					this->backward = !(this->backward);
					HX_STACK_LINE(473)
					if ((this->backward)){
						HX_STACK_LINE(475)
						this->scale = ((int)1 - this->scale);
					}
					HX_STACK_LINE(477)
					this->start();
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,finish,(void))

::flixel::tweens::FlxTween FlxTween_obj::setDelays( Dynamic StartDelay,Dynamic LoopDelay){
	HX_STACK_FRAME("flixel.tweens.FlxTween","setDelays",0x750c1d51,"flixel.tweens.FlxTween.setDelays","flixel/tweens/FlxTween.hx",488,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartDelay,"StartDelay")
	HX_STACK_ARG(LoopDelay,"LoopDelay")
	HX_STACK_LINE(489)
	this->set_startDelay((  (((StartDelay != null()))) ? Float(StartDelay) : Float((int)0) ));
	HX_STACK_LINE(490)
	this->set_loopDelay((  (((LoopDelay != null()))) ? Float(LoopDelay) : Float((int)0) ));
	HX_STACK_LINE(491)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTween_obj,setDelays,return )

Float FlxTween_obj::set_startDelay( Float value){
	HX_STACK_FRAME("flixel.tweens.FlxTween","set_startDelay",0xdc7f879f,"flixel.tweens.FlxTween.set_startDelay","flixel/tweens/FlxTween.hx",495,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(496)
	Float dly = ::Math_obj::abs(value);		HX_STACK_VAR(dly,"dly");
	HX_STACK_LINE(497)
	if (((this->executions == (int)0))){
		HX_STACK_LINE(499)
		Float _g = ::Math_obj::max((this->_secondsSinceStart - this->_delayToUse),(int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(499)
		Float _g1 = (Float(_g) / Float(this->duration));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(499)
		Float _g2 = (this->duration * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(499)
		Float _g3 = ::Math_obj::max((dly - this->startDelay),(int)0);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(499)
		Float _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(499)
		this->_secondsSinceStart = _g4;
		HX_STACK_LINE(500)
		this->_delayToUse = dly;
	}
	HX_STACK_LINE(502)
	return this->startDelay = dly;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_startDelay,return )

Float FlxTween_obj::set_loopDelay( Dynamic value){
	HX_STACK_FRAME("flixel.tweens.FlxTween","set_loopDelay",0xc5954461,"flixel.tweens.FlxTween.set_loopDelay","flixel/tweens/FlxTween.hx",506,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(507)
	Float dly = ::Math_obj::abs(value);		HX_STACK_VAR(dly,"dly");
	HX_STACK_LINE(508)
	if (((this->executions > (int)0))){
		HX_STACK_LINE(510)
		Float _g = ::Math_obj::max((this->_secondsSinceStart - this->_delayToUse),(int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(510)
		Float _g1 = (Float(_g) / Float(this->duration));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(510)
		Float _g2 = (this->duration * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(510)
		Float _g3 = ::Math_obj::max((dly - this->loopDelay),(int)0);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(510)
		Float _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(510)
		this->_secondsSinceStart = _g4;
		HX_STACK_LINE(511)
		this->_delayToUse = dly;
	}
	HX_STACK_LINE(513)
	return this->loopDelay = dly;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_loopDelay,return )

Float FlxTween_obj::get_percent( ){
	HX_STACK_FRAME("flixel.tweens.FlxTween","get_percent",0x9c57551b,"flixel.tweens.FlxTween.get_percent","flixel/tweens/FlxTween.hx",517,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_LINE(518)
	Float _g = ::Math_obj::max((this->_secondsSinceStart - this->_delayToUse),(int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(518)
	return (Float(_g) / Float(this->duration));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,get_percent,return )

Float FlxTween_obj::set_percent( Float value){
	HX_STACK_FRAME("flixel.tweens.FlxTween","set_percent",0xa6c45c27,"flixel.tweens.FlxTween.set_percent","flixel/tweens/FlxTween.hx",523,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(523)
	return this->_secondsSinceStart = ((this->duration * value) + this->_delayToUse);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_percent,return )

int FlxTween_obj::set_type( int value){
	HX_STACK_FRAME("flixel.tweens.FlxTween","set_type",0x136d7018,"flixel.tweens.FlxTween.set_type","flixel/tweens/FlxTween.hx",527,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(528)
	if (((value == (int)0))){
		HX_STACK_LINE(530)
		value = (int)8;
	}
	else{
		HX_STACK_LINE(532)
		if (((value == (int)16))){
			HX_STACK_LINE(534)
			value = (int)17;
		}
	}
	HX_STACK_LINE(537)
	this->backward = (((int(value) & int((int)16))) > (int)0);
	HX_STACK_LINE(538)
	return this->type = value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_type,return )

int FlxTween_obj::PERSIST;

int FlxTween_obj::LOOPING;

int FlxTween_obj::PINGPONG;

int FlxTween_obj::ONESHOT;

int FlxTween_obj::BACKWARD;

::flixel::plugin::TweenManager FlxTween_obj::manager;

::flixel::tweens::misc::VarTween FlxTween_obj::tween( Dynamic Object,Dynamic Values,hx::Null< Float >  __o_Duration,Dynamic Options){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTween","tween",0x6c51ab6a,"flixel.tweens.FlxTween.tween","flixel/tweens/FlxTween.hx",65,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Values,"Values")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(66)
		::flixel::tweens::misc::VarTween tween = ::flixel::tweens::misc::VarTween_obj::__new(Options);		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(67)
		tween->tween(Object,Values,Duration);
		HX_STACK_LINE(68)
		return ::flixel::tweens::FlxTween_obj::manager->add_flixel_tweens_misc_VarTween(tween,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTween_obj,tween,return )

::flixel::tweens::misc::NumTween FlxTween_obj::num( Float FromValue,Float ToValue,hx::Null< Float >  __o_Duration,Dynamic Options,Dynamic TweenFunction){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTween","num",0xa4425185,"flixel.tweens.FlxTween.num","flixel/tweens/FlxTween.hx",93,0x5d58d691)
	HX_STACK_ARG(FromValue,"FromValue")
	HX_STACK_ARG(ToValue,"ToValue")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Options,"Options")
	HX_STACK_ARG(TweenFunction,"TweenFunction")
{
		HX_STACK_LINE(94)
		::flixel::tweens::misc::NumTween tween = ::flixel::tweens::misc::NumTween_obj::__new(Options);		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(95)
		tween->tween(FromValue,ToValue,Duration,TweenFunction);
		HX_STACK_LINE(96)
		return ::flixel::tweens::FlxTween_obj::manager->add_flixel_tweens_misc_NumTween(tween,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,num,return )

::flixel::tweens::misc::AngleTween FlxTween_obj::angle( ::flixel::FlxSprite Sprite,Float FromAngle,Float ToAngle,hx::Null< Float >  __o_Duration,Dynamic Options){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTween","angle",0x75c344d2,"flixel.tweens.FlxTween.angle","flixel/tweens/FlxTween.hx",116,0x5d58d691)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(FromAngle,"FromAngle")
	HX_STACK_ARG(ToAngle,"ToAngle")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(117)
		::flixel::tweens::misc::AngleTween tween = ::flixel::tweens::misc::AngleTween_obj::__new(Options);		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(118)
		tween->tween(FromAngle,ToAngle,Duration,Sprite);
		HX_STACK_LINE(119)
		return ::flixel::tweens::FlxTween_obj::manager->add_flixel_tweens_misc_AngleTween(tween,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,angle,return )

::flixel::tweens::misc::ColorTween FlxTween_obj::color( ::flixel::FlxSprite Sprite,hx::Null< Float >  __o_Duration,int FromColor,int ToColor,hx::Null< Float >  __o_FromAlpha,hx::Null< Float >  __o_ToAlpha,Dynamic Options){
Float Duration = __o_Duration.Default(1);
Float FromAlpha = __o_FromAlpha.Default(1);
Float ToAlpha = __o_ToAlpha.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTween","color",0x9d3d7262,"flixel.tweens.FlxTween.color","flixel/tweens/FlxTween.hx",141,0x5d58d691)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FromColor,"FromColor")
	HX_STACK_ARG(ToColor,"ToColor")
	HX_STACK_ARG(FromAlpha,"FromAlpha")
	HX_STACK_ARG(ToAlpha,"ToAlpha")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(142)
		::flixel::tweens::misc::ColorTween tween = ::flixel::tweens::misc::ColorTween_obj::__new(Options);		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(143)
		tween->tween(Duration,FromColor,ToColor,FromAlpha,ToAlpha,Sprite);
		HX_STACK_LINE(144)
		return ::flixel::tweens::FlxTween_obj::manager->add_flixel_tweens_misc_ColorTween(tween,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxTween_obj,color,return )

::flixel::tweens::motion::LinearMotion FlxTween_obj::linearMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ToX,Float ToY,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTween","linearMotion",0xd656f2dc,"flixel.tweens.FlxTween.linearMotion","flixel/tweens/FlxTween.hx",167,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(ToX,"ToX")
	HX_STACK_ARG(ToY,"ToY")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(168)
		::flixel::tweens::motion::LinearMotion tween = ::flixel::tweens::motion::LinearMotion_obj::__new(Options);		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(169)
		tween->setObject(Object);
		HX_STACK_LINE(170)
		tween->setMotion(FromX,FromY,ToX,ToY,DurationOrSpeed,UseDuration);
		HX_STACK_LINE(171)
		return ::flixel::tweens::FlxTween_obj::manager->add_flixel_tweens_motion_LinearMotion(tween,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxTween_obj,linearMotion,return )

::flixel::tweens::motion::QuadMotion FlxTween_obj::quadMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTween","quadMotion",0xc62584fe,"flixel.tweens.FlxTween.quadMotion","flixel/tweens/FlxTween.hx",196,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(ControlX,"ControlX")
	HX_STACK_ARG(ControlY,"ControlY")
	HX_STACK_ARG(ToX,"ToX")
	HX_STACK_ARG(ToY,"ToY")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(197)
		::flixel::tweens::motion::QuadMotion tween = ::flixel::tweens::motion::QuadMotion_obj::__new(Options);		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(198)
		tween->setObject(Object);
		HX_STACK_LINE(199)
		tween->setMotion(FromX,FromY,ControlX,ControlY,ToX,ToY,DurationOrSpeed,UseDuration);
		HX_STACK_LINE(200)
		return ::flixel::tweens::FlxTween_obj::manager->add_flixel_tweens_motion_QuadMotion(tween,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(FlxTween_obj,quadMotion,return )

::flixel::tweens::motion::CubicMotion FlxTween_obj::cubicMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float aX,Float aY,Float bX,Float bY,Float ToX,Float ToY,hx::Null< Float >  __o_Duration,Dynamic Options){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTween","cubicMotion",0xa068755f,"flixel.tweens.FlxTween.cubicMotion","flixel/tweens/FlxTween.hx",226,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(aX,"aX")
	HX_STACK_ARG(aY,"aY")
	HX_STACK_ARG(bX,"bX")
	HX_STACK_ARG(bY,"bY")
	HX_STACK_ARG(ToX,"ToX")
	HX_STACK_ARG(ToY,"ToY")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(227)
		::flixel::tweens::motion::CubicMotion tween = ::flixel::tweens::motion::CubicMotion_obj::__new(Options);		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(228)
		tween->setObject(Object);
		HX_STACK_LINE(229)
		tween->setMotion(FromX,FromY,aX,aY,bX,bY,ToX,ToY,Duration);
		HX_STACK_LINE(230)
		return ::flixel::tweens::FlxTween_obj::manager->add_flixel_tweens_motion_CubicMotion(tween,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(FlxTween_obj,cubicMotion,return )

::flixel::tweens::motion::CircularMotion FlxTween_obj::circularMotion( ::flixel::FlxObject Object,Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTween","circularMotion",0x65e89916,"flixel.tweens.FlxTween.circularMotion","flixel/tweens/FlxTween.hx",255,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(CenterX,"CenterX")
	HX_STACK_ARG(CenterY,"CenterY")
	HX_STACK_ARG(Radius,"Radius")
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(Clockwise,"Clockwise")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(256)
		::flixel::tweens::motion::CircularMotion tween = ::flixel::tweens::motion::CircularMotion_obj::__new(Options);		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(257)
		tween->setObject(Object);
		HX_STACK_LINE(258)
		tween->setMotion(CenterX,CenterY,Radius,Angle,Clockwise,DurationOrSpeed,UseDuration);
		HX_STACK_LINE(259)
		return ::flixel::tweens::FlxTween_obj::manager->add_flixel_tweens_motion_CircularMotion(tween,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxTween_obj,circularMotion,return )

::flixel::tweens::motion::LinearPath FlxTween_obj::linearPath( ::flixel::FlxObject Object,Array< ::Dynamic > Points,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTween","linearPath",0xd40abccb,"flixel.tweens.FlxTween.linearPath","flixel/tweens/FlxTween.hx",279,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Points,"Points")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(280)
		::flixel::tweens::motion::LinearPath tween = ::flixel::tweens::motion::LinearPath_obj::__new(Options);		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(282)
		if (((Points != null()))){
			HX_STACK_LINE(284)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(284)
			while((true)){
				HX_STACK_LINE(284)
				if ((!(((_g < Points->length))))){
					HX_STACK_LINE(284)
					break;
				}
				HX_STACK_LINE(284)
				::flixel::util::FlxPoint point = Points->__get(_g).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(284)
				++(_g);
				HX_STACK_LINE(286)
				tween->addPoint(point->x,point->y);
			}
		}
		HX_STACK_LINE(290)
		tween->setObject(Object);
		HX_STACK_LINE(291)
		tween->setMotion(DurationOrSpeed,UseDuration);
		HX_STACK_LINE(292)
		return ::flixel::tweens::FlxTween_obj::manager->add_flixel_tweens_motion_LinearPath(tween,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,linearPath,return )

::flixel::tweens::motion::QuadPath FlxTween_obj::quadPath( ::flixel::FlxObject Object,Array< ::Dynamic > Points,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTween","quadPath",0x6abb226d,"flixel.tweens.FlxTween.quadPath","flixel/tweens/FlxTween.hx",312,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Points,"Points")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(313)
		::flixel::tweens::motion::QuadPath tween = ::flixel::tweens::motion::QuadPath_obj::__new(Options);		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(315)
		if (((Points != null()))){
			HX_STACK_LINE(317)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(317)
			while((true)){
				HX_STACK_LINE(317)
				if ((!(((_g < Points->length))))){
					HX_STACK_LINE(317)
					break;
				}
				HX_STACK_LINE(317)
				::flixel::util::FlxPoint point = Points->__get(_g).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(317)
				++(_g);
				HX_STACK_LINE(319)
				tween->addPoint(point->x,point->y);
			}
		}
		HX_STACK_LINE(323)
		tween->setObject(Object);
		HX_STACK_LINE(324)
		tween->setMotion(DurationOrSpeed,UseDuration);
		HX_STACK_LINE(325)
		return ::flixel::tweens::FlxTween_obj::manager->add_flixel_tweens_motion_QuadPath(tween,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,quadPath,return )


FlxTween_obj::FlxTween_obj()
{
}

void FlxTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTween);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(ease,"ease");
	HX_MARK_MEMBER_NAME(complete,"complete");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(backward,"backward");
	HX_MARK_MEMBER_NAME(executions,"executions");
	HX_MARK_MEMBER_NAME(startDelay,"startDelay");
	HX_MARK_MEMBER_NAME(loopDelay,"loopDelay");
	HX_MARK_MEMBER_NAME(_secondsSinceStart,"_secondsSinceStart");
	HX_MARK_MEMBER_NAME(_delayToUse,"_delayToUse");
	HX_MARK_END_CLASS();
}

void FlxTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(ease,"ease");
	HX_VISIT_MEMBER_NAME(complete,"complete");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(backward,"backward");
	HX_VISIT_MEMBER_NAME(executions,"executions");
	HX_VISIT_MEMBER_NAME(startDelay,"startDelay");
	HX_VISIT_MEMBER_NAME(loopDelay,"loopDelay");
	HX_VISIT_MEMBER_NAME(_secondsSinceStart,"_secondsSinceStart");
	HX_VISIT_MEMBER_NAME(_delayToUse,"_delayToUse");
}

Dynamic FlxTween_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"num") ) { return num_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { return color_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"percent") ) { return get_percent(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quadPath") ) { return quadPath_dyn(); }
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		if (HX_FIELD_EQ(inName,"complete") ) { return complete; }
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		if (HX_FIELD_EQ(inName,"backward") ) { return backward; }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loopDelay") ) { return loopDelay; }
		if (HX_FIELD_EQ(inName,"setDelays") ) { return setDelays_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quadMotion") ) { return quadMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"linearPath") ) { return linearPath_dyn(); }
		if (HX_FIELD_EQ(inName,"executions") ) { return executions; }
		if (HX_FIELD_EQ(inName,"startDelay") ) { return startDelay; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cubicMotion") ) { return cubicMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"_delayToUse") ) { return _delayToUse; }
		if (HX_FIELD_EQ(inName,"get_percent") ) { return get_percent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_percent") ) { return set_percent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"linearMotion") ) { return linearMotion_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_loopDelay") ) { return set_loopDelay_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"circularMotion") ) { return circularMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"set_startDelay") ) { return set_startDelay_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_secondsSinceStart") ) { return _secondsSinceStart; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"resolveTweenOptions") ) { return resolveTweenOptions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { ease=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp) return set_type(inValue);type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::flixel::plugin::TweenManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percent") ) { return set_percent(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"complete") ) { complete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backward") ) { backward=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loopDelay") ) { if (inCallProp) return set_loopDelay(inValue);loopDelay=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"executions") ) { executions=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startDelay") ) { if (inCallProp) return set_startDelay(inValue);startDelay=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_delayToUse") ) { _delayToUse=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_secondsSinceStart") ) { _secondsSinceStart=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("duration"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("percent"));
	outFields->push(HX_CSTRING("finished"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("backward"));
	outFields->push(HX_CSTRING("executions"));
	outFields->push(HX_CSTRING("startDelay"));
	outFields->push(HX_CSTRING("loopDelay"));
	outFields->push(HX_CSTRING("_secondsSinceStart"));
	outFields->push(HX_CSTRING("_delayToUse"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("PERSIST"),
	HX_CSTRING("LOOPING"),
	HX_CSTRING("PINGPONG"),
	HX_CSTRING("ONESHOT"),
	HX_CSTRING("BACKWARD"),
	HX_CSTRING("manager"),
	HX_CSTRING("tween"),
	HX_CSTRING("num"),
	HX_CSTRING("angle"),
	HX_CSTRING("color"),
	HX_CSTRING("linearMotion"),
	HX_CSTRING("quadMotion"),
	HX_CSTRING("cubicMotion"),
	HX_CSTRING("circularMotion"),
	HX_CSTRING("linearPath"),
	HX_CSTRING("quadPath"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxTween_obj,active),HX_CSTRING("active")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,duration),HX_CSTRING("duration")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTween_obj,ease),HX_CSTRING("ease")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTween_obj,complete),HX_CSTRING("complete")},
	{hx::fsInt,(int)offsetof(FlxTween_obj,type),HX_CSTRING("type")},
	{hx::fsBool,(int)offsetof(FlxTween_obj,finished),HX_CSTRING("finished")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,scale),HX_CSTRING("scale")},
	{hx::fsBool,(int)offsetof(FlxTween_obj,backward),HX_CSTRING("backward")},
	{hx::fsInt,(int)offsetof(FlxTween_obj,executions),HX_CSTRING("executions")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,startDelay),HX_CSTRING("startDelay")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,loopDelay),HX_CSTRING("loopDelay")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,_secondsSinceStart),HX_CSTRING("_secondsSinceStart")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,_delayToUse),HX_CSTRING("_delayToUse")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("active"),
	HX_CSTRING("duration"),
	HX_CSTRING("ease"),
	HX_CSTRING("complete"),
	HX_CSTRING("type"),
	HX_CSTRING("finished"),
	HX_CSTRING("scale"),
	HX_CSTRING("backward"),
	HX_CSTRING("executions"),
	HX_CSTRING("startDelay"),
	HX_CSTRING("loopDelay"),
	HX_CSTRING("_secondsSinceStart"),
	HX_CSTRING("_delayToUse"),
	HX_CSTRING("resolveTweenOptions"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("start"),
	HX_CSTRING("cancel"),
	HX_CSTRING("finish"),
	HX_CSTRING("setDelays"),
	HX_CSTRING("set_startDelay"),
	HX_CSTRING("set_loopDelay"),
	HX_CSTRING("get_percent"),
	HX_CSTRING("set_percent"),
	HX_CSTRING("set_type"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTween_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTween_obj::PERSIST,"PERSIST");
	HX_MARK_MEMBER_NAME(FlxTween_obj::LOOPING,"LOOPING");
	HX_MARK_MEMBER_NAME(FlxTween_obj::PINGPONG,"PINGPONG");
	HX_MARK_MEMBER_NAME(FlxTween_obj::ONESHOT,"ONESHOT");
	HX_MARK_MEMBER_NAME(FlxTween_obj::BACKWARD,"BACKWARD");
	HX_MARK_MEMBER_NAME(FlxTween_obj::manager,"manager");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTween_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::PERSIST,"PERSIST");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::LOOPING,"LOOPING");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::PINGPONG,"PINGPONG");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::ONESHOT,"ONESHOT");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::BACKWARD,"BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::manager,"manager");
};

#endif

Class FlxTween_obj::__mClass;

void FlxTween_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.FlxTween"), hx::TCanCast< FlxTween_obj> ,sStaticFields,sMemberFields,
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

void FlxTween_obj::__boot()
{
	PERSIST= (int)1;
	LOOPING= (int)2;
	PINGPONG= (int)4;
	ONESHOT= (int)8;
	BACKWARD= (int)16;
}

} // end namespace flixel
} // end namespace tweens
