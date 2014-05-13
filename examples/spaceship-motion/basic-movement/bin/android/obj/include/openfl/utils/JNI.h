#ifndef INCLUDED_openfl_utils_JNI
#define INCLUDED_openfl_utils_JNI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,utils,JNI)
HX_DECLARE_CLASS2(openfl,utils,JNIMemberField)
HX_DECLARE_CLASS2(openfl,utils,JNIStaticField)
namespace openfl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  JNI_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JNI_obj OBJ_;
		JNI_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< JNI_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JNI_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("JNI"); }

		static ::haxe::ds::StringMap alreadyCreated;
		static ::String base64;
		static bool initialized;
		static Dynamic callMember( Dynamic method,Dynamic jobject,Dynamic a);
		static Dynamic callMember_dyn();

		static Dynamic callStatic( Dynamic method,Dynamic a);
		static Dynamic callStatic_dyn();

		static Dynamic createInterface( Dynamic haxeClass,::String className,::String classDef);
		static Dynamic createInterface_dyn();

		static ::openfl::utils::JNIMemberField createMemberField( ::String className,::String memberName,::String signature);
		static Dynamic createMemberField_dyn();

		static Dynamic createMemberMethod( ::String className,::String memberName,::String signature,hx::Null< bool >  useArray,hx::Null< bool >  quietFail);
		static Dynamic createMemberMethod_dyn();

		static ::openfl::utils::JNIStaticField createStaticField( ::String className,::String memberName,::String signature);
		static Dynamic createStaticField_dyn();

		static Dynamic createStaticMethod( ::String className,::String memberName,::String signature,hx::Null< bool >  useArray,hx::Null< bool >  quietFail);
		static Dynamic createStaticMethod_dyn();

		static Dynamic getEnv( );
		static Dynamic getEnv_dyn();

		static Void init( );
		static Dynamic init_dyn();

		static Dynamic onCallback( Dynamic object,Dynamic method,Dynamic args);
		static Dynamic onCallback_dyn();

		static Dynamic lime_jni_create_field;
		static Dynamic &lime_jni_create_field_dyn() { return lime_jni_create_field;}
		static Dynamic lime_jni_create_method;
		static Dynamic &lime_jni_create_method_dyn() { return lime_jni_create_method;}
		static Dynamic lime_jni_get_env;
		static Dynamic &lime_jni_get_env_dyn() { return lime_jni_get_env;}
		static Dynamic lime_jni_call_member;
		static Dynamic lime_jni_call_static;
};

} // end namespace openfl
} // end namespace utils

#endif /* INCLUDED_openfl_utils_JNI */ 
