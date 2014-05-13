#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_replay_MouseRecord
#include <flixel/system/replay/MouseRecord.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace system{
namespace replay{

Void MouseRecord_obj::__construct(int X,int Y,int Button,int Wheel)
{
HX_STACK_FRAME("flixel.system.replay.MouseRecord","new",0xbd087b2e,"flixel.system.replay.MouseRecord.new","flixel/system/replay/MouseRecord.hx",28,0x6a00bda3)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Button,"Button")
HX_STACK_ARG(Wheel,"Wheel")
{
	HX_STACK_LINE(29)
	super::__construct(null(),null());
	HX_STACK_LINE(30)
	this->set(X,Y);
	HX_STACK_LINE(32)
	this->button = Button;
	HX_STACK_LINE(33)
	this->wheel = Wheel;
}
;
	return null();
}

//MouseRecord_obj::~MouseRecord_obj() { }

Dynamic MouseRecord_obj::__CreateEmpty() { return  new MouseRecord_obj; }
hx::ObjectPtr< MouseRecord_obj > MouseRecord_obj::__new(int X,int Y,int Button,int Wheel)
{  hx::ObjectPtr< MouseRecord_obj > result = new MouseRecord_obj();
	result->__construct(X,Y,Button,Wheel);
	return result;}

Dynamic MouseRecord_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseRecord_obj > result = new MouseRecord_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


MouseRecord_obj::MouseRecord_obj()
{
}

Dynamic MouseRecord_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { return wheel; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MouseRecord_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { wheel=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseRecord_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("button"));
	outFields->push(HX_CSTRING("wheel"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MouseRecord_obj,button),HX_CSTRING("button")},
	{hx::fsInt,(int)offsetof(MouseRecord_obj,wheel),HX_CSTRING("wheel")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("button"),
	HX_CSTRING("wheel"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseRecord_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseRecord_obj::__mClass,"__mClass");
};

#endif

Class MouseRecord_obj::__mClass;

void MouseRecord_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.replay.MouseRecord"), hx::TCanCast< MouseRecord_obj> ,sStaticFields,sMemberFields,
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

void MouseRecord_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace replay
