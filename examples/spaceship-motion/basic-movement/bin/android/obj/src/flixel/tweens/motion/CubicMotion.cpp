#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#include <flixel/tweens/motion/CubicMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
namespace flixel{
namespace tweens{
namespace motion{

Void CubicMotion_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.motion.CubicMotion","new",0x5990902e,"flixel.tweens.motion.CubicMotion.new","flixel/tweens/motion/CubicMotion.hx",9,0x44d248a3)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(21)
	this->_tt = (int)0;
	HX_STACK_LINE(20)
	this->_ttt = (int)0;
	HX_STACK_LINE(19)
	this->_bY = (int)0;
	HX_STACK_LINE(18)
	this->_bX = (int)0;
	HX_STACK_LINE(17)
	this->_aY = (int)0;
	HX_STACK_LINE(16)
	this->_aX = (int)0;
	HX_STACK_LINE(15)
	this->_toY = (int)0;
	HX_STACK_LINE(14)
	this->_toX = (int)0;
	HX_STACK_LINE(13)
	this->_fromY = (int)0;
	HX_STACK_LINE(12)
	this->_fromX = (int)0;
	HX_STACK_LINE(9)
	super::__construct(Options);
}
;
	return null();
}

//CubicMotion_obj::~CubicMotion_obj() { }

Dynamic CubicMotion_obj::__CreateEmpty() { return  new CubicMotion_obj; }
hx::ObjectPtr< CubicMotion_obj > CubicMotion_obj::__new(Dynamic Options)
{  hx::ObjectPtr< CubicMotion_obj > result = new CubicMotion_obj();
	result->__construct(Options);
	return result;}

Dynamic CubicMotion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CubicMotion_obj > result = new CubicMotion_obj();
	result->__construct(inArgs[0]);
	return result;}

::flixel::tweens::motion::CubicMotion CubicMotion_obj::setMotion( Float fromX,Float fromY,Float aX,Float aY,Float bX,Float bY,Float toX,Float toY,Float duration){
	HX_STACK_FRAME("flixel.tweens.motion.CubicMotion","setMotion",0x132089c6,"flixel.tweens.motion.CubicMotion.setMotion","flixel/tweens/motion/CubicMotion.hx",37,0x44d248a3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fromX,"fromX")
	HX_STACK_ARG(fromY,"fromY")
	HX_STACK_ARG(aX,"aX")
	HX_STACK_ARG(aY,"aY")
	HX_STACK_ARG(bX,"bX")
	HX_STACK_ARG(bY,"bY")
	HX_STACK_ARG(toX,"toX")
	HX_STACK_ARG(toY,"toY")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_LINE(38)
	Float _g = this->_fromX = fromX;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(38)
	this->x = _g;
	HX_STACK_LINE(39)
	Float _g1 = this->_fromY = fromY;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(39)
	this->y = _g1;
	HX_STACK_LINE(40)
	this->_aX = aX;
	HX_STACK_LINE(41)
	this->_aY = aY;
	HX_STACK_LINE(42)
	this->_bX = bX;
	HX_STACK_LINE(43)
	this->_bY = bY;
	HX_STACK_LINE(44)
	this->_toX = toX;
	HX_STACK_LINE(45)
	this->_toY = toY;
	HX_STACK_LINE(46)
	this->duration = duration;
	HX_STACK_LINE(47)
	this->start();
	HX_STACK_LINE(48)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC9(CubicMotion_obj,setMotion,return )

Void CubicMotion_obj::update( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.CubicMotion","update",0x63341afb,"flixel.tweens.motion.CubicMotion.update","flixel/tweens/motion/CubicMotion.hx",52,0x44d248a3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		this->super::update();
		HX_STACK_LINE(54)
		this->x = ((((((this->scale * this->scale) * this->scale) * (((this->_toX + ((int)3 * ((this->_aX - this->_bX)))) - this->_fromX))) + ((((int)3 * this->scale) * this->scale) * (((this->_fromX - ((int)2 * this->_aX)) + this->_bX)))) + (((int)3 * this->scale) * ((this->_aX - this->_fromX)))) + this->_fromX);
		HX_STACK_LINE(55)
		this->y = ((((((this->scale * this->scale) * this->scale) * (((this->_toY + ((int)3 * ((this->_aY - this->_bY)))) - this->_fromY))) + ((((int)3 * this->scale) * this->scale) * (((this->_fromY - ((int)2 * this->_aY)) + this->_bY)))) + (((int)3 * this->scale) * ((this->_aY - this->_fromY)))) + this->_fromY);
		HX_STACK_LINE(56)
		if ((this->finished)){
			HX_STACK_LINE(58)
			this->postUpdate();
		}
	}
return null();
}



CubicMotion_obj::CubicMotion_obj()
{
}

Dynamic CubicMotion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_aX") ) { return _aX; }
		if (HX_FIELD_EQ(inName,"_aY") ) { return _aY; }
		if (HX_FIELD_EQ(inName,"_bX") ) { return _bX; }
		if (HX_FIELD_EQ(inName,"_bY") ) { return _bY; }
		if (HX_FIELD_EQ(inName,"_tt") ) { return _tt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_toX") ) { return _toX; }
		if (HX_FIELD_EQ(inName,"_toY") ) { return _toY; }
		if (HX_FIELD_EQ(inName,"_ttt") ) { return _ttt; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { return _fromX; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { return _fromY; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CubicMotion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_aX") ) { _aX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_aY") ) { _aY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bX") ) { _bX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bY") ) { _bY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tt") ) { _tt=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_toX") ) { _toX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toY") ) { _toY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ttt") ) { _ttt=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { _fromX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { _fromY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CubicMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_fromX"));
	outFields->push(HX_CSTRING("_fromY"));
	outFields->push(HX_CSTRING("_toX"));
	outFields->push(HX_CSTRING("_toY"));
	outFields->push(HX_CSTRING("_aX"));
	outFields->push(HX_CSTRING("_aY"));
	outFields->push(HX_CSTRING("_bX"));
	outFields->push(HX_CSTRING("_bY"));
	outFields->push(HX_CSTRING("_ttt"));
	outFields->push(HX_CSTRING("_tt"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_fromX),HX_CSTRING("_fromX")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_fromY),HX_CSTRING("_fromY")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_toX),HX_CSTRING("_toX")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_toY),HX_CSTRING("_toY")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_aX),HX_CSTRING("_aX")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_aY),HX_CSTRING("_aY")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_bX),HX_CSTRING("_bX")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_bY),HX_CSTRING("_bY")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_ttt),HX_CSTRING("_ttt")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_tt),HX_CSTRING("_tt")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_fromX"),
	HX_CSTRING("_fromY"),
	HX_CSTRING("_toX"),
	HX_CSTRING("_toY"),
	HX_CSTRING("_aX"),
	HX_CSTRING("_aY"),
	HX_CSTRING("_bX"),
	HX_CSTRING("_bY"),
	HX_CSTRING("_ttt"),
	HX_CSTRING("_tt"),
	HX_CSTRING("setMotion"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubicMotion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubicMotion_obj::__mClass,"__mClass");
};

#endif

Class CubicMotion_obj::__mClass;

void CubicMotion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.motion.CubicMotion"), hx::TCanCast< CubicMotion_obj> ,sStaticFields,sMemberFields,
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

void CubicMotion_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion
