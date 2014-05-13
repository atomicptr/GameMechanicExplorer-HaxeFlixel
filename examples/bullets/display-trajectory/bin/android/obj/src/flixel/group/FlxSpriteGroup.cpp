#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
namespace flixel{
namespace group{

Void FlxSpriteGroup_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_MaxSize)
{
HX_STACK_FRAME("flixel.group.FlxSpriteGroup","new",0xc2837adb,"flixel.group.FlxSpriteGroup.new","flixel/group/FlxSpriteGroup.hx",17,0xeb1fa7f3)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_MaxSize,"MaxSize")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int MaxSize = __o_MaxSize.Default(0);
{
	HX_STACK_LINE(18)
	super::__construct(X,Y,null());
	HX_STACK_LINE(19)
	this->group->set_maxSize(MaxSize);
}
;
	return null();
}

//FlxSpriteGroup_obj::~FlxSpriteGroup_obj() { }

Dynamic FlxSpriteGroup_obj::__CreateEmpty() { return  new FlxSpriteGroup_obj; }
hx::ObjectPtr< FlxSpriteGroup_obj > FlxSpriteGroup_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_MaxSize)
{  hx::ObjectPtr< FlxSpriteGroup_obj > result = new FlxSpriteGroup_obj();
	result->__construct(__o_X,__o_Y,__o_MaxSize);
	return result;}

Dynamic FlxSpriteGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSpriteGroup_obj > result = new FlxSpriteGroup_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


FlxSpriteGroup_obj::FlxSpriteGroup_obj()
{
}

Dynamic FlxSpriteGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSpriteGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSpriteGroup_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSpriteGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSpriteGroup_obj::__mClass,"__mClass");
};

#endif

Class FlxSpriteGroup_obj::__mClass;

void FlxSpriteGroup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.group.FlxSpriteGroup"), hx::TCanCast< FlxSpriteGroup_obj> ,sStaticFields,sMemberFields,
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

void FlxSpriteGroup_obj::__boot()
{
}

} // end namespace flixel
} // end namespace group
