#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
namespace flixel{
namespace tweens{
namespace motion{

Void Motion_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.motion.Motion","new",0x8c813b8c,"flixel.tweens.motion.Motion.new","flixel/tweens/motion/Motion.hx",10,0xc6c8a363)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(19)
	this->y = (int)0;
	HX_STACK_LINE(15)
	this->x = (int)0;
	HX_STACK_LINE(10)
	super::__construct(Options);
}
;
	return null();
}

//Motion_obj::~Motion_obj() { }

Dynamic Motion_obj::__CreateEmpty() { return  new Motion_obj; }
hx::ObjectPtr< Motion_obj > Motion_obj::__new(Dynamic Options)
{  hx::ObjectPtr< Motion_obj > result = new Motion_obj();
	result->__construct(Options);
	return result;}

Dynamic Motion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Motion_obj > result = new Motion_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Motion_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.Motion","destroy",0x00e69e26,"flixel.tweens.motion.Motion.destroy","flixel/tweens/motion/Motion.hx",24,0xc6c8a363)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		this->super::destroy();
		HX_STACK_LINE(26)
		this->_object = null();
	}
return null();
}


::flixel::tweens::motion::Motion Motion_obj::setObject( ::flixel::FlxObject object){
	HX_STACK_FRAME("flixel.tweens.motion.Motion","setObject",0x7f27082d,"flixel.tweens.motion.Motion.setObject","flixel/tweens/motion/Motion.hx",30,0xc6c8a363)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(31)
	this->_object = object;
	HX_STACK_LINE(32)
	this->_object->set_immovable(true);
	HX_STACK_LINE(33)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Motion_obj,setObject,return )

Void Motion_obj::update( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.Motion","update",0xebe25e5d,"flixel.tweens.motion.Motion.update","flixel/tweens/motion/Motion.hx",37,0xc6c8a363)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::update();
		HX_STACK_LINE(39)
		this->postUpdate();
	}
return null();
}


Void Motion_obj::postUpdate( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.Motion","postUpdate",0xca0f98dd,"flixel.tweens.motion.Motion.postUpdate","flixel/tweens/motion/Motion.hx",44,0xc6c8a363)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		if (((this->_object != null()))){
			HX_STACK_LINE(46)
			this->_object->setPosition(this->x,this->y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Motion_obj,postUpdate,(void))


Motion_obj::Motion_obj()
{
}

void Motion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Motion);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(_object,"_object");
	::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Motion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(_object,"_object");
	::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Motion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { return _object; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setObject") ) { return setObject_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"postUpdate") ) { return postUpdate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Motion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Motion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("_object"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Motion_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Motion_obj,y),HX_CSTRING("y")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(Motion_obj,_object),HX_CSTRING("_object")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("_object"),
	HX_CSTRING("destroy"),
	HX_CSTRING("setObject"),
	HX_CSTRING("update"),
	HX_CSTRING("postUpdate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Motion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Motion_obj::__mClass,"__mClass");
};

#endif

Class Motion_obj::__mClass;

void Motion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.motion.Motion"), hx::TCanCast< Motion_obj> ,sStaticFields,sMemberFields,
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

void Motion_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion
