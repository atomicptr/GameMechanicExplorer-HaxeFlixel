#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
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

Void FlxGroup_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("flixel.group.FlxGroup","new",0x4f47f260,"flixel.group.FlxGroup.new","flixel/group/FlxGroup.hx",14,0x1e89d58e)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(14)
	super::__construct(MaxSize);
}
;
	return null();
}

//FlxGroup_obj::~FlxGroup_obj() { }

Dynamic FlxGroup_obj::__CreateEmpty() { return  new FlxGroup_obj; }
hx::ObjectPtr< FlxGroup_obj > FlxGroup_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< FlxGroup_obj > result = new FlxGroup_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic FlxGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGroup_obj > result = new FlxGroup_obj();
	result->__construct(inArgs[0]);
	return result;}

bool FlxGroup_obj::overlaps( Dynamic Callback,::flixel::group::FlxTypedGroup Group,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.group.FlxGroup","overlaps",0x63fb710c,"flixel.group.FlxGroup.overlaps","flixel/group/FlxGroup.hx",23,0x1e89d58e)
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(Group,"Group")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(24)
	bool result = false;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(25)
	if (((Group != null()))){
		HX_STACK_LINE(27)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(28)
		int l = Group->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(29)
		::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(31)
		while((true)){
			HX_STACK_LINE(31)
			if ((!(((i < l))))){
				HX_STACK_LINE(31)
				break;
			}
			HX_STACK_LINE(33)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(33)
			::flixel::FlxBasic _g1 = Group->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(33)
			basic = _g1;
			HX_STACK_LINE(35)
			if (((  (((basic != null()))) ? bool(Callback(basic,X,Y,InScreenSpace,Camera).Cast< bool >()) : bool(false) ))){
				HX_STACK_LINE(37)
				result = true;
				HX_STACK_LINE(38)
				break;
			}
		}
	}
	HX_STACK_LINE(42)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGroup_obj,overlaps,return )

::flixel::group::FlxTypedGroup FlxGroup_obj::resolveGroup( ::flixel::FlxBasic ObjectOrGroup){
	HX_STACK_FRAME("flixel.group.FlxGroup","resolveGroup",0xe8f196b3,"flixel.group.FlxGroup.resolveGroup","flixel/group/FlxGroup.hx",49,0x1e89d58e)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_LINE(50)
	::flixel::group::FlxTypedGroup group = null();		HX_STACK_VAR(group,"group");
	HX_STACK_LINE(51)
	if (((bool((ObjectOrGroup->collisionType == (int)4)) || bool((ObjectOrGroup->collisionType == (int)2))))){
		HX_STACK_LINE(54)
		if (((ObjectOrGroup->collisionType == (int)2))){
			HX_STACK_LINE(56)
			group = ObjectOrGroup;
		}
		else{
			HX_STACK_LINE(58)
			if (((ObjectOrGroup->collisionType == (int)4))){
				HX_STACK_LINE(60)
				group = (hx::TCast< flixel::group::FlxSpriteGroup >::cast(ObjectOrGroup))->group;
			}
		}
	}
	HX_STACK_LINE(63)
	return group;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxGroup_obj,resolveGroup,return )


FlxGroup_obj::FlxGroup_obj()
{
}

Dynamic FlxGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resolveGroup") ) { return resolveGroup_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGroup_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("overlaps"),
	HX_CSTRING("resolveGroup"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGroup_obj::__mClass,"__mClass");
};

#endif

Class FlxGroup_obj::__mClass;

void FlxGroup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.group.FlxGroup"), hx::TCanCast< FlxGroup_obj> ,sStaticFields,sMemberFields,
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

void FlxGroup_obj::__boot()
{
}

} // end namespace flixel
} // end namespace group
