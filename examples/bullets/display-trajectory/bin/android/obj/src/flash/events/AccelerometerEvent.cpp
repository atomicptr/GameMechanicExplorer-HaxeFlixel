#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_events_AccelerometerEvent
#include <flash/events/AccelerometerEvent.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
namespace flash{
namespace events{

Void AccelerometerEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_timestamp,hx::Null< Float >  __o_accelerationX,hx::Null< Float >  __o_accelerationY,hx::Null< Float >  __o_accelerationZ)
{
HX_STACK_FRAME("flash.events.AccelerometerEvent","new",0x44ad90d4,"flash.events.AccelerometerEvent.new","flash/events/AccelerometerEvent.hx",18,0x8544fefc)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_timestamp,"timestamp")
HX_STACK_ARG(__o_accelerationX,"accelerationX")
HX_STACK_ARG(__o_accelerationY,"accelerationY")
HX_STACK_ARG(__o_accelerationZ,"accelerationZ")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
Float timestamp = __o_timestamp.Default(0);
Float accelerationX = __o_accelerationX.Default(0);
Float accelerationY = __o_accelerationY.Default(0);
Float accelerationZ = __o_accelerationZ.Default(0);
{
	HX_STACK_LINE(20)
	super::__construct(type,bubbles,cancelable);
	HX_STACK_LINE(22)
	this->timestamp = timestamp;
	HX_STACK_LINE(23)
	this->accelerationX = accelerationX;
	HX_STACK_LINE(24)
	this->accelerationY = accelerationY;
	HX_STACK_LINE(25)
	this->accelerationZ = accelerationZ;
}
;
	return null();
}

//AccelerometerEvent_obj::~AccelerometerEvent_obj() { }

Dynamic AccelerometerEvent_obj::__CreateEmpty() { return  new AccelerometerEvent_obj; }
hx::ObjectPtr< AccelerometerEvent_obj > AccelerometerEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_timestamp,hx::Null< Float >  __o_accelerationX,hx::Null< Float >  __o_accelerationY,hx::Null< Float >  __o_accelerationZ)
{  hx::ObjectPtr< AccelerometerEvent_obj > result = new AccelerometerEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable,__o_timestamp,__o_accelerationX,__o_accelerationY,__o_accelerationZ);
	return result;}

Dynamic AccelerometerEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AccelerometerEvent_obj > result = new AccelerometerEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

::flash::events::Event AccelerometerEvent_obj::clone( ){
	HX_STACK_FRAME("flash.events.AccelerometerEvent","clone",0xa704d8d1,"flash.events.AccelerometerEvent.clone","flash/events/AccelerometerEvent.hx",30,0x8544fefc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	::String _g = this->get_type();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(32)
	bool _g1 = this->get_bubbles();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(32)
	bool _g2 = this->get_cancelable();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(32)
	return ::flash::events::AccelerometerEvent_obj::__new(_g,_g1,_g2,this->timestamp,this->accelerationX,this->accelerationY,this->accelerationZ);
}


::String AccelerometerEvent_obj::toString( ){
	HX_STACK_FRAME("flash.events.AccelerometerEvent","toString",0x7822ebb8,"flash.events.AccelerometerEvent.toString","flash/events/AccelerometerEvent.hx",37,0x8544fefc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	::String _g = this->get_type();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(39)
	::String _g1 = (HX_CSTRING("[AccelerometerEvent type=") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(39)
	::String _g2 = (_g1 + HX_CSTRING(" bubbles="));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(39)
	bool _g3 = this->get_bubbles();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(39)
	::String _g4 = ::Std_obj::string(_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(39)
	::String _g5 = (_g2 + _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(39)
	::String _g6 = (_g5 + HX_CSTRING(" cancelable="));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(39)
	bool _g7 = this->get_cancelable();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(39)
	::String _g8 = ::Std_obj::string(_g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(39)
	::String _g9 = (_g6 + _g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(39)
	::String _g10 = (_g9 + HX_CSTRING(" timestamp="));		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(39)
	::String _g11 = (_g10 + this->timestamp);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(39)
	::String _g12 = (_g11 + HX_CSTRING(" accelerationX="));		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(39)
	::String _g13 = (_g12 + this->accelerationX);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(39)
	::String _g14 = (_g13 + HX_CSTRING(" accelerationY="));		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(39)
	::String _g15 = (_g14 + this->accelerationY);		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(39)
	::String _g16 = (_g15 + HX_CSTRING(" accelerationZ="));		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(39)
	::String _g17 = (_g16 + this->accelerationZ);		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(39)
	return (_g17 + HX_CSTRING("]"));
}


::String AccelerometerEvent_obj::UPDATE;


AccelerometerEvent_obj::AccelerometerEvent_obj()
{
}

Dynamic AccelerometerEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"UPDATE") ) { return UPDATE; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { return timestamp; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"accelerationX") ) { return accelerationX; }
		if (HX_FIELD_EQ(inName,"accelerationY") ) { return accelerationY; }
		if (HX_FIELD_EQ(inName,"accelerationZ") ) { return accelerationZ; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AccelerometerEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"UPDATE") ) { UPDATE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { timestamp=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"accelerationX") ) { accelerationX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"accelerationY") ) { accelerationY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"accelerationZ") ) { accelerationZ=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AccelerometerEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("accelerationX"));
	outFields->push(HX_CSTRING("accelerationY"));
	outFields->push(HX_CSTRING("accelerationZ"));
	outFields->push(HX_CSTRING("timestamp"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("UPDATE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(AccelerometerEvent_obj,accelerationX),HX_CSTRING("accelerationX")},
	{hx::fsFloat,(int)offsetof(AccelerometerEvent_obj,accelerationY),HX_CSTRING("accelerationY")},
	{hx::fsFloat,(int)offsetof(AccelerometerEvent_obj,accelerationZ),HX_CSTRING("accelerationZ")},
	{hx::fsFloat,(int)offsetof(AccelerometerEvent_obj,timestamp),HX_CSTRING("timestamp")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("accelerationX"),
	HX_CSTRING("accelerationY"),
	HX_CSTRING("accelerationZ"),
	HX_CSTRING("timestamp"),
	HX_CSTRING("clone"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AccelerometerEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AccelerometerEvent_obj::UPDATE,"UPDATE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AccelerometerEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AccelerometerEvent_obj::UPDATE,"UPDATE");
};

#endif

Class AccelerometerEvent_obj::__mClass;

void AccelerometerEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.events.AccelerometerEvent"), hx::TCanCast< AccelerometerEvent_obj> ,sStaticFields,sMemberFields,
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

void AccelerometerEvent_obj::__boot()
{
}

} // end namespace flash
} // end namespace events
