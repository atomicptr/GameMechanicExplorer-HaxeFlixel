#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearMotion
#include <flixel/tweens/motion/LinearMotion.h>
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

Void LinearMotion_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.motion.LinearMotion","new",0x1860e4d1,"flixel.tweens.motion.LinearMotion.new","flixel/tweens/motion/LinearMotion.hx",9,0x15b892fe)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(21)
	this->_distance = (int)-1;
	HX_STACK_LINE(20)
	this->_moveY = (int)0;
	HX_STACK_LINE(19)
	this->_moveX = (int)0;
	HX_STACK_LINE(18)
	this->_fromY = (int)0;
	HX_STACK_LINE(17)
	this->_fromX = (int)0;
	HX_STACK_LINE(9)
	super::__construct(Options);
}
;
	return null();
}

//LinearMotion_obj::~LinearMotion_obj() { }

Dynamic LinearMotion_obj::__CreateEmpty() { return  new LinearMotion_obj; }
hx::ObjectPtr< LinearMotion_obj > LinearMotion_obj::__new(Dynamic Options)
{  hx::ObjectPtr< LinearMotion_obj > result = new LinearMotion_obj();
	result->__construct(Options);
	return result;}

Dynamic LinearMotion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LinearMotion_obj > result = new LinearMotion_obj();
	result->__construct(inArgs[0]);
	return result;}

::flixel::tweens::motion::LinearMotion LinearMotion_obj::setMotion( Float FromX,Float FromY,Float ToX,Float ToY,Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.motion.LinearMotion","setMotion",0x53127aa9,"flixel.tweens.motion.LinearMotion.setMotion","flixel/tweens/motion/LinearMotion.hx",34,0x15b892fe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(ToX,"ToX")
	HX_STACK_ARG(ToY,"ToY")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
{
		HX_STACK_LINE(35)
		this->_distance = (int)-1;
		HX_STACK_LINE(36)
		Float _g = this->_fromX = FromX;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		this->x = _g;
		HX_STACK_LINE(37)
		Float _g1 = this->_fromY = FromY;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(37)
		this->y = _g1;
		HX_STACK_LINE(38)
		this->_moveX = (ToX - FromX);
		HX_STACK_LINE(39)
		this->_moveY = (ToY - FromY);
		HX_STACK_LINE(41)
		if ((UseDuration)){
			HX_STACK_LINE(43)
			this->duration = DurationOrSpeed;
		}
		else{
			HX_STACK_LINE(47)
			Float _g2 = this->get_distance();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(47)
			Float _g3 = (Float(_g2) / Float(DurationOrSpeed));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(47)
			this->duration = _g3;
		}
		HX_STACK_LINE(50)
		this->start();
		HX_STACK_LINE(52)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(LinearMotion_obj,setMotion,return )

Void LinearMotion_obj::update( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.LinearMotion","update",0xb80e0e38,"flixel.tweens.motion.LinearMotion.update","flixel/tweens/motion/LinearMotion.hx",56,0x15b892fe)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		this->super::update();
		HX_STACK_LINE(58)
		this->x = (this->_fromX + (this->_moveX * this->scale));
		HX_STACK_LINE(59)
		this->y = (this->_fromY + (this->_moveY * this->scale));
		HX_STACK_LINE(61)
		if (((bool((bool((bool((this->x == (this->_fromX + this->_moveX))) && bool((this->y == (this->_fromY + this->_moveY))))) && bool(this->active))) && bool((this->_secondsSinceStart >= this->duration))))){
			HX_STACK_LINE(64)
			this->finished = true;
		}
		HX_STACK_LINE(66)
		if ((this->finished)){
			HX_STACK_LINE(68)
			this->postUpdate();
		}
	}
return null();
}


Float LinearMotion_obj::get_distance( ){
	HX_STACK_FRAME("flixel.tweens.motion.LinearMotion","get_distance",0xd1a29cad,"flixel.tweens.motion.LinearMotion.get_distance","flixel/tweens/motion/LinearMotion.hx",73,0x15b892fe)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	if (((this->_distance >= (int)0))){
		HX_STACK_LINE(74)
		return this->_distance;
	}
	HX_STACK_LINE(75)
	Float _g = ::Math_obj::sqrt(((this->_moveX * this->_moveX) + (this->_moveY * this->_moveY)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(75)
	return this->_distance = _g;
}


HX_DEFINE_DYNAMIC_FUNC0(LinearMotion_obj,get_distance,return )


LinearMotion_obj::LinearMotion_obj()
{
}

Dynamic LinearMotion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { return _fromX; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { return _fromY; }
		if (HX_FIELD_EQ(inName,"_moveX") ) { return _moveX; }
		if (HX_FIELD_EQ(inName,"_moveY") ) { return _moveY; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return get_distance(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { return _distance; }
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_distance") ) { return get_distance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LinearMotion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { _fromX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { _fromY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveX") ) { _moveX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveY") ) { _moveY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { _distance=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LinearMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("distance"));
	outFields->push(HX_CSTRING("_fromX"));
	outFields->push(HX_CSTRING("_fromY"));
	outFields->push(HX_CSTRING("_moveX"));
	outFields->push(HX_CSTRING("_moveY"));
	outFields->push(HX_CSTRING("_distance"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(LinearMotion_obj,_fromX),HX_CSTRING("_fromX")},
	{hx::fsFloat,(int)offsetof(LinearMotion_obj,_fromY),HX_CSTRING("_fromY")},
	{hx::fsFloat,(int)offsetof(LinearMotion_obj,_moveX),HX_CSTRING("_moveX")},
	{hx::fsFloat,(int)offsetof(LinearMotion_obj,_moveY),HX_CSTRING("_moveY")},
	{hx::fsFloat,(int)offsetof(LinearMotion_obj,_distance),HX_CSTRING("_distance")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_fromX"),
	HX_CSTRING("_fromY"),
	HX_CSTRING("_moveX"),
	HX_CSTRING("_moveY"),
	HX_CSTRING("_distance"),
	HX_CSTRING("setMotion"),
	HX_CSTRING("update"),
	HX_CSTRING("get_distance"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LinearMotion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LinearMotion_obj::__mClass,"__mClass");
};

#endif

Class LinearMotion_obj::__mClass;

void LinearMotion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.motion.LinearMotion"), hx::TCanCast< LinearMotion_obj> ,sStaticFields,sMemberFields,
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

void LinearMotion_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion
