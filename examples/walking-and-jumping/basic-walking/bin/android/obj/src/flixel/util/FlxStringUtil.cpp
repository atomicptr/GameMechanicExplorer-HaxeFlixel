#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace util{

Void FlxStringUtil_obj::__construct()
{
	return null();
}

//FlxStringUtil_obj::~FlxStringUtil_obj() { }

Dynamic FlxStringUtil_obj::__CreateEmpty() { return  new FlxStringUtil_obj; }
hx::ObjectPtr< FlxStringUtil_obj > FlxStringUtil_obj::__new()
{  hx::ObjectPtr< FlxStringUtil_obj > result = new FlxStringUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxStringUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxStringUtil_obj > result = new FlxStringUtil_obj();
	result->__construct();
	return result;}

::String FlxStringUtil_obj::formatTicks( int StartTicks,int EndTicks){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatTicks",0xe4bb609c,"flixel.util.FlxStringUtil.formatTicks","flixel/util/FlxStringUtil.hx",27,0x4e012e33)
	HX_STACK_ARG(StartTicks,"StartTicks")
	HX_STACK_ARG(EndTicks,"EndTicks")
	HX_STACK_LINE(28)
	Float _g = ::Math_obj::abs((EndTicks - StartTicks));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(28)
	Float _g1 = (Float(_g) / Float((int)1000));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(28)
	return (_g1 + HX_CSTRING("s"));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatTicks,return )

