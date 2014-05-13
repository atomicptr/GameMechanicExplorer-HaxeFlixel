#ifndef INCLUDED_openfl_utils_JNIMethod
#define INCLUDED_openfl_utils_JNIMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,utils,JNIMethod)
namespace openfl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  JNIMethod_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JNIMethod_obj OBJ_;
		JNIMethod_obj();
		Void __construct(Dynamic method);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< JNIMethod_obj > __new(Dynamic method);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JNIMethod_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("JNIMethod"); }

		Dynamic method;
		virtual Dynamic callMember( Dynamic args);
		Dynamic callMember_dyn();

		virtual Dynamic callStatic( Dynamic args);
		Dynamic callStatic_dyn();

		virtual Dynamic getMemberMethod( bool useArray);
		Dynamic getMemberMethod_dyn();

		virtual Dynamic getStaticMethod( bool useArray);
		Dynamic getStaticMethod_dyn();

		static Dynamic lime_jni_call_member;
		static Dynamic &lime_jni_call_member_dyn() { return lime_jni_call_member;}
		static Dynamic lime_jni_call_static;
		static Dynamic &lime_jni_call_static_dyn() { return lime_jni_call_static;}
};

} // end namespace openfl
} // end namespace utils

#endif /* INCLUDED_openfl_utils_JNIMethod */ 
