#ifndef INCLUDED_flixel_group_FlxGroup
#define INCLUDED_flixel_group_FlxGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/group/FlxTypedGroup.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
namespace flixel{
namespace group{


class HXCPP_CLASS_ATTRIBUTES  FlxGroup_obj : public ::flixel::group::FlxTypedGroup_obj{
	public:
		typedef ::flixel::group::FlxTypedGroup_obj super;
		typedef FlxGroup_obj OBJ_;
		FlxGroup_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxGroup_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxGroup_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxGroup"); }

		static bool overlaps( Dynamic Callback,::flixel::group::FlxTypedGroup Group,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera);
		static Dynamic overlaps_dyn();

		static ::flixel::group::FlxTypedGroup resolveGroup( ::flixel::FlxBasic ObjectOrGroup);
		static Dynamic resolveGroup_dyn();

};

} // end namespace flixel
} // end namespace group

#endif /* INCLUDED_flixel_group_FlxGroup */ 
