#include <hxcpp.h>

#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace tweens{

Void FlxEase_obj::__construct()
{
	return null();
}

//FlxEase_obj::~FlxEase_obj() { }

Dynamic FlxEase_obj::__CreateEmpty() { return  new FlxEase_obj; }
hx::ObjectPtr< FlxEase_obj > FlxEase_obj::__new()
{  hx::ObjectPtr< FlxEase_obj > result = new FlxEase_obj();
	result->__construct();
	return result;}

Dynamic FlxEase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxEase_obj > result = new FlxEase_obj();
	result->__construct();
	return result;}

Float FlxEase_obj::PI2;

Float FlxEase_obj::EL;

Float FlxEase_obj::B1;

Float FlxEase_obj::B2;

Float FlxEase_obj::B3;

Float FlxEase_obj::B4;

Float FlxEase_obj::B5;

Float FlxEase_obj::B6;

Float FlxEase_obj::ELASTIC_AMPLITUDE;

Float FlxEase_obj::ELASTIC_PERIOD;

Float FlxEase_obj::quadIn( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","quadIn",0xcb7d584e,"flixel.tweens.FlxEase.quadIn","flixel/tweens/FlxEase.hx",35,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(35)
	return (t * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quadIn,return )

Float FlxEase_obj::quadOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","quadOut",0x42348005,"flixel.tweens.FlxEase.quadOut","flixel/tweens/FlxEase.hx",40,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(40)
	return (-(t) * ((t - (int)2)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quadOut,return )

Float FlxEase_obj::quadInOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","quadInOut",0x1f34a4e0,"flixel.tweens.FlxEase.quadInOut","flixel/tweens/FlxEase.hx",45,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(45)
	if (((t <= .5))){
		HX_STACK_LINE(45)
		return ((t * t) * (int)2);
	}
	else{
		HX_STACK_LINE(45)
		Float _g = --(t);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(45)
		Float _g2 = (_g1 * (int)2);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(45)
		return ((int)1 - _g2);
	}
	HX_STACK_LINE(45)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quadInOut,return )

Float FlxEase_obj::cubeIn( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","cubeIn",0x332843fc,"flixel.tweens.FlxEase.cubeIn","flixel/tweens/FlxEase.hx",50,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(50)
	return ((t * t) * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,cubeIn,return )

Float FlxEase_obj::cubeOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","cubeOut",0x9017cc97,"flixel.tweens.FlxEase.cubeOut","flixel/tweens/FlxEase.hx",54,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(55)
	Float _g = --(t);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(55)
	Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(55)
	Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(55)
	return ((int)1 + _g2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,cubeOut,return )

Float FlxEase_obj::cubeInOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","cubeInOut",0x25f1b9f2,"flixel.tweens.FlxEase.cubeInOut","flixel/tweens/FlxEase.hx",60,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(60)
	if (((t <= .5))){
		HX_STACK_LINE(60)
		return (((t * t) * t) * (int)4);
	}
	else{
		HX_STACK_LINE(60)
		Float _g = --(t);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(60)
		Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(60)
		Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(60)
		Float _g3 = (_g2 * (int)4);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(60)
		return ((int)1 + _g3);
	}
	HX_STACK_LINE(60)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,cubeInOut,return )

Float FlxEase_obj::quartIn( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","quartIn",0x4b9169c2,"flixel.tweens.FlxEase.quartIn","flixel/tweens/FlxEase.hx",65,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(65)
	return (((t * t) * t) * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quartIn,return )

Float FlxEase_obj::quartOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","quartOut",0xd3afb411,"flixel.tweens.FlxEase.quartOut","flixel/tweens/FlxEase.hx",69,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(70)
	Float _g = hx::SubEq(t,(int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(70)
	Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(70)
	Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(70)
	Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(70)
	return ((int)1 - _g3);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quartOut,return )

Float FlxEase_obj::quartInOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","quartInOut",0x6cedf3ec,"flixel.tweens.FlxEase.quartInOut","flixel/tweens/FlxEase.hx",75,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(75)
	if (((t <= .5))){
		HX_STACK_LINE(75)
		return ((((t * t) * t) * t) * (int)8);
	}
	else{
		HX_STACK_LINE(75)
		Float _g = t = ((t * (int)2) - (int)2);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(75)
		Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(75)
		Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(75)
		Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(75)
		Float _g4 = ((int)1 - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(75)
		Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(75)
		return (_g5 + .5);
	}
	HX_STACK_LINE(75)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quartInOut,return )

Float FlxEase_obj::quintIn( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","quintIn",0xe421334e,"flixel.tweens.FlxEase.quintIn","flixel/tweens/FlxEase.hx",80,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(80)
	return ((((t * t) * t) * t) * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quintIn,return )

Float FlxEase_obj::quintOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","quintOut",0xb8f04505,"flixel.tweens.FlxEase.quintOut","flixel/tweens/FlxEase.hx",84,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(85)
	Float _g = t = (t - (int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(85)
	Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(85)
	Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(85)
	Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(85)
	Float _g4 = (_g3 * t);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(85)
	return (_g4 + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quintOut,return )

Float FlxEase_obj::quintInOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","quintInOut",0x902ba9e0,"flixel.tweens.FlxEase.quintInOut","flixel/tweens/FlxEase.hx",89,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(90)
	Float _g = hx::MultEq(t,(int)2);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(90)
	if (((_g < (int)1))){
		HX_STACK_LINE(90)
		return (Float(((((t * t) * t) * t) * t)) / Float((int)2));
	}
	else{
		HX_STACK_LINE(90)
		Float _g1 = hx::SubEq(t,(int)2);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(90)
		Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(90)
		Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(90)
		Float _g4 = (_g3 * t);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(90)
		Float _g5 = (_g4 * t);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(90)
		Float _g6 = (_g5 + (int)2);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(90)
		return (Float(_g6) / Float((int)2));
	}
	HX_STACK_LINE(90)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quintInOut,return )

Float FlxEase_obj::sineIn( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","sineIn",0xb7fda354,"flixel.tweens.FlxEase.sineIn","flixel/tweens/FlxEase.hx",94,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(95)
	Float _g = -(::Math_obj::cos((::flixel::tweens::FlxEase_obj::PI2 * t)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(95)
	return (_g + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,sineIn,return )

Float FlxEase_obj::sineOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","sineOut",0x45f5da3f,"flixel.tweens.FlxEase.sineOut","flixel/tweens/FlxEase.hx",100,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(100)
	return ::Math_obj::sin((::flixel::tweens::FlxEase_obj::PI2 * t));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,sineOut,return )

Float FlxEase_obj::sineInOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","sineInOut",0x99ac819a,"flixel.tweens.FlxEase.sineInOut","flixel/tweens/FlxEase.hx",104,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(105)
	Float _g = -(::Math_obj::cos((::Math_obj::PI * t)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(105)
	Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(105)
	return (_g1 + .5);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,sineInOut,return )

Float FlxEase_obj::bounceIn( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","bounceIn",0x26970bcf,"flixel.tweens.FlxEase.bounceIn","flixel/tweens/FlxEase.hx",109,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(110)
	t = ((int)1 - t);
	HX_STACK_LINE(111)
	if (((t < ::flixel::tweens::FlxEase_obj::B1))){
		HX_STACK_LINE(111)
		return ((int)1 - ((7.5625 * t) * t));
	}
	HX_STACK_LINE(112)
	if (((t < ::flixel::tweens::FlxEase_obj::B2))){
		HX_STACK_LINE(112)
		return ((int)1 - ((((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B3))) * ((t - ::flixel::tweens::FlxEase_obj::B3))) + .75)));
	}
	HX_STACK_LINE(113)
	if (((t < ::flixel::tweens::FlxEase_obj::B4))){
		HX_STACK_LINE(113)
		return ((int)1 - ((((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B5))) * ((t - ::flixel::tweens::FlxEase_obj::B5))) + .9375)));
	}
	HX_STACK_LINE(114)
	return ((int)1 - ((((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B6))) * ((t - ::flixel::tweens::FlxEase_obj::B6))) + .984375)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,bounceIn,return )

Float FlxEase_obj::bounceOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","bounceOut",0x9d97dd64,"flixel.tweens.FlxEase.bounceOut","flixel/tweens/FlxEase.hx",118,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(119)
	if (((t < ::flixel::tweens::FlxEase_obj::B1))){
		HX_STACK_LINE(119)
		return ((7.5625 * t) * t);
	}
	HX_STACK_LINE(120)
	if (((t < ::flixel::tweens::FlxEase_obj::B2))){
		HX_STACK_LINE(120)
		return (((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B3))) * ((t - ::flixel::tweens::FlxEase_obj::B3))) + .75);
	}
	HX_STACK_LINE(121)
	if (((t < ::flixel::tweens::FlxEase_obj::B4))){
		HX_STACK_LINE(121)
		return (((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B5))) * ((t - ::flixel::tweens::FlxEase_obj::B5))) + .9375);
	}
	HX_STACK_LINE(122)
	return (((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B6))) * ((t - ::flixel::tweens::FlxEase_obj::B6))) + .984375);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,bounceOut,return )

