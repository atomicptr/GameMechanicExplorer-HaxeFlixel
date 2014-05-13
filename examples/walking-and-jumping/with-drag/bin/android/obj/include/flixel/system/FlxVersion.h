#ifndef INCLUDED_flixel_system_FlxVersion
#define INCLUDED_flixel_system_FlxVersion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,system,FlxVersion)
namespace flixel{
namespace system{


class HXCPP_CLASS_ATTRIBUTES  FlxVersion_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxVersion_obj OBJ_;
		FlxVersion_obj();
		Void __construct(int Major,int Minor,int Patch,::String __o_PatchVersion);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxVersion_obj > __new(int Major,int Minor,int Patch,::String __o_PatchVersion);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxVersion_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxVersion"); }

		int major;
		int minor;
		int patch;
		::String patchVersion;
		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxVersion */ 
