#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void FlxGamepadButton_obj::__construct(int ID,hx::Null< int >  __o_Current,hx::Null< int >  __o_Last)
{
HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadButton","new",0xa97275d6,"flixel.input.gamepad.FlxGamepadButton.new","flixel/input/gamepad/FlxGamepadButton.hx",14,0xa176f377)
HX_STACK_THIS(this)
HX_STACK_ARG(ID,"ID")
HX_STACK_ARG(__o_Current,"Current")
HX_STACK_ARG(__o_Last,"Last")
int Current = __o_Current.Default(0);
int Last = __o_Last.Default(0);
{
	HX_STACK_LINE(15)
	this->id = ID;
	HX_STACK_LINE(16)
	this->current = Current;
	HX_STACK_LINE(17)
	this->last = Last;
}
;
	return null();
}

//FlxGamepadButton_obj::~FlxGamepadButton_obj() { }

Dynamic FlxGamepadButton_obj::__CreateEmpty() { return  new FlxGamepadButton_obj; }
hx::ObjectPtr< FlxGamepadButton_obj > FlxGamepadButton_obj::__new(int ID,hx::Null< int >  __o_Current,hx::Null< int >  __o_Last)
{  hx::ObjectPtr< FlxGamepadButton_obj > result = new FlxGamepadButton_obj();
	result->__construct(ID,__o_Current,__o_Last);
	return result;}

Dynamic FlxGamepadButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepadButton_obj > result = new FlxGamepadButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void FlxGamepadButton_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadButton","reset",0x10f3b8c5,"flixel.input.gamepad.FlxGamepadButton.reset","flixel/input/gamepad/FlxGamepadButton.hx",21,0xa176f377)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		this->current = (int)0;
		HX_STACK_LINE(23)
		this->last = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButton_obj,reset,(void))

Void FlxGamepadButton_obj::release( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadButton","release",0xf80b1e3d,"flixel.input.gamepad.FlxGamepadButton.release","flixel/input/gamepad/FlxGamepadButton.hx",27,0xa176f377)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		this->last = this->current;
		HX_STACK_LINE(38)
		if (((this->current > (int)0))){
			HX_STACK_LINE(40)
			this->current = (int)-1;
		}
		else{
			HX_STACK_LINE(44)
			this->current = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButton_obj,release,(void))

Void FlxGamepadButton_obj::press( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadButton","press",0xf2b3c279,"flixel.input.gamepad.FlxGamepadButton.press","flixel/input/gamepad/FlxGamepadButton.hx",49,0xa176f377)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		this->last = this->current;
		HX_STACK_LINE(60)
		if (((this->current > (int)0))){
			HX_STACK_LINE(62)
			this->current = (int)1;
		}
		else{
			HX_STACK_LINE(66)
			this->current = (int)2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButton_obj,press,(void))


FlxGamepadButton_obj::FlxGamepadButton_obj()
{
}

Dynamic FlxGamepadButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"press") ) { return press_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		if (HX_FIELD_EQ(inName,"release") ) { return release_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepadButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("current"));
	outFields->push(HX_CSTRING("last"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxGamepadButton_obj,id),HX_CSTRING("id")},
	{hx::fsInt,(int)offsetof(FlxGamepadButton_obj,current),HX_CSTRING("current")},
	{hx::fsInt,(int)offsetof(FlxGamepadButton_obj,last),HX_CSTRING("last")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("current"),
	HX_CSTRING("last"),
	HX_CSTRING("reset"),
	HX_CSTRING("release"),
	HX_CSTRING("press"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadButton_obj::__mClass,"__mClass");
};

#endif

Class FlxGamepadButton_obj::__mClass;

void FlxGamepadButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.gamepad.FlxGamepadButton"), hx::TCanCast< FlxGamepadButton_obj> ,sStaticFields,sMemberFields,
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

void FlxGamepadButton_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