Float FlxEase_obj::bounceInOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","bounceInOut",0xa03157ff,"flixel.tweens.FlxEase.bounceInOut","flixel/tweens/FlxEase.hx",126,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(127)
	if (((t < .5))){
		HX_STACK_LINE(129)
		t = ((int)1 - (t * (int)2));
		HX_STACK_LINE(130)
		if (((t < ::flixel::tweens::FlxEase_obj::B1))){
			HX_STACK_LINE(130)
			return (Float((((int)1 - ((7.5625 * t) * t)))) / Float((int)2));
		}
		HX_STACK_LINE(131)
		if (((t < ::flixel::tweens::FlxEase_obj::B2))){
			HX_STACK_LINE(131)
			return (Float((((int)1 - ((((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B3))) * ((t - ::flixel::tweens::FlxEase_obj::B3))) + .75))))) / Float((int)2));
		}
		HX_STACK_LINE(132)
		if (((t < ::flixel::tweens::FlxEase_obj::B4))){
			HX_STACK_LINE(132)
			return (Float((((int)1 - ((((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B5))) * ((t - ::flixel::tweens::FlxEase_obj::B5))) + .9375))))) / Float((int)2));
		}
		HX_STACK_LINE(133)
		return (Float((((int)1 - ((((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B6))) * ((t - ::flixel::tweens::FlxEase_obj::B6))) + .984375))))) / Float((int)2));
	}
	HX_STACK_LINE(135)
	t = ((t * (int)2) - (int)1);
	HX_STACK_LINE(136)
	if (((t < ::flixel::tweens::FlxEase_obj::B1))){
		HX_STACK_LINE(136)
		return ((Float(((7.5625 * t) * t)) / Float((int)2)) + .5);
	}
	HX_STACK_LINE(137)
	if (((t < ::flixel::tweens::FlxEase_obj::B2))){
		HX_STACK_LINE(137)
		return ((Float(((((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B3))) * ((t - ::flixel::tweens::FlxEase_obj::B3))) + .75))) / Float((int)2)) + .5);
	}
	HX_STACK_LINE(138)
	if (((t < ::flixel::tweens::FlxEase_obj::B4))){
		HX_STACK_LINE(138)
		return ((Float(((((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B5))) * ((t - ::flixel::tweens::FlxEase_obj::B5))) + .9375))) / Float((int)2)) + .5);
	}
	HX_STACK_LINE(139)
	return ((Float(((((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B6))) * ((t - ::flixel::tweens::FlxEase_obj::B6))) + .984375))) / Float((int)2)) + .5);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,bounceInOut,return )

