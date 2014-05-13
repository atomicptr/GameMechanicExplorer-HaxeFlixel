#include <hxcpp.h>

#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
namespace flixel{
namespace animation{

Void FlxBaseAnimation_obj::__construct(::flixel::animation::FlxAnimationController Parent,::String Name)
{
HX_STACK_FRAME("flixel.animation.FlxBaseAnimation","new",0x893a9def,"flixel.animation.FlxBaseAnimation.new","flixel/animation/FlxBaseAnimation.hx",10,0x062a9a5f)
HX_STACK_THIS(this)
HX_STACK_ARG(Parent,"Parent")
HX_STACK_ARG(Name,"Name")
{
	HX_STACK_LINE(26)
	this->curIndex = (int)0;
	HX_STACK_LINE(42)
	this->parent = Parent;
	HX_STACK_LINE(43)
	this->name = Name;
}
;
	return null();
}

//FlxBaseAnimation_obj::~FlxBaseAnimation_obj() { }

Dynamic FlxBaseAnimation_obj::__CreateEmpty() { return  new FlxBaseAnimation_obj; }
hx::ObjectPtr< FlxBaseAnimation_obj > FlxBaseAnimation_obj::__new(::flixel::animation::FlxAnimationController Parent,::String Name)
{  hx::ObjectPtr< FlxBaseAnimation_obj > result = new FlxBaseAnimation_obj();
	result->__construct(Parent,Name);
	return result;}

Dynamic FlxBaseAnimation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBaseAnimation_obj > result = new FlxBaseAnimation_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *FlxBaseAnimation_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

int FlxBaseAnimation_obj::set_curIndex( int Value){
	HX_STACK_FRAME("flixel.animation.FlxBaseAnimation","set_curIndex",0x05c5f580,"flixel.animation.FlxBaseAnimation.set_curIndex","flixel/animation/FlxBaseAnimation.hx",29,0x062a9a5f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(30)
	this->curIndex = Value;
	HX_STACK_LINE(32)
	if (((bool((this->parent != null())) && bool((this->parent->_curAnim == hx::ObjectPtr<OBJ_>(this)))))){
		HX_STACK_LINE(34)
		this->parent->set_frameIndex(Value);
	}
	HX_STACK_LINE(37)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseAnimation_obj,set_curIndex,return )

Void FlxBaseAnimation_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.animation.FlxBaseAnimation","destroy",0x93a46e09,"flixel.animation.FlxBaseAnimation.destroy","flixel/animation/FlxBaseAnimation.hx",47,0x062a9a5f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		this->parent = null();
		HX_STACK_LINE(49)
		this->name = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseAnimation_obj,destroy,(void))

Void FlxBaseAnimation_obj::update( ){
{
		HX_STACK_FRAME("flixel.animation.FlxBaseAnimation","update",0xf1225bda,"flixel.animation.FlxBaseAnimation.update","flixel/animation/FlxBaseAnimation.hx",52,0x062a9a5f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseAnimation_obj,update,(void))

::flixel::animation::FlxBaseAnimation FlxBaseAnimation_obj::clone( ::flixel::animation::FlxAnimationController Parent){
	HX_STACK_FRAME("flixel.animation.FlxBaseAnimation","clone",0xf2c3a2ac,"flixel.animation.FlxBaseAnimation.clone","flixel/animation/FlxBaseAnimation.hx",56,0x062a9a5f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Parent,"Parent")
	HX_STACK_LINE(56)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseAnimation_obj,clone,return )


FlxBaseAnimation_obj::FlxBaseAnimation_obj()
{
}

void FlxBaseAnimation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseAnimation);
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(curIndex,"curIndex");
	HX_MARK_END_CLASS();
}

void FlxBaseAnimation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(curIndex,"curIndex");
}

Dynamic FlxBaseAnimation_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curIndex") ) { return curIndex; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_curIndex") ) { return set_curIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBaseAnimation_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::flixel::animation::FlxAnimationController >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curIndex") ) { if (inCallProp) return set_curIndex(inValue);curIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBaseAnimation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("curIndex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::animation::FlxAnimationController*/ ,(int)offsetof(FlxBaseAnimation_obj,parent),HX_CSTRING("parent")},
	{hx::fsString,(int)offsetof(FlxBaseAnimation_obj,name),HX_CSTRING("name")},
	{hx::fsInt,(int)offsetof(FlxBaseAnimation_obj,curIndex),HX_CSTRING("curIndex")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("parent"),
	HX_CSTRING("name"),
	HX_CSTRING("curIndex"),
	HX_CSTRING("set_curIndex"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBaseAnimation_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBaseAnimation_obj::__mClass,"__mClass");
};

#endif

Class FlxBaseAnimation_obj::__mClass;

void FlxBaseAnimation_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.animation.FlxBaseAnimation"), hx::TCanCast< FlxBaseAnimation_obj> ,sStaticFields,sMemberFields,
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

void FlxBaseAnimation_obj::__boot()
{
}

} // end namespace flixel
} // end namespace animation
