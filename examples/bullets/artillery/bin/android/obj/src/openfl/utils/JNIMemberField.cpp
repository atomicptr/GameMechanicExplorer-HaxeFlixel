#include <hxcpp.h>

#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_openfl_utils_JNIMemberField
#include <openfl/utils/JNIMemberField.h>
#endif
namespace openfl{
namespace utils{

Void JNIMemberField_obj::__construct(Dynamic field)
{
HX_STACK_FRAME("openfl.utils.JNIMemberField","new",0x5e8ca828,"openfl.utils.JNIMemberField.new","openfl/utils/JNI.hx",206,0x1ad0b156)
HX_STACK_THIS(this)
HX_STACK_ARG(field,"field")
{
	HX_STACK_LINE(206)
	this->field = field;
}
;
	return null();
}

//JNIMemberField_obj::~JNIMemberField_obj() { }

Dynamic JNIMemberField_obj::__CreateEmpty() { return  new JNIMemberField_obj; }
hx::ObjectPtr< JNIMemberField_obj > JNIMemberField_obj::__new(Dynamic field)
{  hx::ObjectPtr< JNIMemberField_obj > result = new JNIMemberField_obj();
	result->__construct(field);
	return result;}

Dynamic JNIMemberField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JNIMemberField_obj > result = new JNIMemberField_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic JNIMemberField_obj::get( Dynamic jobject){
	HX_STACK_FRAME("openfl.utils.JNIMemberField","get",0x5e87585e,"openfl.utils.JNIMemberField.get","openfl/utils/JNI.hx",213,0x1ad0b156)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jobject,"jobject")
	HX_STACK_LINE(213)
	return ::openfl::utils::JNIMemberField_obj::lime_jni_get_member(this->field,jobject);
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMemberField_obj,get,return )

Dynamic JNIMemberField_obj::set( Dynamic jobject,Dynamic value){
	HX_STACK_FRAME("openfl.utils.JNIMemberField","set",0x5e90736a,"openfl.utils.JNIMemberField.set","openfl/utils/JNI.hx",218,0x1ad0b156)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jobject,"jobject")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(220)
	::openfl::utils::JNIMemberField_obj::lime_jni_set_member(this->field,jobject,value);
	HX_STACK_LINE(221)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC2(JNIMemberField_obj,set,return )

Dynamic JNIMemberField_obj::lime_jni_get_member;

Dynamic JNIMemberField_obj::lime_jni_set_member;


JNIMemberField_obj::JNIMemberField_obj()
{
}

void JNIMemberField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JNIMemberField);
	HX_MARK_MEMBER_NAME(field,"field");
	HX_MARK_END_CLASS();
}

void JNIMemberField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(field,"field");
}

Dynamic JNIMemberField_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"lime_jni_get_member") ) { return lime_jni_get_member; }
		if (HX_FIELD_EQ(inName,"lime_jni_set_member") ) { return lime_jni_set_member; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JNIMemberField_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { field=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_jni_get_member") ) { lime_jni_get_member=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_jni_set_member") ) { lime_jni_set_member=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JNIMemberField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("field"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("lime_jni_get_member"),
	HX_CSTRING("lime_jni_set_member"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(JNIMemberField_obj,field),HX_CSTRING("field")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("field"),
	HX_CSTRING("get"),
	HX_CSTRING("set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNIMemberField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JNIMemberField_obj::lime_jni_get_member,"lime_jni_get_member");
	HX_MARK_MEMBER_NAME(JNIMemberField_obj::lime_jni_set_member,"lime_jni_set_member");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNIMemberField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JNIMemberField_obj::lime_jni_get_member,"lime_jni_get_member");
	HX_VISIT_MEMBER_NAME(JNIMemberField_obj::lime_jni_set_member,"lime_jni_set_member");
};

#endif

Class JNIMemberField_obj::__mClass;

void JNIMemberField_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.utils.JNIMemberField"), hx::TCanCast< JNIMemberField_obj> ,sStaticFields,sMemberFields,
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

void JNIMemberField_obj::__boot()
{
	lime_jni_get_member= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_jni_get_member"),(int)2);
	lime_jni_set_member= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_jni_set_member"),(int)3);
}

} // end namespace openfl
} // end namespace utils
