#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_errors_ArgumentError
#include <flash/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_ConsoleUtil
#include <flixel/system/debug/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_LogStyle
#include <flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void ConsoleUtil_obj::__construct()
{
	return null();
}

//ConsoleUtil_obj::~ConsoleUtil_obj() { }

Dynamic ConsoleUtil_obj::__CreateEmpty() { return  new ConsoleUtil_obj; }
hx::ObjectPtr< ConsoleUtil_obj > ConsoleUtil_obj::__new()
{  hx::ObjectPtr< ConsoleUtil_obj > result = new ConsoleUtil_obj();
	result->__construct();
	return result;}

Dynamic ConsoleUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConsoleUtil_obj > result = new ConsoleUtil_obj();
	result->__construct();
	return result;}

bool ConsoleUtil_obj::callFunction( Dynamic Function,Dynamic Args){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","callFunction",0x976d0913,"flixel.system.debug.ConsoleUtil.callFunction","flixel/system/debug/ConsoleUtil.hx",25,0x3784f9ee)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Args,"Args")
	HX_STACK_LINE(25)
	try
	{
	HX_STACK_CATCHABLE(::flash::errors::ArgumentError, 0);
	{
		HX_STACK_LINE(27)
		::Reflect_obj::callMethod(null(),Function,Args);
		HX_STACK_LINE(28)
		return true;
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::flash::errors::ArgumentError >() ){
			HX_STACK_BEGIN_CATCH
			::flash::errors::ArgumentError e = __e;{
				HX_STACK_LINE(32)
				if (((e->errorID == (int)1063))){
					HX_STACK_LINE(37)
					::String _g = ::flixel::util::FlxStringUtil_obj::filterDigits(e->message).charAt((int)4);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(37)
					int expected = ::Std_obj::parseInt(_g);		HX_STACK_VAR(expected,"expected");
					HX_STACK_LINE(40)
					if (((expected < Args->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(43)
						Dynamic shortenedArgs = Args->__Field(HX_CSTRING("slice"),true)((int)0,expected);		HX_STACK_VAR(shortenedArgs,"shortenedArgs");
						HX_STACK_LINE(45)
						::Reflect_obj::callMethod(null(),Function,shortenedArgs);
					}
					else{
						HX_STACK_LINE(51)
						return false;
					}
					HX_STACK_LINE(54)
					return true;
				}
				HX_STACK_LINE(57)
				return false;
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(25)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,callFunction,return )

Dynamic ConsoleUtil_obj::findCommand( ::String Alias,Dynamic Commands){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","findCommand",0x57346d75,"flixel.system.debug.ConsoleUtil.findCommand","flixel/system/debug/ConsoleUtil.hx",69,0x3784f9ee)
	HX_STACK_ARG(Alias,"Alias")
	HX_STACK_ARG(Commands,"Commands")
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(70)
		int _g = Commands->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		while((true)){
			HX_STACK_LINE(70)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(70)
				break;
			}
			HX_STACK_LINE(70)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(72)
			int _g2 = ::flixel::util::FlxArrayUtil_obj::indexOf_String(Commands->__GetItem(i)->__Field(HX_CSTRING("aliases"),true),Alias,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(72)
			if (((_g2 != (int)-1))){
				HX_STACK_LINE(73)
				return Commands->__GetItem(i);
			}
		}
	}
	HX_STACK_LINE(76)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,findCommand,return )

Dynamic ConsoleUtil_obj::resolveObjectAndVariable( ::String ObjectAndVariable,Dynamic Object){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","resolveObjectAndVariable",0x216061e5,"flixel.system.debug.ConsoleUtil.resolveObjectAndVariable","flixel/system/debug/ConsoleUtil.hx",121,0x3784f9ee)
	HX_STACK_ARG(ObjectAndVariable,"ObjectAndVariable")
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(122)
	Array< ::String > searchArr = ObjectAndVariable.split(HX_CSTRING("."));		HX_STACK_VAR(searchArr,"searchArr");
	HX_STACK_LINE(124)
	if (((searchArr->length == (int)1))){
		struct _Function_2_1{
			inline static Dynamic Block( ::String &ObjectAndVariable,Dynamic &Object){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleUtil.hx",126,0x3784f9ee)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("object") , Object,false);
					__result->Add(HX_CSTRING("variableName") , ObjectAndVariable,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(126)
		return _Function_2_1::Block(ObjectAndVariable,Object);
	}
	HX_STACK_LINE(129)
	::String variableName = searchArr->join(HX_CSTRING("."));		HX_STACK_VAR(variableName,"variableName");
	HX_STACK_LINE(131)
	if ((!(::Reflect_obj::isObject(Object)))){
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			::String _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				::Class cl;		HX_STACK_VAR(cl,"cl");
				HX_STACK_LINE(133)
				if ((::Std_obj::is(Object,hx::ClassOf< ::Class >()))){
					HX_STACK_LINE(133)
					cl = Object;
				}
				else{
					HX_STACK_LINE(133)
					::Class _g = ::Type_obj::getClass(Object);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(133)
					cl = _g;
				}
				HX_STACK_LINE(133)
				::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(133)
				if (((s != null()))){
					HX_STACK_LINE(133)
					::String _g1 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(133)
					s = _g1;
					HX_STACK_LINE(133)
					int _g2 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(133)
					int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(133)
					::String _g4 = s.substr(_g3,null());		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(133)
					s = _g4;
				}
				HX_STACK_LINE(133)
				_g5 = s;
			}
			HX_STACK_LINE(133)
			::String _g6 = (HX_CSTRING("'") + _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(133)
			Dynamic Data = (_g6 + HX_CSTRING("' is not a valid Object"));		HX_STACK_VAR(Data,"Data");
			HX_STACK_LINE(133)
			Dynamic();
		}
		HX_STACK_LINE(134)
		return null();
	}
	HX_STACK_LINE(138)
	int l = searchArr->length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(139)
	Dynamic tempObj = Object;		HX_STACK_VAR(tempObj,"tempObj");
	HX_STACK_LINE(140)
	::String tempVarName = HX_CSTRING("");		HX_STACK_VAR(tempVarName,"tempVarName");
	HX_STACK_LINE(141)
	{
		HX_STACK_LINE(141)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(141)
		while((true)){
			HX_STACK_LINE(141)
			if ((!(((_g < l))))){
				HX_STACK_LINE(141)
				break;
			}
			HX_STACK_LINE(141)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(143)
			tempVarName = searchArr->__get(i);
			HX_STACK_LINE(145)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(147)
				if (((i < (l - (int)1)))){
					HX_STACK_LINE(149)
					Dynamic _g7;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(149)
					_g7 = (  (((tempObj == null()))) ? Dynamic(null()) : Dynamic(tempObj->__Field(tempVarName,true)) );
					HX_STACK_LINE(149)
					tempObj = _g7;
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(154)
						{
							HX_STACK_LINE(154)
							::String _g13;		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(154)
							{
								HX_STACK_LINE(154)
								::Class cl;		HX_STACK_VAR(cl,"cl");
								HX_STACK_LINE(154)
								if ((::Std_obj::is(tempObj,hx::ClassOf< ::Class >()))){
									HX_STACK_LINE(154)
									cl = tempObj;
								}
								else{
									HX_STACK_LINE(154)
									::Class _g8 = ::Type_obj::getClass(tempObj);		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(154)
									cl = _g8;
								}
								HX_STACK_LINE(154)
								::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(154)
								if (((s != null()))){
									HX_STACK_LINE(154)
									::String _g9 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(154)
									s = _g9;
									HX_STACK_LINE(154)
									int _g10 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(154)
									int _g11 = (_g10 + (int)1);		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(154)
									::String _g12 = s.substr(_g11,null());		HX_STACK_VAR(_g12,"_g12");
									HX_STACK_LINE(154)
									s = _g12;
								}
								HX_STACK_LINE(154)
								_g13 = s;
							}
							HX_STACK_LINE(154)
							::String _g14 = (HX_CSTRING("'") + _g13);		HX_STACK_VAR(_g14,"_g14");
							HX_STACK_LINE(154)
							::String _g15 = (_g14 + HX_CSTRING("' does not have a field '"));		HX_STACK_VAR(_g15,"_g15");
							HX_STACK_LINE(154)
							::String _g16 = (_g15 + tempVarName);		HX_STACK_VAR(_g16,"_g16");
							HX_STACK_LINE(154)
							Dynamic Data = (_g16 + HX_CSTRING("'"));		HX_STACK_VAR(Data,"Data");
							HX_STACK_LINE(154)
							Dynamic();
						}
						HX_STACK_LINE(155)
						return null();
					}
				}
			}
		}
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::String &tempVarName,Dynamic &tempObj){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleUtil.hx",159,0x3784f9ee)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("object") , tempObj,false);
				__result->Add(HX_CSTRING("variableName") , tempVarName,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(159)
	return _Function_1_1::Block(tempVarName,tempObj);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,resolveObjectAndVariable,return )

Dynamic ConsoleUtil_obj::resolveObjectAndVariableFromMap( ::String ObjectAndVariable,::haxe::ds::StringMap ObjectMap){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","resolveObjectAndVariableFromMap",0x374cd7ed,"flixel.system.debug.ConsoleUtil.resolveObjectAndVariableFromMap","flixel/system/debug/ConsoleUtil.hx",171,0x3784f9ee)
	HX_STACK_ARG(ObjectAndVariable,"ObjectAndVariable")
	HX_STACK_ARG(ObjectMap,"ObjectMap")
	HX_STACK_LINE(172)
	Array< ::String > splitString = ObjectAndVariable.split(HX_CSTRING("."));		HX_STACK_VAR(splitString,"splitString");
	HX_STACK_LINE(173)
	Dynamic object = ObjectMap->get(splitString->__get((int)0));		HX_STACK_VAR(object,"object");
	HX_STACK_LINE(174)
	splitString->shift();
	HX_STACK_LINE(175)
	::String _g = splitString->join(HX_CSTRING("."));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(175)
	ObjectAndVariable = _g;
	HX_STACK_LINE(176)
	return ::flixel::system::debug::ConsoleUtil_obj::resolveObjectAndVariable(ObjectAndVariable,object);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,resolveObjectAndVariableFromMap,return )

Array< ::String > ConsoleUtil_obj::getInstanceFieldsAdvanced( ::Class cl,hx::Null< int >  __o_numSuperClassesToInclude){
int numSuperClassesToInclude = __o_numSuperClassesToInclude.Default(0);
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","getInstanceFieldsAdvanced",0x67fa5b89,"flixel.system.debug.ConsoleUtil.getInstanceFieldsAdvanced","flixel/system/debug/ConsoleUtil.hx",190,0x3784f9ee)
	HX_STACK_ARG(cl,"cl")
	HX_STACK_ARG(numSuperClassesToInclude,"numSuperClassesToInclude")
{
		HX_STACK_LINE(191)
		Array< ::String > fields = ::Type_obj::getInstanceFields(cl);		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(192)
		if (((numSuperClassesToInclude >= (int)0))){
			HX_STACK_LINE(194)
			::Class curClass = ::Type_obj::getSuperClass(cl);		HX_STACK_VAR(curClass,"curClass");
			HX_STACK_LINE(195)
			Array< ::Dynamic > superClasses = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(superClasses,"superClasses");
			HX_STACK_LINE(196)
			while((true)){
				HX_STACK_LINE(196)
				if ((!(((curClass != null()))))){
					HX_STACK_LINE(196)
					break;
				}
				HX_STACK_LINE(198)
				superClasses->push(curClass);
				HX_STACK_LINE(199)
				::Class _g = ::Type_obj::getSuperClass(curClass);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(199)
				curClass = _g;
			}
			HX_STACK_LINE(202)
			superClasses->reverse();
			HX_STACK_LINE(204)
			if (((numSuperClassesToInclude > superClasses->length))){
				HX_STACK_LINE(205)
				numSuperClassesToInclude = superClasses->length;
			}
			HX_STACK_LINE(207)
			{
				HX_STACK_LINE(207)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(207)
				int _g = (superClasses->length - numSuperClassesToInclude);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(207)
				while((true)){
					HX_STACK_LINE(207)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(207)
						break;
					}
					HX_STACK_LINE(207)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(209)
					Array< ::String > superFields = ::Type_obj::getInstanceFields(superClasses->__get(i).StaticCast< ::Class >());		HX_STACK_VAR(superFields,"superFields");
					HX_STACK_LINE(210)
					{
						HX_STACK_LINE(210)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(210)
						while((true)){
							HX_STACK_LINE(210)
							if ((!(((_g2 < superFields->length))))){
								HX_STACK_LINE(210)
								break;
							}
							HX_STACK_LINE(210)
							::String superField = superFields->__get(_g2);		HX_STACK_VAR(superField,"superField");
							HX_STACK_LINE(210)
							++(_g2);
							HX_STACK_LINE(212)
							int _g11 = fields->indexOf(superField,null());		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(212)
							if (((_g11 != (int)-1))){
								HX_STACK_LINE(213)
								fields->remove(superField);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(217)
		return fields;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,getInstanceFieldsAdvanced,return )

Dynamic ConsoleUtil_obj::parseBool( ::String s){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","parseBool",0xb0a762a0,"flixel.system.debug.ConsoleUtil.parseBool","flixel/system/debug/ConsoleUtil.hx",229,0x3784f9ee)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(229)
	if (((s == HX_CSTRING("true")))){
		HX_STACK_LINE(230)
		return true;
	}
	else{
		HX_STACK_LINE(231)
		if (((s == HX_CSTRING("false")))){
			HX_STACK_LINE(232)
			return false;
		}
		else{
			HX_STACK_LINE(234)
			return null();
		}
	}
	HX_STACK_LINE(229)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,parseBool,return )

Void ConsoleUtil_obj::log( Dynamic Text){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","log",0x8132f4e7,"flixel.system.debug.ConsoleUtil.log","flixel/system/debug/ConsoleUtil.hx",244,0x3784f9ee)
		HX_STACK_ARG(Text,"Text")
		HX_STACK_LINE(244)
		::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(Text)),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,log,(void))


ConsoleUtil_obj::ConsoleUtil_obj()
{
}

Dynamic ConsoleUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parseBool") ) { return parseBool_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"findCommand") ) { return findCommand_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"callFunction") ) { return callFunction_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"resolveObjectAndVariable") ) { return resolveObjectAndVariable_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getInstanceFieldsAdvanced") ) { return getInstanceFieldsAdvanced_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"resolveObjectAndVariableFromMap") ) { return resolveObjectAndVariableFromMap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ConsoleUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ConsoleUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("callFunction"),
	HX_CSTRING("findCommand"),
	HX_CSTRING("resolveObjectAndVariable"),
	HX_CSTRING("resolveObjectAndVariableFromMap"),
	HX_CSTRING("getInstanceFieldsAdvanced"),
	HX_CSTRING("parseBool"),
	HX_CSTRING("log"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleUtil_obj::__mClass,"__mClass");
};

#endif

Class ConsoleUtil_obj::__mClass;

void ConsoleUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.ConsoleUtil"), hx::TCanCast< ConsoleUtil_obj> ,sStaticFields,sMemberFields,
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

void ConsoleUtil_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
