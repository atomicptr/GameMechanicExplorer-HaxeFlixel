#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#define INCLUDED_flixel_group_FlxSpriteGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/group/FlxTypedSpriteGroup.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxSpriteGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
namespace flixel{
namespace group{


class HXCPP_CLASS_ATTRIBUTES  FlxSpriteGroup_obj : public ::flixel::group::FlxTypedSpriteGroup_obj{
	public:
		typedef ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef FlxSpriteGroup_obj OBJ_;
		FlxSpriteGroup_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxSpriteGroup_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSpriteGroup_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxSpriteGroup"); }

};

} // end namespace flixel
} // end namespace group

#endif /* INCLUDED_flixel_group_FlxSpriteGroup */ 
