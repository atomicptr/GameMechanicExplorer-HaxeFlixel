#include <hxcpp.h>

#ifndef INCLUDED_flash_events_AccelerometerEvent
#include <flash/events/AccelerometerEvent.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_sensors_Accelerometer
#include <flash/sensors/Accelerometer.h>
#endif
#ifndef INCLUDED_flixel_input_FlxAccelerometer
#include <flixel/input/FlxAccelerometer.h>
#endif
namespace flixel{
namespace input{

Void FlxAccelerometer_obj::__construct()
{
HX_STACK_FRAME("flixel.input.FlxAccelerometer","new",0x0d021645,"flixel.input.FlxAccelerometer.new","flixel/input/FlxAccelerometer.hx",10,0x4bc92349)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(26)
	this->z = (int)0;
	HX_STACK_LINE(21)
	this->y = (int)0;
	HX_STACK_LINE(16)
	this->x = (int)0;
	HX_STACK_LINE(37)
	if ((::flash::sensors::Accelerometer_obj::get_isSupported())){
		HX_STACK_LINE(39)
		::flash::sensors::Accelerometer _g = ::flash::sensors::Accelerometer_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		this->_sensor = _g;
		HX_STACK_LINE(40)
		this->_sensor->addEventListener(::flash::events::AccelerometerEvent_obj::UPDATE,this->updateCallback_dyn(),null(),null(),null());
	}
}
;
	return null();
}

//FlxAccelerometer_obj::~FlxAccelerometer_obj() { }

Dynamic FlxAccelerometer_obj::__CreateEmpty() { return  new FlxAccelerometer_obj; }
hx::ObjectPtr< FlxAccelerometer_obj > FlxAccelerometer_obj::__new()
{  hx::ObjectPtr< FlxAccelerometer_obj > result = new FlxAccelerometer_obj();
	result->__construct();
	return result;}

Dynamic FlxAccelerometer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAccelerometer_obj > result = new FlxAccelerometer_obj();
	result->__construct();
	return result;}

bool FlxAccelerometer_obj::get_isSupported( ){
	HX_STACK_FRAME("flixel.input.FlxAccelerometer","get_isSupported",0x551e3de0,"flixel.input.FlxAccelerometer.get_isSupported","flixel/input/FlxAccelerometer.hx",46,0x4bc92349)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	return ::flash::sensors::Accelerometer_obj::get_isSupported();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAccelerometer_obj,get_isSupported,return )

Void FlxAccelerometer_obj::updateCallback( ::flash::events::AccelerometerEvent Event){
{
		HX_STACK_FRAME("flixel.input.FlxAccelerometer","updateCallback",0x130b7729,"flixel.input.FlxAccelerometer.updateCallback","flixel/input/FlxAccelerometer.hx",50,0x4bc92349)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Event,"Event")
		HX_STACK_LINE(52)
		this->x = Event->accelerationX;
		HX_STACK_LINE(53)
		this->y = Event->accelerationY;
		HX_STACK_LINE(54)
		this->z = Event->accelerationZ;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAccelerometer_obj,updateCallback,(void))


FlxAccelerometer_obj::FlxAccelerometer_obj()
{
}

void FlxAccelerometer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAccelerometer);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(_sensor,"_sensor");
	HX_MARK_END_CLASS();
}

void FlxAccelerometer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(_sensor,"_sensor");
}

Dynamic FlxAccelerometer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sensor") ) { return _sensor; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { return get_isSupported(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateCallback") ) { return updateCallback_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isSupported") ) { return get_isSupported_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAccelerometer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sensor") ) { _sensor=inValue.Cast< ::flash::sensors::Accelerometer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAccelerometer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("z"));
	outFields->push(HX_CSTRING("isSupported"));
	outFields->push(HX_CSTRING("_sensor"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxAccelerometer_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(FlxAccelerometer_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(FlxAccelerometer_obj,z),HX_CSTRING("z")},
	{hx::fsObject /*::flash::sensors::Accelerometer*/ ,(int)offsetof(FlxAccelerometer_obj,_sensor),HX_CSTRING("_sensor")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("z"),
	HX_CSTRING("_sensor"),
	HX_CSTRING("get_isSupported"),
	HX_CSTRING("updateCallback"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAccelerometer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAccelerometer_obj::__mClass,"__mClass");
};

#endif

Class FlxAccelerometer_obj::__mClass;

void FlxAccelerometer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.FlxAccelerometer"), hx::TCanCast< FlxAccelerometer_obj> ,sStaticFields,sMemberFields,
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

void FlxAccelerometer_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
