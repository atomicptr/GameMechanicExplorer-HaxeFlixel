#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_LogStyle
#include <flixel/system/debug/LogStyle.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void LogStyle_obj::__construct(::String __o_Prefix,::String __o_Color,hx::Null< int >  __o_Size,hx::Null< bool >  __o_Bold,hx::Null< bool >  __o_Italic,hx::Null< bool >  __o_Underlined,::String ErrorSound,hx::Null< bool >  __o_OpenConsole,Dynamic CallbackFunction)
{
HX_STACK_FRAME("flixel.system.debug.LogStyle","new",0xab69ee27,"flixel.system.debug.LogStyle.new","flixel/system/debug/LogStyle.hx",54,0x44adeaa8)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_Prefix,"Prefix")
HX_STACK_ARG(__o_Color,"Color")
HX_STACK_ARG(__o_Size,"Size")
HX_STACK_ARG(__o_Bold,"Bold")
HX_STACK_ARG(__o_Italic,"Italic")
HX_STACK_ARG(__o_Underlined,"Underlined")
HX_STACK_ARG(ErrorSound,"ErrorSound")
HX_STACK_ARG(__o_OpenConsole,"OpenConsole")
HX_STACK_ARG(CallbackFunction,"CallbackFunction")
::String Prefix = __o_Prefix.Default(HX_CSTRING(""));
::String Color = __o_Color.Default(HX_CSTRING("FFFFFF"));
int Size = __o_Size.Default(12);
bool Bold = __o_Bold.Default(false);
bool Italic = __o_Italic.Default(false);
bool Underlined = __o_Underlined.Default(false);
bool OpenConsole = __o_OpenConsole.Default(false);
{
	HX_STACK_LINE(55)
	this->prefix = Prefix;
	HX_STACK_LINE(56)
	this->color = Color;
	HX_STACK_LINE(57)
	this->size = Size;
	HX_STACK_LINE(58)
	this->bold = Bold;
	HX_STACK_LINE(59)
	this->italic = Italic;
	HX_STACK_LINE(60)
	this->underlined = Underlined;
	HX_STACK_LINE(61)
	this->errorSound = ErrorSound;
	HX_STACK_LINE(62)
	this->openConsole = OpenConsole;
	HX_STACK_LINE(63)
	this->callbackFunction = CallbackFunction;
}
;
	return null();
}

//LogStyle_obj::~LogStyle_obj() { }

Dynamic LogStyle_obj::__CreateEmpty() { return  new LogStyle_obj; }
hx::ObjectPtr< LogStyle_obj > LogStyle_obj::__new(::String __o_Prefix,::String __o_Color,hx::Null< int >  __o_Size,hx::Null< bool >  __o_Bold,hx::Null< bool >  __o_Italic,hx::Null< bool >  __o_Underlined,::String ErrorSound,hx::Null< bool >  __o_OpenConsole,Dynamic CallbackFunction)
{  hx::ObjectPtr< LogStyle_obj > result = new LogStyle_obj();
	result->__construct(__o_Prefix,__o_Color,__o_Size,__o_Bold,__o_Italic,__o_Underlined,ErrorSound,__o_OpenConsole,CallbackFunction);
	return result;}

Dynamic LogStyle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LogStyle_obj > result = new LogStyle_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return result;}

::flixel::system::debug::LogStyle LogStyle_obj::NORMAL;

::flixel::system::debug::LogStyle LogStyle_obj::WARNING;

::flixel::system::debug::LogStyle LogStyle_obj::ERROR;

::flixel::system::debug::LogStyle LogStyle_obj::NOTICE;

::flixel::system::debug::LogStyle LogStyle_obj::CONSOLE;


LogStyle_obj::LogStyle_obj()
{
}

void LogStyle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LogStyle);
	HX_MARK_MEMBER_NAME(prefix,"prefix");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(bold,"bold");
	HX_MARK_MEMBER_NAME(italic,"italic");
	HX_MARK_MEMBER_NAME(underlined,"underlined");
	HX_MARK_MEMBER_NAME(errorSound,"errorSound");
	HX_MARK_MEMBER_NAME(openConsole,"openConsole");
	HX_MARK_MEMBER_NAME(callbackFunction,"callbackFunction");
	HX_MARK_END_CLASS();
}

void LogStyle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(prefix,"prefix");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(bold,"bold");
	HX_VISIT_MEMBER_NAME(italic,"italic");
	HX_VISIT_MEMBER_NAME(underlined,"underlined");
	HX_VISIT_MEMBER_NAME(errorSound,"errorSound");
	HX_VISIT_MEMBER_NAME(openConsole,"openConsole");
	HX_VISIT_MEMBER_NAME(callbackFunction,"callbackFunction");
}

