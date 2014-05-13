#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadMotion
#include <flixel/tweens/motion/QuadMotion.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace tweens{
namespace motion{

Void QuadMotion_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.motion.QuadMotion","new",0xf59e5933,"flixel.tweens.motion.QuadMotion.new","flixel/tweens/motion/QuadMotion.hx",9,0x8023a31c)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(23)
	this->_controlY = (int)0;
	HX_STACK_LINE(22)
	this->_controlX = (int)0;
	HX_STACK_LINE(21)
	this->_toY = (int)0;
	HX_STACK_LINE(20)
	this->_toX = (int)0;
	HX_STACK_LINE(19)
	this->_fromY = (int)0;
	HX_STACK_LINE(18)
	this->_fromX = (int)0;
	HX_STACK_LINE(17)
	this->_distance = (int)-1;
	HX_STACK_LINE(9)
	super::__construct(Options);
}
;
	return null();
}

//QuadMotion_obj::~QuadMotion_obj() { }

Dynamic QuadMotion_obj::__CreateEmpty() { return  new QuadMotion_obj; }
hx::ObjectPtr< QuadMotion_obj > QuadMotion_obj::__new(Dynamic Options)
{  hx::ObjectPtr< QuadMotion_obj > result = new QuadMotion_obj();
	result->__construct(Options);
	return result;}

Dynamic QuadMotion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuadMotion_obj > result = new QuadMotion_obj();
	result->__construct(inArgs[0]);
	return result;}

