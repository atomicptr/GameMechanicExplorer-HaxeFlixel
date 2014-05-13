#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_FlxVersion
#include <flixel/system/FlxVersion.h>
#endif
namespace flixel{
namespace system{

Void FlxVersion_obj::__construct(int Major,int Minor,int Patch,::String __o_PatchVersion)
{
HX_STACK_FRAME("flixel.system.FlxVersion","new",0xf87933e5,"flixel.system.FlxVersion.new","flixel/system/FlxVersion.hx",15,0x2361490b)
HX_STACK_THIS(this)
HX_STACK_ARG(Major,"Major")
HX_STACK_ARG(Minor,"Minor")
HX_STACK_ARG(Patch,"Patch")
HX_STACK_ARG(__o_PatchVersion,"PatchVersion")
::String PatchVersion = __o_PatchVersion.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(16)
	this->major = Major;
	HX_STACK_LINE(17)
	this->minor = Minor;
	HX_STACK_LINE(18)
	this->patch = Patch;
	HX_STACK_LINE(19)
	this->patchVersion = PatchVersion;
}
;
	return null();
}

//FlxVersion_obj::~FlxVersion_obj() { }

Dynamic FlxVersion_obj::__CreateEmpty() { return  new FlxVersion_obj; }
hx::ObjectPtr< FlxVersion_obj > FlxVersion_obj::__new(int Major,int Minor,int Patch,::String __o_PatchVersion)
{  hx::ObjectPtr< FlxVersion_obj > result = new FlxVersion_obj();
	result->__construct(Major,Minor,Patch,__o_PatchVersion);
	return result;}

Dynamic FlxVersion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxVersion_obj > result = new FlxVersion_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::String FlxVersion_obj::toString( ){
	HX_STACK_FRAME("flixel.system.FlxVersion","toString",0x1c598b07,"flixel.system.FlxVersion.toString","flixel/system/FlxVersion.hx",27,0x2361490b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	::String patchVer = HX_CSTRING("");		HX_STACK_VAR(patchVer,"patchVer");
	HX_STACK_LINE(29)
	if (((bool((this->patchVersion != null())) && bool((this->patchVersion != HX_CSTRING("")))))){
		HX_STACK_LINE(31)
		patchVer = (HX_CSTRING("-") + this->patchVersion);
	}
	HX_STACK_LINE(33)
	return ((((((HX_CSTRING("HaxeFlixel ") + this->major) + HX_CSTRING(".")) + this->minor) + HX_CSTRING(".")) + this->patch) + patchVer);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVersion_obj,toString,return )


FlxVersion_obj::FlxVersion_obj()
{
}

void FlxVersion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxVersion);
	HX_MARK_MEMBER_NAME(major,"major");
	HX_MARK_MEMBER_NAME(minor,"minor");
	HX_MARK_MEMBER_NAME(patch,"patch");
	HX_MARK_MEMBER_NAME(patchVersion,"patchVersion");
	HX_MARK_END_CLASS();
}

void FlxVersion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(major,"major");
	HX_VISIT_MEMBER_NAME(minor,"minor");
	HX_VISIT_MEMBER_NAME(patch,"patch");
	HX_VISIT_MEMBER_NAME(patchVersion,"patchVersion");
}

Dynamic FlxVersion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"major") ) { return major; }
		if (HX_FIELD_EQ(inName,"minor") ) { return minor; }
		if (HX_FIELD_EQ(inName,"patch") ) { return patch; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"patchVersion") ) { return patchVersion; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxVersion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"major") ) { major=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minor") ) { minor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"patch") ) { patch=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"patchVersion") ) { patchVersion=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxVersion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("major"));
	outFields->push(HX_CSTRING("minor"));
	outFields->push(HX_CSTRING("patch"));
	outFields->push(HX_CSTRING("patchVersion"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxVersion_obj,major),HX_CSTRING("major")},
	{hx::fsInt,(int)offsetof(FlxVersion_obj,minor),HX_CSTRING("minor")},
	{hx::fsInt,(int)offsetof(FlxVersion_obj,patch),HX_CSTRING("patch")},
	{hx::fsString,(int)offsetof(FlxVersion_obj,patchVersion),HX_CSTRING("patchVersion")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("major"),
	HX_CSTRING("minor"),
	HX_CSTRING("patch"),
	HX_CSTRING("patchVersion"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVersion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVersion_obj::__mClass,"__mClass");
};

#endif

Class FlxVersion_obj::__mClass;

void FlxVersion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.FlxVersion"), hx::TCanCast< FlxVersion_obj> ,sStaticFields,sMemberFields,
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

void FlxVersion_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
