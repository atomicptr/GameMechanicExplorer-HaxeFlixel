#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif

Void StringTools_obj::__construct()
{
	return null();
}

//StringTools_obj::~StringTools_obj() { }

Dynamic StringTools_obj::__CreateEmpty() { return  new StringTools_obj; }
hx::ObjectPtr< StringTools_obj > StringTools_obj::__new()
{  hx::ObjectPtr< StringTools_obj > result = new StringTools_obj();
	result->__construct();
	return result;}

Dynamic StringTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StringTools_obj > result = new StringTools_obj();
	result->__construct();
	return result;}

::String StringTools_obj::urlEncode( ::String s){
	HX_STACK_FRAME("StringTools","urlEncode",0x06afdce1,"StringTools.urlEncode","/usr/local/lib/haxe/std/StringTools.hx",46,0x3f930611)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(46)
	return s.__URLEncode();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlEncode,return )

::String StringTools_obj::urlDecode( ::String s){
	HX_STACK_FRAME("StringTools","urlDecode",0x71b947f9,"StringTools.urlDecode","/usr/local/lib/haxe/std/StringTools.hx",71,0x3f930611)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(71)
	return s.__URLDecode();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlDecode,return )

bool StringTools_obj::startsWith( ::String s,::String start){
	HX_STACK_FRAME("StringTools","startsWith",0x5f4e6efb,"StringTools.startsWith","/usr/local/lib/haxe/std/StringTools.hx",133,0x3f930611)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(start,"start")
	HX_STACK_LINE(133)
	if (((s.length >= start.length))){
		HX_STACK_LINE(133)
		::String _g = s.substr((int)0,start.length);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(133)
		return (_g == start);
	}
	else{
		HX_STACK_LINE(133)
		return false;
	}
	HX_STACK_LINE(133)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,startsWith,return )

bool StringTools_obj::endsWith( ::String s,::String end){
	HX_STACK_FRAME("StringTools","endsWith",0x0eb5bfe2,"StringTools.endsWith","/usr/local/lib/haxe/std/StringTools.hx",144,0x3f930611)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(150)
	int elen = end.length;		HX_STACK_VAR(elen,"elen");
	HX_STACK_LINE(151)
	int slen = s.length;		HX_STACK_VAR(slen,"slen");
	HX_STACK_LINE(152)
	if (((slen >= elen))){
		HX_STACK_LINE(152)
		::String _g = s.substr((slen - elen),elen);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(152)
		return (_g == end);
	}
	else{
		HX_STACK_LINE(152)
		return false;
	}
	HX_STACK_LINE(152)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,endsWith,return )

bool StringTools_obj::isSpace( ::String s,int pos){
	HX_STACK_FRAME("StringTools","isSpace",0xe0290778,"StringTools.isSpace","/usr/local/lib/haxe/std/StringTools.hx",165,0x3f930611)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(166)
	Dynamic c = s.charCodeAt(pos);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(167)
	return (bool((bool((c > (int)8)) && bool((c < (int)14)))) || bool((c == (int)32)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,isSpace,return )

::String StringTools_obj::ltrim( ::String s){
	HX_STACK_FRAME("StringTools","ltrim",0x24d2234a,"StringTools.ltrim","/usr/local/lib/haxe/std/StringTools.hx",179,0x3f930611)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(183)
	int l = s.length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(184)
	int r = (int)0;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(185)
	while((true)){
		HX_STACK_LINE(185)
		if ((!(((  (((r < l))) ? bool(::StringTools_obj::isSpace(s,r)) : bool(false) ))))){
			HX_STACK_LINE(185)
			break;
		}
		HX_STACK_LINE(186)
		(r)++;
	}
	HX_STACK_LINE(188)
	if (((r > (int)0))){
		HX_STACK_LINE(189)
		return s.substr(r,(l - r));
	}
	else{
		HX_STACK_LINE(191)
		return s;
	}
	HX_STACK_LINE(188)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,ltrim,return )

::String StringTools_obj::rtrim( ::String s){
	HX_STACK_FRAME("StringTools","rtrim",0x99399e50,"StringTools.rtrim","/usr/local/lib/haxe/std/StringTools.hx",204,0x3f930611)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(208)
	int l = s.length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(209)
	int r = (int)0;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(210)
	while((true)){
		HX_STACK_LINE(210)
		if ((!(((  (((r < l))) ? bool(::StringTools_obj::isSpace(s,((l - r) - (int)1))) : bool(false) ))))){
			HX_STACK_LINE(210)
			break;
		}
		HX_STACK_LINE(211)
		(r)++;
	}
	HX_STACK_LINE(213)
	if (((r > (int)0))){
		HX_STACK_LINE(214)
		return s.substr((int)0,(l - r));
	}
	else{
		HX_STACK_LINE(216)
		return s;
	}
	HX_STACK_LINE(213)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,rtrim,return )

::String StringTools_obj::trim( ::String s){
	HX_STACK_FRAME("StringTools","trim",0x2908d066,"StringTools.trim","/usr/local/lib/haxe/std/StringTools.hx",226,0x3f930611)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(232)
	::String _g = ::StringTools_obj::rtrim(s);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(232)
	return ::StringTools_obj::ltrim(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,trim,return )

::String StringTools_obj::replace( ::String s,::String sub,::String by){
	HX_STACK_FRAME("StringTools","replace",0x6d651f30,"StringTools.replace","/usr/local/lib/haxe/std/StringTools.hx",303,0x3f930611)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(sub,"sub")
	HX_STACK_ARG(by,"by")
	HX_STACK_LINE(303)
	return s.split(sub)->join(by);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringTools_obj,replace,return )


StringTools_obj::StringTools_obj()
{
}

Dynamic StringTools_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"trim") ) { return trim_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ltrim") ) { return ltrim_dyn(); }
		if (HX_FIELD_EQ(inName,"rtrim") ) { return rtrim_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isSpace") ) { return isSpace_dyn(); }
		if (HX_FIELD_EQ(inName,"replace") ) { return replace_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endsWith") ) { return endsWith_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"urlEncode") ) { return urlEncode_dyn(); }
		if (HX_FIELD_EQ(inName,"urlDecode") ) { return urlDecode_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startsWith") ) { return startsWith_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StringTools_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void StringTools_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("urlEncode"),
	HX_CSTRING("urlDecode"),
	HX_CSTRING("startsWith"),
	HX_CSTRING("endsWith"),
	HX_CSTRING("isSpace"),
	HX_CSTRING("ltrim"),
	HX_CSTRING("rtrim"),
	HX_CSTRING("trim"),
	HX_CSTRING("replace"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
};

#endif

Class StringTools_obj::__mClass;

void StringTools_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("StringTools"), hx::TCanCast< StringTools_obj> ,sStaticFields,sMemberFields,
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

void StringTools_obj::__boot()
{
}

