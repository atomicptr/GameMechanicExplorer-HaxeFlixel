#include <hxcpp.h>

#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_openfl_utils_JNIStaticField
#include <openfl/utils/JNIStaticField.h>
#endif
namespace openfl{
namespace utils{

Void JNIStaticField_obj::__construct(Dynamic field)
{
HX_STACK_FRAME("openfl.utils.JNIStaticField","new",0x5e26c354,"openfl.utils.JNIStaticField.new","openfl/utils/JNI.hx",248,0x1ad0b156)
HX_STACK_THIS(this)
HX_STACK_ARG(field,"field")
{
	HX_STACK_LINE(248)
	this->field = field;
}
;
	return null();
}

//JNIStaticField_obj::~JNIStaticField_obj() { }

Dynamic JNIStaticField_obj::__CreateEmpty() { return  new JNIStaticField_obj; }
hx::ObjectPtr< JNIStaticField_obj > JNIStaticField_obj::__new(Dynamic field)
{  hx::ObjectPtr< JNIStaticField_obj > result = new JNIStaticField_obj();
	result->__construct(field);
	return result;}

Dynamic JNIStaticField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JNIStaticField_obj > result = new JNIStaticField_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic JNIStaticField_obj::get( ){
	HX_STACK_FRAME("openfl.utils.JNIStaticField","get",0x5e21738a,"openfl.utils.JNIStaticField.get","openfl/utils/JNI.hx",255,0x1ad0b156)
	HX_STACK_THIS(this)
	HX_STACK_LINE(255)
	return ::openfl::utils::JNIStaticField_obj::lime_jni_get_static(this->field);
}


HX_DEFINE_DYNAMIC_FUNC0(JNIStaticField_obj,get,return )

Dynamic JNIStaticField_obj::set( Dynamic value){
	HX_STACK_FRAME("openfl.utils.JNIStaticField","set",0x5e2a8e96,"openfl.utils.JNIStaticField.set","openfl/utils/JNI.hx",260,0x1ad0b156)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(262)
	::openfl::utils::JNIStaticField_obj::lime_jni_set_static(this->field,value);
	HX_STACK_LINE(263)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(JNIStaticField_obj,set,return )

Dynamic JNIStaticField_obj::lime_jni_get_static;

Dynamic JNIStaticField_obj::lime_jni_set_static;


JNIStaticField_obj::JNIStaticField_obj()
{
}

void JNIStaticField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JNIStaticField);
	HX_MARK_MEMBER_NAME(field,"field");
	HX_MARK_END_CLASS();
}

void JNIStaticField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(field,"field");
}

Dynamic JNIStaticField_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { return field; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_jni_get_static") ) { return lime_jni_get_static; }
		if (HX_FIELD_EQ(inName,"lime_jni_set_static") ) { return lime_jni_set_static; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JNIStaticField_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { field=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_jni_get_static") ) { lime_jni_get_static=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_jni_set_static") ) { lime_jni_set_static=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JNIStaticField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("field"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("lime_jni_get_static"),
	HX_CSTRING("lime_jni_set_static"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(JNIStaticField_obj,field),HX_CSTRING("field")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("field"),
	HX_CSTRING("get"),
	HX_CSTRING("set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNIStaticField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JNIStaticField_obj::lime_jni_get_static,"lime_jni_get_static");
	HX_MARK_MEMBER_NAME(JNIStaticField_obj::lime_jni_set_static,"lime_jni_set_static");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNIStaticField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JNIStaticField_obj::lime_jni_get_static,"lime_jni_get_static");
	HX_VISIT_MEMBER_NAME(JNIStaticField_obj::lime_jni_set_static,"lime_jni_set_static");
};

#endif

Class JNIStaticField_obj::__mClass;

void JNIStaticField_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.utils.JNIStaticField"), hx::TCanCast< JNIStaticField_obj> ,sStaticFields,sMemberFields,
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

void JNIStaticField_obj::__boot()
{
	lime_jni_get_static= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_jni_get_static"),(int)1);
	lime_jni_set_static= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_jni_set_static"),(int)2);
}

} // end namespace openfl
} // end namespace utils