Float FlxEase_obj::circIn( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","circIn",0x54eb335e,"flixel.tweens.FlxEase.circIn","flixel/tweens/FlxEase.hx",143,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(144)
	Float _g = ::Math_obj::sqrt(((int)1 - (t * t)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(144)
	return -(((_g - (int)1)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,circIn,return )

Float FlxEase_obj::circOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","circOut",0xf8e652f5,"flixel.tweens.FlxEase.circOut","flixel/tweens/FlxEase.hx",149,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(149)
	return ::Math_obj::sqrt(((int)1 - (((t - (int)1)) * ((t - (int)1)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,circOut,return )

Float FlxEase_obj::circInOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","circInOut",0x443513d0,"flixel.tweens.FlxEase.circInOut","flixel/tweens/FlxEase.hx",154,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(154)
	if (((t <= .5))){
		HX_STACK_LINE(154)
		Float _g = ::Math_obj::sqrt(((int)1 - ((t * t) * (int)4)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(154)
		Float _g1 = (_g - (int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(154)
		return (Float(_g1) / Float((int)-2));
	}
	else{
		HX_STACK_LINE(154)
		Float _g2 = ::Math_obj::sqrt(((int)1 - ((((t * (int)2) - (int)2)) * (((t * (int)2) - (int)2)))));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(154)
		Float _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(154)
		return (Float(_g3) / Float((int)2));
	}
	HX_STACK_LINE(154)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,circInOut,return )

Float FlxEase_obj::expoIn( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","expoIn",0xc35b4d79,"flixel.tweens.FlxEase.expoIn","flixel/tweens/FlxEase.hx",159,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(159)
	return ::Math_obj::pow((int)2,((int)10 * ((t - (int)1))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,expoIn,return )

Float FlxEase_obj::expoOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","expoOut",0x2c8d107a,"flixel.tweens.FlxEase.expoOut","flixel/tweens/FlxEase.hx",163,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(164)
	Float _g = -(::Math_obj::pow((int)2,((int)-10 * t)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(164)
	return (_g + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,expoOut,return )

Float FlxEase_obj::expoInOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","expoInOut",0xbd29fc95,"flixel.tweens.FlxEase.expoInOut","flixel/tweens/FlxEase.hx",169,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(169)
	if (((t < .5))){
		HX_STACK_LINE(169)
		Float _g = ::Math_obj::pow((int)2,((int)10 * (((t * (int)2) - (int)1))));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		return (Float(_g) / Float((int)2));
	}
	else{
		HX_STACK_LINE(169)
		Float _g1 = -(::Math_obj::pow((int)2,((int)-10 * (((t * (int)2) - (int)1)))));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(169)
		Float _g2 = (_g1 + (int)2);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(169)
		return (Float(_g2) / Float((int)2));
	}
	HX_STACK_LINE(169)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,expoInOut,return )

Float FlxEase_obj::backIn( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","backIn",0x497711ae,"flixel.tweens.FlxEase.backIn","flixel/tweens/FlxEase.hx",174,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(174)
	return ((t * t) * (((2.70158 * t) - 1.70158)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,backIn,return )

Float FlxEase_obj::backOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","backOut",0xfebcfaa5,"flixel.tweens.FlxEase.backOut","flixel/tweens/FlxEase.hx",178,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(179)
	Float _g = --(t);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(179)
	Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(179)
	Float _g2 = (_g1 * (((-2.70158 * t) - 1.70158)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(179)
	return ((int)1 - _g2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,backOut,return )

Float FlxEase_obj::backInOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","backInOut",0x6ac90780,"flixel.tweens.FlxEase.backInOut","flixel/tweens/FlxEase.hx",183,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(184)
	hx::MultEq(t,(int)2);
	HX_STACK_LINE(185)
	if (((t < (int)1))){
		HX_STACK_LINE(185)
		return (Float(((t * t) * (((2.70158 * t) - 1.70158)))) / Float((int)2));
	}
	HX_STACK_LINE(186)
	(t)--;
	HX_STACK_LINE(187)
	Float _g = --(t);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(187)
	Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(187)
	Float _g2 = (_g1 * (((-2.70158 * t) - 1.70158)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(187)
	Float _g3 = ((int)1 - _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(187)
	Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(187)
	return (_g4 + .5);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,backInOut,return )

Float FlxEase_obj::elasticIn( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","elasticIn",0xf7740698,"flixel.tweens.FlxEase.elasticIn","flixel/tweens/FlxEase.hx",191,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(192)
	Float _g = hx::SubEq(t,(int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(192)
	Float _g1 = ((int)10 * _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(192)
	Float _g2 = ::Math_obj::pow((int)2,_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(192)
	Float _g3 = (::flixel::tweens::FlxEase_obj::ELASTIC_AMPLITUDE * _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(192)
	Float _g4 = ::Math_obj::asin((Float((int)1) / Float(::flixel::tweens::FlxEase_obj::ELASTIC_AMPLITUDE)));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(192)
	Float _g5 = ((Float(::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD) / Float((((int)2 * ::Math_obj::PI)))) * _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(192)
	Float _g6 = (t - _g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(192)
	Float _g7 = (_g6 * (((int)2 * ::Math_obj::PI)));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(192)
	Float _g8 = (Float(_g7) / Float(::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(192)
	Float _g9 = ::Math_obj::sin(_g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(192)
	return -(((_g3 * _g9)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,elasticIn,return )

Float FlxEase_obj::elasticOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","elasticOut",0x8e16527b,"flixel.tweens.FlxEase.elasticOut","flixel/tweens/FlxEase.hx",196,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(197)
	Float _g = ::Math_obj::pow((int)2,((int)-10 * t));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(197)
	Float _g1 = (::flixel::tweens::FlxEase_obj::ELASTIC_AMPLITUDE * _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(197)
	Float _g2 = ::Math_obj::asin((Float((int)1) / Float(::flixel::tweens::FlxEase_obj::ELASTIC_AMPLITUDE)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(197)
	Float _g3 = ((Float(::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD) / Float((((int)2 * ::Math_obj::PI)))) * _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(197)
	Float _g4 = (t - _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(197)
	Float _g5 = (_g4 * (((int)2 * ::Math_obj::PI)));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(197)
	Float _g6 = (Float(_g5) / Float(::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(197)
	Float _g7 = ::Math_obj::sin(_g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(197)
	Float _g8 = (_g1 * _g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(197)
	return (_g8 + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,elasticOut,return )

Float FlxEase_obj::elasticInOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","elasticInOut",0x850880d6,"flixel.tweens.FlxEase.elasticInOut","flixel/tweens/FlxEase.hx",201,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(202)
	if (((t < 0.5))){
		HX_STACK_LINE(204)
		Float _g = hx::SubEq(t,0.5);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(204)
		Float _g1 = ((int)10 * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(204)
		Float _g2 = ::Math_obj::pow((int)2,_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(204)
		Float _g3 = ::Math_obj::sin((Float((((t - (Float(::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD) / Float((int)4)))) * (((int)2 * ::Math_obj::PI)))) / Float(::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD)));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(204)
		Float _g4 = (_g2 * _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(204)
		return (-0.5 * _g4);
	}
	HX_STACK_LINE(206)
	Float _g5 = hx::SubEq(t,0.5);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(206)
	Float _g6 = ((int)-10 * _g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(206)
	Float _g7 = ::Math_obj::pow((int)2,_g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(206)
	Float _g8 = ::Math_obj::sin((Float((((t - (Float(::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD) / Float((int)4)))) * (((int)2 * ::Math_obj::PI)))) / Float(::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD)));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(206)
	Float _g9 = (_g7 * _g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(206)
	Float _g10 = (_g9 * 0.5);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(206)
	return (_g10 + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,elasticInOut,return )


FlxEase_obj::FlxEase_obj()
{
}

Dynamic FlxEase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"EL") ) { return EL; }
		if (HX_FIELD_EQ(inName,"B1") ) { return B1; }
		if (HX_FIELD_EQ(inName,"B2") ) { return B2; }
		if (HX_FIELD_EQ(inName,"B3") ) { return B3; }
		if (HX_FIELD_EQ(inName,"B4") ) { return B4; }
		if (HX_FIELD_EQ(inName,"B5") ) { return B5; }
		if (HX_FIELD_EQ(inName,"B6") ) { return B6; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"PI2") ) { return PI2; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"quadIn") ) { return quadIn_dyn(); }
		if (HX_FIELD_EQ(inName,"cubeIn") ) { return cubeIn_dyn(); }
		if (HX_FIELD_EQ(inName,"sineIn") ) { return sineIn_dyn(); }
		if (HX_FIELD_EQ(inName,"circIn") ) { return circIn_dyn(); }
		if (HX_FIELD_EQ(inName,"expoIn") ) { return expoIn_dyn(); }
		if (HX_FIELD_EQ(inName,"backIn") ) { return backIn_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quadOut") ) { return quadOut_dyn(); }
		if (HX_FIELD_EQ(inName,"cubeOut") ) { return cubeOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quartIn") ) { return quartIn_dyn(); }
		if (HX_FIELD_EQ(inName,"quintIn") ) { return quintIn_dyn(); }
		if (HX_FIELD_EQ(inName,"sineOut") ) { return sineOut_dyn(); }
		if (HX_FIELD_EQ(inName,"circOut") ) { return circOut_dyn(); }
		if (HX_FIELD_EQ(inName,"expoOut") ) { return expoOut_dyn(); }
		if (HX_FIELD_EQ(inName,"backOut") ) { return backOut_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quartOut") ) { return quartOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quintOut") ) { return quintOut_dyn(); }
		if (HX_FIELD_EQ(inName,"bounceIn") ) { return bounceIn_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"quadInOut") ) { return quadInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"cubeInOut") ) { return cubeInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"sineInOut") ) { return sineInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"bounceOut") ) { return bounceOut_dyn(); }
		if (HX_FIELD_EQ(inName,"circInOut") ) { return circInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"expoInOut") ) { return expoInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"backInOut") ) { return backInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"elasticIn") ) { return elasticIn_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quartInOut") ) { return quartInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quintInOut") ) { return quintInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"elasticOut") ) { return elasticOut_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bounceInOut") ) { return bounceInOut_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"elasticInOut") ) { return elasticInOut_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ELASTIC_PERIOD") ) { return ELASTIC_PERIOD; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ELASTIC_AMPLITUDE") ) { return ELASTIC_AMPLITUDE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxEase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"EL") ) { EL=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B1") ) { B1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B2") ) { B2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B3") ) { B3=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B4") ) { B4=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B5") ) { B5=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B6") ) { B6=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"PI2") ) { PI2=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ELASTIC_PERIOD") ) { ELASTIC_PERIOD=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ELASTIC_AMPLITUDE") ) { ELASTIC_AMPLITUDE=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxEase_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("PI2"),
	HX_CSTRING("EL"),
	HX_CSTRING("B1"),
	HX_CSTRING("B2"),
	HX_CSTRING("B3"),
	HX_CSTRING("B4"),
	HX_CSTRING("B5"),
	HX_CSTRING("B6"),
	HX_CSTRING("ELASTIC_AMPLITUDE"),
	HX_CSTRING("ELASTIC_PERIOD"),
	HX_CSTRING("quadIn"),
	HX_CSTRING("quadOut"),
	HX_CSTRING("quadInOut"),
	HX_CSTRING("cubeIn"),
	HX_CSTRING("cubeOut"),
	HX_CSTRING("cubeInOut"),
	HX_CSTRING("quartIn"),
	HX_CSTRING("quartOut"),
	HX_CSTRING("quartInOut"),
	HX_CSTRING("quintIn"),
	HX_CSTRING("quintOut"),
	HX_CSTRING("quintInOut"),
	HX_CSTRING("sineIn"),
	HX_CSTRING("sineOut"),
	HX_CSTRING("sineInOut"),
	HX_CSTRING("bounceIn"),
	HX_CSTRING("bounceOut"),
	HX_CSTRING("bounceInOut"),
	HX_CSTRING("circIn"),
	HX_CSTRING("circOut"),
	HX_CSTRING("circInOut"),
	HX_CSTRING("expoIn"),
	HX_CSTRING("expoOut"),
	HX_CSTRING("expoInOut"),
	HX_CSTRING("backIn"),
	HX_CSTRING("backOut"),
	HX_CSTRING("backInOut"),
	HX_CSTRING("elasticIn"),
	HX_CSTRING("elasticOut"),
	HX_CSTRING("elasticInOut"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxEase_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxEase_obj::PI2,"PI2");
	HX_MARK_MEMBER_NAME(FlxEase_obj::EL,"EL");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B1,"B1");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B2,"B2");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B3,"B3");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B4,"B4");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B5,"B5");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B6,"B6");
	HX_MARK_MEMBER_NAME(FlxEase_obj::ELASTIC_AMPLITUDE,"ELASTIC_AMPLITUDE");
	HX_MARK_MEMBER_NAME(FlxEase_obj::ELASTIC_PERIOD,"ELASTIC_PERIOD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxEase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::PI2,"PI2");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::EL,"EL");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B1,"B1");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B2,"B2");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B3,"B3");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B4,"B4");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B5,"B5");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B6,"B6");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::ELASTIC_AMPLITUDE,"ELASTIC_AMPLITUDE");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::ELASTIC_PERIOD,"ELASTIC_PERIOD");
};

#endif

Class FlxEase_obj::__mClass;

void FlxEase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.FlxEase"), hx::TCanCast< FlxEase_obj> ,sStaticFields,sMemberFields,
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

void FlxEase_obj::__boot()
{
	PI2= (Float(::Math_obj::PI) / Float((int)2));
	EL= (Float(((int)2 * ::Math_obj::PI)) / Float(.45));
	B1= 0.36363636363636365;
	B2= 0.72727272727272729;
	B3= 0.54545454545454541;
	B4= 0.90909090909090906;
	B5= 0.81818181818181823;
	B6= 0.95454545454545459;
	ELASTIC_AMPLITUDE= (int)1;
	ELASTIC_PERIOD= 0.4;
}

} // end namespace flixel
} // end namespace tweens