::String FlxStringUtil_obj::formatTime( Float Seconds,hx::Null< bool >  __o_ShowMS){
bool ShowMS = __o_ShowMS.Default(false);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatTime",0xcfa9a0a7,"flixel.util.FlxStringUtil.formatTime","flixel/util/FlxStringUtil.hx",39,0x4e012e33)
	HX_STACK_ARG(Seconds,"Seconds")
	HX_STACK_ARG(ShowMS,"ShowMS")
{
		HX_STACK_LINE(40)
		int _g = ::Std_obj::_int((Float(Seconds) / Float((int)60)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		::String timeString = (_g + HX_CSTRING(":"));		HX_STACK_VAR(timeString,"timeString");
		HX_STACK_LINE(41)
		int _g1 = ::Std_obj::_int(Seconds);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(41)
		int timeStringHelper = hx::Mod(_g1,(int)60);		HX_STACK_VAR(timeStringHelper,"timeStringHelper");
		HX_STACK_LINE(42)
		if (((timeStringHelper < (int)10))){
			HX_STACK_LINE(44)
			hx::AddEq(timeString,HX_CSTRING("0"));
		}
		HX_STACK_LINE(46)
		hx::AddEq(timeString,timeStringHelper);
		HX_STACK_LINE(47)
		if ((ShowMS)){
			HX_STACK_LINE(49)
			hx::AddEq(timeString,HX_CSTRING("."));
			HX_STACK_LINE(50)
			int _g2 = ::Std_obj::_int(Seconds);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(50)
			Float _g3 = (Seconds - _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(50)
			Float _g4 = (_g3 * (int)100);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(50)
			int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(50)
			timeStringHelper = _g5;
			HX_STACK_LINE(51)
			if (((timeStringHelper < (int)10))){
				HX_STACK_LINE(53)
				hx::AddEq(timeString,HX_CSTRING("0"));
			}
			HX_STACK_LINE(55)
			hx::AddEq(timeString,timeStringHelper);
		}
		HX_STACK_LINE(58)
		return timeString;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatTime,return )

::String FlxStringUtil_obj::formatArray( Dynamic AnyArray){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatArray",0xfa1c9fbf,"flixel.util.FlxStringUtil.formatArray","flixel/util/FlxStringUtil.hx",69,0x4e012e33)
	HX_STACK_ARG(AnyArray,"AnyArray")
	HX_STACK_LINE(70)
	::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
	HX_STACK_LINE(71)
	if (((bool((AnyArray != null())) && bool((AnyArray->__Field(HX_CSTRING("length"),true) > (int)0))))){
		HX_STACK_LINE(73)
		::String _g = ::Std_obj::string(AnyArray->__GetItem((int)0));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		string = _g;
		HX_STACK_LINE(74)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(75)
		int l = AnyArray->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(76)
		while((true)){
			HX_STACK_LINE(76)
			if ((!(((i < l))))){
				HX_STACK_LINE(76)
				break;
			}
			HX_STACK_LINE(78)
			int _g1 = (i)++;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(78)
			Dynamic _g2 = AnyArray->__GetItem(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(78)
			::String _g3 = ::Std_obj::string(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(78)
			::String _g4 = (HX_CSTRING(", ") + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(78)
			hx::AddEq(string,_g4);
		}
	}
	HX_STACK_LINE(81)
	return string;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,formatArray,return )

::String FlxStringUtil_obj::formatStringMap( ::haxe::ds::StringMap AnyMap){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatStringMap",0x51016f71,"flixel.util.FlxStringUtil.formatStringMap","flixel/util/FlxStringUtil.hx",91,0x4e012e33)
	HX_STACK_ARG(AnyMap,"AnyMap")
	HX_STACK_LINE(92)
	::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
	HX_STACK_LINE(93)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(AnyMap->keys());  __it->hasNext(); ){
		::String key = __it->next();
		{
			HX_STACK_LINE(94)
			::String _g = ::Std_obj::string(key);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(94)
			hx::AddEq(string,_g);
			HX_STACK_LINE(95)
			hx::AddEq(string,HX_CSTRING(", "));
		}
;
	}
	HX_STACK_LINE(98)
	return string.substring((int)0,(string.length - (int)2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,formatStringMap,return )

::String FlxStringUtil_obj::formatMoney( Float Amount,hx::Null< bool >  __o_ShowDecimal,hx::Null< bool >  __o_EnglishStyle){
bool ShowDecimal = __o_ShowDecimal.Default(true);
bool EnglishStyle = __o_EnglishStyle.Default(true);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatMoney",0xe0ecec66,"flixel.util.FlxStringUtil.formatMoney","flixel/util/FlxStringUtil.hx",113,0x4e012e33)
	HX_STACK_ARG(Amount,"Amount")
	HX_STACK_ARG(ShowDecimal,"ShowDecimal")
	HX_STACK_ARG(EnglishStyle,"EnglishStyle")
{
		HX_STACK_LINE(114)
		int helper;		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(115)
		int amount = ::Math_obj::floor(Amount);		HX_STACK_VAR(amount,"amount");
		HX_STACK_LINE(116)
		::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
		HX_STACK_LINE(117)
		::String comma = HX_CSTRING("");		HX_STACK_VAR(comma,"comma");
		HX_STACK_LINE(118)
		::String zeroes = HX_CSTRING("");		HX_STACK_VAR(zeroes,"zeroes");
		HX_STACK_LINE(119)
		while((true)){
			HX_STACK_LINE(119)
			if ((!(((amount > (int)0))))){
				HX_STACK_LINE(119)
				break;
			}
			HX_STACK_LINE(121)
			if (((bool((string.length > (int)0)) && bool((comma.length <= (int)0))))){
				HX_STACK_LINE(123)
				if ((EnglishStyle)){
					HX_STACK_LINE(125)
					comma = HX_CSTRING(",");
				}
				else{
					HX_STACK_LINE(129)
					comma = HX_CSTRING(".");
				}
			}
			HX_STACK_LINE(132)
			zeroes = HX_CSTRING("");
			HX_STACK_LINE(133)
			int _g = ::Math_obj::floor((Float(amount) / Float((int)1000)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(133)
			int _g1 = (_g * (int)1000);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(133)
			int _g2 = (amount - _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(133)
			helper = _g2;
			HX_STACK_LINE(134)
			int _g3 = ::Math_obj::floor((Float(amount) / Float((int)1000)));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(134)
			amount = _g3;
			HX_STACK_LINE(135)
			if (((amount > (int)0))){
				HX_STACK_LINE(137)
				if (((helper < (int)100))){
					HX_STACK_LINE(139)
					hx::AddEq(zeroes,HX_CSTRING("0"));
				}
				HX_STACK_LINE(141)
				if (((helper < (int)10))){
					HX_STACK_LINE(143)
					hx::AddEq(zeroes,HX_CSTRING("0"));
				}
			}
			HX_STACK_LINE(146)
			string = (((zeroes + helper) + comma) + string);
		}
		HX_STACK_LINE(148)
		if ((ShowDecimal)){
			HX_STACK_LINE(150)
			int _g4 = ::Std_obj::_int((Amount * (int)100));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(150)
			int _g5 = ::Std_obj::_int(Amount);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(150)
			int _g6 = (_g5 * (int)100);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(150)
			int _g7 = (_g4 - _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(150)
			amount = _g7;
			HX_STACK_LINE(151)
			hx::AddEq(string,(((  ((EnglishStyle)) ? ::String(HX_CSTRING(".")) : ::String(HX_CSTRING(",")) )) + amount));
			HX_STACK_LINE(152)
			if (((amount < (int)10))){
				HX_STACK_LINE(154)
				hx::AddEq(string,HX_CSTRING("0"));
			}
		}
		HX_STACK_LINE(157)
		return string;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,formatMoney,return )

::String FlxStringUtil_obj::filterDigits( ::String Input){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","filterDigits",0xab6a2081,"flixel.util.FlxStringUtil.filterDigits","flixel/util/FlxStringUtil.hx",167,0x4e012e33)
	HX_STACK_ARG(Input,"Input")
	HX_STACK_LINE(168)
	::StringBuf output = ::StringBuf_obj::__new();		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(169)
		int _g = Input.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		while((true)){
			HX_STACK_LINE(169)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(169)
				break;
			}
			HX_STACK_LINE(169)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(170)
			Dynamic c = Input.charCodeAt(i);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(171)
			if (((bool((c >= (int)48)) && bool((c <= (int)57))))){
				HX_STACK_LINE(172)
				int c1 = c;		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(172)
				::String _g2 = ::String::fromCharCode(c1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(172)
				output->b->push(_g2);
			}
		}
	}
	HX_STACK_LINE(175)
	return output->b->join(HX_CSTRING(""));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,filterDigits,return )

::String FlxStringUtil_obj::htmlFormat( ::String Text,hx::Null< int >  __o_Size,::String __o_Color,hx::Null< bool >  __o_Bold,hx::Null< bool >  __o_Italic,hx::Null< bool >  __o_Underlined){
int Size = __o_Size.Default(12);
::String Color = __o_Color.Default(HX_CSTRING("FFFFFF"));
bool Bold = __o_Bold.Default(false);
bool Italic = __o_Italic.Default(false);
bool Underlined = __o_Underlined.Default(false);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","htmlFormat",0x8e97acc5,"flixel.util.FlxStringUtil.htmlFormat","flixel/util/FlxStringUtil.hx",191,0x4e012e33)
	HX_STACK_ARG(Text,"Text")
	HX_STACK_ARG(Size,"Size")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Bold,"Bold")
	HX_STACK_ARG(Italic,"Italic")
	HX_STACK_ARG(Underlined,"Underlined")
{
		HX_STACK_LINE(192)
		::String prefix = ((((HX_CSTRING("<font size='") + Size) + HX_CSTRING("' color='#")) + Color) + HX_CSTRING("'>"));		HX_STACK_VAR(prefix,"prefix");
		HX_STACK_LINE(193)
		::String suffix = HX_CSTRING("</font>");		HX_STACK_VAR(suffix,"suffix");
		HX_STACK_LINE(195)
		if ((Bold)){
			HX_STACK_LINE(197)
			prefix = (HX_CSTRING("<b>") + prefix);
			HX_STACK_LINE(198)
			suffix = (suffix + HX_CSTRING("</b>"));
		}
		HX_STACK_LINE(200)
		if ((Italic)){
			HX_STACK_LINE(202)
			prefix = (HX_CSTRING("<i>") + prefix);
			HX_STACK_LINE(203)
			suffix = (suffix + HX_CSTRING("</i>"));
		}
		HX_STACK_LINE(205)
		if ((Underlined)){
			HX_STACK_LINE(207)
			prefix = (HX_CSTRING("<u>") + prefix);
			HX_STACK_LINE(208)
			suffix = (suffix + HX_CSTRING("</u>"));
		}
		HX_STACK_LINE(211)
		return ((prefix + Text) + suffix);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxStringUtil_obj,htmlFormat,return )

::String FlxStringUtil_obj::getDomain( ::String url){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","getDomain",0x05683217,"flixel.util.FlxStringUtil.getDomain","flixel/util/FlxStringUtil.hx",250,0x4e012e33)
	HX_STACK_ARG(url,"url")
	HX_STACK_LINE(251)
	int _g = url.indexOf(HX_CSTRING("://"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(251)
	int urlStart = (_g + (int)3);		HX_STACK_VAR(urlStart,"urlStart");
	HX_STACK_LINE(252)
	int urlEnd = url.indexOf(HX_CSTRING("/"),urlStart);		HX_STACK_VAR(urlEnd,"urlEnd");
	HX_STACK_LINE(253)
	::String home = url.substring(urlStart,urlEnd);		HX_STACK_VAR(home,"home");
	HX_STACK_LINE(254)
	int _g1 = home.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(254)
	int LastDot = (_g1 - (int)1);		HX_STACK_VAR(LastDot,"LastDot");
	HX_STACK_LINE(255)
	int _g2 = home.lastIndexOf(HX_CSTRING("."),LastDot);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(255)
	int domEnd = (_g2 + (int)1);		HX_STACK_VAR(domEnd,"domEnd");
	HX_STACK_LINE(256)
	::String _g3 = home.substring(domEnd,home.length);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(256)
	home = _g3;
	HX_STACK_LINE(257)
	Array< ::String > _g4 = home.split(HX_CSTRING(":"));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(257)
	::String _g5 = _g4->__get((int)0);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(257)
	home = _g5;
	HX_STACK_LINE(258)
	if (((home == HX_CSTRING("")))){
		HX_STACK_LINE(258)
		return HX_CSTRING("local");
	}
	else{
		HX_STACK_LINE(258)
		return home;
	}
	HX_STACK_LINE(258)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,getDomain,return )

bool FlxStringUtil_obj::sameClassName( Dynamic Obj1,Dynamic Obj2,hx::Null< bool >  __o_Simple){
bool Simple = __o_Simple.Default(true);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","sameClassName",0x3be7dc7a,"flixel.util.FlxStringUtil.sameClassName","flixel/util/FlxStringUtil.hx",270,0x4e012e33)
	HX_STACK_ARG(Obj1,"Obj1")
	HX_STACK_ARG(Obj2,"Obj2")
	HX_STACK_ARG(Simple,"Simple")
{
		HX_STACK_LINE(271)
		::String _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(271)
		{
			HX_STACK_LINE(271)
			::Class cl;		HX_STACK_VAR(cl,"cl");
			HX_STACK_LINE(271)
			if ((::Std_obj::is(Obj1,hx::ClassOf< ::Class >()))){
				HX_STACK_LINE(271)
				cl = Obj1;
			}
			else{
				HX_STACK_LINE(271)
				::Class _g = ::Type_obj::getClass(Obj1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(271)
				cl = _g;
			}
			HX_STACK_LINE(271)
			::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(271)
			if (((s != null()))){
				HX_STACK_LINE(271)
				::String _g1 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(271)
				s = _g1;
				HX_STACK_LINE(271)
				if ((Simple)){
					HX_STACK_LINE(271)
					int _g2 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(271)
					int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(271)
					::String _g4 = s.substr(_g3,null());		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(271)
					s = _g4;
				}
			}
			HX_STACK_LINE(271)
			_g5 = s;
		}
		HX_STACK_LINE(271)
		::String _g11;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(271)
		{
			HX_STACK_LINE(271)
			::Class cl;		HX_STACK_VAR(cl,"cl");
			HX_STACK_LINE(271)
			if ((::Std_obj::is(Obj2,hx::ClassOf< ::Class >()))){
				HX_STACK_LINE(271)
				cl = Obj2;
			}
			else{
				HX_STACK_LINE(271)
				::Class _g6 = ::Type_obj::getClass(Obj2);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(271)
				cl = _g6;
			}
			HX_STACK_LINE(271)
			::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(271)
			if (((s != null()))){
				HX_STACK_LINE(271)
				::String _g7 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(271)
				s = _g7;
				HX_STACK_LINE(271)
				if ((Simple)){
					HX_STACK_LINE(271)
					int _g8 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(271)
					int _g9 = (_g8 + (int)1);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(271)
					::String _g10 = s.substr(_g9,null());		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(271)
					s = _g10;
				}
			}
			HX_STACK_LINE(271)
			_g11 = s;
		}
		HX_STACK_LINE(271)
		return (_g5 == _g11);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,sameClassName,return )

Array< int > FlxStringUtil_obj::toIntArray( ::String Data){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","toIntArray",0xa370d488,"flixel.util.FlxStringUtil.toIntArray","flixel/util/FlxStringUtil.hx",282,0x4e012e33)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_LINE(283)
	if (((bool((Data != null())) && bool((Data != HX_CSTRING("")))))){
		HX_STACK_LINE(285)
		Array< ::String > strArray = Data.split(HX_CSTRING(","));		HX_STACK_VAR(strArray,"strArray");
		HX_STACK_LINE(286)
		Array< int > iArray = Array_obj< int >::__new();		HX_STACK_VAR(iArray,"iArray");
		HX_STACK_LINE(287)
		{
			HX_STACK_LINE(287)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(287)
			while((true)){
				HX_STACK_LINE(287)
				if ((!(((_g < strArray->length))))){
					HX_STACK_LINE(287)
					break;
				}
				HX_STACK_LINE(287)
				::String str = strArray->__get(_g);		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(287)
				++(_g);
				HX_STACK_LINE(289)
				Dynamic _g1 = ::Std_obj::parseInt(str);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(289)
				iArray->push(_g1);
			}
		}
		HX_STACK_LINE(291)
		return iArray;
	}
	HX_STACK_LINE(293)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,toIntArray,return )

Array< Float > FlxStringUtil_obj::toFloatArray( ::String Data){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","toFloatArray",0xcff15c3b,"flixel.util.FlxStringUtil.toFloatArray","flixel/util/FlxStringUtil.hx",303,0x4e012e33)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_LINE(304)
	if (((bool((Data != null())) && bool((Data != HX_CSTRING("")))))){
		HX_STACK_LINE(306)
		Array< ::String > strArray = Data.split(HX_CSTRING(","));		HX_STACK_VAR(strArray,"strArray");
		HX_STACK_LINE(307)
		Array< Float > fArray = Array_obj< Float >::__new();		HX_STACK_VAR(fArray,"fArray");
		HX_STACK_LINE(308)
		{
			HX_STACK_LINE(308)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(308)
			while((true)){
				HX_STACK_LINE(308)
				if ((!(((_g < strArray->length))))){
					HX_STACK_LINE(308)
					break;
				}
				HX_STACK_LINE(308)
				::String str = strArray->__get(_g);		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(308)
				++(_g);
				HX_STACK_LINE(310)
				Float _g1 = ::Std_obj::parseFloat(str);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(310)
				fArray->push(_g1);
			}
		}
		HX_STACK_LINE(312)
		return fArray;
	}
	HX_STACK_LINE(314)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,toFloatArray,return )

::String FlxStringUtil_obj::arrayToCSV( Array< int > Data,int Width,hx::Null< bool >  __o_Invert){
bool Invert = __o_Invert.Default(false);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","arrayToCSV",0xd181e275,"flixel.util.FlxStringUtil.arrayToCSV","flixel/util/FlxStringUtil.hx",326,0x4e012e33)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Invert,"Invert")
{
		HX_STACK_LINE(327)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(328)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(329)
		::String csv = HX_CSTRING("");		HX_STACK_VAR(csv,"csv");
		HX_STACK_LINE(330)
		int Height = ::Std_obj::_int((Float(Data->length) / Float(Width)));		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(331)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(332)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(334)
		while((true)){
			HX_STACK_LINE(334)
			if ((!(((row < Height))))){
				HX_STACK_LINE(334)
				break;
			}
			HX_STACK_LINE(336)
			column = (int)0;
			HX_STACK_LINE(338)
			while((true)){
				HX_STACK_LINE(338)
				if ((!(((column < Width))))){
					HX_STACK_LINE(338)
					break;
				}
				HX_STACK_LINE(340)
				index = Data->__get(offset);
				HX_STACK_LINE(342)
				if ((Invert)){
					HX_STACK_LINE(344)
					if (((index == (int)0))){
						HX_STACK_LINE(346)
						index = (int)1;
					}
					else{
						HX_STACK_LINE(348)
						if (((index == (int)1))){
							HX_STACK_LINE(350)
							index = (int)0;
						}
					}
				}
				HX_STACK_LINE(354)
				if (((column == (int)0))){
					HX_STACK_LINE(356)
					if (((row == (int)0))){
						HX_STACK_LINE(358)
						hx::AddEq(csv,index);
					}
					else{
						HX_STACK_LINE(362)
						hx::AddEq(csv,(HX_CSTRING("\n") + index));
					}
				}
				else{
					HX_STACK_LINE(367)
					hx::AddEq(csv,(HX_CSTRING(", ") + index));
				}
				HX_STACK_LINE(370)
				(column)++;
				HX_STACK_LINE(371)
				(offset)++;
			}
			HX_STACK_LINE(374)
			(row)++;
		}
		HX_STACK_LINE(377)
		return csv;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,arrayToCSV,return )

::String FlxStringUtil_obj::bitmapToCSV( ::flash::display::BitmapData Bitmap,hx::Null< bool >  __o_Invert,hx::Null< int >  __o_Scale,Array< int > ColorMap){
bool Invert = __o_Invert.Default(false);
int Scale = __o_Scale.Default(1);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","bitmapToCSV",0x6fd72f79,"flixel.util.FlxStringUtil.bitmapToCSV","flixel/util/FlxStringUtil.hx",391,0x4e012e33)
	HX_STACK_ARG(Bitmap,"Bitmap")
	HX_STACK_ARG(Invert,"Invert")
	HX_STACK_ARG(Scale,"Scale")
	HX_STACK_ARG(ColorMap,"ColorMap")
{
		HX_STACK_LINE(392)
		if (((Scale < (int)1))){
			HX_STACK_LINE(394)
			Scale = (int)1;
		}
		HX_STACK_LINE(398)
		if (((Scale > (int)1))){
			HX_STACK_LINE(400)
			::flash::display::BitmapData bd = Bitmap;		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(401)
			int _g = Bitmap->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(401)
			int _g1 = (_g * Scale);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(401)
			int _g2 = Bitmap->get_height();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(401)
			int _g3 = (_g2 * Scale);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(401)
			::flash::display::BitmapData _g4 = ::flash::display::BitmapData_obj::__new(_g1,_g3,null(),null(),null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(401)
			Bitmap = _g4;
			HX_STACK_LINE(424)
			::flash::geom::Matrix mtx = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(mtx,"mtx");
			HX_STACK_LINE(425)
			mtx->scale(Scale,Scale);
			HX_STACK_LINE(426)
			Bitmap->draw(bd,mtx,null(),null(),null(),null());
		}
		HX_STACK_LINE(431)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(432)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(433)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(434)
		::String csv = HX_CSTRING("");		HX_STACK_VAR(csv,"csv");
		HX_STACK_LINE(435)
		int bitmapWidth = Bitmap->get_width();		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
		HX_STACK_LINE(436)
		int bitmapHeight = Bitmap->get_height();		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
		HX_STACK_LINE(438)
		while((true)){
			HX_STACK_LINE(438)
			if ((!(((row < bitmapHeight))))){
				HX_STACK_LINE(438)
				break;
			}
			HX_STACK_LINE(440)
			column = (int)0;
			HX_STACK_LINE(442)
			while((true)){
				HX_STACK_LINE(442)
				if ((!(((column < bitmapWidth))))){
					HX_STACK_LINE(442)
					break;
				}
				HX_STACK_LINE(445)
				int _g5 = Bitmap->getPixel(column,row);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(445)
				pixel = _g5;
				HX_STACK_LINE(447)
				if (((ColorMap != null()))){
					HX_STACK_LINE(449)
					int _g6 = ::flixel::util::FlxArrayUtil_obj::indexOf_Int(ColorMap,pixel,null());		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(449)
					pixel = _g6;
				}
				else{
					HX_STACK_LINE(451)
					if (((bool((bool(Invert) && bool((pixel > (int)0)))) || bool((bool(!(Invert)) && bool((pixel == (int)0))))))){
						HX_STACK_LINE(453)
						pixel = (int)1;
					}
					else{
						HX_STACK_LINE(457)
						pixel = (int)0;
					}
				}
				HX_STACK_LINE(461)
				if (((column == (int)0))){
					HX_STACK_LINE(463)
					if (((row == (int)0))){
						HX_STACK_LINE(465)
						hx::AddEq(csv,pixel);
					}
					else{
						HX_STACK_LINE(469)
						hx::AddEq(csv,(HX_CSTRING("\n") + pixel));
					}
				}
				else{
					HX_STACK_LINE(474)
					hx::AddEq(csv,(HX_CSTRING(", ") + pixel));
				}
				HX_STACK_LINE(477)
				(column)++;
			}
			HX_STACK_LINE(480)
			(row)++;
		}
		HX_STACK_LINE(483)
		return csv;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxStringUtil_obj,bitmapToCSV,return )

::String FlxStringUtil_obj::imageToCSV( Dynamic ImageFile,hx::Null< bool >  __o_Invert,hx::Null< int >  __o_Scale){
bool Invert = __o_Invert.Default(false);
int Scale = __o_Scale.Default(1);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","imageToCSV",0xe3229173,"flixel.util.FlxStringUtil.imageToCSV","flixel/util/FlxStringUtil.hx",496,0x4e012e33)
	HX_STACK_ARG(ImageFile,"ImageFile")
	HX_STACK_ARG(Invert,"Invert")
	HX_STACK_ARG(Scale,"Scale")
{
		HX_STACK_LINE(497)
		::flash::display::BitmapData tempBitmapData;		HX_STACK_VAR(tempBitmapData,"tempBitmapData");
		HX_STACK_LINE(499)
		if ((::Std_obj::is(ImageFile,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(501)
			::flash::display::BitmapData _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(501)
			{
				HX_STACK_LINE(501)
				::String id = ImageFile;		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(501)
				_g = ::openfl::Assets_obj::getBitmapData(id,false);
			}
			HX_STACK_LINE(501)
			tempBitmapData = _g;
		}
		else{
			HX_STACK_LINE(505)
			tempBitmapData = ::Type_obj::createInstance(ImageFile,Dynamic( Array_obj<Dynamic>::__new()))->__Field(HX_CSTRING("bitmapData"),true);
		}
		HX_STACK_LINE(508)
		return ::flixel::util::FlxStringUtil_obj::bitmapToCSV(tempBitmapData,Invert,Scale,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,imageToCSV,return )

::String FlxStringUtil_obj::getDebugString( Array< ::Dynamic > LabelValuePairs){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","getDebugString",0x47d891d1,"flixel.util.FlxStringUtil.getDebugString","flixel/util/FlxStringUtil.hx",518,0x4e012e33)
	HX_STACK_ARG(LabelValuePairs,"LabelValuePairs")
	HX_STACK_LINE(519)
	::String output = HX_CSTRING("(");		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(520)
	{
		HX_STACK_LINE(520)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(520)
		while((true)){
			HX_STACK_LINE(520)
			if ((!(((_g < LabelValuePairs->length))))){
				HX_STACK_LINE(520)
				break;
			}
			HX_STACK_LINE(520)
			::flixel::util::LabelValuePair pair = LabelValuePairs->__get(_g).StaticCast< ::flixel::util::LabelValuePair >();		HX_STACK_VAR(pair,"pair");
			HX_STACK_LINE(520)
			++(_g);
			HX_STACK_LINE(522)
			hx::AddEq(output,(pair->label + HX_CSTRING(": ")));
			HX_STACK_LINE(523)
			Dynamic value = pair->value;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(524)
			if ((::Std_obj::is(value,hx::ClassOf< ::Float >()))){
				HX_STACK_LINE(526)
				Float _g1 = ::flixel::util::FlxMath_obj::roundDecimal(value,::flixel::FlxG_obj::debugger->precision);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(526)
				value = _g1;
			}
			HX_STACK_LINE(528)
			::String _g1 = ::Std_obj::string(value);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(528)
			::String _g2 = (_g1 + HX_CSTRING(" | "));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(528)
			hx::AddEq(output,_g2);
			HX_STACK_LINE(529)
			::flixel::util::LabelValuePair_obj::_pool->put(pair);
		}
	}
	HX_STACK_LINE(532)
	::String _g3 = output.substr((int)0,(output.length - (int)2));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(532)
	::String _g4 = ::StringTools_obj::trim(_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(532)
	output = _g4;
	HX_STACK_LINE(533)
	return (output + HX_CSTRING(")"));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,getDebugString,return )


FlxStringUtil_obj::FlxStringUtil_obj()
{
}

Dynamic FlxStringUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"getDomain") ) { return getDomain_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"formatTime") ) { return formatTime_dyn(); }
		if (HX_FIELD_EQ(inName,"htmlFormat") ) { return htmlFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"toIntArray") ) { return toIntArray_dyn(); }
		if (HX_FIELD_EQ(inName,"arrayToCSV") ) { return arrayToCSV_dyn(); }
		if (HX_FIELD_EQ(inName,"imageToCSV") ) { return imageToCSV_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"formatTicks") ) { return formatTicks_dyn(); }
		if (HX_FIELD_EQ(inName,"formatArray") ) { return formatArray_dyn(); }
		if (HX_FIELD_EQ(inName,"formatMoney") ) { return formatMoney_dyn(); }
		if (HX_FIELD_EQ(inName,"bitmapToCSV") ) { return bitmapToCSV_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"filterDigits") ) { return filterDigits_dyn(); }
		if (HX_FIELD_EQ(inName,"toFloatArray") ) { return toFloatArray_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sameClassName") ) { return sameClassName_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getDebugString") ) { return getDebugString_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"formatStringMap") ) { return formatStringMap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxStringUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxStringUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("formatTicks"),
	HX_CSTRING("formatTime"),
	HX_CSTRING("formatArray"),
	HX_CSTRING("formatStringMap"),
	HX_CSTRING("formatMoney"),
	HX_CSTRING("filterDigits"),
	HX_CSTRING("htmlFormat"),
	HX_CSTRING("getDomain"),
	HX_CSTRING("sameClassName"),
	HX_CSTRING("toIntArray"),
	HX_CSTRING("toFloatArray"),
	HX_CSTRING("arrayToCSV"),
	HX_CSTRING("bitmapToCSV"),
	HX_CSTRING("imageToCSV"),
	HX_CSTRING("getDebugString"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxStringUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxStringUtil_obj::__mClass,"__mClass");
};

#endif

Class FlxStringUtil_obj::__mClass;

void FlxStringUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxStringUtil"), hx::TCanCast< FlxStringUtil_obj> ,sStaticFields,sMemberFields,
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

void FlxStringUtil_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
