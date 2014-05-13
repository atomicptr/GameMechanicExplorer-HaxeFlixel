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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
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
#ifndef INCLUDED_flixel_util_FlxAngle
#include <flixel/util/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxVelocity
#include <flixel/util/FlxVelocity.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{

Void FlxVelocity_obj::__construct()
{
	return null();
}

//FlxVelocity_obj::~FlxVelocity_obj() { }

Dynamic FlxVelocity_obj::__CreateEmpty() { return  new FlxVelocity_obj; }
hx::ObjectPtr< FlxVelocity_obj > FlxVelocity_obj::__new()
{  hx::ObjectPtr< FlxVelocity_obj > result = new FlxVelocity_obj();
	result->__construct();
	return result;}

Dynamic FlxVelocity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxVelocity_obj > result = new FlxVelocity_obj();
	result->__construct();
	return result;}

Void FlxVelocity_obj::moveTowardsObject( ::flixel::FlxSprite Source,::flixel::FlxSprite Dest,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_MaxTime){
Float Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_FRAME("flixel.util.FlxVelocity","moveTowardsObject",0xd4eb8731,"flixel.util.FlxVelocity.moveTowardsObject","flixel/util/FlxVelocity.hx",25,0xc0bd09c9)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Dest,"Dest")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(MaxTime,"MaxTime")
{
		HX_STACK_LINE(26)
		Float a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
			HX_STACK_LINE(26)
			Float dx = ((Dest->x + Dest->origin->x) - ((Source->x + Source->origin->x)));		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(26)
			Float dy = ((Dest->y + Dest->origin->y) - ((Source->y + Source->origin->y)));		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(26)
			if ((AsDegrees)){
				HX_STACK_LINE(26)
				Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(26)
				a = (radians * ((Float((int)180) / Float(::Math_obj::PI))));
			}
			else{
				HX_STACK_LINE(26)
				a = ::Math_obj::atan2(dy,dx);
			}
		}
		HX_STACK_LINE(28)
		if (((MaxTime > (int)0))){
			HX_STACK_LINE(30)
			int d;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(30)
			{
				HX_STACK_LINE(30)
				Float dx = ((Source->x + Source->origin->x) - ((Dest->x + Dest->origin->x)));		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(30)
				Float dy = ((Source->y + Source->origin->y) - ((Dest->y + Dest->origin->y)));		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(30)
				Float _g = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(30)
				d = ::Std_obj::_int(_g);
			}
			HX_STACK_LINE(33)
			int _g1 = ::Std_obj::_int((Float(d) / Float(((Float(MaxTime) / Float((int)1000))))));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(33)
			Speed = _g1;
		}
		HX_STACK_LINE(36)
		Float _g2 = ::Math_obj::cos(a);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(36)
		Float _g3 = (_g2 * Speed);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(36)
		Source->velocity->set_x(_g3);
		HX_STACK_LINE(37)
		Float _g4 = ::Math_obj::sin(a);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(37)
		Float _g5 = (_g4 * Speed);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(37)
		Source->velocity->set_y(_g5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsObject,(void))

