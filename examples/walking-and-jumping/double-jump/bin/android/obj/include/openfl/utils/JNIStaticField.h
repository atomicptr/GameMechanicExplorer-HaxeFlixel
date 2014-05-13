#ifndef INCLUDED_openfl_utils_JNIStaticField
#define INCLUDED_openfl_utils_JNIStaticField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,utils,JNIStaticField)
namespace openfl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  JNIStaticField_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JNIStaticField_obj OBJ_;
		JNIStaticField_obj();
		Void __construct(Dynamic field);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< JNIStaticField_obj > __new(Dynamic field);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JNIStaticField_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("JNIStaticField"); }

		Dynamic field;
		virtual Dynamic get( );
		Dynamic get_dyn();

		virtual Dynamic set( Dynamic value);
		Dynamic set_dyn();

		static Dynamic lime_jni_get_static;
		static Dynamic &lime_jni_get_static_dyn() { return lime_jni_get_static;}
		static Dynamic lime_jni_set_static;
		static Dynamic &lime_jni_set_static_dyn() { return lime_jni_set_static;}
};

} // end namespace openfl
} // end namespace utils

#endif /* INCLUDED_openfl_utils_JNIStaticField */ 
