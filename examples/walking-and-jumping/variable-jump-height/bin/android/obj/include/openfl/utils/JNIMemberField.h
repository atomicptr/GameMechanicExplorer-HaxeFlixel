#ifndef INCLUDED_openfl_utils_JNIMemberField
#define INCLUDED_openfl_utils_JNIMemberField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,utils,JNIMemberField)
namespace openfl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  JNIMemberField_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JNIMemberField_obj OBJ_;
		JNIMemberField_obj();
		Void __construct(Dynamic field);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< JNIMemberField_obj > __new(Dynamic field);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JNIMemberField_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("JNIMemberField"); }

		Dynamic field;
		virtual Dynamic get( Dynamic jobject);
		Dynamic get_dyn();

		virtual Dynamic set( Dynamic jobject,Dynamic value);
		Dynamic set_dyn();

		static Dynamic lime_jni_get_member;
		static Dynamic &lime_jni_get_member_dyn() { return lime_jni_get_member;}
		static Dynamic lime_jni_set_member;
		static Dynamic &lime_jni_set_member_dyn() { return lime_jni_set_member;}
};

} // end namespace openfl
} // end namespace utils

#endif /* INCLUDED_openfl_utils_JNIMemberField */ 
