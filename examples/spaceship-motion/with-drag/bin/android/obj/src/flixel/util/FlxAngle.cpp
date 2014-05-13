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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{

Void FlxAngle_obj::__construct()
{
	return null();
}

//FlxAngle_obj::~FlxAngle_obj() { }

Dynamic FlxAngle_obj::__CreateEmpty() { return  new FlxAngle_obj; }
hx::ObjectPtr< FlxAngle_obj > FlxAngle_obj::__new()
{  hx::ObjectPtr< FlxAngle_obj > result = new FlxAngle_obj();
	result->__construct();
	return result;}

Dynamic FlxAngle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAngle_obj > result = new FlxAngle_obj();
	result->__construct();
	return result;}

Array< Float > FlxAngle_obj::cosTable;

Array< Float > FlxAngle_obj::sinTable;

::flixel::util::FlxPoint FlxAngle_obj::rotatePoint( Float X,Float Y,Float PivotX,Float PivotY,Float Angle,::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.util.FlxAngle","rotatePoint",0x699cdd82,"flixel.util.FlxAngle.rotatePoint","flixel/util/FlxAngle.hx",43,0x34a716c3)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(PivotX,"PivotX")
	HX_STACK_ARG(PivotY,"PivotY")
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(44)
	Float sin = (int)0;		HX_STACK_VAR(sin,"sin");
	HX_STACK_LINE(45)
	Float cos = (int)0;		HX_STACK_VAR(cos,"cos");
	HX_STACK_LINE(46)
	Float radians = (Angle * -(((Float(::Math_obj::PI) / Float((int)180)))));		HX_STACK_VAR(radians,"radians");
	HX_STACK_LINE(47)
	while((true)){
		HX_STACK_LINE(47)
		if ((!(((radians < -(::Math_obj::PI)))))){
			HX_STACK_LINE(47)
			break;
		}
		HX_STACK_LINE(49)
		hx::AddEq(radians,(::Math_obj::PI * (int)2));
	}
	HX_STACK_LINE(51)
	while((true)){
		HX_STACK_LINE(51)
		if ((!(((radians > ::Math_obj::PI))))){
			HX_STACK_LINE(51)
			break;
		}
		HX_STACK_LINE(53)
		radians = (radians - (::Math_obj::PI * (int)2));
	}
	HX_STACK_LINE(56)
	if (((radians < (int)0))){
		HX_STACK_LINE(58)
		sin = ((1.27323954 * radians) + ((.405284735 * radians) * radians));
		HX_STACK_LINE(59)
		if (((sin < (int)0))){
			HX_STACK_LINE(61)
			sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
		}
		else{
			HX_STACK_LINE(65)
			sin = ((.225 * (((sin * sin) - sin))) + sin);
		}
	}
	else{
		HX_STACK_LINE(70)
		sin = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
		HX_STACK_LINE(71)
		if (((sin < (int)0))){
			HX_STACK_LINE(73)
			sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
		}
		else{
			HX_STACK_LINE(77)
			sin = ((.225 * (((sin * sin) - sin))) + sin);
		}
	}
	HX_STACK_LINE(81)
	hx::AddEq(radians,(Float(::Math_obj::PI) / Float((int)2)));
	HX_STACK_LINE(82)
	if (((radians > ::Math_obj::PI))){
		HX_STACK_LINE(84)
		radians = (radians - (::Math_obj::PI * (int)2));
	}
	HX_STACK_LINE(86)
	if (((radians < (int)0))){
		HX_STACK_LINE(88)
		cos = ((1.27323954 * radians) + ((0.405284735 * radians) * radians));
		HX_STACK_LINE(89)
		if (((cos < (int)0))){
			HX_STACK_LINE(91)
			cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
		}
		else{
			HX_STACK_LINE(95)
			cos = ((.225 * (((cos * cos) - cos))) + cos);
		}
	}
	else{
		HX_STACK_LINE(100)
		cos = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
		HX_STACK_LINE(101)
		if (((cos < (int)0))){
			HX_STACK_LINE(103)
			cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
		}
		else{
			HX_STACK_LINE(107)
			cos = ((.225 * (((cos * cos) - cos))) + cos);
		}
	}
	HX_STACK_LINE(111)
	Float dx = (X - PivotX);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(114)
	Float dy = (Y - PivotY);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(115)
	if (((point == null()))){
		HX_STACK_LINE(117)
		::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
			HX_STACK_LINE(117)
			Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
			HX_STACK_LINE(117)
			::flixel::util::FlxPoint point1 = ::flixel::util::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(117)
			point1->_inPool = false;
			HX_STACK_LINE(117)
			_g = point1;
		}
		HX_STACK_LINE(117)
		point = _g;
	}
	HX_STACK_LINE(119)
	point->set_x(((PivotX + (cos * dx)) - (sin * dy)));
	HX_STACK_LINE(120)
	point->set_y(((PivotY - (sin * dx)) - (cos * dy)));
	HX_STACK_LINE(121)
	return point;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxAngle_obj,rotatePoint,return )

Float FlxAngle_obj::getAngle( ::flixel::util::FlxPoint Point1,::flixel::util::FlxPoint Point2){
	HX_STACK_FRAME("flixel.util.FlxAngle","getAngle",0x66899fb0,"flixel.util.FlxAngle.getAngle","flixel/util/FlxAngle.hx",132,0x34a716c3)
	HX_STACK_ARG(Point1,"Point1")
	HX_STACK_ARG(Point2,"Point2")
	HX_STACK_LINE(133)
	Float x = (Point2->x - Point1->x);		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(134)
	Float y = (Point2->y - Point1->y);		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(135)
	Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(137)
	if (((bool((x != (int)0)) || bool((y != (int)0))))){
		HX_STACK_LINE(139)
		Float c1 = (::Math_obj::PI * 0.25);		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(140)
		Float c2 = ((int)3 * c1);		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(141)
		Float ay;		HX_STACK_VAR(ay,"ay");
		HX_STACK_LINE(141)
		if (((y < (int)0))){
			HX_STACK_LINE(141)
			ay = -(y);
		}
		else{
			HX_STACK_LINE(141)
			ay = y;
		}
		HX_STACK_LINE(143)
		if (((x >= (int)0))){
			HX_STACK_LINE(145)
			angle = (c1 - (c1 * ((Float(((x - ay))) / Float(((x + ay)))))));
		}
		else{
			HX_STACK_LINE(149)
			angle = (c2 - (c1 * ((Float(((x + ay))) / Float(((ay - x)))))));
		}
		HX_STACK_LINE(151)
		angle = (((  (((y < (int)0))) ? Float(-(angle)) : Float(angle) )) * ((Float((int)180) / Float(::Math_obj::PI))));
		HX_STACK_LINE(153)
		if (((angle > (int)90))){
			HX_STACK_LINE(155)
			angle = (angle - (int)270);
		}
		else{
			HX_STACK_LINE(159)
			hx::AddEq(angle,(int)90);
		}
	}
	HX_STACK_LINE(163)
	if ((Point1->_weak)){
		HX_STACK_LINE(163)
		::flixel::util::FlxPoint_obj::_pool->put(Point1);
	}
	HX_STACK_LINE(164)
	if ((Point2->_weak)){
		HX_STACK_LINE(164)
		::flixel::util::FlxPoint_obj::_pool->put(Point2);
	}
	HX_STACK_LINE(166)
	return angle;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,getAngle,return )

Void FlxAngle_obj::sinCosGenerator( int length,hx::Null< Float >  __o_sinAmplitude,hx::Null< Float >  __o_cosAmplitude,hx::Null< Float >  __o_frequency){
Float sinAmplitude = __o_sinAmplitude.Default(1.0);
Float cosAmplitude = __o_cosAmplitude.Default(1.0);
Float frequency = __o_frequency.Default(1.0);
	HX_STACK_FRAME("flixel.util.FlxAngle","sinCosGenerator",0x2783fa51,"flixel.util.FlxAngle.sinCosGenerator","flixel/util/FlxAngle.hx",184,0x34a716c3)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(sinAmplitude,"sinAmplitude")
	HX_STACK_ARG(cosAmplitude,"cosAmplitude")
	HX_STACK_ARG(frequency,"frequency")
{
		HX_STACK_LINE(185)
		Float sin = sinAmplitude;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(186)
		Float cos = cosAmplitude;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(187)
		Float frq = (Float((frequency * ::Math_obj::PI)) / Float(length));		HX_STACK_VAR(frq,"frq");
		HX_STACK_LINE(189)
		Array< Float > _g = Array_obj< Float >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(189)
		::flixel::util::FlxAngle_obj::cosTable = _g;
		HX_STACK_LINE(190)
		Array< Float > _g1 = Array_obj< Float >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(190)
		::flixel::util::FlxAngle_obj::sinTable = _g1;
		HX_STACK_LINE(192)
		{
			HX_STACK_LINE(192)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(192)
			while((true)){
				HX_STACK_LINE(192)
				if ((!(((_g2 < length))))){
					HX_STACK_LINE(192)
					break;
				}
				HX_STACK_LINE(192)
				int c = (_g2)++;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(194)
				hx::SubEq(cos,(sin * frq));
				HX_STACK_LINE(195)
				hx::AddEq(sin,(cos * frq));
				HX_STACK_LINE(197)
				::flixel::util::FlxAngle_obj::cosTable[c] = cos;
				HX_STACK_LINE(198)
				::flixel::util::FlxAngle_obj::sinTable[c] = sin;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxAngle_obj,sinCosGenerator,(void))

Float FlxAngle_obj::wrapAngle( Float angle){
	HX_STACK_FRAME("flixel.util.FlxAngle","wrapAngle",0x38cb39f6,"flixel.util.FlxAngle.wrapAngle","flixel/util/FlxAngle.hx",211,0x34a716c3)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(212)
	if (((angle > (int)180))){
		HX_STACK_LINE(214)
		angle = (int)-180;
	}
	else{
		HX_STACK_LINE(216)
		if (((angle < (int)-180))){
			HX_STACK_LINE(218)
			angle = (int)180;
		}
	}
	HX_STACK_LINE(221)
	return angle;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,wrapAngle,return )

Float FlxAngle_obj::angleLimit( Float angle,Float min,Float max){
	HX_STACK_FRAME("flixel.util.FlxAngle","angleLimit",0x2a40d57b,"flixel.util.FlxAngle.angleLimit","flixel/util/FlxAngle.hx",234,0x34a716c3)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(235)
	if (((angle > max))){
		HX_STACK_LINE(237)
		angle = max;
	}
	else{
		HX_STACK_LINE(239)
		if (((angle < min))){
			HX_STACK_LINE(241)
			angle = min;
		}
	}
	HX_STACK_LINE(244)
	return angle;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleLimit,return )

Float FlxAngle_obj::asDegrees( Float radians){
	HX_STACK_FRAME("flixel.util.FlxAngle","asDegrees",0x19409522,"flixel.util.FlxAngle.asDegrees","flixel/util/FlxAngle.hx",256,0x34a716c3)
	HX_STACK_ARG(radians,"radians")
	HX_STACK_LINE(256)
	return (radians * ((Float((int)180) / Float(::Math_obj::PI))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,asDegrees,return )

Float FlxAngle_obj::asRadians( Float degrees){
	HX_STACK_FRAME("flixel.util.FlxAngle","asRadians",0x05d5f7ed,"flixel.util.FlxAngle.asRadians","flixel/util/FlxAngle.hx",268,0x34a716c3)
	HX_STACK_ARG(degrees,"degrees")
	HX_STACK_LINE(268)
	return (degrees * ((Float(::Math_obj::PI) / Float((int)180))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,asRadians,return )

Float FlxAngle_obj::angleBetween( ::flixel::FlxSprite SpriteA,::flixel::FlxSprite SpriteB,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.util.FlxAngle","angleBetween",0xb3fd5808,"flixel.util.FlxAngle.angleBetween","flixel/util/FlxAngle.hx",281,0x34a716c3)
	HX_STACK_ARG(SpriteA,"SpriteA")
	HX_STACK_ARG(SpriteB,"SpriteB")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(282)
		Float dx = ((SpriteB->x + SpriteB->origin->x) - ((SpriteA->x + SpriteA->origin->x)));		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(283)
		Float dy = ((SpriteB->y + SpriteB->origin->y) - ((SpriteA->y + SpriteA->origin->y)));		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(285)
		if ((AsDegrees)){
			HX_STACK_LINE(286)
			Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
			HX_STACK_LINE(286)
			return (radians * ((Float((int)180) / Float(::Math_obj::PI))));
		}
		else{
			HX_STACK_LINE(288)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(285)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetween,return )

Float FlxAngle_obj::angleBetweenPoint( ::flixel::FlxSprite Sprite,::flixel::util::FlxPoint Target,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.util.FlxAngle","angleBetweenPoint",0xab3baf28,"flixel.util.FlxAngle.angleBetweenPoint","flixel/util/FlxAngle.hx",301,0x34a716c3)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(302)
		Float dx = (Target->x - ((Sprite->x + Sprite->origin->x)));		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(303)
		Float dy = (Target->y - ((Sprite->y + Sprite->origin->y)));		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(305)
		if ((AsDegrees)){
			HX_STACK_LINE(306)
			Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
			HX_STACK_LINE(306)
			return (radians * ((Float((int)180) / Float(::Math_obj::PI))));
		}
		else{
			HX_STACK_LINE(308)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(305)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetweenPoint,return )

Float FlxAngle_obj::angleBetweenMouse( ::flixel::FlxObject Object,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.util.FlxAngle","angleBetweenMouse",0xf11110fd,"flixel.util.FlxAngle.angleBetweenMouse","flixel/util/FlxAngle.hx",321,0x34a716c3)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(323)
		if (((Object == null()))){
			HX_STACK_LINE(324)
			return (int)0;
		}
		HX_STACK_LINE(326)
		::flixel::util::FlxPoint p = Object->getScreenXY(null(),null());		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(328)
		Float dx = (::flixel::FlxG_obj::mouse->screenX - p->x);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(329)
		Float dy = (::flixel::FlxG_obj::mouse->screenY - p->y);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(331)
		if ((AsDegrees)){
			HX_STACK_LINE(332)
			Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
			HX_STACK_LINE(332)
			return (radians * ((Float((int)180) / Float(::Math_obj::PI))));
		}
		else{
			HX_STACK_LINE(334)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(331)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,angleBetweenMouse,return )

Float FlxAngle_obj::angleBetweenTouch( ::flixel::FlxObject Object,::flixel::input::touch::FlxTouch Touch,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.util.FlxAngle","angleBetweenTouch",0xf8df1297,"flixel.util.FlxAngle.angleBetweenTouch","flixel/util/FlxAngle.hx",349,0x34a716c3)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(351)
		::flixel::util::FlxPoint p = Object->getScreenXY(null(),null());		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(353)
		Float dx = (Touch->screenX - p->x);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(354)
		Float dy = (Touch->screenY - p->y);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(356)
		if ((AsDegrees)){
			HX_STACK_LINE(357)
			Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
			HX_STACK_LINE(357)
			return (radians * ((Float((int)180) / Float(::Math_obj::PI))));
		}
		else{
			HX_STACK_LINE(359)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(356)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetweenTouch,return )

::flixel::util::FlxPoint FlxAngle_obj::getCartesianCoords( Float Radius,Float Angle,::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.util.FlxAngle","getCartesianCoords",0xcba23863,"flixel.util.FlxAngle.getCartesianCoords","flixel/util/FlxAngle.hx",372,0x34a716c3)
	HX_STACK_ARG(Radius,"Radius")
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(373)
	::flixel::util::FlxPoint p = point;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(374)
	if (((p == null()))){
		HX_STACK_LINE(376)
		::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(376)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(376)
			::flixel::util::FlxPoint point1 = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(376)
			point1->_inPool = false;
			HX_STACK_LINE(376)
			_g = point1;
		}
		HX_STACK_LINE(376)
		p = _g;
	}
	HX_STACK_LINE(379)
	Float _g1 = ::Math_obj::cos((Angle * ((Float(::Math_obj::PI) / Float((int)180)))));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(379)
	Float _g2 = (Radius * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(379)
	p->set_x(_g2);
	HX_STACK_LINE(380)
	Float _g3 = ::Math_obj::sin((Angle * ((Float(::Math_obj::PI) / Float((int)180)))));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(380)
	Float _g4 = (Radius * _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(380)
	p->set_y(_g4);
	HX_STACK_LINE(381)
	return p;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,getCartesianCoords,return )

::flixel::util::FlxPoint FlxAngle_obj::getPolarCoords( Float X,Float Y,::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.util.FlxAngle","getPolarCoords",0xef5b8a19,"flixel.util.FlxAngle.getPolarCoords","flixel/util/FlxAngle.hx",393,0x34a716c3)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(394)
	::flixel::util::FlxPoint p = point;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(395)
	if (((p == null()))){
		HX_STACK_LINE(397)
		::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(397)
		{
			HX_STACK_LINE(397)
			Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
			HX_STACK_LINE(397)
			Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
			HX_STACK_LINE(397)
			::flixel::util::FlxPoint point1 = ::flixel::util::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(397)
			point1->_inPool = false;
			HX_STACK_LINE(397)
			_g = point1;
		}
		HX_STACK_LINE(397)
		p = _g;
	}
	HX_STACK_LINE(400)
	Float _g1 = ::Math_obj::sqrt(((X * X) + (Y * Y)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(400)
	p->set_x(_g1);
	HX_STACK_LINE(401)
	Float _g2 = ::Math_obj::atan2(Y,X);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(401)
	Float _g3 = (_g2 * ((Float((int)180) / Float(::Math_obj::PI))));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(401)
	p->set_y(_g3);
	HX_STACK_LINE(402)
	return p;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,getPolarCoords,return )

Float FlxAngle_obj::get_TO_DEG( ){
	HX_STACK_FRAME("flixel.util.FlxAngle","get_TO_DEG",0xf3e2f47e,"flixel.util.FlxAngle.get_TO_DEG","flixel/util/FlxAngle.hx",407,0x34a716c3)
	HX_STACK_LINE(407)
	return (Float((int)180) / Float(::Math_obj::PI));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAngle_obj,get_TO_DEG,return )

Float FlxAngle_obj::get_TO_RAD( ){
	HX_STACK_FRAME("flixel.util.FlxAngle","get_TO_RAD",0xf3ed908d,"flixel.util.FlxAngle.get_TO_RAD","flixel/util/FlxAngle.hx",412,0x34a716c3)
	HX_STACK_LINE(412)
	return (Float(::Math_obj::PI) / Float((int)180));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAngle_obj,get_TO_RAD,return )


FlxAngle_obj::FlxAngle_obj()
{
}

Dynamic FlxAngle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"TO_DEG") ) { return get_TO_DEG(); }
		if (HX_FIELD_EQ(inName,"TO_RAD") ) { return get_TO_RAD(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cosTable") ) { return cosTable; }
		if (HX_FIELD_EQ(inName,"sinTable") ) { return sinTable; }
		if (HX_FIELD_EQ(inName,"getAngle") ) { return getAngle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wrapAngle") ) { return wrapAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"asDegrees") ) { return asDegrees_dyn(); }
		if (HX_FIELD_EQ(inName,"asRadians") ) { return asRadians_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"angleLimit") ) { return angleLimit_dyn(); }
		if (HX_FIELD_EQ(inName,"get_TO_DEG") ) { return get_TO_DEG_dyn(); }
		if (HX_FIELD_EQ(inName,"get_TO_RAD") ) { return get_TO_RAD_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rotatePoint") ) { return rotatePoint_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"angleBetween") ) { return angleBetween_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getPolarCoords") ) { return getPolarCoords_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sinCosGenerator") ) { return sinCosGenerator_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"angleBetweenPoint") ) { return angleBetweenPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"angleBetweenMouse") ) { return angleBetweenMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"angleBetweenTouch") ) { return angleBetweenTouch_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getCartesianCoords") ) { return getCartesianCoords_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAngle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"cosTable") ) { cosTable=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sinTable") ) { sinTable=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAngle_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cosTable"),
	HX_CSTRING("sinTable"),
	HX_CSTRING("rotatePoint"),
	HX_CSTRING("getAngle"),
	HX_CSTRING("sinCosGenerator"),
	HX_CSTRING("wrapAngle"),
	HX_CSTRING("angleLimit"),
	HX_CSTRING("asDegrees"),
	HX_CSTRING("asRadians"),
	HX_CSTRING("angleBetween"),
	HX_CSTRING("angleBetweenPoint"),
	HX_CSTRING("angleBetweenMouse"),
	HX_CSTRING("angleBetweenTouch"),
	HX_CSTRING("getCartesianCoords"),
	HX_CSTRING("getPolarCoords"),
	HX_CSTRING("get_TO_DEG"),
	HX_CSTRING("get_TO_RAD"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAngle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAngle_obj::cosTable,"cosTable");
	HX_MARK_MEMBER_NAME(FlxAngle_obj::sinTable,"sinTable");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::cosTable,"cosTable");
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::sinTable,"sinTable");
};

#endif

Class FlxAngle_obj::__mClass;

void FlxAngle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxAngle"), hx::TCanCast< FlxAngle_obj> ,sStaticFields,sMemberFields,
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

void FlxAngle_obj::__boot()
{
	cosTable= Array_obj< Float >::__new();
	sinTable= Array_obj< Float >::__new();
}

} // end namespace flixel
} // end namespace util