Void FlxVelocity_obj::accelerateTowardsObject( ::flixel::FlxSprite Source,::flixel::FlxSprite Dest,Float Acceleration,Float MaxXSpeed,Float MaxYSpeed){
{
		HX_STACK_FRAME("flixel.util.FlxVelocity","accelerateTowardsObject",0x7cc76525,"flixel.util.FlxVelocity.accelerateTowardsObject","flixel/util/FlxVelocity.hx",52,0xc0bd09c9)
		HX_STACK_ARG(Source,"Source")
		HX_STACK_ARG(Dest,"Dest")
		HX_STACK_ARG(Acceleration,"Acceleration")
		HX_STACK_ARG(MaxXSpeed,"MaxXSpeed")
		HX_STACK_ARG(MaxYSpeed,"MaxYSpeed")
		HX_STACK_LINE(53)
		Float a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
			HX_STACK_LINE(53)
			Float dx = ((Dest->x + Dest->origin->x) - ((Source->x + Source->origin->x)));		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(53)
			Float dy = ((Dest->y + Dest->origin->y) - ((Source->y + Source->origin->y)));		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(53)
			if ((AsDegrees)){
				HX_STACK_LINE(53)
				Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(53)
				a = (radians * ((Float((int)180) / Float(::Math_obj::PI))));
			}
			else{
				HX_STACK_LINE(53)
				a = ::Math_obj::atan2(dy,dx);
			}
		}
		HX_STACK_LINE(55)
		Source->velocity->set_x((int)0);
		HX_STACK_LINE(56)
		Source->velocity->set_y((int)0);
		HX_STACK_LINE(58)
		Float _g = ::Math_obj::cos(a);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		Float _g1 = (_g * Acceleration);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(58)
		Source->acceleration->set_x(_g1);
		HX_STACK_LINE(59)
		Float _g2 = ::Math_obj::sin(a);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(59)
		Float _g3 = (_g2 * Acceleration);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(59)
		Source->acceleration->set_y(_g3);
		HX_STACK_LINE(61)
		Source->maxVelocity->set_x(MaxXSpeed);
		HX_STACK_LINE(62)
		Source->maxVelocity->set_y(MaxYSpeed);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVelocity_obj,accelerateTowardsObject,(void))

Void FlxVelocity_obj::moveTowardsMouse( ::flixel::FlxSprite Source,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_MaxTime){
Float Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_FRAME("flixel.util.FlxVelocity","moveTowardsMouse",0xa83b61f3,"flixel.util.FlxVelocity.moveTowardsMouse","flixel/util/FlxVelocity.hx",77,0xc0bd09c9)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(MaxTime,"MaxTime")
{
		HX_STACK_LINE(78)
		Float a = ::flixel::util::FlxAngle_obj::angleBetweenMouse(Source,null());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(80)
		if (((MaxTime > (int)0))){
			HX_STACK_LINE(82)
			int d;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				Float dx = ((Source->x + Source->origin->x) - ::flixel::FlxG_obj::mouse->screenX);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(82)
				Float dy = ((Source->y + Source->origin->y) - ::flixel::FlxG_obj::mouse->screenY);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(82)
				Float _g = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				d = ::Std_obj::_int(_g);
			}
			HX_STACK_LINE(85)
			int _g1 = ::Std_obj::_int((Float(d) / Float(((Float(MaxTime) / Float((int)1000))))));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(85)
			Speed = _g1;
		}
		HX_STACK_LINE(88)
		Float _g2 = ::Math_obj::cos(a);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(88)
		Float _g3 = (_g2 * Speed);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(88)
		Source->velocity->set_x(_g3);
		HX_STACK_LINE(89)
		Float _g4 = ::Math_obj::sin(a);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(89)
		Float _g5 = (_g4 * Speed);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(89)
		Source->velocity->set_y(_g5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVelocity_obj,moveTowardsMouse,(void))

Void FlxVelocity_obj::moveTowardsTouch( ::flixel::FlxSprite Source,::flixel::input::touch::FlxTouch Touch,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_MaxTime){
Float Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_FRAME("flixel.util.FlxVelocity","moveTowardsTouch",0xb009638d,"flixel.util.FlxVelocity.moveTowardsTouch","flixel/util/FlxVelocity.hx",105,0xc0bd09c9)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(MaxTime,"MaxTime")
{
		HX_STACK_LINE(106)
		Float a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
			HX_STACK_LINE(106)
			::flixel::util::FlxPoint p = Source->getScreenXY(null(),null());		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(106)
			Float dx = (Touch->screenX - p->x);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(106)
			Float dy = (Touch->screenY - p->y);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(106)
			if ((AsDegrees)){
				HX_STACK_LINE(106)
				Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(106)
				a = (radians * ((Float((int)180) / Float(::Math_obj::PI))));
			}
			else{
				HX_STACK_LINE(106)
				a = ::Math_obj::atan2(dy,dx);
			}
		}
		HX_STACK_LINE(108)
		if (((MaxTime > (int)0))){
			HX_STACK_LINE(110)
			int d;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(110)
			{
				HX_STACK_LINE(110)
				Float dx = ((Source->x + Source->origin->x) - Touch->screenX);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(110)
				Float dy = ((Source->y + Source->origin->y) - Touch->screenY);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(110)
				Float _g = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(110)
				d = ::Std_obj::_int(_g);
			}
			HX_STACK_LINE(113)
			int _g1 = ::Std_obj::_int((Float(d) / Float(((Float(MaxTime) / Float((int)1000))))));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(113)
			Speed = _g1;
		}
		HX_STACK_LINE(116)
		Float _g2 = ::Math_obj::cos(a);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(116)
		Float _g3 = (_g2 * Speed);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(116)
		Source->velocity->set_x(_g3);
		HX_STACK_LINE(117)
		Float _g4 = ::Math_obj::sin(a);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(117)
		Float _g5 = (_g4 * Speed);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(117)
		Source->velocity->set_y(_g5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsTouch,(void))

Void FlxVelocity_obj::accelerateTowardsMouse( ::flixel::FlxSprite Source,Float Acceleration,Float MaxXSpeed,Float MaxYSpeed){
{
		HX_STACK_FRAME("flixel.util.FlxVelocity","accelerateTowardsMouse",0x69d87e7f,"flixel.util.FlxVelocity.accelerateTowardsMouse","flixel/util/FlxVelocity.hx",133,0xc0bd09c9)
		HX_STACK_ARG(Source,"Source")
		HX_STACK_ARG(Acceleration,"Acceleration")
		HX_STACK_ARG(MaxXSpeed,"MaxXSpeed")
		HX_STACK_ARG(MaxYSpeed,"MaxYSpeed")
		HX_STACK_LINE(134)
		Float a = ::flixel::util::FlxAngle_obj::angleBetweenMouse(Source,null());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(136)
		Source->velocity->set_x((int)0);
		HX_STACK_LINE(137)
		Source->velocity->set_y((int)0);
		HX_STACK_LINE(139)
		Float _g = ::Math_obj::cos(a);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(139)
		Float _g1 = (_g * Acceleration);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(139)
		Source->acceleration->set_x(_g1);
		HX_STACK_LINE(140)
		Float _g2 = ::Math_obj::sin(a);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(140)
		Float _g3 = (_g2 * Acceleration);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(140)
		Source->acceleration->set_y(_g3);
		HX_STACK_LINE(142)
		Source->maxVelocity->set_x(MaxXSpeed);
		HX_STACK_LINE(143)
		Source->maxVelocity->set_y(MaxYSpeed);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,accelerateTowardsMouse,(void))

Void FlxVelocity_obj::accelerateTowardsTouch( ::flixel::FlxSprite Source,::flixel::input::touch::FlxTouch Touch,Float Acceleration,Float MaxXSpeed,Float MaxYSpeed){
{
		HX_STACK_FRAME("flixel.util.FlxVelocity","accelerateTowardsTouch",0x71a68019,"flixel.util.FlxVelocity.accelerateTowardsTouch","flixel/util/FlxVelocity.hx",160,0xc0bd09c9)
		HX_STACK_ARG(Source,"Source")
		HX_STACK_ARG(Touch,"Touch")
		HX_STACK_ARG(Acceleration,"Acceleration")
		HX_STACK_ARG(MaxXSpeed,"MaxXSpeed")
		HX_STACK_ARG(MaxYSpeed,"MaxYSpeed")
		HX_STACK_LINE(161)
		Float a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(161)
		{
			HX_STACK_LINE(161)
			bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
			HX_STACK_LINE(161)
			::flixel::util::FlxPoint p = Source->getScreenXY(null(),null());		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(161)
			Float dx = (Touch->screenX - p->x);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(161)
			Float dy = (Touch->screenY - p->y);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(161)
			if ((AsDegrees)){
				HX_STACK_LINE(161)
				Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(161)
				a = (radians * ((Float((int)180) / Float(::Math_obj::PI))));
			}
			else{
				HX_STACK_LINE(161)
				a = ::Math_obj::atan2(dy,dx);
			}
		}
		HX_STACK_LINE(163)
		Source->velocity->set_x((int)0);
		HX_STACK_LINE(164)
		Source->velocity->set_y((int)0);
		HX_STACK_LINE(166)
		Float _g = ::Math_obj::cos(a);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(166)
		Float _g1 = (_g * Acceleration);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(166)
		Source->acceleration->set_x(_g1);
		HX_STACK_LINE(167)
		Float _g2 = ::Math_obj::sin(a);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(167)
		Float _g3 = (_g2 * Acceleration);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(167)
		Source->acceleration->set_y(_g3);
		HX_STACK_LINE(169)
		Source->maxVelocity->set_x(MaxXSpeed);
		HX_STACK_LINE(170)
		Source->maxVelocity->set_y(MaxYSpeed);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVelocity_obj,accelerateTowardsTouch,(void))

Void FlxVelocity_obj::moveTowardsPoint( ::flixel::FlxSprite Source,::flixel::util::FlxPoint Target,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_MaxTime){
Float Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_FRAME("flixel.util.FlxVelocity","moveTowardsPoint",0x6266001e,"flixel.util.FlxVelocity.moveTowardsPoint","flixel/util/FlxVelocity.hx",186,0xc0bd09c9)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(MaxTime,"MaxTime")
{
		HX_STACK_LINE(187)
		Float a = ::flixel::util::FlxAngle_obj::angleBetweenPoint(Source,Target,null());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(189)
		if (((MaxTime > (int)0))){
			HX_STACK_LINE(191)
			int d;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(191)
			{
				HX_STACK_LINE(191)
				Float dx = ((Source->x + Source->origin->x) - Target->x);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(191)
				Float dy = ((Source->y + Source->origin->y) - Target->y);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(191)
				if ((Target->_weak)){
					HX_STACK_LINE(191)
					::flixel::util::FlxPoint_obj::_pool->put(Target);
				}
				HX_STACK_LINE(191)
				Float _g = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(191)
				d = ::Std_obj::_int(_g);
			}
			HX_STACK_LINE(194)
			int _g1 = ::Std_obj::_int((Float(d) / Float(((Float(MaxTime) / Float((int)1000))))));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(194)
			Speed = _g1;
		}
		HX_STACK_LINE(197)
		Float _g2 = ::Math_obj::cos(a);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(197)
		Float _g3 = (_g2 * Speed);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(197)
		Source->velocity->set_x(_g3);
		HX_STACK_LINE(198)
		Float _g4 = ::Math_obj::sin(a);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(198)
		Float _g5 = (_g4 * Speed);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(198)
		Source->velocity->set_y(_g5);
		HX_STACK_LINE(200)
		if ((Target->_weak)){
			HX_STACK_LINE(200)
			::flixel::util::FlxPoint_obj::_pool->put(Target);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsPoint,(void))

Void FlxVelocity_obj::accelerateTowardsPoint( ::flixel::FlxSprite Source,::flixel::util::FlxPoint Target,Float Acceleration,Float MaxXSpeed,Float MaxYSpeed){
{
		HX_STACK_FRAME("flixel.util.FlxVelocity","accelerateTowardsPoint",0x24031caa,"flixel.util.FlxVelocity.accelerateTowardsPoint","flixel/util/FlxVelocity.hx",215,0xc0bd09c9)
		HX_STACK_ARG(Source,"Source")
		HX_STACK_ARG(Target,"Target")
		HX_STACK_ARG(Acceleration,"Acceleration")
		HX_STACK_ARG(MaxXSpeed,"MaxXSpeed")
		HX_STACK_ARG(MaxYSpeed,"MaxYSpeed")
		HX_STACK_LINE(216)
		Float a = ::flixel::util::FlxAngle_obj::angleBetweenPoint(Source,Target,null());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(218)
		Source->velocity->set_x((int)0);
		HX_STACK_LINE(219)
		Source->velocity->set_y((int)0);
		HX_STACK_LINE(221)
		Float _g = ::Math_obj::cos(a);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(221)
		Float _g1 = (_g * Acceleration);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(221)
		Source->acceleration->set_x(_g1);
		HX_STACK_LINE(222)
		Float _g2 = ::Math_obj::sin(a);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(222)
		Float _g3 = (_g2 * Acceleration);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(222)
		Source->acceleration->set_y(_g3);
		HX_STACK_LINE(224)
		Source->maxVelocity->set_x(MaxXSpeed);
		HX_STACK_LINE(225)
		Source->maxVelocity->set_y(MaxYSpeed);
		HX_STACK_LINE(227)
		if ((Target->_weak)){
			HX_STACK_LINE(227)
			::flixel::util::FlxPoint_obj::_pool->put(Target);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVelocity_obj,accelerateTowardsPoint,(void))

::flixel::util::FlxPoint FlxVelocity_obj::velocityFromAngle( Float Angle,Float Speed){
	HX_STACK_FRAME("flixel.util.FlxVelocity","velocityFromAngle",0xbac881f3,"flixel.util.FlxVelocity.velocityFromAngle","flixel/util/FlxVelocity.hx",238,0xc0bd09c9)
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_LINE(239)
	Float a = (Angle * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(241)
	::flixel::util::FlxPoint result;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(241)
	{
		HX_STACK_LINE(241)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(241)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(241)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(241)
		point->_inPool = false;
		HX_STACK_LINE(241)
		result = point;
	}
	HX_STACK_LINE(243)
	Float _g = ::Math_obj::cos(a);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(243)
	Float _g1 = (_g * Speed);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(243)
	result->set_x(_g1);
	HX_STACK_LINE(244)
	Float _g2 = ::Math_obj::sin(a);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(244)
	Float _g3 = (_g2 * Speed);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(244)
	result->set_y(_g3);
	HX_STACK_LINE(246)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVelocity_obj,velocityFromAngle,return )

::flixel::util::FlxPoint FlxVelocity_obj::velocityFromFacing( ::flixel::FlxSprite Parent,Float Speed){
	HX_STACK_FRAME("flixel.util.FlxVelocity","velocityFromFacing",0x35955cfa,"flixel.util.FlxVelocity.velocityFromFacing","flixel/util/FlxVelocity.hx",257,0xc0bd09c9)
	HX_STACK_ARG(Parent,"Parent")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_LINE(258)
	Float a = (int)0;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(260)
	if (((Parent->facing == (int)1))){
		HX_STACK_LINE(262)
		a = ((int)180 * ((Float(::Math_obj::PI) / Float((int)180))));
	}
	else{
		HX_STACK_LINE(264)
		if (((Parent->facing == (int)16))){
			HX_STACK_LINE(266)
			a = ((int)0 * ((Float(::Math_obj::PI) / Float((int)180))));
		}
		else{
			HX_STACK_LINE(268)
			if (((Parent->facing == (int)256))){
				HX_STACK_LINE(270)
				a = ((int)-90 * ((Float(::Math_obj::PI) / Float((int)180))));
			}
			else{
				HX_STACK_LINE(272)
				if (((Parent->facing == (int)4096))){
					HX_STACK_LINE(274)
					a = ((int)90 * ((Float(::Math_obj::PI) / Float((int)180))));
				}
			}
		}
	}
	HX_STACK_LINE(277)
	::flixel::util::FlxPoint result;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(277)
	{
		HX_STACK_LINE(277)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(277)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(277)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(277)
		point->_inPool = false;
		HX_STACK_LINE(277)
		result = point;
	}
	HX_STACK_LINE(279)
	Float _g = ::Math_obj::cos(a);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(279)
	Float _g1 = (_g * Speed);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(279)
	result->set_x(_g1);
	HX_STACK_LINE(280)
	Float _g2 = ::Math_obj::sin(a);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(280)
	Float _g3 = (_g2 * Speed);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(280)
	result->set_y(_g3);
	HX_STACK_LINE(282)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVelocity_obj,velocityFromFacing,return )

Float FlxVelocity_obj::computeVelocity( Float Velocity,Float Acceleration,Float Drag,Float Max){
	HX_STACK_FRAME("flixel.util.FlxVelocity","computeVelocity",0x3a6a26bb,"flixel.util.FlxVelocity.computeVelocity","flixel/util/FlxVelocity.hx",295,0xc0bd09c9)
	HX_STACK_ARG(Velocity,"Velocity")
	HX_STACK_ARG(Acceleration,"Acceleration")
	HX_STACK_ARG(Drag,"Drag")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_LINE(296)
	if (((Acceleration != (int)0))){
		HX_STACK_LINE(298)
		hx::AddEq(Velocity,(Acceleration * ::flixel::FlxG_obj::elapsed));
	}
	else{
		HX_STACK_LINE(300)
		if (((Drag != (int)0))){
			HX_STACK_LINE(302)
			Float drag = (Drag * ::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
			HX_STACK_LINE(303)
			if ((((Velocity - drag) > (int)0))){
				HX_STACK_LINE(305)
				Velocity = (Velocity - drag);
			}
			else{
				HX_STACK_LINE(307)
				if ((((Velocity + drag) < (int)0))){
					HX_STACK_LINE(309)
					hx::AddEq(Velocity,drag);
				}
				else{
					HX_STACK_LINE(313)
					Velocity = (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(316)
	if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
		HX_STACK_LINE(318)
		if (((Velocity > Max))){
			HX_STACK_LINE(320)
			Velocity = Max;
		}
		else{
			HX_STACK_LINE(322)
			if (((Velocity < -(Max)))){
				HX_STACK_LINE(324)
				Velocity = -(Max);
			}
		}
	}
	HX_STACK_LINE(327)
	return Velocity;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,computeVelocity,return )


FlxVelocity_obj::FlxVelocity_obj()
{
}

Dynamic FlxVelocity_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"computeVelocity") ) { return computeVelocity_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"moveTowardsMouse") ) { return moveTowardsMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTowardsTouch") ) { return moveTowardsTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTowardsPoint") ) { return moveTowardsPoint_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"moveTowardsObject") ) { return moveTowardsObject_dyn(); }
		if (HX_FIELD_EQ(inName,"velocityFromAngle") ) { return velocityFromAngle_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"velocityFromFacing") ) { return velocityFromFacing_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"accelerateTowardsMouse") ) { return accelerateTowardsMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"accelerateTowardsTouch") ) { return accelerateTowardsTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"accelerateTowardsPoint") ) { return accelerateTowardsPoint_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"accelerateTowardsObject") ) { return accelerateTowardsObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxVelocity_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxVelocity_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("moveTowardsObject"),
	HX_CSTRING("accelerateTowardsObject"),
	HX_CSTRING("moveTowardsMouse"),
	HX_CSTRING("moveTowardsTouch"),
	HX_CSTRING("accelerateTowardsMouse"),
	HX_CSTRING("accelerateTowardsTouch"),
	HX_CSTRING("moveTowardsPoint"),
	HX_CSTRING("accelerateTowardsPoint"),
	HX_CSTRING("velocityFromAngle"),
	HX_CSTRING("velocityFromFacing"),
	HX_CSTRING("computeVelocity"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVelocity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVelocity_obj::__mClass,"__mClass");
};

#endif

Class FlxVelocity_obj::__mClass;

void FlxVelocity_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxVelocity"), hx::TCanCast< FlxVelocity_obj> ,sStaticFields,sMemberFields,
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

void FlxVelocity_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