Dynamic LogStyle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"bold") ) { return bold; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ERROR") ) { return ERROR; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"NORMAL") ) { return NORMAL; }
		if (HX_FIELD_EQ(inName,"NOTICE") ) { return NOTICE; }
		if (HX_FIELD_EQ(inName,"prefix") ) { return prefix; }
		if (HX_FIELD_EQ(inName,"italic") ) { return italic; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"WARNING") ) { return WARNING; }
		if (HX_FIELD_EQ(inName,"CONSOLE") ) { return CONSOLE; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"underlined") ) { return underlined; }
		if (HX_FIELD_EQ(inName,"errorSound") ) { return errorSound; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"openConsole") ) { return openConsole; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"callbackFunction") ) { return callbackFunction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LogStyle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bold") ) { bold=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ERROR") ) { ERROR=inValue.Cast< ::flixel::system::debug::LogStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"NORMAL") ) { NORMAL=inValue.Cast< ::flixel::system::debug::LogStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NOTICE") ) { NOTICE=inValue.Cast< ::flixel::system::debug::LogStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prefix") ) { prefix=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"italic") ) { italic=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"WARNING") ) { WARNING=inValue.Cast< ::flixel::system::debug::LogStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONSOLE") ) { CONSOLE=inValue.Cast< ::flixel::system::debug::LogStyle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"underlined") ) { underlined=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"errorSound") ) { errorSound=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"openConsole") ) { openConsole=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"callbackFunction") ) { callbackFunction=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LogStyle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("prefix"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("bold"));
	outFields->push(HX_CSTRING("italic"));
	outFields->push(HX_CSTRING("underlined"));
	outFields->push(HX_CSTRING("errorSound"));
	outFields->push(HX_CSTRING("openConsole"));
	outFields->push(HX_CSTRING("callbackFunction"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NORMAL"),
	HX_CSTRING("WARNING"),
	HX_CSTRING("ERROR"),
	HX_CSTRING("NOTICE"),
	HX_CSTRING("CONSOLE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(LogStyle_obj,prefix),HX_CSTRING("prefix")},
	{hx::fsString,(int)offsetof(LogStyle_obj,color),HX_CSTRING("color")},
	{hx::fsInt,(int)offsetof(LogStyle_obj,size),HX_CSTRING("size")},
	{hx::fsBool,(int)offsetof(LogStyle_obj,bold),HX_CSTRING("bold")},
	{hx::fsBool,(int)offsetof(LogStyle_obj,italic),HX_CSTRING("italic")},
	{hx::fsBool,(int)offsetof(LogStyle_obj,underlined),HX_CSTRING("underlined")},
	{hx::fsString,(int)offsetof(LogStyle_obj,errorSound),HX_CSTRING("errorSound")},
	{hx::fsBool,(int)offsetof(LogStyle_obj,openConsole),HX_CSTRING("openConsole")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LogStyle_obj,callbackFunction),HX_CSTRING("callbackFunction")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("prefix"),
	HX_CSTRING("color"),
	HX_CSTRING("size"),
	HX_CSTRING("bold"),
	HX_CSTRING("italic"),
	HX_CSTRING("underlined"),
	HX_CSTRING("errorSound"),
	HX_CSTRING("openConsole"),
	HX_CSTRING("callbackFunction"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogStyle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LogStyle_obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(LogStyle_obj::WARNING,"WARNING");
	HX_MARK_MEMBER_NAME(LogStyle_obj::ERROR,"ERROR");
	HX_MARK_MEMBER_NAME(LogStyle_obj::NOTICE,"NOTICE");
	HX_MARK_MEMBER_NAME(LogStyle_obj::CONSOLE,"CONSOLE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LogStyle_obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(LogStyle_obj::WARNING,"WARNING");
	HX_VISIT_MEMBER_NAME(LogStyle_obj::ERROR,"ERROR");
	HX_VISIT_MEMBER_NAME(LogStyle_obj::NOTICE,"NOTICE");
	HX_VISIT_MEMBER_NAME(LogStyle_obj::CONSOLE,"CONSOLE");
};

#endif

Class LogStyle_obj::__mClass;

void LogStyle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.LogStyle"), hx::TCanCast< LogStyle_obj> ,sStaticFields,sMemberFields,
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

void LogStyle_obj::__boot()
{
	NORMAL= ::flixel::system::debug::LogStyle_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null());
	WARNING= ::flixel::system::debug::LogStyle_obj::__new(HX_CSTRING("[WARNING] "),HX_CSTRING("FFFF00"),(int)12,true,false,false,HX_CSTRING("assets/sounds/beep"),true,null());
	ERROR= ::flixel::system::debug::LogStyle_obj::__new(HX_CSTRING("[ERROR] "),HX_CSTRING("FF0000"),(int)12,true,false,false,HX_CSTRING("assets/sounds/beep"),true,null());
	NOTICE= ::flixel::system::debug::LogStyle_obj::__new(HX_CSTRING("[NOTICE] "),HX_CSTRING("008000"),(int)12,true,null(),null(),null(),null(),null());
	CONSOLE= ::flixel::system::debug::LogStyle_obj::__new(HX_CSTRING("&#62; "),HX_CSTRING("0000ff"),(int)12,true,null(),null(),null(),null(),null());
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
