#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{

Void FlxRandom_obj::__construct()
{
	return null();
}

//FlxRandom_obj::~FlxRandom_obj() { }

Dynamic FlxRandom_obj::__CreateEmpty() { return  new FlxRandom_obj; }
hx::ObjectPtr< FlxRandom_obj > FlxRandom_obj::__new()
{  hx::ObjectPtr< FlxRandom_obj > result = new FlxRandom_obj();
	result->__construct();
	return result;}

Dynamic FlxRandom_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxRandom_obj > result = new FlxRandom_obj();
	result->__construct();
	return result;}

Dynamic FlxRandom_obj::getObject_getRandom_T( Dynamic Objects,hx::Null< int >  __o_StartIndex,hx::Null< int >  __o_EndIndex){
int StartIndex = __o_StartIndex.Default(0);
int EndIndex = __o_EndIndex.Default(0);
	HX_STACK_FRAME("flixel.util.FlxRandom","getObject_getRandom_T",0xe7f9d7b1,"flixel.util.FlxRandom.getObject_getRandom_T","flixel/util/FlxRandom.hx",289,0xd3ba8ba3)
	HX_STACK_ARG(Objects,"Objects")
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(EndIndex,"EndIndex")
{
		HX_STACK_LINE(290)
		Dynamic selected = null();		HX_STACK_VAR(selected,"selected");
		HX_STACK_LINE(292)
		if (((Objects->__Field(HX_CSTRING("length"),true) != (int)0))){
			HX_STACK_LINE(294)
			if (((StartIndex < (int)0))){
				HX_STACK_LINE(296)
				StartIndex = (int)0;
			}
			HX_STACK_LINE(301)
			if (((EndIndex < StartIndex))){
				HX_STACK_LINE(303)
				StartIndex = (StartIndex + EndIndex);
				HX_STACK_LINE(304)
				EndIndex = (StartIndex - EndIndex);
				HX_STACK_LINE(305)
				StartIndex = (StartIndex - EndIndex);
			}
			HX_STACK_LINE(308)
			if (((bool((EndIndex <= (int)0)) || bool((EndIndex > (Objects->__Field(HX_CSTRING("length"),true) - (int)1)))))){
				HX_STACK_LINE(310)
				EndIndex = (Objects->__Field(HX_CSTRING("length"),true) - (int)1);
			}
			HX_STACK_LINE(313)
			int _g = ::flixel::util::FlxRandom_obj::intRanged(StartIndex,EndIndex,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(313)
			Dynamic _g1 = Objects->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(313)
			selected = _g1;
		}
		HX_STACK_LINE(316)
		return selected;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxRandom_obj,getObject_getRandom_T,return )

Dynamic FlxRandom_obj::shuffleArray_shuffle_T( Dynamic Objects,int HowManyTimes){
	HX_STACK_FRAME("flixel.util.FlxRandom","shuffleArray_shuffle_T",0x26b19da2,"flixel.util.FlxRandom.shuffleArray_shuffle_T","flixel/util/FlxRandom.hx",328,0xd3ba8ba3)
	HX_STACK_ARG(Objects,"Objects")
	HX_STACK_ARG(HowManyTimes,"HowManyTimes")
	HX_STACK_LINE(329)
	Float _g = ::Math_obj::max(HowManyTimes,(int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(329)
	int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(329)
	HowManyTimes = _g1;
	HX_STACK_LINE(331)
	Dynamic tempObject = null();		HX_STACK_VAR(tempObject,"tempObject");
	HX_STACK_LINE(333)
	{
		HX_STACK_LINE(333)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(333)
		while((true)){
			HX_STACK_LINE(333)
			if ((!(((_g2 < HowManyTimes))))){
				HX_STACK_LINE(333)
				break;
			}
			HX_STACK_LINE(333)
			int i = (_g2)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(335)
			int _g21 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(Objects->__Field(HX_CSTRING("length"),true) - (int)1),null());		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(335)
			::flixel::util::FlxRandom_obj::_intHelper2 = _g21;
			HX_STACK_LINE(336)
			int _g3 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(Objects->__Field(HX_CSTRING("length"),true) - (int)1),null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(336)
			::flixel::util::FlxRandom_obj::_intHelper3 = _g3;
			HX_STACK_LINE(337)
			tempObject = Objects->__GetItem(::flixel::util::FlxRandom_obj::_intHelper2);
			HX_STACK_LINE(338)
			hx::IndexRef((Objects).mPtr,::flixel::util::FlxRandom_obj::_intHelper2) = Objects->__GetItem(::flixel::util::FlxRandom_obj::_intHelper3);
			HX_STACK_LINE(339)
			hx::IndexRef((Objects).mPtr,::flixel::util::FlxRandom_obj::_intHelper3) = tempObject;
		}
	}
	HX_STACK_LINE(342)
	return Objects;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxRandom_obj,shuffleArray_shuffle_T,return )

int FlxRandom_obj::globalSeed;

int FlxRandom_obj::set_globalSeed( int NewSeed){
	HX_STACK_FRAME("flixel.util.FlxRandom","set_globalSeed",0x258e05e4,"flixel.util.FlxRandom.set_globalSeed","flixel/util/FlxRandom.hx",22,0xd3ba8ba3)
	HX_STACK_ARG(NewSeed,"NewSeed")
	HX_STACK_LINE(23)
	if (((NewSeed < (int)1))){
		HX_STACK_LINE(25)
		NewSeed = (int)1;
	}
	HX_STACK_LINE(28)
	if (((NewSeed > (int)2147483647))){
		HX_STACK_LINE(30)
		NewSeed = (int)2147483647;
	}
	HX_STACK_LINE(33)
	::flixel::util::FlxRandom_obj::_internalSeed = NewSeed;
	HX_STACK_LINE(34)
	::flixel::util::FlxRandom_obj::globalSeed = NewSeed;
	HX_STACK_LINE(36)
	return ::flixel::util::FlxRandom_obj::globalSeed;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,set_globalSeed,return )

int FlxRandom_obj::_internalSeed;

int FlxRandom_obj::MULTIPLIER;

int FlxRandom_obj::MODULUS;

int FlxRandom_obj::_intHelper;

int FlxRandom_obj::_intHelper2;

int FlxRandom_obj::_intHelper3;

Float FlxRandom_obj::_floatHelper;

Array< Float > FlxRandom_obj::_arrayFloatHelper;

int FlxRandom_obj::_red;

int FlxRandom_obj::_green;

int FlxRandom_obj::_blue;

int FlxRandom_obj::_alpha;

int FlxRandom_obj::resetGlobalSeed( ){
	HX_STACK_FRAME("flixel.util.FlxRandom","resetGlobalSeed",0xb2826f10,"flixel.util.FlxRandom.resetGlobalSeed","flixel/util/FlxRandom.hx",119,0xd3ba8ba3)
	HX_STACK_LINE(120)
	Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(120)
	Float _g1 = (_g * (int)2147483647);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(120)
	int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(120)
	return ::flixel::util::FlxRandom_obj::set_globalSeed(_g2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,resetGlobalSeed,return )

int FlxRandom_obj::_int( ){
	HX_STACK_FRAME("flixel.util.FlxRandom","int",0xa7c5f55c,"flixel.util.FlxRandom.int","flixel/util/FlxRandom.hx",128,0xd3ba8ba3)
	HX_STACK_LINE(128)
	return ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,_int,return )

Float FlxRandom_obj::_float( ){
	HX_STACK_FRAME("flixel.util.FlxRandom","float",0xe1a96349,"flixel.util.FlxRandom.float","flixel/util/FlxRandom.hx",135,0xd3ba8ba3)
	HX_STACK_LINE(136)
	int _g = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(136)
	return (Float(_g) / Float((int)2147483647));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,_float,return )

int FlxRandom_obj::intRanged( hx::Null< int >  __o_Min,hx::Null< int >  __o_Max,Array< int > Excludes){
int Min = __o_Min.Default(0);
int Max = __o_Max.Default(2147483647);
	HX_STACK_FRAME("flixel.util.FlxRandom","intRanged",0x32083683,"flixel.util.FlxRandom.intRanged","flixel/util/FlxRandom.hx",148,0xd3ba8ba3)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_ARG(Excludes,"Excludes")
{
		HX_STACK_LINE(149)
		if (((Min == Max))){
			HX_STACK_LINE(151)
			::flixel::util::FlxRandom_obj::_intHelper = Min;
		}
		else{
			HX_STACK_LINE(157)
			if (((Min > Max))){
				HX_STACK_LINE(159)
				Min = (Min + Max);
				HX_STACK_LINE(160)
				Max = (Min - Max);
				HX_STACK_LINE(161)
				Min = (Min - Max);
			}
			HX_STACK_LINE(164)
			if (((Excludes == null()))){
				HX_STACK_LINE(166)
				int _g = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(166)
				Float _g1 = (Float(_g) / Float((int)2147483647));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(166)
				Float _g2 = (_g1 * (((Max - Min) + (int)1)));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(166)
				Float _g3 = (Min + _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(166)
				int _g4 = ::Math_obj::floor(_g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(166)
				::flixel::util::FlxRandom_obj::_intHelper = _g4;
			}
			else{
				HX_STACK_LINE(170)
				while((true)){
					HX_STACK_LINE(172)
					int _g5 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(172)
					Float _g6 = (Float(_g5) / Float((int)2147483647));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(172)
					Float _g7 = (_g6 * (((Max - Min) + (int)1)));		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(172)
					Float _g8 = (Min + _g7);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(172)
					int _g9 = ::Math_obj::floor(_g8);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(172)
					::flixel::util::FlxRandom_obj::_intHelper = _g9;
					HX_STACK_LINE(174)
					int _g10 = Excludes->indexOf(::flixel::util::FlxRandom_obj::_intHelper,null());		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(170)
					if ((!(((_g10 >= (int)0))))){
						HX_STACK_LINE(170)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(178)
		return ::flixel::util::FlxRandom_obj::_intHelper;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxRandom_obj,intRanged,return )

Float FlxRandom_obj::floatRanged( hx::Null< Float >  __o_Min,hx::Null< Float >  __o_Max,Array< Float > Excludes){
Float Min = __o_Min.Default(0);
Float Max = __o_Max.Default(1);
	HX_STACK_FRAME("flixel.util.FlxRandom","floatRanged",0x9b1a5430,"flixel.util.FlxRandom.floatRanged","flixel/util/FlxRandom.hx",190,0xd3ba8ba3)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_ARG(Excludes,"Excludes")
{
		HX_STACK_LINE(191)
		if (((Min == Max))){
			HX_STACK_LINE(193)
			::flixel::util::FlxRandom_obj::_floatHelper = Min;
		}
		else{
			HX_STACK_LINE(199)
			if (((Min > Max))){
				HX_STACK_LINE(201)
				Min = (Min + Max);
				HX_STACK_LINE(202)
				Max = (Min - Max);
				HX_STACK_LINE(203)
				Min = (Min - Max);
			}
			HX_STACK_LINE(206)
			if (((Excludes == null()))){
				HX_STACK_LINE(208)
				int _g = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(208)
				Float _g1 = (Float(_g) / Float((int)2147483647));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(208)
				Float _g2 = (_g1 * ((Max - Min)));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(208)
				Float _g3 = (Min + _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(208)
				::flixel::util::FlxRandom_obj::_floatHelper = _g3;
			}
			else{
				HX_STACK_LINE(212)
				while((true)){
					HX_STACK_LINE(214)
					int _g4 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(214)
					Float _g5 = (Float(_g4) / Float((int)2147483647));		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(214)
					Float _g6 = (_g5 * ((Max - Min)));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(214)
					Float _g7 = (Min + _g6);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(214)
					::flixel::util::FlxRandom_obj::_floatHelper = _g7;
					HX_STACK_LINE(216)
					int _g8 = Excludes->indexOf(::flixel::util::FlxRandom_obj::_floatHelper,null());		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(212)
					if ((!(((_g8 >= (int)0))))){
						HX_STACK_LINE(212)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(220)
		return ::flixel::util::FlxRandom_obj::_floatHelper;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxRandom_obj,floatRanged,return )

bool FlxRandom_obj::chanceRoll( hx::Null< Float >  __o_Chance){
Float Chance = __o_Chance.Default(50);
	HX_STACK_FRAME("flixel.util.FlxRandom","chanceRoll",0xff9c5ec4,"flixel.util.FlxRandom.chanceRoll","flixel/util/FlxRandom.hx",231,0xd3ba8ba3)
	HX_STACK_ARG(Chance,"Chance")
{
		HX_STACK_LINE(232)
		Float _g = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(232)
		return (_g < Chance);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,chanceRoll,return )

int FlxRandom_obj::sign( hx::Null< Float >  __o_Chance){
Float Chance = __o_Chance.Default(50);
	HX_STACK_FRAME("flixel.util.FlxRandom","sign",0x2c090730,"flixel.util.FlxRandom.sign","flixel/util/FlxRandom.hx",242,0xd3ba8ba3)
	HX_STACK_ARG(Chance,"Chance")
{
		HX_STACK_LINE(243)
		Float _g = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(243)
		if (((_g < Chance))){
			HX_STACK_LINE(243)
			return (int)1;
		}
		else{
			HX_STACK_LINE(243)
			return (int)-1;
		}
		HX_STACK_LINE(243)
		return (int)0;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,sign,return )

int FlxRandom_obj::weightedPick( Array< Float > WeightsArray){
	HX_STACK_FRAME("flixel.util.FlxRandom","weightedPick",0x0331864b,"flixel.util.FlxRandom.weightedPick","flixel/util/FlxRandom.hx",254,0xd3ba8ba3)
	HX_STACK_ARG(WeightsArray,"WeightsArray")
	HX_STACK_LINE(255)
	::flixel::util::FlxRandom_obj::_floatHelper = (int)0;
	HX_STACK_LINE(257)
	{
		HX_STACK_LINE(257)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(257)
		while((true)){
			HX_STACK_LINE(257)
			if ((!(((_g < WeightsArray->length))))){
				HX_STACK_LINE(257)
				break;
			}
			HX_STACK_LINE(257)
			Float i = WeightsArray->__get(_g);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(257)
			++(_g);
			HX_STACK_LINE(259)
			hx::AddEq(::flixel::util::FlxRandom_obj::_floatHelper,i);
		}
	}
	HX_STACK_LINE(262)
	Float _g = ::flixel::util::FlxRandom_obj::floatRanged((int)0,::flixel::util::FlxRandom_obj::_floatHelper,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(262)
	::flixel::util::FlxRandom_obj::_floatHelper = _g;
	HX_STACK_LINE(264)
	{
		HX_STACK_LINE(264)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(264)
		int _g2 = WeightsArray->length;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(264)
		while((true)){
			HX_STACK_LINE(264)
			if ((!(((_g1 < _g2))))){
				HX_STACK_LINE(264)
				break;
			}
			HX_STACK_LINE(264)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(266)
			if (((::flixel::util::FlxRandom_obj::_floatHelper < WeightsArray->__get(i)))){
				HX_STACK_LINE(268)
				::flixel::util::FlxRandom_obj::_intHelper = i;
				HX_STACK_LINE(269)
				break;
			}
			HX_STACK_LINE(272)
			hx::SubEq(::flixel::util::FlxRandom_obj::_floatHelper,WeightsArray->__get(i));
		}
	}
	HX_STACK_LINE(275)
	return ::flixel::util::FlxRandom_obj::_intHelper;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,weightedPick,return )

int FlxRandom_obj::color( hx::Null< int >  __o_Min,hx::Null< int >  __o_Max,hx::Null< int >  __o_Alpha,hx::Null< bool >  __o_GreyScale){
int Min = __o_Min.Default(0);
int Max = __o_Max.Default(255);
int Alpha = __o_Alpha.Default(255);
bool GreyScale = __o_GreyScale.Default(false);
	HX_STACK_FRAME("flixel.util.FlxRandom","color",0x296f0f10,"flixel.util.FlxRandom.color","flixel/util/FlxRandom.hx",403,0xd3ba8ba3)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_ARG(GreyScale,"GreyScale")
{
		HX_STACK_LINE(404)
		if (((Min < (int)0))){
			HX_STACK_LINE(406)
			Min = (int)0;
		}
		HX_STACK_LINE(409)
		if (((Min > (int)255))){
			HX_STACK_LINE(411)
			Min = (int)255;
		}
		HX_STACK_LINE(414)
		if (((Max < (int)0))){
			HX_STACK_LINE(416)
			Max = (int)0;
		}
		HX_STACK_LINE(419)
		if (((Max > (int)255))){
			HX_STACK_LINE(421)
			Max = (int)255;
		}
		HX_STACK_LINE(424)
		if (((Alpha < (int)0))){
			HX_STACK_LINE(426)
			Alpha = (int)0;
		}
		HX_STACK_LINE(429)
		if (((Alpha > (int)255))){
			HX_STACK_LINE(431)
			Alpha = (int)255;
		}
		HX_STACK_LINE(436)
		if (((Max < Min))){
			HX_STACK_LINE(438)
			Min = (Min + Max);
			HX_STACK_LINE(439)
			Max = (Min - Max);
			HX_STACK_LINE(440)
			Min = (Min - Max);
		}
		HX_STACK_LINE(443)
		int _g = ::flixel::util::FlxRandom_obj::intRanged(Min,Max,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(443)
		::flixel::util::FlxRandom_obj::_red = _g;
		HX_STACK_LINE(444)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(444)
		if ((GreyScale)){
			HX_STACK_LINE(444)
			_g1 = ::flixel::util::FlxRandom_obj::_red;
		}
		else{
			HX_STACK_LINE(444)
			_g1 = ::flixel::util::FlxRandom_obj::intRanged(Min,Max,null());
		}
		HX_STACK_LINE(444)
		::flixel::util::FlxRandom_obj::_green = _g1;
		HX_STACK_LINE(445)
		int _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(445)
		if ((GreyScale)){
			HX_STACK_LINE(445)
			_g2 = ::flixel::util::FlxRandom_obj::_red;
		}
		else{
			HX_STACK_LINE(445)
			_g2 = ::flixel::util::FlxRandom_obj::intRanged(Min,Max,null());
		}
		HX_STACK_LINE(445)
		::flixel::util::FlxRandom_obj::_blue = _g2;
		HX_STACK_LINE(447)
		int _g3 = ::Std_obj::_int((  (((Alpha > (int)1))) ? Float(Alpha) : Float((Alpha * (int)255)) ));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(447)
		int _g4 = (int(_g3) & int((int)255));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(447)
		int _g5 = (int(_g4) << int((int)24));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(447)
		int _g6 = (int(_g5) | int((int(((int(::flixel::util::FlxRandom_obj::_red) & int((int)255)))) << int((int)16))));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(447)
		int _g7 = (int(_g6) | int((int(((int(::flixel::util::FlxRandom_obj::_green) & int((int)255)))) << int((int)8))));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(447)
		return (int(_g7) | int((int(::flixel::util::FlxRandom_obj::_blue) & int((int)255))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxRandom_obj,color,return )

int FlxRandom_obj::colorExt( hx::Null< int >  __o_RedMinimum,hx::Null< int >  __o_RedMaximum,hx::Null< int >  __o_GreenMinimum,hx::Null< int >  __o_GreenMaximum,hx::Null< int >  __o_BlueMinimum,hx::Null< int >  __o_BlueMaximum,hx::Null< int >  __o_AlphaMinimum,hx::Null< int >  __o_AlphaMaximum){
int RedMinimum = __o_RedMinimum.Default(0);
int RedMaximum = __o_RedMaximum.Default(255);
int GreenMinimum = __o_GreenMinimum.Default(0);
int GreenMaximum = __o_GreenMaximum.Default(255);
int BlueMinimum = __o_BlueMinimum.Default(0);
int BlueMaximum = __o_BlueMaximum.Default(255);
int AlphaMinimum = __o_AlphaMinimum.Default(-1);
int AlphaMaximum = __o_AlphaMaximum.Default(-1);
	HX_STACK_FRAME("flixel.util.FlxRandom","colorExt",0x1aec7f71,"flixel.util.FlxRandom.colorExt","flixel/util/FlxRandom.hx",464,0xd3ba8ba3)
	HX_STACK_ARG(RedMinimum,"RedMinimum")
	HX_STACK_ARG(RedMaximum,"RedMaximum")
	HX_STACK_ARG(GreenMinimum,"GreenMinimum")
	HX_STACK_ARG(GreenMaximum,"GreenMaximum")
	HX_STACK_ARG(BlueMinimum,"BlueMinimum")
	HX_STACK_ARG(BlueMaximum,"BlueMaximum")
	HX_STACK_ARG(AlphaMinimum,"AlphaMinimum")
	HX_STACK_ARG(AlphaMaximum,"AlphaMaximum")
{
		HX_STACK_LINE(465)
		if (((RedMinimum < (int)0))){
			HX_STACK_LINE(465)
			RedMinimum = (int)0;
		}
		HX_STACK_LINE(466)
		if (((RedMinimum > (int)255))){
			HX_STACK_LINE(466)
			RedMinimum = (int)255;
		}
		HX_STACK_LINE(467)
		if (((RedMaximum < (int)0))){
			HX_STACK_LINE(467)
			RedMaximum = (int)0;
		}
		HX_STACK_LINE(468)
		if (((RedMaximum > (int)255))){
			HX_STACK_LINE(468)
			RedMaximum = (int)255;
		}
		HX_STACK_LINE(469)
		if (((GreenMinimum < (int)0))){
			HX_STACK_LINE(469)
			GreenMinimum = (int)0;
		}
		HX_STACK_LINE(470)
		if (((GreenMinimum > (int)255))){
			HX_STACK_LINE(470)
			GreenMinimum = (int)255;
		}
		HX_STACK_LINE(471)
		if (((GreenMaximum < (int)0))){
			HX_STACK_LINE(471)
			GreenMaximum = (int)0;
		}
		HX_STACK_LINE(472)
		if (((GreenMaximum > (int)255))){
			HX_STACK_LINE(472)
			GreenMaximum = (int)255;
		}
		HX_STACK_LINE(473)
		if (((BlueMinimum < (int)0))){
			HX_STACK_LINE(473)
			BlueMinimum = (int)0;
		}
		HX_STACK_LINE(474)
		if (((BlueMinimum > (int)255))){
			HX_STACK_LINE(474)
			BlueMinimum = (int)255;
		}
		HX_STACK_LINE(475)
		if (((BlueMaximum < (int)0))){
			HX_STACK_LINE(475)
			BlueMaximum = (int)0;
		}
		HX_STACK_LINE(476)
		if (((BlueMaximum > (int)255))){
			HX_STACK_LINE(476)
			BlueMaximum = (int)255;
		}
		HX_STACK_LINE(477)
		if (((AlphaMinimum == (int)-1))){
			HX_STACK_LINE(477)
			AlphaMinimum = (int)255;
		}
		HX_STACK_LINE(478)
		if (((AlphaMaximum == (int)-1))){
			HX_STACK_LINE(478)
			AlphaMaximum = (int)255;
		}
		HX_STACK_LINE(479)
		if (((AlphaMinimum < (int)0))){
			HX_STACK_LINE(479)
			AlphaMinimum = (int)0;
		}
		HX_STACK_LINE(480)
		if (((AlphaMinimum > (int)255))){
			HX_STACK_LINE(480)
			AlphaMinimum = (int)255;
		}
		HX_STACK_LINE(481)
		if (((AlphaMaximum < (int)0))){
			HX_STACK_LINE(481)
			AlphaMaximum = (int)0;
		}
		HX_STACK_LINE(482)
		if (((AlphaMaximum > (int)255))){
			HX_STACK_LINE(482)
			AlphaMaximum = (int)255;
		}
		HX_STACK_LINE(484)
		int _g = ::flixel::util::FlxRandom_obj::intRanged(RedMinimum,RedMaximum,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(484)
		::flixel::util::FlxRandom_obj::_red = _g;
		HX_STACK_LINE(485)
		int _g1 = ::flixel::util::FlxRandom_obj::intRanged(GreenMinimum,GreenMaximum,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(485)
		::flixel::util::FlxRandom_obj::_green = _g1;
		HX_STACK_LINE(486)
		int _g2 = ::flixel::util::FlxRandom_obj::intRanged(BlueMinimum,BlueMaximum,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(486)
		::flixel::util::FlxRandom_obj::_blue = _g2;
		HX_STACK_LINE(487)
		int _g3 = ::flixel::util::FlxRandom_obj::intRanged(AlphaMinimum,AlphaMaximum,null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(487)
		::flixel::util::FlxRandom_obj::_alpha = _g3;
		HX_STACK_LINE(489)
		Float Alpha = ::flixel::util::FlxRandom_obj::_alpha;		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(489)
		int _g4 = ::Std_obj::_int((  (((Alpha > (int)1))) ? Float(Alpha) : Float((Alpha * (int)255)) ));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(489)
		int _g5 = (int(_g4) & int((int)255));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(489)
		int _g6 = (int(_g5) << int((int)24));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(489)
		int _g7 = (int(_g6) | int((int(((int(::flixel::util::FlxRandom_obj::_red) & int((int)255)))) << int((int)16))));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(489)
		int _g8 = (int(_g7) | int((int(((int(::flixel::util::FlxRandom_obj::_green) & int((int)255)))) << int((int)8))));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(489)
		return (int(_g8) | int((int(::flixel::util::FlxRandom_obj::_blue) & int((int)255))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxRandom_obj,colorExt,return )

int FlxRandom_obj::generate( ){
	HX_STACK_FRAME("flixel.util.FlxRandom","generate",0x6aa9cba8,"flixel.util.FlxRandom.generate","flixel/util/FlxRandom.hx",500,0xd3ba8ba3)
	HX_STACK_LINE(500)
	return ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,generate,return )


FlxRandom_obj::FlxRandom_obj()
{
}

Dynamic FlxRandom_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { return _int_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_red") ) { return _red; }
		if (HX_FIELD_EQ(inName,"sign") ) { return sign_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_blue") ) { return _blue; }
		if (HX_FIELD_EQ(inName,"float") ) { return _float_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { return color_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_green") ) { return _green; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { return _alpha; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"colorExt") ) { return colorExt_dyn(); }
		if (HX_FIELD_EQ(inName,"generate") ) { return generate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intRanged") ) { return intRanged_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"globalSeed") ) { return globalSeed; }
		if (HX_FIELD_EQ(inName,"_intHelper") ) { return _intHelper; }
		if (HX_FIELD_EQ(inName,"chanceRoll") ) { return chanceRoll_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_intHelper2") ) { return _intHelper2; }
		if (HX_FIELD_EQ(inName,"_intHelper3") ) { return _intHelper3; }
		if (HX_FIELD_EQ(inName,"floatRanged") ) { return floatRanged_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_floatHelper") ) { return _floatHelper; }
		if (HX_FIELD_EQ(inName,"weightedPick") ) { return weightedPick_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_internalSeed") ) { return _internalSeed; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_globalSeed") ) { return set_globalSeed_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"resetGlobalSeed") ) { return resetGlobalSeed_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_arrayFloatHelper") ) { return _arrayFloatHelper; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getObject_getRandom_T") ) { return getObject_getRandom_T_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"shuffleArray_shuffle_T") ) { return shuffleArray_shuffle_T_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxRandom_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_red") ) { _red=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_blue") ) { _blue=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_green") ) { _green=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"globalSeed") ) { if (inCallProp) return set_globalSeed(inValue);globalSeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_intHelper") ) { _intHelper=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_intHelper2") ) { _intHelper2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_intHelper3") ) { _intHelper3=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_floatHelper") ) { _floatHelper=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_internalSeed") ) { _internalSeed=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_arrayFloatHelper") ) { _arrayFloatHelper=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxRandom_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getObject_getRandom_T"),
	HX_CSTRING("shuffleArray_shuffle_T"),
	HX_CSTRING("globalSeed"),
	HX_CSTRING("set_globalSeed"),
	HX_CSTRING("_internalSeed"),
	HX_CSTRING("MULTIPLIER"),
	HX_CSTRING("MODULUS"),
	HX_CSTRING("_intHelper"),
	HX_CSTRING("_intHelper2"),
	HX_CSTRING("_intHelper3"),
	HX_CSTRING("_floatHelper"),
	HX_CSTRING("_arrayFloatHelper"),
	HX_CSTRING("_red"),
	HX_CSTRING("_green"),
	HX_CSTRING("_blue"),
	HX_CSTRING("_alpha"),
	HX_CSTRING("resetGlobalSeed"),
	HX_CSTRING("int"),
	HX_CSTRING("float"),
	HX_CSTRING("intRanged"),
	HX_CSTRING("floatRanged"),
	HX_CSTRING("chanceRoll"),
	HX_CSTRING("sign"),
	HX_CSTRING("weightedPick"),
	HX_CSTRING("color"),
	HX_CSTRING("colorExt"),
	HX_CSTRING("generate"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRandom_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::globalSeed,"globalSeed");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_internalSeed,"_internalSeed");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::MULTIPLIER,"MULTIPLIER");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::MODULUS,"MODULUS");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_intHelper,"_intHelper");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_intHelper2,"_intHelper2");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_intHelper3,"_intHelper3");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_floatHelper,"_floatHelper");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_arrayFloatHelper,"_arrayFloatHelper");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_red,"_red");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_green,"_green");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_blue,"_blue");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_alpha,"_alpha");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::globalSeed,"globalSeed");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_internalSeed,"_internalSeed");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::MULTIPLIER,"MULTIPLIER");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::MODULUS,"MODULUS");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_intHelper,"_intHelper");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_intHelper2,"_intHelper2");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_intHelper3,"_intHelper3");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_floatHelper,"_floatHelper");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_arrayFloatHelper,"_arrayFloatHelper");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_red,"_red");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_green,"_green");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_blue,"_blue");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_alpha,"_alpha");
};

#endif

Class FlxRandom_obj::__mClass;

void FlxRandom_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxRandom"), hx::TCanCast< FlxRandom_obj> ,sStaticFields,sMemberFields,
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

void FlxRandom_obj::__boot()
{
	globalSeed= (int)1;
	_internalSeed= (int)1;
	MULTIPLIER= (int)48271;
	MODULUS= (int)2147483647;
	_intHelper= (int)0;
	_intHelper2= (int)0;
	_intHelper3= (int)0;
	_floatHelper= (int)0;
	_arrayFloatHelper= null();
	_red= (int)0;
	_green= (int)0;
	_blue= (int)0;
	_alpha= (int)0;
}

} // end namespace flixel
} // end namespace util