::flixel::tweens::motion::QuadMotion QuadMotion_obj::setMotion( Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.motion.QuadMotion","setMotion",0xe116648b,"flixel.tweens.motion.QuadMotion.setMotion","flixel/tweens/motion/QuadMotion.hx",38,0x8023a31c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(ControlX,"ControlX")
	HX_STACK_ARG(ControlY,"ControlY")
	HX_STACK_ARG(ToX,"ToX")
	HX_STACK_ARG(ToY,"ToY")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
{
		HX_STACK_LINE(39)
		this->_distance = (int)-1;
		HX_STACK_LINE(40)
		Float _g = this->_fromX = FromX;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		this->x = _g;
		HX_STACK_LINE(41)
		Float _g1 = this->_fromY = FromY;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(41)
		this->y = _g1;
		HX_STACK_LINE(42)
		this->_controlX = ControlX;
		HX_STACK_LINE(43)
		this->_controlY = ControlY;
		HX_STACK_LINE(44)
		this->_toX = ToX;
		HX_STACK_LINE(45)
		this->_toY = ToY;
		HX_STACK_LINE(47)
		if ((UseDuration)){
			HX_STACK_LINE(49)
			this->duration = DurationOrSpeed;
		}
		else{
			HX_STACK_LINE(53)
			Float _g2 = this->get_distance();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(53)
			Float _g3 = (Float(_g2) / Float(DurationOrSpeed));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(53)
			this->duration = _g3;
		}
		HX_STACK_LINE(56)
		this->start();
		HX_STACK_LINE(58)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC8(QuadMotion_obj,setMotion,return )

Void QuadMotion_obj::update( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.QuadMotion","update",0xec780316,"flixel.tweens.motion.QuadMotion.update","flixel/tweens/motion/QuadMotion.hx",62,0x8023a31c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(63)
		this->super::update();
		HX_STACK_LINE(64)
		this->x = ((((this->_fromX * (((int)1 - this->scale))) * (((int)1 - this->scale))) + (((this->_controlX * (int)2) * (((int)1 - this->scale))) * this->scale)) + ((this->_toX * this->scale) * this->scale));
		HX_STACK_LINE(65)
		this->y = ((((this->_fromY * (((int)1 - this->scale))) * (((int)1 - this->scale))) + (((this->_controlY * (int)2) * (((int)1 - this->scale))) * this->scale)) + ((this->_toY * this->scale) * this->scale));
		HX_STACK_LINE(66)
		if ((this->finished)){
			HX_STACK_LINE(68)
			this->postUpdate();
		}
	}
return null();
}


Float QuadMotion_obj::get_distance( ){
	HX_STACK_FRAME("flixel.tweens.motion.QuadMotion","get_distance",0x3f988c0b,"flixel.tweens.motion.QuadMotion.get_distance","flixel/tweens/motion/QuadMotion.hx",73,0x8023a31c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	if (((this->_distance >= (int)0))){
		HX_STACK_LINE(74)
		return this->_distance;
	}
	HX_STACK_LINE(75)
	::flixel::util::FlxPoint a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(75)
	{
		HX_STACK_LINE(75)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(75)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(75)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(75)
		point->_inPool = false;
		HX_STACK_LINE(75)
		a = point;
	}
	HX_STACK_LINE(76)
	::flixel::util::FlxPoint b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(76)
	{
		HX_STACK_LINE(76)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(76)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(76)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(76)
		point->_inPool = false;
		HX_STACK_LINE(76)
		b = point;
	}
	HX_STACK_LINE(77)
	a->set_x(((this->x - ((int)2 * this->_controlX)) + this->_toX));
	HX_STACK_LINE(78)
	a->set_y(((this->y - ((int)2 * this->_controlY)) + this->_toY));
	HX_STACK_LINE(79)
	b->set_x((((int)2 * this->_controlX) - ((int)2 * this->x)));
	HX_STACK_LINE(80)
	b->set_y((((int)2 * this->_controlY) - ((int)2 * this->y)));
	HX_STACK_LINE(81)
	Float A = ((int)4 * (((a->x * a->x) + (a->y * a->y))));		HX_STACK_VAR(A,"A");
	HX_STACK_LINE(82)
	Float B = ((int)4 * (((a->x * b->x) + (a->y * b->y))));		HX_STACK_VAR(B,"B");
	HX_STACK_LINE(83)
	Float C = ((b->x * b->x) + (b->y * b->y));		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(84)
	Float _g = ::Math_obj::sqrt(((A + B) + C));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(84)
	Float ABC = ((int)2 * _g);		HX_STACK_VAR(ABC,"ABC");
	HX_STACK_LINE(85)
	Float A2 = ::Math_obj::sqrt(A);		HX_STACK_VAR(A2,"A2");
	HX_STACK_LINE(86)
	Float A32 = (((int)2 * A) * A2);		HX_STACK_VAR(A32,"A32");
	HX_STACK_LINE(87)
	Float _g1 = ::Math_obj::sqrt(C);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(87)
	Float C2 = ((int)2 * _g1);		HX_STACK_VAR(C2,"C2");
	HX_STACK_LINE(88)
	Float BA = (Float(B) / Float(A2));		HX_STACK_VAR(BA,"BA");
	HX_STACK_LINE(90)
	a->put();
	HX_STACK_LINE(91)
	b->put();
	HX_STACK_LINE(93)
	Float _g2 = ::Math_obj::log((Float((((((int)2 * A2) + BA) + ABC))) / Float(((BA + C2)))));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(93)
	Float _g3 = ((((((int)4 * C) * A) - (B * B))) * _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(93)
	Float _g4 = (((A32 * ABC) + ((A2 * B) * ((ABC - C2)))) + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(93)
	return (Float(_g4) / Float((((int)4 * A32))));
}


HX_DEFINE_DYNAMIC_FUNC0(QuadMotion_obj,get_distance,return )


QuadMotion_obj::QuadMotion_obj()
{
}

Dynamic QuadMotion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_toX") ) { return _toX; }
		if (HX_FIELD_EQ(inName,"_toY") ) { return _toY; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { return _fromX; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { return _fromY; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return get_distance(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { return _distance; }
		if (HX_FIELD_EQ(inName,"_controlX") ) { return _controlX; }
		if (HX_FIELD_EQ(inName,"_controlY") ) { return _controlY; }
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_distance") ) { return get_distance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QuadMotion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_toX") ) { _toX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toY") ) { _toY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { _fromX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { _fromY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { _distance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_controlX") ) { _controlX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_controlY") ) { _controlY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QuadMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("distance"));
	outFields->push(HX_CSTRING("_distance"));
	outFields->push(HX_CSTRING("_fromX"));
	outFields->push(HX_CSTRING("_fromY"));
	outFields->push(HX_CSTRING("_toX"));
	outFields->push(HX_CSTRING("_toY"));
	outFields->push(HX_CSTRING("_controlX"));
	outFields->push(HX_CSTRING("_controlY"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(QuadMotion_obj,_distance),HX_CSTRING("_distance")},
	{hx::fsFloat,(int)offsetof(QuadMotion_obj,_fromX),HX_CSTRING("_fromX")},
	{hx::fsFloat,(int)offsetof(QuadMotion_obj,_fromY),HX_CSTRING("_fromY")},
	{hx::fsFloat,(int)offsetof(QuadMotion_obj,_toX),HX_CSTRING("_toX")},
	{hx::fsFloat,(int)offsetof(QuadMotion_obj,_toY),HX_CSTRING("_toY")},
	{hx::fsFloat,(int)offsetof(QuadMotion_obj,_controlX),HX_CSTRING("_controlX")},
	{hx::fsFloat,(int)offsetof(QuadMotion_obj,_controlY),HX_CSTRING("_controlY")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_distance"),
	HX_CSTRING("_fromX"),
	HX_CSTRING("_fromY"),
	HX_CSTRING("_toX"),
	HX_CSTRING("_toY"),
	HX_CSTRING("_controlX"),
	HX_CSTRING("_controlY"),
	HX_CSTRING("setMotion"),
	HX_CSTRING("update"),
	HX_CSTRING("get_distance"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuadMotion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadMotion_obj::__mClass,"__mClass");
};

#endif

Class QuadMotion_obj::__mClass;

void QuadMotion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.motion.QuadMotion"), hx::TCanCast< QuadMotion_obj> ,sStaticFields,sMemberFields,
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

void QuadMotion_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion
