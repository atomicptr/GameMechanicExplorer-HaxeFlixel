#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
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
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{

Void FlxMath_obj::__construct()
{
	return null();
}

//FlxMath_obj::~FlxMath_obj() { }

Dynamic FlxMath_obj::__CreateEmpty() { return  new FlxMath_obj; }
hx::ObjectPtr< FlxMath_obj > FlxMath_obj::__new()
{  hx::ObjectPtr< FlxMath_obj > result = new FlxMath_obj();
	result->__construct();
	return result;}

Dynamic FlxMath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMath_obj > result = new FlxMath_obj();
	result->__construct();
	return result;}

Float FlxMath_obj::MIN_VALUE;

Float FlxMath_obj::MAX_VALUE;

Float FlxMath_obj::SQUARE_ROOT_OF_TWO;

Float FlxMath_obj::roundDecimal( Float Value,int Precision){
	HX_STACK_FRAME("flixel.util.FlxMath","roundDecimal",0x49dd7af1,"flixel.util.FlxMath.roundDecimal","flixel/util/FlxMath.hx",44,0xa5ea82fe)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_ARG(Precision,"Precision")
	HX_STACK_LINE(45)
	Float mult = (int)1;		HX_STACK_VAR(mult,"mult");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		while((true)){
			HX_STACK_LINE(46)
			if ((!(((_g < Precision))))){
				HX_STACK_LINE(46)
				break;
			}
			HX_STACK_LINE(46)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(48)
			hx::MultEq(mult,(int)10);
		}
	}
	HX_STACK_LINE(50)
	int _g = ::Math_obj::round((Value * mult));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(50)
	return (Float(_g) / Float(mult));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,roundDecimal,return )

Float FlxMath_obj::bound( Float Value,Float Min,Float Max){
	HX_STACK_FRAME("flixel.util.FlxMath","bound",0xbc3b4970,"flixel.util.FlxMath.bound","flixel/util/FlxMath.hx",62,0xa5ea82fe)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_LINE(63)
	Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
	HX_STACK_LINE(63)
	if (((Value < Min))){
		HX_STACK_LINE(63)
		lowerBound = Min;
	}
	else{
		HX_STACK_LINE(63)
		lowerBound = Value;
	}
	HX_STACK_LINE(64)
	if (((lowerBound > Max))){
		HX_STACK_LINE(64)
		return Max;
	}
	else{
		HX_STACK_LINE(64)
		return lowerBound;
	}
	HX_STACK_LINE(64)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,bound,return )

