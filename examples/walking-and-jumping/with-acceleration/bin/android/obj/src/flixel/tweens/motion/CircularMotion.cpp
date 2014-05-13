#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#include <flixel/tweens/motion/CircularMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace tweens{
namespace motion{

Void CircularMotion_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.motion.CircularMotion","new",0xf11036cb,"flixel.tweens.motion.CircularMotion.new","flixel/tweens/motion/CircularMotion.hx",8,0x4765ac04)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(25)
	this->_angleFinish = (int)0;
	HX_STACK_LINE(24)
	this->_angleStart = (int)0;
	HX_STACK_LINE(23)
	this->_radius = (int)0;
	HX_STACK_LINE(22)
	this->_centerY = (int)0;
	HX_STACK_LINE(21)
	this->_centerX = (int)0;
	HX_STACK_LINE(13)
	this->angle = (int)0;
	HX_STACK_LINE(8)
	super::__construct(Options);
}
;
	return null();
}

//CircularMotion_obj::~CircularMotion_obj() { }

Dynamic CircularMotion_obj::__CreateEmpty() { return  new CircularMotion_obj; }
hx::ObjectPtr< CircularMotion_obj > CircularMotion_obj::__new(Dynamic Options)
{  hx::ObjectPtr< CircularMotion_obj > result = new CircularMotion_obj();
	result->__construct(Options);
	return result;}

Dynamic CircularMotion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CircularMotion_obj > result = new CircularMotion_obj();
	result->__construct(inArgs[0]);
	return result;}

::flixel::tweens::motion::CircularMotion CircularMotion_obj::setMotion( Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.motion.CircularMotion","setMotion",0x3f8a8423,"flixel.tweens.motion.CircularMotion.setMotion","flixel/tweens/motion/CircularMotion.hx",39,0x4765ac04)
	HX_STACK_THIS(this)
	HX_STACK_ARG(CenterX,"CenterX")
	HX_STACK_ARG(CenterY,"CenterY")
	HX_STACK_ARG(Radius,"Radius")
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(Clockwise,"Clockwise")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
{
		HX_STACK_LINE(40)
		this->_centerX = CenterX;
		HX_STACK_LINE(41)
		this->_centerY = CenterY;
		HX_STACK_LINE(42)
		this->_radius = Radius;
		HX_STACK_LINE(43)
		Float _g = this->_angleStart = (Float((Angle * ::Math_obj::PI)) / Float((int)-180));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		this->angle = _g;
		HX_STACK_LINE(44)
		this->_angleFinish = ((::Math_obj::PI * (int)2) * ((  ((Clockwise)) ? int((int)1) : int((int)-1) )));
		HX_STACK_LINE(46)
		if ((UseDuration)){
			HX_STACK_LINE(48)
			this->duration = DurationOrSpeed;
		}
		else{
			HX_STACK_LINE(52)
			this->duration = (Float((this->_radius * ((::Math_obj::PI * (int)2)))) / Float(DurationOrSpeed));
		}
		HX_STACK_LINE(55)
		this->start();
		HX_STACK_LINE(56)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(CircularMotion_obj,setMotion,return )

Void CircularMotion_obj::update( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.CircularMotion","update",0x6646b47e,"flixel.tweens.motion.CircularMotion.update","flixel/tweens/motion/CircularMotion.hx",60,0x4765ac04)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		this->super::update();
		HX_STACK_LINE(62)
		this->angle = (this->_angleStart + (this->_angleFinish * this->scale));
		HX_STACK_LINE(63)
		Float _g = ::Math_obj::cos(this->angle);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		Float _g1 = (_g * this->_radius);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(63)
		Float _g2 = (this->_centerX + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(63)
		this->x = _g2;
		HX_STACK_LINE(64)
		Float _g3 = ::Math_obj::sin(this->angle);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(64)
		Float _g4 = (_g3 * this->_radius);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(64)
		Float _g5 = (this->_centerY + _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(64)
		this->y = _g5;
		HX_STACK_LINE(65)
		if ((this->finished)){
			HX_STACK_LINE(67)
			this->postUpdate();
		}
	}
return null();
}


Float CircularMotion_obj::get_circumference( ){
	HX_STACK_FRAME("flixel.tweens.motion.CircularMotion","get_circumference",0x1cf82811,"flixel.tweens.motion.CircularMotion.get_circumference","flixel/tweens/motion/CircularMotion.hx",73,0x4765ac04)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	return (this->_radius * ((::Math_obj::PI * (int)2)));
}


HX_DEFINE_DYNAMIC_FUNC0(CircularMotion_obj,get_circumference,return )


CircularMotion_obj::CircularMotion_obj()
{
}

Dynamic CircularMotion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_centerX") ) { return _centerX; }
		if (HX_FIELD_EQ(inName,"_centerY") ) { return _centerY; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_angleStart") ) { return _angleStart; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_angleFinish") ) { return _angleFinish; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"circumference") ) { return get_circumference(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_circumference") ) { return get_circumference_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CircularMotion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_centerX") ) { _centerX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_centerY") ) { _centerY=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_angleStart") ) { _angleStart=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_angleFinish") ) { _angleFinish=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CircularMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("circumference"));
	outFields->push(HX_CSTRING("_centerX"));
	outFields->push(HX_CSTRING("_centerY"));
	outFields->push(HX_CSTRING("_radius"));
	outFields->push(HX_CSTRING("_angleStart"));
	outFields->push(HX_CSTRING("_angleFinish"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(CircularMotion_obj,angle),HX_CSTRING("angle")},
	{hx::fsFloat,(int)offsetof(CircularMotion_obj,_centerX),HX_CSTRING("_centerX")},
	{hx::fsFloat,(int)offsetof(CircularMotion_obj,_centerY),HX_CSTRING("_centerY")},
	{hx::fsFloat,(int)offsetof(CircularMotion_obj,_radius),HX_CSTRING("_radius")},
	{hx::fsFloat,(int)offsetof(CircularMotion_obj,_angleStart),HX_CSTRING("_angleStart")},
	{hx::fsFloat,(int)offsetof(CircularMotion_obj,_angleFinish),HX_CSTRING("_angleFinish")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("angle"),
	HX_CSTRING("_centerX"),
	HX_CSTRING("_centerY"),
	HX_CSTRING("_radius"),
	HX_CSTRING("_angleStart"),
	HX_CSTRING("_angleFinish"),
	HX_CSTRING("setMotion"),
	HX_CSTRING("update"),
	HX_CSTRING("get_circumference"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CircularMotion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CircularMotion_obj::__mClass,"__mClass");
};

#endif

Class CircularMotion_obj::__mClass;

void CircularMotion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.motion.CircularMotion"), hx::TCanCast< CircularMotion_obj> ,sStaticFields,sMemberFields,
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

void CircularMotion_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion
