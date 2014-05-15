#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_util_FlxColorUtil
#include <flixel/util/FlxColorUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{

Void FlxColorUtil_obj::__construct()
{
	return null();
}

//FlxColorUtil_obj::~FlxColorUtil_obj() { }

Dynamic FlxColorUtil_obj::__CreateEmpty() { return  new FlxColorUtil_obj; }
hx::ObjectPtr< FlxColorUtil_obj > FlxColorUtil_obj::__new()
{  hx::ObjectPtr< FlxColorUtil_obj > result = new FlxColorUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxColorUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxColorUtil_obj > result = new FlxColorUtil_obj();
	result->__construct();
	return result;}

int FlxColorUtil_obj::makeFromARGB( hx::Null< Float >  __o_Alpha,int Red,int Green,int Blue){
Float Alpha = __o_Alpha.Default(1.0);
	HX_STACK_FRAME("flixel.util.FlxColorUtil","makeFromARGB",0xd89d5325,"flixel.util.FlxColorUtil.makeFromARGB","flixel/util/FlxColorUtil.hx",20,0x18d3ded1)
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_ARG(Red,"Red")
	HX_STACK_ARG(Green,"Green")
	HX_STACK_ARG(Blue,"Blue")
{
		HX_STACK_LINE(21)
		int _g = ::Std_obj::_int((  (((Alpha > (int)1))) ? Float(Alpha) : Float((Alpha * (int)255)) ));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(21)
		int _g1 = (int(_g) & int((int)255));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(21)
		int _g2 = (int(_g1) << int((int)24));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(21)
		int _g3 = (int(_g2) | int((int(((int(Red) & int((int)255)))) << int((int)16))));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(21)
		int _g4 = (int(_g3) | int((int(((int(Green) & int((int)255)))) << int((int)8))));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(21)
		return (int(_g4) | int((int(Blue) & int((int)255))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColorUtil_obj,makeFromARGB,return )

int FlxColorUtil_obj::makeFromHSBA( Float Hue,Float Saturation,Float Brightness,hx::Null< Float >  __o_Alpha){
Float Alpha = __o_Alpha.Default(1.0);
	HX_STACK_FRAME("flixel.util.FlxColorUtil","makeFromHSBA",0xdd3e8f63,"flixel.util.FlxColorUtil.makeFromHSBA","flixel/util/FlxColorUtil.hx",34,0x18d3ded1)
	HX_STACK_ARG(Hue,"Hue")
	HX_STACK_ARG(Saturation,"Saturation")
	HX_STACK_ARG(Brightness,"Brightness")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(35)
		Float red;		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(36)
		Float green;		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(37)
		Float blue;		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(39)
		if (((Saturation == 0.0))){
			HX_STACK_LINE(41)
			red = Brightness;
			HX_STACK_LINE(42)
			green = Brightness;
			HX_STACK_LINE(43)
			blue = Brightness;
		}
		else{
			HX_STACK_LINE(47)
			if (((Hue == (int)360))){
				HX_STACK_LINE(49)
				Hue = (int)0;
			}
			HX_STACK_LINE(52)
			int slice = ::Std_obj::_int((Float(Hue) / Float((int)60)));		HX_STACK_VAR(slice,"slice");
			HX_STACK_LINE(53)
			Float hf = ((Float(Hue) / Float((int)60)) - slice);		HX_STACK_VAR(hf,"hf");
			HX_STACK_LINE(54)
			Float aa = (Brightness * (((int)1 - Saturation)));		HX_STACK_VAR(aa,"aa");
			HX_STACK_LINE(55)
			Float bb = (Brightness * (((int)1 - (Saturation * hf))));		HX_STACK_VAR(bb,"bb");
			HX_STACK_LINE(56)
			Float cc = (Brightness * (((int)1 - (Saturation * ((1.0 - hf))))));		HX_STACK_VAR(cc,"cc");
			HX_STACK_LINE(58)
			switch( (int)(slice)){
				case (int)0: {
					HX_STACK_LINE(61)
					red = Brightness;
					HX_STACK_LINE(62)
					green = cc;
					HX_STACK_LINE(63)
					blue = aa;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(65)
					red = bb;
					HX_STACK_LINE(66)
					green = Brightness;
					HX_STACK_LINE(67)
					blue = aa;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(69)
					red = aa;
					HX_STACK_LINE(70)
					green = Brightness;
					HX_STACK_LINE(71)
					blue = cc;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(73)
					red = aa;
					HX_STACK_LINE(74)
					green = bb;
					HX_STACK_LINE(75)
					blue = Brightness;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(77)
					red = cc;
					HX_STACK_LINE(78)
					green = aa;
					HX_STACK_LINE(79)
					blue = Brightness;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(81)
					red = Brightness;
					HX_STACK_LINE(82)
					green = aa;
					HX_STACK_LINE(83)
					blue = bb;
				}
				;break;
				default: {
					HX_STACK_LINE(85)
					red = (int)0;
					HX_STACK_LINE(86)
					green = (int)0;
					HX_STACK_LINE(87)
					blue = (int)0;
				}
			}
		}
		HX_STACK_LINE(91)
		int _g = ::Std_obj::_int((  (((Alpha > (int)1))) ? Float(Alpha) : Float((Alpha * (int)255)) ));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(91)
		int _g1 = (int(_g) & int((int)255));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(91)
		int _g2 = (int(_g1) << int((int)24));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(91)
		int _g3 = ::Std_obj::_int((red * (int)255));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(91)
		int _g4 = (int(_g3) << int((int)16));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(91)
		int _g5 = (int(_g2) | int(_g4));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(91)
		int _g6 = ::Std_obj::_int((green * (int)255));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(91)
		int _g7 = (int(_g6) << int((int)8));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(91)
		int _g8 = (int(_g5) | int(_g7));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(91)
		int _g9 = ::Std_obj::_int((blue * (int)255));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(91)
		return (int(_g8) | int(_g9));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColorUtil_obj,makeFromHSBA,return )

Dynamic FlxColorUtil_obj::getARGB( int Color,Dynamic Results){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getARGB",0xf9594d21,"flixel.util.FlxColorUtil.getARGB","flixel/util/FlxColorUtil.hx",103,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Results,"Results")
	HX_STACK_LINE(104)
	int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
	HX_STACK_LINE(105)
	int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
	HX_STACK_LINE(106)
	int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
	HX_STACK_LINE(107)
	Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
	HX_STACK_LINE(109)
	if (((Results != null()))){
		struct _Function_2_1{
			inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",110,0x18d3ded1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("red") , red,false);
					__result->Add(HX_CSTRING("green") , green,false);
					__result->Add(HX_CSTRING("blue") , blue,false);
					__result->Add(HX_CSTRING("alpha") , alpha,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(110)
		Results = _Function_2_1::Block(red,green,blue,alpha);
	}
	struct _Function_1_1{
		inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",113,0x18d3ded1)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("red") , red,false);
				__result->Add(HX_CSTRING("green") , green,false);
				__result->Add(HX_CSTRING("blue") , blue,false);
				__result->Add(HX_CSTRING("alpha") , alpha,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(113)
	return _Function_1_1::Block(red,green,blue,alpha);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,getARGB,return )

Dynamic FlxColorUtil_obj::getHSBA( int Color,Dynamic Results){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getHSBA",0xfdfa895f,"flixel.util.FlxColorUtil.getHSBA","flixel/util/FlxColorUtil.hx",126,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Results,"Results")
	HX_STACK_LINE(127)
	Float hue;		HX_STACK_VAR(hue,"hue");
	HX_STACK_LINE(128)
	Float saturation;		HX_STACK_VAR(saturation,"saturation");
	HX_STACK_LINE(129)
	Float brightness;		HX_STACK_VAR(brightness,"brightness");
	HX_STACK_LINE(130)
	Float alpha;		HX_STACK_VAR(alpha,"alpha");
	HX_STACK_LINE(132)
	Float red = (Float(((int((int(Color) >> int((int)16))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(red,"red");
	HX_STACK_LINE(133)
	Float green = (Float(((int((int(Color) >> int((int)8))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(green,"green");
	HX_STACK_LINE(134)
	Float blue = (Float(((int(Color) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(blue,"blue");
	HX_STACK_LINE(136)
	Float m;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(136)
	if (((red > green))){
		HX_STACK_LINE(136)
		m = red;
	}
	else{
		HX_STACK_LINE(136)
		m = green;
	}
	HX_STACK_LINE(137)
	Float dmax;		HX_STACK_VAR(dmax,"dmax");
	HX_STACK_LINE(137)
	if (((m > blue))){
		HX_STACK_LINE(137)
		dmax = m;
	}
	else{
		HX_STACK_LINE(137)
		dmax = blue;
	}
	HX_STACK_LINE(138)
	if (((red > green))){
		HX_STACK_LINE(138)
		m = green;
	}
	else{
		HX_STACK_LINE(138)
		m = red;
	}
	HX_STACK_LINE(139)
	Float dmin;		HX_STACK_VAR(dmin,"dmin");
	HX_STACK_LINE(139)
	if (((m > blue))){
		HX_STACK_LINE(139)
		dmin = blue;
	}
	else{
		HX_STACK_LINE(139)
		dmin = m;
	}
	HX_STACK_LINE(140)
	Float range = (dmax - dmin);		HX_STACK_VAR(range,"range");
	HX_STACK_LINE(142)
	Float _g = ::flixel::util::FlxMath_obj::roundDecimal(dmax,(int)4);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(142)
	brightness = _g;
	HX_STACK_LINE(143)
	saturation = (int)0;
	HX_STACK_LINE(144)
	hue = (int)0;
	HX_STACK_LINE(146)
	if (((dmax != (int)0))){
		HX_STACK_LINE(148)
		Float _g1 = ::flixel::util::FlxMath_obj::roundDecimal((Float(range) / Float(dmax)),(int)4);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(148)
		saturation = _g1;
	}
	HX_STACK_LINE(150)
	if (((saturation != (int)0))){
		HX_STACK_LINE(152)
		if (((red == dmax))){
			HX_STACK_LINE(154)
			hue = (Float(((green - blue))) / Float(range));
		}
		else{
			HX_STACK_LINE(156)
			if (((green == dmax))){
				HX_STACK_LINE(158)
				hue = ((int)2 + (Float(((blue - red))) / Float(range)));
			}
			else{
				HX_STACK_LINE(160)
				if (((blue == dmax))){
					HX_STACK_LINE(162)
					hue = ((int)4 + (Float(((red - green))) / Float(range)));
				}
			}
		}
		HX_STACK_LINE(164)
		hx::MultEq(hue,(int)60);
		HX_STACK_LINE(165)
		if (((hue < (int)0))){
			HX_STACK_LINE(167)
			hx::AddEq(hue,(int)360);
		}
	}
	HX_STACK_LINE(171)
	Float _g2 = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(171)
	alpha = _g2;
	HX_STACK_LINE(173)
	if (((Results != null()))){
		HX_STACK_LINE(174)
		int _g3 = ::Std_obj::_int(hue);		HX_STACK_VAR(_g3,"_g3");
		struct _Function_2_1{
			inline static Dynamic Block( Float &brightness,int &_g3,Float &saturation,Float &alpha){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",174,0x18d3ded1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("hue") , _g3,false);
					__result->Add(HX_CSTRING("brightness") , brightness,false);
					__result->Add(HX_CSTRING("saturation") , saturation,false);
					__result->Add(HX_CSTRING("alpha") , alpha,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(174)
		Dynamic _g4 = _Function_2_1::Block(brightness,_g3,saturation,alpha);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(174)
		Results = _g4;
	}
	HX_STACK_LINE(176)
	int _g5 = ::Std_obj::_int(hue);		HX_STACK_VAR(_g5,"_g5");
	struct _Function_1_1{
		inline static Dynamic Block( Float &brightness,int &_g5,Float &saturation,Float &alpha){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",176,0x18d3ded1)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("hue") , _g5,false);
				__result->Add(HX_CSTRING("brightness") , brightness,false);
				__result->Add(HX_CSTRING("saturation") , saturation,false);
				__result->Add(HX_CSTRING("alpha") , alpha,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(176)
	return _Function_1_1::Block(brightness,_g5,saturation,alpha);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,getHSBA,return )

int FlxColorUtil_obj::getAlpha( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getAlpha",0x4618f9c9,"flixel.util.FlxColorUtil.getAlpha","flixel/util/FlxColorUtil.hx",187,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(187)
	return (int((int(Color) >> int((int)24))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getAlpha,return )

Float FlxColorUtil_obj::getAlphaFloat( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getAlphaFloat",0x73402313,"flixel.util.FlxColorUtil.getAlphaFloat","flixel/util/FlxColorUtil.hx",197,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(198)
	int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(199)
	return (Float(f) / Float((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getAlphaFloat,return )

int FlxColorUtil_obj::getRed( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getRed",0x50612afc,"flixel.util.FlxColorUtil.getRed","flixel/util/FlxColorUtil.hx",210,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(210)
	return (int((int(Color) >> int((int)16))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getRed,return )

int FlxColorUtil_obj::getGreen( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getGreen",0xbe6f612e,"flixel.util.FlxColorUtil.getGreen","flixel/util/FlxColorUtil.hx",221,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(221)
	return (int((int(Color) >> int((int)8))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getGreen,return )

int FlxColorUtil_obj::getBlue( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getBlue",0xfa16668f,"flixel.util.FlxColorUtil.getBlue","flixel/util/FlxColorUtil.hx",232,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(232)
	return (int(Color) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getBlue,return )

int FlxColorUtil_obj::getRandomColor( hx::Null< int >  __o_Min,hx::Null< int >  __o_Max,hx::Null< int >  __o_Alpha){
int Min = __o_Min.Default(0);
int Max = __o_Max.Default(255);
int Alpha = __o_Alpha.Default(255);
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getRandomColor",0x6876090b,"flixel.util.FlxColorUtil.getRandomColor","flixel/util/FlxColorUtil.hx",246,0x18d3ded1)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(246)
		return ::flixel::util::FlxRandom_obj::color(Min,Max,Alpha,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxColorUtil_obj,getRandomColor,return )

int FlxColorUtil_obj::getColor32( int Alpha,int Red,int Green,int Blue){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getColor32",0xf6f1ffed,"flixel.util.FlxColorUtil.getColor32","flixel/util/FlxColorUtil.hx",260,0x18d3ded1)
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_ARG(Red,"Red")
	HX_STACK_ARG(Green,"Green")
	HX_STACK_ARG(Blue,"Blue")
	HX_STACK_LINE(260)
	return (int((int((int((int(Alpha) << int((int)24))) | int((int(Red) << int((int)16))))) | int((int(Green) << int((int)8))))) | int(Blue));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColorUtil_obj,getColor32,return )

int FlxColorUtil_obj::getColor24( int Red,int Green,int Blue){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getColor24",0xf6f1ff10,"flixel.util.FlxColorUtil.getColor24","flixel/util/FlxColorUtil.hx",273,0x18d3ded1)
	HX_STACK_ARG(Red,"Red")
	HX_STACK_ARG(Green,"Green")
	HX_STACK_ARG(Blue,"Blue")
	HX_STACK_LINE(273)
	return (int((int((int(Red) << int((int)16))) | int((int(Green) << int((int)8))))) | int(Blue));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxColorUtil_obj,getColor24,return )

Array< int > FlxColorUtil_obj::getHSVColorWheel( hx::Null< int >  __o_Alpha){
int Alpha = __o_Alpha.Default(255);
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getHSVColorWheel",0xcbde148e,"flixel.util.FlxColorUtil.getHSVColorWheel","flixel/util/FlxColorUtil.hx",283,0x18d3ded1)
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(284)
		Array< int > colors = Array_obj< int >::__new();		HX_STACK_VAR(colors,"colors");
		HX_STACK_LINE(286)
		{
			HX_STACK_LINE(286)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(286)
			while((true)){
				HX_STACK_LINE(286)
				if ((!(((_g < (int)360))))){
					HX_STACK_LINE(286)
					break;
				}
				HX_STACK_LINE(286)
				int c = (_g)++;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(288)
				colors[c] = ::flixel::util::FlxColorUtil_obj::HSVtoARGB(c,1.0,1.0,Alpha);
			}
		}
		HX_STACK_LINE(291)
		return colors;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getHSVColorWheel,return )

int FlxColorUtil_obj::getComplementHarmony( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getComplementHarmony",0x5b6ab0ab,"flixel.util.FlxColorUtil.getComplementHarmony","flixel/util/FlxColorUtil.hx",303,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(304)
	Dynamic hsv = ::flixel::util::FlxColorUtil_obj::RGBtoHSV(Color);		HX_STACK_VAR(hsv,"hsv");
	HX_STACK_LINE(305)
	int _g = ::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(305)
	int opposite = ::flixel::util::FlxMath_obj::wrapValue(_g,(int)180,(int)359);		HX_STACK_VAR(opposite,"opposite");
	HX_STACK_LINE(307)
	return ::flixel::util::FlxColorUtil_obj::HSVtoARGB(opposite,1.0,1.0,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getComplementHarmony,return )

Dynamic FlxColorUtil_obj::getAnalogousHarmony( int Color,hx::Null< int >  __o_Threshold){
int Threshold = __o_Threshold.Default(30);
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getAnalogousHarmony",0xbd99d09e,"flixel.util.FlxColorUtil.getAnalogousHarmony","flixel/util/FlxColorUtil.hx",320,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Threshold,"Threshold")
{
		HX_STACK_LINE(321)
		Dynamic hsv = ::flixel::util::FlxColorUtil_obj::RGBtoHSV(Color);		HX_STACK_VAR(hsv,"hsv");
		HX_STACK_LINE(323)
		if (((bool((Threshold > (int)359)) || bool((Threshold < (int)0))))){
			HX_STACK_LINE(325)
			Dynamic();
		}
		HX_STACK_LINE(328)
		int _g = ::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(328)
		int warmer = ::flixel::util::FlxMath_obj::wrapValue(_g,((int)359 - Threshold),(int)359);		HX_STACK_VAR(warmer,"warmer");
		HX_STACK_LINE(329)
		int _g1 = ::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(329)
		int colder = ::flixel::util::FlxMath_obj::wrapValue(_g1,Threshold,(int)359);		HX_STACK_VAR(colder,"colder");
		HX_STACK_LINE(331)
		int _g2 = ::flixel::util::FlxColorUtil_obj::HSVtoARGB(warmer,1.0,1.0,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(331)
		int _g3 = ::flixel::util::FlxColorUtil_obj::HSVtoARGB(colder,1.0,1.0,null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(331)
		int _g4 = ::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true));		HX_STACK_VAR(_g4,"_g4");
		struct _Function_1_1{
			inline static Dynamic Block( int &warmer,int &Color,int &_g4,int &_g2,int &_g3,int &colder){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",331,0x18d3ded1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("color1") , Color,false);
					__result->Add(HX_CSTRING("color2") , _g2,false);
					__result->Add(HX_CSTRING("color3") , _g3,false);
					__result->Add(HX_CSTRING("hue1") , _g4,false);
					__result->Add(HX_CSTRING("hue2") , warmer,false);
					__result->Add(HX_CSTRING("hue3") , colder,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(331)
		return _Function_1_1::Block(warmer,Color,_g4,_g2,_g3,colder);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,getAnalogousHarmony,return )

Dynamic FlxColorUtil_obj::getSplitComplementHarmony( int Color,hx::Null< int >  __o_Threshold){
int Threshold = __o_Threshold.Default(30);
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getSplitComplementHarmony",0xad902ebb,"flixel.util.FlxColorUtil.getSplitComplementHarmony","flixel/util/FlxColorUtil.hx",344,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Threshold,"Threshold")
{
		HX_STACK_LINE(345)
		Dynamic hsv = ::flixel::util::FlxColorUtil_obj::RGBtoHSV(Color);		HX_STACK_VAR(hsv,"hsv");
		HX_STACK_LINE(347)
		if (((bool((Threshold >= (int)359)) || bool((Threshold <= (int)0))))){
			HX_STACK_LINE(349)
			Dynamic();
		}
		HX_STACK_LINE(352)
		int _g = ::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(352)
		int opposite = ::flixel::util::FlxMath_obj::wrapValue(_g,(int)180,(int)359);		HX_STACK_VAR(opposite,"opposite");
		HX_STACK_LINE(354)
		int _g1 = ::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(354)
		int warmer = ::flixel::util::FlxMath_obj::wrapValue(_g1,(opposite - Threshold),(int)359);		HX_STACK_VAR(warmer,"warmer");
		HX_STACK_LINE(355)
		int _g2 = ::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(355)
		int colder = ::flixel::util::FlxMath_obj::wrapValue(_g2,(opposite + Threshold),(int)359);		HX_STACK_VAR(colder,"colder");
		HX_STACK_LINE(359)
		int _g3 = ::flixel::util::FlxColorUtil_obj::HSVtoARGB(warmer,hsv->__Field(HX_CSTRING("saturation"),true),hsv->__Field(HX_CSTRING("value"),true),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(359)
		int _g4 = ::flixel::util::FlxColorUtil_obj::HSVtoARGB(colder,hsv->__Field(HX_CSTRING("saturation"),true),hsv->__Field(HX_CSTRING("value"),true),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(359)
		int _g5 = ::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true));		HX_STACK_VAR(_g5,"_g5");
		struct _Function_1_1{
			inline static Dynamic Block( int &_g5,int &warmer,int &Color,int &_g4,int &_g3,int &colder){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",359,0x18d3ded1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("color1") , Color,false);
					__result->Add(HX_CSTRING("color2") , _g3,false);
					__result->Add(HX_CSTRING("color3") , _g4,false);
					__result->Add(HX_CSTRING("hue1") , _g5,false);
					__result->Add(HX_CSTRING("hue2") , warmer,false);
					__result->Add(HX_CSTRING("hue3") , colder,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(359)
		return _Function_1_1::Block(_g5,warmer,Color,_g4,_g3,colder);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,getSplitComplementHarmony,return )

Dynamic FlxColorUtil_obj::getTriadicHarmony( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getTriadicHarmony",0xae2336f3,"flixel.util.FlxColorUtil.getTriadicHarmony","flixel/util/FlxColorUtil.hx",370,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(371)
	Dynamic hsv = ::flixel::util::FlxColorUtil_obj::RGBtoHSV(Color);		HX_STACK_VAR(hsv,"hsv");
	HX_STACK_LINE(373)
	int _g = ::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(373)
	int triadic1 = ::flixel::util::FlxMath_obj::wrapValue(_g,(int)120,(int)359);		HX_STACK_VAR(triadic1,"triadic1");
	HX_STACK_LINE(374)
	int triadic2 = ::flixel::util::FlxMath_obj::wrapValue(triadic1,(int)120,(int)359);		HX_STACK_VAR(triadic2,"triadic2");
	HX_STACK_LINE(376)
	int _g1 = ::flixel::util::FlxColorUtil_obj::HSVtoARGB(triadic1,1.0,1.0,null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(376)
	int _g2 = ::flixel::util::FlxColorUtil_obj::HSVtoARGB(triadic2,1.0,1.0,null());		HX_STACK_VAR(_g2,"_g2");
	struct _Function_1_1{
		inline static Dynamic Block( int &_g1,int &Color,int &_g2){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",376,0x18d3ded1)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("color1") , Color,false);
				__result->Add(HX_CSTRING("color2") , _g1,false);
				__result->Add(HX_CSTRING("color3") , _g2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(376)
	return _Function_1_1::Block(_g1,Color,_g2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getTriadicHarmony,return )

::String FlxColorUtil_obj::getColorInfo( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getColorInfo",0x261c275c,"flixel.util.FlxColorUtil.getColorInfo","flixel/util/FlxColorUtil.hx",387,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(388)
	Dynamic argb;		HX_STACK_VAR(argb,"argb");
	HX_STACK_LINE(388)
	{
		HX_STACK_LINE(388)
		Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
		HX_STACK_LINE(388)
		int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(388)
		int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(388)
		int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(388)
		Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(388)
		if (((Results != null()))){
			struct _Function_3_1{
				inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",388,0x18d3ded1)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("red") , red,false);
						__result->Add(HX_CSTRING("green") , green,false);
						__result->Add(HX_CSTRING("blue") , blue,false);
						__result->Add(HX_CSTRING("alpha") , alpha,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(388)
			Results = _Function_3_1::Block(red,green,blue,alpha);
		}
		struct _Function_2_1{
			inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",388,0x18d3ded1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("red") , red,false);
					__result->Add(HX_CSTRING("green") , green,false);
					__result->Add(HX_CSTRING("blue") , blue,false);
					__result->Add(HX_CSTRING("alpha") , alpha,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(388)
		argb = _Function_2_1::Block(red,green,blue,alpha);
	}
	HX_STACK_LINE(389)
	Dynamic hsl = ::flixel::util::FlxColorUtil_obj::RGBtoHSV(Color);		HX_STACK_VAR(hsl,"hsl");
	HX_STACK_LINE(392)
	::String _g23;		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(392)
	{
		HX_STACK_LINE(392)
		Dynamic argb1;		HX_STACK_VAR(argb1,"argb1");
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
			HX_STACK_LINE(392)
			int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
			HX_STACK_LINE(392)
			int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
			HX_STACK_LINE(392)
			int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
			HX_STACK_LINE(392)
			Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(392)
			if (((Results != null()))){
				struct _Function_4_1{
					inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",392,0x18d3ded1)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("red") , red,false);
							__result->Add(HX_CSTRING("green") , green,false);
							__result->Add(HX_CSTRING("blue") , blue,false);
							__result->Add(HX_CSTRING("alpha") , alpha,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(392)
				Results = _Function_4_1::Block(red,green,blue,alpha);
			}
			struct _Function_3_1{
				inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",392,0x18d3ded1)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("red") , red,false);
						__result->Add(HX_CSTRING("green") , green,false);
						__result->Add(HX_CSTRING("blue") , blue,false);
						__result->Add(HX_CSTRING("alpha") , alpha,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(392)
			argb1 = _Function_3_1::Block(red,green,blue,alpha);
		}
		HX_STACK_LINE(392)
		::String _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			int Color1 = ::Std_obj::_int(argb1->__Field(HX_CSTRING("alpha"),true));		HX_STACK_VAR(Color1,"Color1");
			HX_STACK_LINE(392)
			::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
			HX_STACK_LINE(392)
			Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
			HX_STACK_LINE(392)
			Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
			HX_STACK_LINE(392)
			int _g = ::Std_obj::_int(msd);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(392)
			::String _g1 = digits.charAt(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(392)
			int _g2 = ::Std_obj::_int(lsd);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(392)
			::String _g3 = digits.charAt(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(392)
			_g4 = (_g1 + _g3);
		}
		HX_STACK_LINE(392)
		::String _g5 = (HX_CSTRING("0x") + _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(392)
		::String _g10;		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			int Color1 = argb1->__Field(HX_CSTRING("red"),true);		HX_STACK_VAR(Color1,"Color1");
			HX_STACK_LINE(392)
			::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
			HX_STACK_LINE(392)
			Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
			HX_STACK_LINE(392)
			Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
			HX_STACK_LINE(392)
			int _g6 = ::Std_obj::_int(msd);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(392)
			::String _g7 = digits.charAt(_g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(392)
			int _g8 = ::Std_obj::_int(lsd);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(392)
			::String _g9 = digits.charAt(_g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(392)
			_g10 = (_g7 + _g9);
		}
		HX_STACK_LINE(392)
		::String _g11 = (_g5 + _g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(392)
		::String _g16;		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			int Color1 = argb1->__Field(HX_CSTRING("green"),true);		HX_STACK_VAR(Color1,"Color1");
			HX_STACK_LINE(392)
			::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
			HX_STACK_LINE(392)
			Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
			HX_STACK_LINE(392)
			Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
			HX_STACK_LINE(392)
			int _g12 = ::Std_obj::_int(msd);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(392)
			::String _g13 = digits.charAt(_g12);		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(392)
			int _g14 = ::Std_obj::_int(lsd);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(392)
			::String _g15 = digits.charAt(_g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(392)
			_g16 = (_g13 + _g15);
		}
		HX_STACK_LINE(392)
		::String _g17 = (_g11 + _g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(392)
		::String _g22;		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			int Color1 = argb1->__Field(HX_CSTRING("blue"),true);		HX_STACK_VAR(Color1,"Color1");
			HX_STACK_LINE(392)
			::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
			HX_STACK_LINE(392)
			Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
			HX_STACK_LINE(392)
			Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
			HX_STACK_LINE(392)
			int _g18 = ::Std_obj::_int(msd);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(392)
			::String _g19 = digits.charAt(_g18);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(392)
			int _g20 = ::Std_obj::_int(lsd);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(392)
			::String _g21 = digits.charAt(_g20);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(392)
			_g22 = (_g19 + _g21);
		}
		HX_STACK_LINE(392)
		_g23 = (_g17 + _g22);
	}
	HX_STACK_LINE(392)
	::String result = (_g23 + HX_CSTRING("\n"));		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(395)
	hx::AddEq(result,((((((((HX_CSTRING("Alpha: ") + argb->__Field(HX_CSTRING("alpha"),true)) + HX_CSTRING(" Red: ")) + argb->__Field(HX_CSTRING("red"),true)) + HX_CSTRING(" Green: ")) + argb->__Field(HX_CSTRING("green"),true)) + HX_CSTRING(" Blue: ")) + argb->__Field(HX_CSTRING("blue"),true)) + HX_CSTRING("\n")));
	HX_STACK_LINE(398)
	hx::AddEq(result,(((((HX_CSTRING("Hue: ") + hsl->__Field(HX_CSTRING("hue"),true)) + HX_CSTRING(" Saturation: ")) + hsl->__Field(HX_CSTRING("saturation"),true)) + HX_CSTRING(" Lightnes: ")) + hsl->__Field(HX_CSTRING("lightness"),true)));
	HX_STACK_LINE(400)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getColorInfo,return )

::String FlxColorUtil_obj::ARGBtoHexString( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","ARGBtoHexString",0x26500a84,"flixel.util.FlxColorUtil.ARGBtoHexString","flixel/util/FlxColorUtil.hx",410,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(411)
	Dynamic argb;		HX_STACK_VAR(argb,"argb");
	HX_STACK_LINE(411)
	{
		HX_STACK_LINE(411)
		Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
		HX_STACK_LINE(411)
		int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(411)
		int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(411)
		int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(411)
		Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(411)
		if (((Results != null()))){
			struct _Function_3_1{
				inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",411,0x18d3ded1)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("red") , red,false);
						__result->Add(HX_CSTRING("green") , green,false);
						__result->Add(HX_CSTRING("blue") , blue,false);
						__result->Add(HX_CSTRING("alpha") , alpha,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(411)
			Results = _Function_3_1::Block(red,green,blue,alpha);
		}
		struct _Function_2_1{
			inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",411,0x18d3ded1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("red") , red,false);
					__result->Add(HX_CSTRING("green") , green,false);
					__result->Add(HX_CSTRING("blue") , blue,false);
					__result->Add(HX_CSTRING("alpha") , alpha,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(411)
		argb = _Function_2_1::Block(red,green,blue,alpha);
	}
	HX_STACK_LINE(412)
	::String _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(412)
	{
		HX_STACK_LINE(412)
		int Color1 = ::Std_obj::_int(argb->__Field(HX_CSTRING("alpha"),true));		HX_STACK_VAR(Color1,"Color1");
		HX_STACK_LINE(412)
		::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
		HX_STACK_LINE(412)
		Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
		HX_STACK_LINE(412)
		Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
		HX_STACK_LINE(412)
		int _g = ::Std_obj::_int(msd);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(412)
		::String _g1 = digits.charAt(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(412)
		int _g2 = ::Std_obj::_int(lsd);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(412)
		::String _g3 = digits.charAt(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(412)
		_g4 = (_g1 + _g3);
	}
	HX_STACK_LINE(412)
	::String _g5 = (HX_CSTRING("0x") + _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(412)
	::String _g10;		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(412)
	{
		HX_STACK_LINE(412)
		int Color1 = argb->__Field(HX_CSTRING("red"),true);		HX_STACK_VAR(Color1,"Color1");
		HX_STACK_LINE(412)
		::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
		HX_STACK_LINE(412)
		Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
		HX_STACK_LINE(412)
		Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
		HX_STACK_LINE(412)
		int _g6 = ::Std_obj::_int(msd);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(412)
		::String _g7 = digits.charAt(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(412)
		int _g8 = ::Std_obj::_int(lsd);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(412)
		::String _g9 = digits.charAt(_g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(412)
		_g10 = (_g7 + _g9);
	}
	HX_STACK_LINE(412)
	::String _g11 = (_g5 + _g10);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(412)
	::String _g16;		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(412)
	{
		HX_STACK_LINE(412)
		int Color1 = argb->__Field(HX_CSTRING("green"),true);		HX_STACK_VAR(Color1,"Color1");
		HX_STACK_LINE(412)
		::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
		HX_STACK_LINE(412)
		Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
		HX_STACK_LINE(412)
		Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
		HX_STACK_LINE(412)
		int _g12 = ::Std_obj::_int(msd);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(412)
		::String _g13 = digits.charAt(_g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(412)
		int _g14 = ::Std_obj::_int(lsd);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(412)
		::String _g15 = digits.charAt(_g14);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(412)
		_g16 = (_g13 + _g15);
	}
	HX_STACK_LINE(412)
	::String _g17 = (_g11 + _g16);		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(412)
	::String _g22;		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(412)
	{
		HX_STACK_LINE(412)
		int Color1 = argb->__Field(HX_CSTRING("blue"),true);		HX_STACK_VAR(Color1,"Color1");
		HX_STACK_LINE(412)
		::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
		HX_STACK_LINE(412)
		Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
		HX_STACK_LINE(412)
		Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
		HX_STACK_LINE(412)
		int _g18 = ::Std_obj::_int(msd);		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(412)
		::String _g19 = digits.charAt(_g18);		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(412)
		int _g20 = ::Std_obj::_int(lsd);		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(412)
		::String _g21 = digits.charAt(_g20);		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(412)
		_g22 = (_g19 + _g21);
	}
	HX_STACK_LINE(412)
	return (_g17 + _g22);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,ARGBtoHexString,return )

::String FlxColorUtil_obj::ARGBtoWebString( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","ARGBtoWebString",0xef9cfcfd,"flixel.util.FlxColorUtil.ARGBtoWebString","flixel/util/FlxColorUtil.hx",422,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(423)
	Dynamic argb;		HX_STACK_VAR(argb,"argb");
	HX_STACK_LINE(423)
	{
		HX_STACK_LINE(423)
		Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
		HX_STACK_LINE(423)
		int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(423)
		int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(423)
		int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(423)
		Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(423)
		if (((Results != null()))){
			struct _Function_3_1{
				inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",423,0x18d3ded1)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("red") , red,false);
						__result->Add(HX_CSTRING("green") , green,false);
						__result->Add(HX_CSTRING("blue") , blue,false);
						__result->Add(HX_CSTRING("alpha") , alpha,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(423)
			Results = _Function_3_1::Block(red,green,blue,alpha);
		}
		struct _Function_2_1{
			inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",423,0x18d3ded1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("red") , red,false);
					__result->Add(HX_CSTRING("green") , green,false);
					__result->Add(HX_CSTRING("blue") , blue,false);
					__result->Add(HX_CSTRING("alpha") , alpha,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(423)
		argb = _Function_2_1::Block(red,green,blue,alpha);
	}
	HX_STACK_LINE(424)
	::String _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(424)
	{
		HX_STACK_LINE(424)
		int Color1 = argb->__Field(HX_CSTRING("red"),true);		HX_STACK_VAR(Color1,"Color1");
		HX_STACK_LINE(424)
		::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
		HX_STACK_LINE(424)
		Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
		HX_STACK_LINE(424)
		Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
		HX_STACK_LINE(424)
		int _g = ::Std_obj::_int(msd);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(424)
		::String _g1 = digits.charAt(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(424)
		int _g2 = ::Std_obj::_int(lsd);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(424)
		::String _g3 = digits.charAt(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(424)
		_g4 = (_g1 + _g3);
	}
	HX_STACK_LINE(424)
	::String _g5 = (HX_CSTRING("#") + _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(424)
	::String _g10;		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(424)
	{
		HX_STACK_LINE(424)
		int Color1 = argb->__Field(HX_CSTRING("green"),true);		HX_STACK_VAR(Color1,"Color1");
		HX_STACK_LINE(424)
		::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
		HX_STACK_LINE(424)
		Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
		HX_STACK_LINE(424)
		Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
		HX_STACK_LINE(424)
		int _g6 = ::Std_obj::_int(msd);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(424)
		::String _g7 = digits.charAt(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(424)
		int _g8 = ::Std_obj::_int(lsd);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(424)
		::String _g9 = digits.charAt(_g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(424)
		_g10 = (_g7 + _g9);
	}
	HX_STACK_LINE(424)
	::String _g11 = (_g5 + _g10);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(424)
	::String _g16;		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(424)
	{
		HX_STACK_LINE(424)
		int Color1 = argb->__Field(HX_CSTRING("blue"),true);		HX_STACK_VAR(Color1,"Color1");
		HX_STACK_LINE(424)
		::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
		HX_STACK_LINE(424)
		Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
		HX_STACK_LINE(424)
		Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
		HX_STACK_LINE(424)
		int _g12 = ::Std_obj::_int(msd);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(424)
		::String _g13 = digits.charAt(_g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(424)
		int _g14 = ::Std_obj::_int(lsd);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(424)
		::String _g15 = digits.charAt(_g14);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(424)
		_g16 = (_g13 + _g15);
	}
	HX_STACK_LINE(424)
	return (_g11 + _g16);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,ARGBtoWebString,return )

::String FlxColorUtil_obj::colorToHexString( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","colorToHexString",0x245f204f,"flixel.util.FlxColorUtil.colorToHexString","flixel/util/FlxColorUtil.hx",434,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(435)
	::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
	HX_STACK_LINE(437)
	Float lsd = hx::Mod(Color,(int)16);		HX_STACK_VAR(lsd,"lsd");
	HX_STACK_LINE(438)
	Float msd = (Float(((Color - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
	HX_STACK_LINE(440)
	int _g = ::Std_obj::_int(msd);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(440)
	::String _g1 = digits.charAt(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(440)
	int _g2 = ::Std_obj::_int(lsd);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(440)
	::String _g3 = digits.charAt(_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(440)
	return (_g1 + _g3);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,colorToHexString,return )

int FlxColorUtil_obj::HSVtoARGB( Float H,Float S,Float V,hx::Null< int >  __o_Alpha){
int Alpha = __o_Alpha.Default(255);
	HX_STACK_FRAME("flixel.util.FlxColorUtil","HSVtoARGB",0x9ebb4371,"flixel.util.FlxColorUtil.HSVtoARGB","flixel/util/FlxColorUtil.hx",453,0x18d3ded1)
	HX_STACK_ARG(H,"H")
	HX_STACK_ARG(S,"S")
	HX_STACK_ARG(V,"V")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(454)
		int result = (int)0;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(456)
		if (((S == 0.0))){
			HX_STACK_LINE(458)
			int _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(458)
			{
				HX_STACK_LINE(458)
				int Red = ::Std_obj::_int((V * (int)255));		HX_STACK_VAR(Red,"Red");
				HX_STACK_LINE(458)
				int Green = ::Std_obj::_int((V * (int)255));		HX_STACK_VAR(Green,"Green");
				HX_STACK_LINE(458)
				int Blue = ::Std_obj::_int((V * (int)255));		HX_STACK_VAR(Blue,"Blue");
				HX_STACK_LINE(458)
				_g = (int((int((int((int(Alpha) << int((int)24))) | int((int(Red) << int((int)16))))) | int((int(Green) << int((int)8))))) | int(Blue));
			}
			HX_STACK_LINE(458)
			result = _g;
		}
		else{
			HX_STACK_LINE(462)
			H = (Float(H) / Float(60.0));
			HX_STACK_LINE(463)
			int _g1 = ::Std_obj::_int(H);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(463)
			Float f = (H - _g1);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(464)
			Float p = (V * ((1.0 - S)));		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(465)
			Float q = (V * ((1.0 - (S * f))));		HX_STACK_VAR(q,"q");
			HX_STACK_LINE(466)
			Float t = (V * ((1.0 - (S * ((1.0 - f))))));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				int _g = ::Std_obj::_int(H);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(468)
				switch( (int)(_g)){
					case (int)0: {
						HX_STACK_LINE(471)
						int _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(471)
						{
							HX_STACK_LINE(471)
							int Red = ::Std_obj::_int((V * (int)255));		HX_STACK_VAR(Red,"Red");
							HX_STACK_LINE(471)
							int Green = ::Std_obj::_int((t * (int)255));		HX_STACK_VAR(Green,"Green");
							HX_STACK_LINE(471)
							int Blue = ::Std_obj::_int((p * (int)255));		HX_STACK_VAR(Blue,"Blue");
							HX_STACK_LINE(471)
							_g2 = (int((int((int((int(Alpha) << int((int)24))) | int((int(Red) << int((int)16))))) | int((int(Green) << int((int)8))))) | int(Blue));
						}
						HX_STACK_LINE(471)
						result = _g2;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(473)
						int _g3;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(473)
						{
							HX_STACK_LINE(473)
							int Red = ::Std_obj::_int((q * (int)255));		HX_STACK_VAR(Red,"Red");
							HX_STACK_LINE(473)
							int Green = ::Std_obj::_int((V * (int)255));		HX_STACK_VAR(Green,"Green");
							HX_STACK_LINE(473)
							int Blue = ::Std_obj::_int((p * (int)255));		HX_STACK_VAR(Blue,"Blue");
							HX_STACK_LINE(473)
							_g3 = (int((int((int((int(Alpha) << int((int)24))) | int((int(Red) << int((int)16))))) | int((int(Green) << int((int)8))))) | int(Blue));
						}
						HX_STACK_LINE(473)
						result = _g3;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(475)
						int _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(475)
						{
							HX_STACK_LINE(475)
							int Red = ::Std_obj::_int((p * (int)255));		HX_STACK_VAR(Red,"Red");
							HX_STACK_LINE(475)
							int Green = ::Std_obj::_int((V * (int)255));		HX_STACK_VAR(Green,"Green");
							HX_STACK_LINE(475)
							int Blue = ::Std_obj::_int((t * (int)255));		HX_STACK_VAR(Blue,"Blue");
							HX_STACK_LINE(475)
							_g4 = (int((int((int((int(Alpha) << int((int)24))) | int((int(Red) << int((int)16))))) | int((int(Green) << int((int)8))))) | int(Blue));
						}
						HX_STACK_LINE(475)
						result = _g4;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(477)
						int _g5;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(477)
						{
							HX_STACK_LINE(477)
							int Red = ::Std_obj::_int((p * (int)255));		HX_STACK_VAR(Red,"Red");
							HX_STACK_LINE(477)
							int Green = ::Std_obj::_int((q * (int)255));		HX_STACK_VAR(Green,"Green");
							HX_STACK_LINE(477)
							int Blue = ::Std_obj::_int((V * (int)255));		HX_STACK_VAR(Blue,"Blue");
							HX_STACK_LINE(477)
							_g5 = (int((int((int((int(Alpha) << int((int)24))) | int((int(Red) << int((int)16))))) | int((int(Green) << int((int)8))))) | int(Blue));
						}
						HX_STACK_LINE(477)
						result = _g5;
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(479)
						int _g6;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(479)
						{
							HX_STACK_LINE(479)
							int Red = ::Std_obj::_int((t * (int)255));		HX_STACK_VAR(Red,"Red");
							HX_STACK_LINE(479)
							int Green = ::Std_obj::_int((p * (int)255));		HX_STACK_VAR(Green,"Green");
							HX_STACK_LINE(479)
							int Blue = ::Std_obj::_int((V * (int)255));		HX_STACK_VAR(Blue,"Blue");
							HX_STACK_LINE(479)
							_g6 = (int((int((int((int(Alpha) << int((int)24))) | int((int(Red) << int((int)16))))) | int((int(Green) << int((int)8))))) | int(Blue));
						}
						HX_STACK_LINE(479)
						result = _g6;
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(481)
						int _g7;		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(481)
						{
							HX_STACK_LINE(481)
							int Red = ::Std_obj::_int((V * (int)255));		HX_STACK_VAR(Red,"Red");
							HX_STACK_LINE(481)
							int Green = ::Std_obj::_int((p * (int)255));		HX_STACK_VAR(Green,"Green");
							HX_STACK_LINE(481)
							int Blue = ::Std_obj::_int((q * (int)255));		HX_STACK_VAR(Blue,"Blue");
							HX_STACK_LINE(481)
							_g7 = (int((int((int((int(Alpha) << int((int)24))) | int((int(Red) << int((int)16))))) | int((int(Green) << int((int)8))))) | int(Blue));
						}
						HX_STACK_LINE(481)
						result = _g7;
					}
					;break;
					default: {
						HX_STACK_LINE(483)
						Dynamic();
					}
				}
			}
		}
		HX_STACK_LINE(487)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColorUtil_obj,HSVtoARGB,return )

Dynamic FlxColorUtil_obj::RGBtoHSV( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","RGBtoHSV",0x16e67524,"flixel.util.FlxColorUtil.RGBtoHSV","flixel/util/FlxColorUtil.hx",497,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(498)
	Dynamic rgb;		HX_STACK_VAR(rgb,"rgb");
	HX_STACK_LINE(498)
	{
		HX_STACK_LINE(498)
		Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
		HX_STACK_LINE(498)
		int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(498)
		int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(498)
		int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(498)
		Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(498)
		if (((Results != null()))){
			struct _Function_3_1{
				inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",498,0x18d3ded1)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("red") , red,false);
						__result->Add(HX_CSTRING("green") , green,false);
						__result->Add(HX_CSTRING("blue") , blue,false);
						__result->Add(HX_CSTRING("alpha") , alpha,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(498)
			Results = _Function_3_1::Block(red,green,blue,alpha);
		}
		struct _Function_2_1{
			inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",498,0x18d3ded1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("red") , red,false);
					__result->Add(HX_CSTRING("green") , green,false);
					__result->Add(HX_CSTRING("blue") , blue,false);
					__result->Add(HX_CSTRING("alpha") , alpha,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(498)
		rgb = _Function_2_1::Block(red,green,blue,alpha);
	}
	HX_STACK_LINE(500)
	Float red = (Float(rgb->__Field(HX_CSTRING("red"),true)) / Float((int)255));		HX_STACK_VAR(red,"red");
	HX_STACK_LINE(501)
	Float green = (Float(rgb->__Field(HX_CSTRING("green"),true)) / Float((int)255));		HX_STACK_VAR(green,"green");
	HX_STACK_LINE(502)
	Float blue = (Float(rgb->__Field(HX_CSTRING("blue"),true)) / Float((int)255));		HX_STACK_VAR(blue,"blue");
	HX_STACK_LINE(504)
	Float _g = ::Math_obj::min(green,blue);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(504)
	Float min = ::Math_obj::min(red,_g);		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(505)
	Float _g1 = ::Math_obj::max(green,blue);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(505)
	Float max = ::Math_obj::max(red,_g1);		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(506)
	Float delta = (max - min);		HX_STACK_VAR(delta,"delta");
	HX_STACK_LINE(507)
	Float lightness = (Float(((max + min))) / Float((int)2));		HX_STACK_VAR(lightness,"lightness");
	HX_STACK_LINE(508)
	Float hue = (int)0;		HX_STACK_VAR(hue,"hue");
	HX_STACK_LINE(509)
	Float saturation;		HX_STACK_VAR(saturation,"saturation");
	HX_STACK_LINE(512)
	if (((delta == (int)0))){
		HX_STACK_LINE(514)
		hue = (int)0;
		HX_STACK_LINE(515)
		saturation = (int)0;
	}
	else{
		HX_STACK_LINE(519)
		if (((lightness < 0.5))){
			HX_STACK_LINE(521)
			saturation = (Float(delta) / Float(((max + min))));
		}
		else{
			HX_STACK_LINE(525)
			saturation = (Float(delta) / Float(((((int)2 - max) - min))));
		}
		HX_STACK_LINE(528)
		Float delta_r = (Float((((Float(((max - red))) / Float((int)6)) + (Float(delta) / Float((int)2))))) / Float(delta));		HX_STACK_VAR(delta_r,"delta_r");
		HX_STACK_LINE(529)
		Float delta_g = (Float((((Float(((max - green))) / Float((int)6)) + (Float(delta) / Float((int)2))))) / Float(delta));		HX_STACK_VAR(delta_g,"delta_g");
		HX_STACK_LINE(530)
		Float delta_b = (Float((((Float(((max - blue))) / Float((int)6)) + (Float(delta) / Float((int)2))))) / Float(delta));		HX_STACK_VAR(delta_b,"delta_b");
		HX_STACK_LINE(532)
		if (((red == max))){
			HX_STACK_LINE(534)
			hue = (delta_b - delta_g);
		}
		else{
			HX_STACK_LINE(536)
			if (((green == max))){
				HX_STACK_LINE(538)
				hue = ((0.33333333333333331 + delta_r) - delta_b);
			}
			else{
				HX_STACK_LINE(540)
				if (((blue == max))){
					HX_STACK_LINE(542)
					hue = ((0.66666666666666663 + delta_g) - delta_r);
				}
			}
		}
		HX_STACK_LINE(545)
		if (((hue < (int)0))){
			HX_STACK_LINE(547)
			hx::AddEq(hue,(int)1);
		}
		HX_STACK_LINE(550)
		if (((hue > (int)1))){
			HX_STACK_LINE(552)
			hx::SubEq(hue,(int)1);
		}
	}
	HX_STACK_LINE(557)
	hx::MultEq(hue,(int)360);
	HX_STACK_LINE(558)
	int _g2 = ::Math_obj::round(hue);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(558)
	hue = _g2;
	struct _Function_1_1{
		inline static Dynamic Block( Float &saturation,Float &lightness,Float &hue){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",560,0x18d3ded1)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("hue") , hue,false);
				__result->Add(HX_CSTRING("saturation") , saturation,false);
				__result->Add(HX_CSTRING("lightness") , lightness,false);
				__result->Add(HX_CSTRING("value") , lightness,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(560)
	return _Function_1_1::Block(saturation,lightness,hue);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,RGBtoHSV,return )

int FlxColorUtil_obj::ARGBtoRGB( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","ARGBtoRGB",0x32bda985,"flixel.util.FlxColorUtil.ARGBtoRGB","flixel/util/FlxColorUtil.hx",572,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(572)
	return (int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,ARGBtoRGB,return )

int FlxColorUtil_obj::interpolateColor( int Color1,int Color2,int Steps,int CurrentStep,hx::Null< int >  __o_Alpha){
int Alpha = __o_Alpha.Default(255);
	HX_STACK_FRAME("flixel.util.FlxColorUtil","interpolateColor",0xc761bcc3,"flixel.util.FlxColorUtil.interpolateColor","flixel/util/FlxColorUtil.hx",586,0x18d3ded1)
	HX_STACK_ARG(Color1,"Color1")
	HX_STACK_ARG(Color2,"Color2")
	HX_STACK_ARG(Steps,"Steps")
	HX_STACK_ARG(CurrentStep,"CurrentStep")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(587)
		Dynamic src1;		HX_STACK_VAR(src1,"src1");
		HX_STACK_LINE(587)
		{
			HX_STACK_LINE(587)
			Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
			HX_STACK_LINE(587)
			int red = (int((int(Color1) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
			HX_STACK_LINE(587)
			int green = (int((int(Color1) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
			HX_STACK_LINE(587)
			int blue = (int(Color1) & int((int)255));		HX_STACK_VAR(blue,"blue");
			HX_STACK_LINE(587)
			Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color1) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(587)
			if (((Results != null()))){
				struct _Function_3_1{
					inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",587,0x18d3ded1)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("red") , red,false);
							__result->Add(HX_CSTRING("green") , green,false);
							__result->Add(HX_CSTRING("blue") , blue,false);
							__result->Add(HX_CSTRING("alpha") , alpha,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(587)
				Results = _Function_3_1::Block(red,green,blue,alpha);
			}
			struct _Function_2_1{
				inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",587,0x18d3ded1)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("red") , red,false);
						__result->Add(HX_CSTRING("green") , green,false);
						__result->Add(HX_CSTRING("blue") , blue,false);
						__result->Add(HX_CSTRING("alpha") , alpha,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(587)
			src1 = _Function_2_1::Block(red,green,blue,alpha);
		}
		HX_STACK_LINE(588)
		Dynamic src2;		HX_STACK_VAR(src2,"src2");
		HX_STACK_LINE(588)
		{
			HX_STACK_LINE(588)
			Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
			HX_STACK_LINE(588)
			int red = (int((int(Color2) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
			HX_STACK_LINE(588)
			int green = (int((int(Color2) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
			HX_STACK_LINE(588)
			int blue = (int(Color2) & int((int)255));		HX_STACK_VAR(blue,"blue");
			HX_STACK_LINE(588)
			Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color2) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(588)
			if (((Results != null()))){
				struct _Function_3_1{
					inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",588,0x18d3ded1)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("red") , red,false);
							__result->Add(HX_CSTRING("green") , green,false);
							__result->Add(HX_CSTRING("blue") , blue,false);
							__result->Add(HX_CSTRING("alpha") , alpha,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(588)
				Results = _Function_3_1::Block(red,green,blue,alpha);
			}
			struct _Function_2_1{
				inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",588,0x18d3ded1)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("red") , red,false);
						__result->Add(HX_CSTRING("green") , green,false);
						__result->Add(HX_CSTRING("blue") , blue,false);
						__result->Add(HX_CSTRING("alpha") , alpha,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(588)
			src2 = _Function_2_1::Block(red,green,blue,alpha);
		}
		HX_STACK_LINE(590)
		int r = ::Std_obj::_int(((Float((((src2->__Field(HX_CSTRING("red"),true) - src1->__Field(HX_CSTRING("red"),true))) * CurrentStep)) / Float(Steps)) + src1->__Field(HX_CSTRING("red"),true)));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(591)
		int g = ::Std_obj::_int(((Float((((src2->__Field(HX_CSTRING("green"),true) - src1->__Field(HX_CSTRING("green"),true))) * CurrentStep)) / Float(Steps)) + src1->__Field(HX_CSTRING("green"),true)));		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(592)
		int b = ::Std_obj::_int(((Float((((src2->__Field(HX_CSTRING("blue"),true) - src1->__Field(HX_CSTRING("blue"),true))) * CurrentStep)) / Float(Steps)) + src1->__Field(HX_CSTRING("blue"),true)));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(594)
		return (int((int((int((int(Alpha) << int((int)24))) | int((int(r) << int((int)16))))) | int((int(g) << int((int)8))))) | int(b));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColorUtil_obj,interpolateColor,return )

int FlxColorUtil_obj::interpolateColorWithRGB( int Color,int R2,int G2,int B2,int Steps,int CurrentStep){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","interpolateColorWithRGB",0x20b6e224,"flixel.util.FlxColorUtil.interpolateColorWithRGB","flixel/util/FlxColorUtil.hx",610,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(R2,"R2")
	HX_STACK_ARG(G2,"G2")
	HX_STACK_ARG(B2,"B2")
	HX_STACK_ARG(Steps,"Steps")
	HX_STACK_ARG(CurrentStep,"CurrentStep")
	HX_STACK_LINE(611)
	Dynamic src;		HX_STACK_VAR(src,"src");
	HX_STACK_LINE(611)
	{
		HX_STACK_LINE(611)
		Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
		HX_STACK_LINE(611)
		int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(611)
		int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(611)
		int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(611)
		Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(611)
		if (((Results != null()))){
			struct _Function_3_1{
				inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",611,0x18d3ded1)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("red") , red,false);
						__result->Add(HX_CSTRING("green") , green,false);
						__result->Add(HX_CSTRING("blue") , blue,false);
						__result->Add(HX_CSTRING("alpha") , alpha,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(611)
			Results = _Function_3_1::Block(red,green,blue,alpha);
		}
		struct _Function_2_1{
			inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",611,0x18d3ded1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("red") , red,false);
					__result->Add(HX_CSTRING("green") , green,false);
					__result->Add(HX_CSTRING("blue") , blue,false);
					__result->Add(HX_CSTRING("alpha") , alpha,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(611)
		src = _Function_2_1::Block(red,green,blue,alpha);
	}
	HX_STACK_LINE(613)
	int r = ::Std_obj::_int(((Float((((R2 - src->__Field(HX_CSTRING("red"),true))) * CurrentStep)) / Float(Steps)) + src->__Field(HX_CSTRING("red"),true)));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(614)
	int g = ::Std_obj::_int(((Float((((G2 - src->__Field(HX_CSTRING("green"),true))) * CurrentStep)) / Float(Steps)) + src->__Field(HX_CSTRING("green"),true)));		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(615)
	int b = ::Std_obj::_int(((Float((((B2 - src->__Field(HX_CSTRING("blue"),true))) * CurrentStep)) / Float(Steps)) + src->__Field(HX_CSTRING("blue"),true)));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(617)
	return (int((int((int(r) << int((int)16))) | int((int(g) << int((int)8))))) | int(b));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxColorUtil_obj,interpolateColorWithRGB,return )

int FlxColorUtil_obj::interpolateRGB( int R1,int G1,int B1,int R2,int G2,int B2,int Steps,int CurrentStep){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","interpolateRGB",0xb900726d,"flixel.util.FlxColorUtil.interpolateRGB","flixel/util/FlxColorUtil.hx",635,0x18d3ded1)
	HX_STACK_ARG(R1,"R1")
	HX_STACK_ARG(G1,"G1")
	HX_STACK_ARG(B1,"B1")
	HX_STACK_ARG(R2,"R2")
	HX_STACK_ARG(G2,"G2")
	HX_STACK_ARG(B2,"B2")
	HX_STACK_ARG(Steps,"Steps")
	HX_STACK_ARG(CurrentStep,"CurrentStep")
	HX_STACK_LINE(636)
	int r = ::Std_obj::_int(((Float((((R2 - R1)) * CurrentStep)) / Float(Steps)) + R1));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(637)
	int g = ::Std_obj::_int(((Float((((G2 - G1)) * CurrentStep)) / Float(Steps)) + G1));		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(638)
	int b = ::Std_obj::_int(((Float((((B2 - B1)) * CurrentStep)) / Float(Steps)) + B1));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(640)
	return (int((int((int(r) << int((int)16))) | int((int(g) << int((int)8))))) | int(b));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxColorUtil_obj,interpolateRGB,return )

int FlxColorUtil_obj::darken( int Color,hx::Null< Float >  __o_Factor){
Float Factor = __o_Factor.Default(0.2);
	HX_STACK_FRAME("flixel.util.FlxColorUtil","darken",0xce754f00,"flixel.util.FlxColorUtil.darken","flixel/util/FlxColorUtil.hx",651,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Factor,"Factor")
{
		HX_STACK_LINE(652)
		{
			HX_STACK_LINE(652)
			Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(652)
			if (((Factor < (int)0))){
				HX_STACK_LINE(652)
				lowerBound = (int)0;
			}
			else{
				HX_STACK_LINE(652)
				lowerBound = Factor;
			}
			HX_STACK_LINE(652)
			if (((lowerBound > (int)1))){
				HX_STACK_LINE(652)
				(int)1;
			}
			else{
				HX_STACK_LINE(652)
				lowerBound;
			}
		}
		HX_STACK_LINE(654)
		int r = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(655)
		int g = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(656)
		int b = (int(Color) & int((int)255));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(657)
		Float a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(657)
		{
			HX_STACK_LINE(657)
			int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(657)
			a = (Float(f) / Float((int)255));
		}
		HX_STACK_LINE(659)
		Factor = ((int)1 - Factor);
		HX_STACK_LINE(661)
		int _g = ::Std_obj::_int((r * Factor));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(661)
		r = _g;
		HX_STACK_LINE(662)
		int _g1 = ::Std_obj::_int((g * Factor));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(662)
		g = _g1;
		HX_STACK_LINE(663)
		int _g2 = ::Std_obj::_int((b * Factor));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(663)
		b = _g2;
		HX_STACK_LINE(665)
		int _g3 = ::Std_obj::_int((  (((a > (int)1))) ? Float(a) : Float((a * (int)255)) ));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(665)
		int _g4 = (int(_g3) & int((int)255));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(665)
		int _g5 = (int(_g4) << int((int)24));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(665)
		int _g6 = (int(_g5) | int((int(((int(r) & int((int)255)))) << int((int)16))));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(665)
		int _g7 = (int(_g6) | int((int(((int(g) & int((int)255)))) << int((int)8))));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(665)
		return (int(_g7) | int((int(b) & int((int)255))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,darken,return )

int FlxColorUtil_obj::brighten( int Color,hx::Null< Float >  __o_Factor){
Float Factor = __o_Factor.Default(0.2);
	HX_STACK_FRAME("flixel.util.FlxColorUtil","brighten",0xbd5f0604,"flixel.util.FlxColorUtil.brighten","flixel/util/FlxColorUtil.hx",676,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Factor,"Factor")
{
		HX_STACK_LINE(677)
		{
			HX_STACK_LINE(677)
			Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(677)
			if (((Factor < (int)0))){
				HX_STACK_LINE(677)
				lowerBound = (int)0;
			}
			else{
				HX_STACK_LINE(677)
				lowerBound = Factor;
			}
			HX_STACK_LINE(677)
			if (((lowerBound > (int)1))){
				HX_STACK_LINE(677)
				(int)1;
			}
			else{
				HX_STACK_LINE(677)
				lowerBound;
			}
		}
		HX_STACK_LINE(679)
		int r = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(680)
		int g = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(681)
		int b = (int(Color) & int((int)255));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(682)
		Float a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(682)
		{
			HX_STACK_LINE(682)
			int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(682)
			a = (Float(f) / Float((int)255));
		}
		HX_STACK_LINE(684)
		int _g = ::Std_obj::_int(((((int)255 - r)) * Factor));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(684)
		hx::AddEq(r,_g);
		HX_STACK_LINE(685)
		int _g1 = ::Std_obj::_int(((((int)255 - g)) * Factor));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(685)
		hx::AddEq(g,_g1);
		HX_STACK_LINE(686)
		int _g2 = ::Std_obj::_int(((((int)255 - b)) * Factor));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(686)
		hx::AddEq(b,_g2);
		HX_STACK_LINE(688)
		int _g3 = ::Std_obj::_int((  (((a > (int)1))) ? Float(a) : Float((a * (int)255)) ));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(688)
		int _g4 = (int(_g3) & int((int)255));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(688)
		int _g5 = (int(_g4) << int((int)24));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(688)
		int _g6 = (int(_g5) | int((int(((int(r) & int((int)255)))) << int((int)16))));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(688)
		int _g7 = (int(_g6) | int((int(((int(g) & int((int)255)))) << int((int)8))));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(688)
		return (int(_g7) | int((int(b) & int((int)255))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,brighten,return )


FlxColorUtil_obj::FlxColorUtil_obj()
{
}

Dynamic FlxColorUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getRed") ) { return getRed_dyn(); }
		if (HX_FIELD_EQ(inName,"darken") ) { return darken_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getARGB") ) { return getARGB_dyn(); }
		if (HX_FIELD_EQ(inName,"getHSBA") ) { return getHSBA_dyn(); }
		if (HX_FIELD_EQ(inName,"getBlue") ) { return getBlue_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getAlpha") ) { return getAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"getGreen") ) { return getGreen_dyn(); }
		if (HX_FIELD_EQ(inName,"RGBtoHSV") ) { return RGBtoHSV_dyn(); }
		if (HX_FIELD_EQ(inName,"brighten") ) { return brighten_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"HSVtoARGB") ) { return HSVtoARGB_dyn(); }
		if (HX_FIELD_EQ(inName,"ARGBtoRGB") ) { return ARGBtoRGB_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getColor32") ) { return getColor32_dyn(); }
		if (HX_FIELD_EQ(inName,"getColor24") ) { return getColor24_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"makeFromARGB") ) { return makeFromARGB_dyn(); }
		if (HX_FIELD_EQ(inName,"makeFromHSBA") ) { return makeFromHSBA_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorInfo") ) { return getColorInfo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getAlphaFloat") ) { return getAlphaFloat_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getRandomColor") ) { return getRandomColor_dyn(); }
		if (HX_FIELD_EQ(inName,"interpolateRGB") ) { return interpolateRGB_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ARGBtoHexString") ) { return ARGBtoHexString_dyn(); }
		if (HX_FIELD_EQ(inName,"ARGBtoWebString") ) { return ARGBtoWebString_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getHSVColorWheel") ) { return getHSVColorWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"colorToHexString") ) { return colorToHexString_dyn(); }
		if (HX_FIELD_EQ(inName,"interpolateColor") ) { return interpolateColor_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getTriadicHarmony") ) { return getTriadicHarmony_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getAnalogousHarmony") ) { return getAnalogousHarmony_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getComplementHarmony") ) { return getComplementHarmony_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"interpolateColorWithRGB") ) { return interpolateColorWithRGB_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getSplitComplementHarmony") ) { return getSplitComplementHarmony_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxColorUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxColorUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("makeFromARGB"),
	HX_CSTRING("makeFromHSBA"),
	HX_CSTRING("getARGB"),
	HX_CSTRING("getHSBA"),
	HX_CSTRING("getAlpha"),
	HX_CSTRING("getAlphaFloat"),
	HX_CSTRING("getRed"),
	HX_CSTRING("getGreen"),
	HX_CSTRING("getBlue"),
	HX_CSTRING("getRandomColor"),
	HX_CSTRING("getColor32"),
	HX_CSTRING("getColor24"),
	HX_CSTRING("getHSVColorWheel"),
	HX_CSTRING("getComplementHarmony"),
	HX_CSTRING("getAnalogousHarmony"),
	HX_CSTRING("getSplitComplementHarmony"),
	HX_CSTRING("getTriadicHarmony"),
	HX_CSTRING("getColorInfo"),
	HX_CSTRING("ARGBtoHexString"),
	HX_CSTRING("ARGBtoWebString"),
	HX_CSTRING("colorToHexString"),
	HX_CSTRING("HSVtoARGB"),
	HX_CSTRING("RGBtoHSV"),
	HX_CSTRING("ARGBtoRGB"),
	HX_CSTRING("interpolateColor"),
	HX_CSTRING("interpolateColorWithRGB"),
	HX_CSTRING("interpolateRGB"),
	HX_CSTRING("darken"),
	HX_CSTRING("brighten"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxColorUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxColorUtil_obj::__mClass,"__mClass");
};

#endif

Class FlxColorUtil_obj::__mClass;

void FlxColorUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxColorUtil"), hx::TCanCast< FlxColorUtil_obj> ,sStaticFields,sMemberFields,
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

void FlxColorUtil_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