Float FlxMath_obj::lerp( Float Min,Float Max,Float Ratio){
	HX_STACK_FRAME("flixel.util.FlxMath","lerp",0x82422585,"flixel.util.FlxMath.lerp","flixel/util/FlxMath.hx",77,0xa5ea82fe)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_ARG(Ratio,"Ratio")
	HX_STACK_LINE(77)
	return (Min + (Ratio * ((Max - Min))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,lerp,return )

bool FlxMath_obj::inBounds( Float Value,Float Min,Float Max){
	HX_STACK_FRAME("flixel.util.FlxMath","inBounds",0x86cf8248,"flixel.util.FlxMath.inBounds","flixel/util/FlxMath.hx",90,0xa5ea82fe)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_LINE(90)
	return (bool((Value > Min)) && bool((Value < Max)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,inBounds,return )

bool FlxMath_obj::isOdd( Float n){
	HX_STACK_FRAME("flixel.util.FlxMath","isOdd",0xc6915517,"flixel.util.FlxMath.isOdd","flixel/util/FlxMath.hx",100,0xa5ea82fe)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(101)
	int _g = ::Std_obj::_int(n);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(101)
	int _g1 = (int(_g) & int((int)1));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(101)
	if (((_g1 != (int)0))){
		HX_STACK_LINE(103)
		return true;
	}
	else{
		HX_STACK_LINE(107)
		return false;
	}
	HX_STACK_LINE(101)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isOdd,return )

bool FlxMath_obj::isEven( Float n){
	HX_STACK_FRAME("flixel.util.FlxMath","isEven",0xf20aa6b2,"flixel.util.FlxMath.isEven","flixel/util/FlxMath.hx",118,0xa5ea82fe)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(119)
	int _g = ::Std_obj::_int(n);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(119)
	int _g1 = (int(_g) & int((int)1));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(119)
	if (((_g1 != (int)0))){
		HX_STACK_LINE(121)
		return false;
	}
	else{
		HX_STACK_LINE(125)
		return true;
	}
	HX_STACK_LINE(119)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isEven,return )

int FlxMath_obj::numericComparison( Float num1,Float num2){
	HX_STACK_FRAME("flixel.util.FlxMath","numericComparison",0x057780a8,"flixel.util.FlxMath.numericComparison","flixel/util/FlxMath.hx",137,0xa5ea82fe)
	HX_STACK_ARG(num1,"num1")
	HX_STACK_ARG(num2,"num2")
	HX_STACK_LINE(138)
	if (((num2 > num1))){
		HX_STACK_LINE(140)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(142)
		if (((num1 > num2))){
			HX_STACK_LINE(144)
			return (int)1;
		}
	}
	HX_STACK_LINE(146)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,numericComparison,return )

bool FlxMath_obj::pointInCoordinates( Float pointX,Float pointY,Float rectX,Float rectY,Float rectWidth,Float rectHeight){
	HX_STACK_FRAME("flixel.util.FlxMath","pointInCoordinates",0x67b75834,"flixel.util.FlxMath.pointInCoordinates","flixel/util/FlxMath.hx",162,0xa5ea82fe)
	HX_STACK_ARG(pointX,"pointX")
	HX_STACK_ARG(pointY,"pointY")
	HX_STACK_ARG(rectX,"rectX")
	HX_STACK_ARG(rectY,"rectY")
	HX_STACK_ARG(rectWidth,"rectWidth")
	HX_STACK_ARG(rectHeight,"rectHeight")
	HX_STACK_LINE(163)
	if (((bool((pointX >= rectX)) && bool((pointX <= (rectX + rectWidth)))))){
		HX_STACK_LINE(165)
		if (((bool((pointY >= rectY)) && bool((pointY <= (rectY + rectHeight)))))){
			HX_STACK_LINE(167)
			return true;
		}
	}
	HX_STACK_LINE(170)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxMath_obj,pointInCoordinates,return )

bool FlxMath_obj::pointInFlxRect( Float pointX,Float pointY,::flixel::util::FlxRect rect){
	HX_STACK_FRAME("flixel.util.FlxMath","pointInFlxRect",0xecd4736f,"flixel.util.FlxMath.pointInFlxRect","flixel/util/FlxMath.hx",182,0xa5ea82fe)
	HX_STACK_ARG(pointX,"pointX")
	HX_STACK_ARG(pointY,"pointY")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(183)
	if (((bool((bool((bool((pointX >= rect->x)) && bool((pointX <= (rect->x + rect->width))))) && bool((pointY >= rect->y)))) && bool((pointY <= (rect->y + rect->height)))))){
		HX_STACK_LINE(185)
		return true;
	}
	HX_STACK_LINE(187)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInFlxRect,return )

bool FlxMath_obj::mouseInFlxRect( bool useWorldCoords,::flixel::util::FlxRect rect){
	HX_STACK_FRAME("flixel.util.FlxMath","mouseInFlxRect",0xf9c0aefa,"flixel.util.FlxMath.mouseInFlxRect","flixel/util/FlxMath.hx",200,0xa5ea82fe)
	HX_STACK_ARG(useWorldCoords,"useWorldCoords")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(201)
	if (((rect == null()))){
		HX_STACK_LINE(203)
		return true;
	}
	HX_STACK_LINE(206)
	if ((useWorldCoords)){
		HX_STACK_LINE(208)
		int _g = ::Math_obj::floor(::flixel::FlxG_obj::mouse->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(208)
		int _g1 = ::Math_obj::floor(::flixel::FlxG_obj::mouse->y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(208)
		return ::flixel::util::FlxMath_obj::pointInFlxRect(_g,_g1,rect);
	}
	else{
		HX_STACK_LINE(212)
		return ::flixel::util::FlxMath_obj::pointInFlxRect(::flixel::FlxG_obj::mouse->screenX,::flixel::FlxG_obj::mouse->screenY,rect);
	}
	HX_STACK_LINE(206)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,mouseInFlxRect,return )

bool FlxMath_obj::pointInRectangle( Float pointX,Float pointY,::flash::geom::Rectangle rect){
	HX_STACK_FRAME("flixel.util.FlxMath","pointInRectangle",0x5cdc4928,"flixel.util.FlxMath.pointInRectangle","flixel/util/FlxMath.hx",226,0xa5ea82fe)
	HX_STACK_ARG(pointX,"pointX")
	HX_STACK_ARG(pointY,"pointY")
	HX_STACK_ARG(rect,"rect")
	struct _Function_1_1{
		inline static bool Block( ::flash::geom::Rectangle &rect,Float &pointX){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxMath.hx",227,0xa5ea82fe)
			{
				HX_STACK_LINE(227)
				Float _g = rect->get_right();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(227)
				return (pointX <= _g);
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( Float &pointY,::flash::geom::Rectangle &rect){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxMath.hx",227,0xa5ea82fe)
			{
				HX_STACK_LINE(227)
				Float _g1 = rect->get_bottom();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(227)
				return (pointY <= _g1);
			}
			return null();
		}
	};
	HX_STACK_LINE(227)
	if (((  (((  (((  (((pointX >= rect->x))) ? bool(_Function_1_1::Block(rect,pointX)) : bool(false) ))) ? bool((pointY >= rect->y)) : bool(false) ))) ? bool(_Function_1_2::Block(pointY,rect)) : bool(false) ))){
		HX_STACK_LINE(229)
		return true;
	}
	HX_STACK_LINE(231)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInRectangle,return )

int FlxMath_obj::maxAdd( int value,int amount,int max,hx::Null< int >  __o_min){
int min = __o_min.Default(0);
	HX_STACK_FRAME("flixel.util.FlxMath","maxAdd",0x4fcf506b,"flixel.util.FlxMath.maxAdd","flixel/util/FlxMath.hx",245,0xa5ea82fe)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_ARG(max,"max")
	HX_STACK_ARG(min,"min")
{
		HX_STACK_LINE(246)
		hx::AddEq(value,amount);
		HX_STACK_LINE(248)
		if (((value > max))){
			HX_STACK_LINE(250)
			value = max;
		}
		else{
			HX_STACK_LINE(252)
			if (((value <= min))){
				HX_STACK_LINE(254)
				value = min;
			}
		}
		HX_STACK_LINE(257)
		return value;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,maxAdd,return )

int FlxMath_obj::wrapValue( int value,int amount,int max){
	HX_STACK_FRAME("flixel.util.FlxMath","wrapValue",0x6a371379,"flixel.util.FlxMath.wrapValue","flixel/util/FlxMath.hx",270,0xa5ea82fe)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(271)
	int diff;		HX_STACK_VAR(diff,"diff");
	HX_STACK_LINE(273)
	Float _g = ::Math_obj::abs(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(273)
	int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(273)
	value = _g1;
	HX_STACK_LINE(274)
	Float _g2 = ::Math_obj::abs(amount);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(274)
	int _g3 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(274)
	amount = _g3;
	HX_STACK_LINE(275)
	Float _g4 = ::Math_obj::abs(max);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(275)
	int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(275)
	max = _g5;
	HX_STACK_LINE(277)
	diff = hx::Mod(((value + amount)),max);
	HX_STACK_LINE(279)
	return diff;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,wrapValue,return )

Float FlxMath_obj::dotProduct( Float ax,Float ay,Float bx,Float by){
	HX_STACK_FRAME("flixel.util.FlxMath","dotProduct",0x0ffef934,"flixel.util.FlxMath.dotProduct","flixel/util/FlxMath.hx",294,0xa5ea82fe)
	HX_STACK_ARG(ax,"ax")
	HX_STACK_ARG(ay,"ay")
	HX_STACK_ARG(bx,"bx")
	HX_STACK_ARG(by,"by")
	HX_STACK_LINE(294)
	return ((ax * bx) + (ay * by));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,dotProduct,return )

Float FlxMath_obj::vectorLength( Float dx,Float dy){
	HX_STACK_FRAME("flixel.util.FlxMath","vectorLength",0xcdc7ff17,"flixel.util.FlxMath.vectorLength","flixel/util/FlxMath.hx",307,0xa5ea82fe)
	HX_STACK_ARG(dx,"dx")
	HX_STACK_ARG(dy,"dy")
	HX_STACK_LINE(307)
	return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,vectorLength,return )

Float FlxMath_obj::getDistance( ::flixel::util::FlxPoint Point1,::flixel::util::FlxPoint Point2){
	HX_STACK_FRAME("flixel.util.FlxMath","getDistance",0x8cd5e09d,"flixel.util.FlxMath.getDistance","flixel/util/FlxMath.hx",318,0xa5ea82fe)
	HX_STACK_ARG(Point1,"Point1")
	HX_STACK_ARG(Point2,"Point2")
	HX_STACK_LINE(319)
	Float dx = (Point1->x - Point2->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(320)
	Float dy = (Point1->y - Point2->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(321)
	if ((Point1->_weak)){
		HX_STACK_LINE(321)
		::flixel::util::FlxPoint_obj::_pool->put(Point1);
	}
	HX_STACK_LINE(322)
	if ((Point2->_weak)){
		HX_STACK_LINE(322)
		::flixel::util::FlxPoint_obj::_pool->put(Point2);
	}
	HX_STACK_LINE(323)
	return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,getDistance,return )

int FlxMath_obj::distanceBetween( ::flixel::FlxSprite SpriteA,::flixel::FlxSprite SpriteB){
	HX_STACK_FRAME("flixel.util.FlxMath","distanceBetween",0x506df2c5,"flixel.util.FlxMath.distanceBetween","flixel/util/FlxMath.hx",334,0xa5ea82fe)
	HX_STACK_ARG(SpriteA,"SpriteA")
	HX_STACK_ARG(SpriteB,"SpriteB")
	HX_STACK_LINE(335)
	Float dx = ((SpriteA->x + SpriteA->origin->x) - ((SpriteB->x + SpriteB->origin->x)));		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(336)
	Float dy = ((SpriteA->y + SpriteA->origin->y) - ((SpriteB->y + SpriteB->origin->y)));		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(337)
	Float _g = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(337)
	return ::Std_obj::_int(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceBetween,return )

bool FlxMath_obj::isDistanceWithin( ::flixel::FlxSprite SpriteA,::flixel::FlxSprite SpriteB,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_FRAME("flixel.util.FlxMath","isDistanceWithin",0x587f6218,"flixel.util.FlxMath.isDistanceWithin","flixel/util/FlxMath.hx",351,0xa5ea82fe)
	HX_STACK_ARG(SpriteA,"SpriteA")
	HX_STACK_ARG(SpriteB,"SpriteB")
	HX_STACK_ARG(Distance,"Distance")
	HX_STACK_ARG(IncludeEqual,"IncludeEqual")
{
		HX_STACK_LINE(352)
		Float dx = ((SpriteA->x + SpriteA->origin->x) - ((SpriteB->x + SpriteB->origin->x)));		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(353)
		Float dy = ((SpriteA->y + SpriteA->origin->y) - ((SpriteB->y + SpriteB->origin->y)));		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(355)
		if ((IncludeEqual)){
			HX_STACK_LINE(356)
			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
		}
		else{
			HX_STACK_LINE(358)
			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
		}
		HX_STACK_LINE(355)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceWithin,return )

int FlxMath_obj::distanceToPoint( ::flixel::FlxSprite Sprite,::flixel::util::FlxPoint Target){
	HX_STACK_FRAME("flixel.util.FlxMath","distanceToPoint",0x7cce61d2,"flixel.util.FlxMath.distanceToPoint","flixel/util/FlxMath.hx",370,0xa5ea82fe)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_LINE(371)
	Float dx = ((Sprite->x + Sprite->origin->x) - Target->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(372)
	Float dy = ((Sprite->y + Sprite->origin->y) - Target->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(373)
	if ((Target->_weak)){
		HX_STACK_LINE(373)
		::flixel::util::FlxPoint_obj::_pool->put(Target);
	}
	HX_STACK_LINE(374)
	Float _g = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(374)
	return ::Std_obj::_int(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceToPoint,return )

bool FlxMath_obj::isDistanceToPointWithin( ::flixel::FlxSprite Sprite,::flixel::util::FlxPoint Target,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_FRAME("flixel.util.FlxMath","isDistanceToPointWithin",0x309dff13,"flixel.util.FlxMath.isDistanceToPointWithin","flixel/util/FlxMath.hx",389,0xa5ea82fe)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(Distance,"Distance")
	HX_STACK_ARG(IncludeEqual,"IncludeEqual")
{
		HX_STACK_LINE(390)
		Float dx = ((Sprite->x + Sprite->origin->x) - Target->x);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(391)
		Float dy = ((Sprite->y + Sprite->origin->y) - Target->y);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(393)
		if ((Target->_weak)){
			HX_STACK_LINE(393)
			::flixel::util::FlxPoint_obj::_pool->put(Target);
		}
		HX_STACK_LINE(395)
		if ((IncludeEqual)){
			HX_STACK_LINE(396)
			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
		}
		else{
			HX_STACK_LINE(398)
			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
		}
		HX_STACK_LINE(395)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceToPointWithin,return )

int FlxMath_obj::distanceToMouse( ::flixel::FlxSprite Sprite){
	HX_STACK_FRAME("flixel.util.FlxMath","distanceToMouse",0xc2a3c3a7,"flixel.util.FlxMath.distanceToMouse","flixel/util/FlxMath.hx",409,0xa5ea82fe)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_LINE(410)
	Float dx = ((Sprite->x + Sprite->origin->x) - ::flixel::FlxG_obj::mouse->screenX);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(411)
	Float dy = ((Sprite->y + Sprite->origin->y) - ::flixel::FlxG_obj::mouse->screenY);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(412)
	Float _g = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(412)
	return ::Std_obj::_int(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,distanceToMouse,return )

bool FlxMath_obj::isDistanceToMouseWithin( ::flixel::FlxSprite Sprite,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_FRAME("flixel.util.FlxMath","isDistanceToMouseWithin",0x3f8deea8,"flixel.util.FlxMath.isDistanceToMouseWithin","flixel/util/FlxMath.hx",425,0xa5ea82fe)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Distance,"Distance")
	HX_STACK_ARG(IncludeEqual,"IncludeEqual")
{
		HX_STACK_LINE(426)
		Float dx = ((Sprite->x + Sprite->origin->x) - ::flixel::FlxG_obj::mouse->screenX);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(427)
		Float dy = ((Sprite->y + Sprite->origin->y) - ::flixel::FlxG_obj::mouse->screenY);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(429)
		if ((IncludeEqual)){
			HX_STACK_LINE(430)
			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
		}
		else{
			HX_STACK_LINE(432)
			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
		}
		HX_STACK_LINE(429)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,isDistanceToMouseWithin,return )

int FlxMath_obj::distanceToTouch( ::flixel::FlxSprite Sprite,::flixel::input::touch::FlxTouch Touch){
	HX_STACK_FRAME("flixel.util.FlxMath","distanceToTouch",0xca71c541,"flixel.util.FlxMath.distanceToTouch","flixel/util/FlxMath.hx",445,0xa5ea82fe)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_LINE(446)
	Float dx = ((Sprite->x + Sprite->origin->x) - Touch->screenX);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(447)
	Float dy = ((Sprite->y + Sprite->origin->y) - Touch->screenY);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(448)
	Float _g = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(448)
	return ::Std_obj::_int(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceToTouch,return )

bool FlxMath_obj::isDistanceToTouchWithin( ::flixel::FlxSprite Sprite,::flixel::input::touch::FlxTouch Touch,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_FRAME("flixel.util.FlxMath","isDistanceToTouchWithin",0xaf3c1fc2,"flixel.util.FlxMath.isDistanceToTouchWithin","flixel/util/FlxMath.hx",461,0xa5ea82fe)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_ARG(Distance,"Distance")
	HX_STACK_ARG(IncludeEqual,"IncludeEqual")
{
		HX_STACK_LINE(462)
		Float dx = ((Sprite->x + Sprite->origin->x) - Touch->screenX);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(463)
		Float dy = ((Sprite->y + Sprite->origin->y) - Touch->screenY);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(465)
		if ((IncludeEqual)){
			HX_STACK_LINE(466)
			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
		}
		else{
			HX_STACK_LINE(468)
			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
		}
		HX_STACK_LINE(465)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceToTouchWithin,return )

int FlxMath_obj::getDecimals( Float Number){
	HX_STACK_FRAME("flixel.util.FlxMath","getDecimals",0x3346982a,"flixel.util.FlxMath.getDecimals","flixel/util/FlxMath.hx",479,0xa5ea82fe)
	HX_STACK_ARG(Number,"Number")
	HX_STACK_LINE(480)
	Array< ::String > helperArray = ::Std_obj::string(Number).split(HX_CSTRING("."));		HX_STACK_VAR(helperArray,"helperArray");
	HX_STACK_LINE(481)
	int decimals = (int)0;		HX_STACK_VAR(decimals,"decimals");
	HX_STACK_LINE(483)
	if (((helperArray->length > (int)1))){
		HX_STACK_LINE(485)
		decimals = helperArray->__get((int)1).length;
	}
	HX_STACK_LINE(488)
	return decimals;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,getDecimals,return )

bool FlxMath_obj::equal( Float aValueA,Float aValueB,hx::Null< Float >  __o_aDiff){
Float aDiff = __o_aDiff.Default(0.00001);
	HX_STACK_FRAME("flixel.util.FlxMath","equal",0x77c168e6,"flixel.util.FlxMath.equal","flixel/util/FlxMath.hx",492,0xa5ea82fe)
	HX_STACK_ARG(aValueA,"aValueA")
	HX_STACK_ARG(aValueB,"aValueB")
	HX_STACK_ARG(aDiff,"aDiff")
{
		HX_STACK_LINE(493)
		Float _g = ::Math_obj::abs((aValueA - aValueB));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(493)
		return (_g <= aDiff);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,equal,return )

int FlxMath_obj::signOf( Float f){
	HX_STACK_FRAME("flixel.util.FlxMath","signOf",0x460d9142,"flixel.util.FlxMath.signOf","flixel/util/FlxMath.hx",501,0xa5ea82fe)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(501)
	if (((f < (int)0))){
		HX_STACK_LINE(501)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(501)
		return (int)1;
	}
	HX_STACK_LINE(501)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,signOf,return )

bool FlxMath_obj::sameSign( Float f1,Float f2){
	HX_STACK_FRAME("flixel.util.FlxMath","sameSign",0xff0a9cd1,"flixel.util.FlxMath.sameSign","flixel/util/FlxMath.hx",509,0xa5ea82fe)
	HX_STACK_ARG(f1,"f1")
	HX_STACK_ARG(f2,"f2")
	HX_STACK_LINE(509)
	return (((  (((f1 < (int)0))) ? int((int)-1) : int((int)1) )) == ((  (((f2 < (int)0))) ? int((int)-1) : int((int)1) )));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,sameSign,return )


FlxMath_obj::FlxMath_obj()
{
}

Dynamic FlxMath_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { return bound_dyn(); }
		if (HX_FIELD_EQ(inName,"isOdd") ) { return isOdd_dyn(); }
		if (HX_FIELD_EQ(inName,"equal") ) { return equal_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isEven") ) { return isEven_dyn(); }
		if (HX_FIELD_EQ(inName,"maxAdd") ) { return maxAdd_dyn(); }
		if (HX_FIELD_EQ(inName,"signOf") ) { return signOf_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"inBounds") ) { return inBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"sameSign") ) { return sameSign_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wrapValue") ) { return wrapValue_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dotProduct") ) { return dotProduct_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getDistance") ) { return getDistance_dyn(); }
		if (HX_FIELD_EQ(inName,"getDecimals") ) { return getDecimals_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"roundDecimal") ) { return roundDecimal_dyn(); }
		if (HX_FIELD_EQ(inName,"vectorLength") ) { return vectorLength_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pointInFlxRect") ) { return pointInFlxRect_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseInFlxRect") ) { return mouseInFlxRect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distanceBetween") ) { return distanceBetween_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceToPoint") ) { return distanceToPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceToMouse") ) { return distanceToMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceToTouch") ) { return distanceToTouch_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"pointInRectangle") ) { return pointInRectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"isDistanceWithin") ) { return isDistanceWithin_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numericComparison") ) { return numericComparison_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pointInCoordinates") ) { return pointInCoordinates_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"isDistanceToPointWithin") ) { return isDistanceToPointWithin_dyn(); }
		if (HX_FIELD_EQ(inName,"isDistanceToMouseWithin") ) { return isDistanceToMouseWithin_dyn(); }
		if (HX_FIELD_EQ(inName,"isDistanceToTouchWithin") ) { return isDistanceToTouchWithin_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMath_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMath_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MIN_VALUE"),
	HX_CSTRING("MAX_VALUE"),
	HX_CSTRING("SQUARE_ROOT_OF_TWO"),
	HX_CSTRING("roundDecimal"),
	HX_CSTRING("bound"),
	HX_CSTRING("lerp"),
	HX_CSTRING("inBounds"),
	HX_CSTRING("isOdd"),
	HX_CSTRING("isEven"),
	HX_CSTRING("numericComparison"),
	HX_CSTRING("pointInCoordinates"),
	HX_CSTRING("pointInFlxRect"),
	HX_CSTRING("mouseInFlxRect"),
	HX_CSTRING("pointInRectangle"),
	HX_CSTRING("maxAdd"),
	HX_CSTRING("wrapValue"),
	HX_CSTRING("dotProduct"),
	HX_CSTRING("vectorLength"),
	HX_CSTRING("getDistance"),
	HX_CSTRING("distanceBetween"),
	HX_CSTRING("isDistanceWithin"),
	HX_CSTRING("distanceToPoint"),
	HX_CSTRING("isDistanceToPointWithin"),
	HX_CSTRING("distanceToMouse"),
	HX_CSTRING("isDistanceToMouseWithin"),
	HX_CSTRING("distanceToTouch"),
	HX_CSTRING("isDistanceToTouchWithin"),
	HX_CSTRING("getDecimals"),
	HX_CSTRING("equal"),
	HX_CSTRING("signOf"),
	HX_CSTRING("sameSign"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMath_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MIN_VALUE,"MIN_VALUE");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MAX_VALUE,"MAX_VALUE");
	HX_MARK_MEMBER_NAME(FlxMath_obj::SQUARE_ROOT_OF_TWO,"SQUARE_ROOT_OF_TWO");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMath_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MIN_VALUE,"MIN_VALUE");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MAX_VALUE,"MAX_VALUE");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::SQUARE_ROOT_OF_TWO,"SQUARE_ROOT_OF_TWO");
};

#endif

Class FlxMath_obj::__mClass;

void FlxMath_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxMath"), hx::TCanCast< FlxMath_obj> ,sStaticFields,sMemberFields,
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

void FlxMath_obj::__boot()
{
	MIN_VALUE= 5e-324;
	MAX_VALUE= 1.79e+308;
	SQUARE_ROOT_OF_TWO= 1.41421356237;
}

} // end namespace flixel
} // end namespace util
