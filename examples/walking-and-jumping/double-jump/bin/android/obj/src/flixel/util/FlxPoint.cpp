#include <hxcpp.h>

#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{

Void FlxPoint_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_FRAME("flixel.util.FlxPoint","new",0xdda8d7ea,"flixel.util.FlxPoint.new","flixel/util/FlxPoint.hx",11,0xb59f5266)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(49)
	this->_inPool = false;
	HX_STACK_LINE(48)
	this->_weak = false;
	HX_STACK_LINE(46)
	this->y = (int)0;
	HX_STACK_LINE(45)
	this->x = (int)0;
	HX_STACK_LINE(53)
	this->set(X,Y);
}
;
	return null();
}

//FlxPoint_obj::~FlxPoint_obj() { }

Dynamic FlxPoint_obj::__CreateEmpty() { return  new FlxPoint_obj; }
hx::ObjectPtr< FlxPoint_obj > FlxPoint_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< FlxPoint_obj > result = new FlxPoint_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic FlxPoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPoint_obj > result = new FlxPoint_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *FlxPoint_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxPooled_obj)) return operator ::flixel::interfaces::IFlxPooled_obj *();
	return super::__ToInterface(inType);
}

Void FlxPoint_obj::put( ){
{
		HX_STACK_FRAME("flixel.util.FlxPoint","put",0xddaa6a59,"flixel.util.FlxPoint.put","flixel/util/FlxPoint.hx",61,0xb59f5266)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		if ((!(this->_inPool))){
			HX_STACK_LINE(63)
			this->_inPool = true;
			HX_STACK_LINE(64)
			::flixel::util::FlxPoint_obj::_pool->putUnsafe(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,put,(void))

Void FlxPoint_obj::putWeak( ){
{
		HX_STACK_FRAME("flixel.util.FlxPoint","putWeak",0xec9f9371,"flixel.util.FlxPoint.putWeak","flixel/util/FlxPoint.hx",73,0xb59f5266)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		if ((this->_weak)){
			HX_STACK_LINE(75)
			::flixel::util::FlxPoint_obj::_pool->put(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,putWeak,(void))

::flixel::util::FlxPoint FlxPoint_obj::set( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.util.FlxPoint","set",0xddaca32c,"flixel.util.FlxPoint.set","flixel/util/FlxPoint.hx",87,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(88)
		this->set_x(X);
		HX_STACK_LINE(89)
		this->set_y(Y);
		HX_STACK_LINE(90)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,set,return )

::flixel::util::FlxPoint FlxPoint_obj::add( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.util.FlxPoint","add",0xdd9ef9ab,"flixel.util.FlxPoint.add","flixel/util/FlxPoint.hx",101,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			::flixel::util::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(102)
			_g->set_x((_g->x + X));
		}
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			::flixel::util::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(103)
			_g->set_y((_g->y + Y));
		}
		HX_STACK_LINE(104)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,add,return )

::flixel::util::FlxPoint FlxPoint_obj::addPoint( ::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.util.FlxPoint","addPoint",0x9b3e3ea5,"flixel.util.FlxPoint.addPoint","flixel/util/FlxPoint.hx",114,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(115)
	{
		HX_STACK_LINE(115)
		::flixel::util::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(115)
		_g->set_x((_g->x + point->x));
	}
	HX_STACK_LINE(116)
	{
		HX_STACK_LINE(116)
		::flixel::util::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(116)
		_g->set_y((_g->y + point->y));
	}
	HX_STACK_LINE(117)
	if ((point->_weak)){
		HX_STACK_LINE(117)
		::flixel::util::FlxPoint_obj::_pool->put(point);
	}
	HX_STACK_LINE(118)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,addPoint,return )

::flixel::util::FlxPoint FlxPoint_obj::subtract( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.util.FlxPoint","subtract",0x5362d94a,"flixel.util.FlxPoint.subtract","flixel/util/FlxPoint.hx",129,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			::flixel::util::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(130)
			_g->set_x((_g->x - X));
		}
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			::flixel::util::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(131)
			_g->set_y((_g->y - Y));
		}
		HX_STACK_LINE(132)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,subtract,return )

::flixel::util::FlxPoint FlxPoint_obj::subtractPoint( ::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.util.FlxPoint","subtractPoint",0x8ad05ea6,"flixel.util.FlxPoint.subtractPoint","flixel/util/FlxPoint.hx",142,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(143)
	{
		HX_STACK_LINE(143)
		::flixel::util::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(143)
		_g->set_x((_g->x - point->x));
	}
	HX_STACK_LINE(144)
	{
		HX_STACK_LINE(144)
		::flixel::util::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(144)
		_g->set_y((_g->y - point->y));
	}
	HX_STACK_LINE(145)
	if ((point->_weak)){
		HX_STACK_LINE(145)
		::flixel::util::FlxPoint_obj::_pool->put(point);
	}
	HX_STACK_LINE(146)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,subtractPoint,return )

::flixel::util::FlxPoint FlxPoint_obj::copyFrom( ::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.util.FlxPoint","copyFrom",0x23b26ff5,"flixel.util.FlxPoint.copyFrom","flixel/util/FlxPoint.hx",156,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(157)
	this->set_x(point->x);
	HX_STACK_LINE(158)
	this->set_y(point->y);
	HX_STACK_LINE(159)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyFrom,return )

::flixel::util::FlxPoint FlxPoint_obj::copyTo( ::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.util.FlxPoint","copyTo",0x2ab3e746,"flixel.util.FlxPoint.copyTo","flixel/util/FlxPoint.hx",169,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(170)
	if (((point == null()))){
		HX_STACK_LINE(172)
		::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(172)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(172)
			::flixel::util::FlxPoint point1 = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(172)
			point1->_inPool = false;
			HX_STACK_LINE(172)
			_g = point1;
		}
		HX_STACK_LINE(172)
		point = _g;
	}
	HX_STACK_LINE(174)
	point->set_x(this->x);
	HX_STACK_LINE(175)
	point->set_y(this->y);
	HX_STACK_LINE(176)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyTo,return )

::flixel::util::FlxPoint FlxPoint_obj::copyFromFlash( ::flash::geom::Point FlashPoint){
	HX_STACK_FRAME("flixel.util.FlxPoint","copyFromFlash",0x5f443d7b,"flixel.util.FlxPoint.copyFromFlash","flixel/util/FlxPoint.hx",186,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FlashPoint,"FlashPoint")
	HX_STACK_LINE(187)
	this->set_x(FlashPoint->x);
	HX_STACK_LINE(188)
	this->set_y(FlashPoint->y);
	HX_STACK_LINE(189)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyFromFlash,return )

::flash::geom::Point FlxPoint_obj::copyToFlash( ::flash::geom::Point FlashPoint){
	HX_STACK_FRAME("flixel.util.FlxPoint","copyToFlash",0x2f7ba08a,"flixel.util.FlxPoint.copyToFlash","flixel/util/FlxPoint.hx",199,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FlashPoint,"FlashPoint")
	HX_STACK_LINE(200)
	FlashPoint->x = this->x;
	HX_STACK_LINE(201)
	FlashPoint->y = this->y;
	HX_STACK_LINE(202)
	return FlashPoint;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyToFlash,return )

bool FlxPoint_obj::inCoords( Float RectX,Float RectY,Float RectWidth,Float RectHeight){
	HX_STACK_FRAME("flixel.util.FlxPoint","inCoords",0xac545219,"flixel.util.FlxPoint.inCoords","flixel/util/FlxPoint.hx",216,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RectX,"RectX")
	HX_STACK_ARG(RectY,"RectY")
	HX_STACK_ARG(RectWidth,"RectWidth")
	HX_STACK_ARG(RectHeight,"RectHeight")
	HX_STACK_LINE(216)
	return ::flixel::util::FlxMath_obj::pointInCoordinates(this->x,this->y,RectX,RectY,RectWidth,RectHeight);
}


HX_DEFINE_DYNAMIC_FUNC4(FlxPoint_obj,inCoords,return )

bool FlxPoint_obj::inFlxRect( ::flixel::util::FlxRect Rect){
	HX_STACK_FRAME("flixel.util.FlxPoint","inFlxRect",0x8096ec5b,"flixel.util.FlxPoint.inFlxRect","flixel/util/FlxPoint.hx",227,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Rect,"Rect")
	HX_STACK_LINE(227)
	return ::flixel::util::FlxMath_obj::pointInFlxRect(this->x,this->y,Rect);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,inFlxRect,return )

Float FlxPoint_obj::distanceTo( ::flixel::util::FlxPoint AnotherPoint){
	HX_STACK_FRAME("flixel.util.FlxPoint","distanceTo",0x698831c6,"flixel.util.FlxPoint.distanceTo","flixel/util/FlxPoint.hx",238,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AnotherPoint,"AnotherPoint")
	HX_STACK_LINE(238)
	Float dx = (this->x - AnotherPoint->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(238)
	Float dy = (this->y - AnotherPoint->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(238)
	if ((this->_weak)){
		HX_STACK_LINE(238)
		::flixel::util::FlxPoint_obj::_pool->put(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(238)
	if ((AnotherPoint->_weak)){
		HX_STACK_LINE(238)
		::flixel::util::FlxPoint_obj::_pool->put(AnotherPoint);
	}
	HX_STACK_LINE(238)
	return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,distanceTo,return )

::flixel::util::FlxPoint FlxPoint_obj::floor( ){
	HX_STACK_FRAME("flixel.util.FlxPoint","floor",0xa4e44fd6,"flixel.util.FlxPoint.floor","flixel/util/FlxPoint.hx",245,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_LINE(246)
	int _g = ::Math_obj::floor(this->x);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(246)
	this->set_x(_g);
	HX_STACK_LINE(247)
	int _g1 = ::Math_obj::floor(this->y);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(247)
	this->set_y(_g1);
	HX_STACK_LINE(248)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,floor,return )

::flixel::util::FlxPoint FlxPoint_obj::ceil( ){
	HX_STACK_FRAME("flixel.util.FlxPoint","ceil",0x0eceb03b,"flixel.util.FlxPoint.ceil","flixel/util/FlxPoint.hx",255,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_LINE(256)
	int _g = ::Math_obj::ceil(this->x);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(256)
	this->set_x(_g);
	HX_STACK_LINE(257)
	int _g1 = ::Math_obj::ceil(this->y);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(257)
	this->set_y(_g1);
	HX_STACK_LINE(258)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,ceil,return )

Void FlxPoint_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.FlxPoint","destroy",0x13b6c184,"flixel.util.FlxPoint.destroy","flixel/util/FlxPoint.hx",264,0xb59f5266)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,destroy,(void))

::String FlxPoint_obj::toString( ){
	HX_STACK_FRAME("flixel.util.FlxPoint","toString",0x93c034e2,"flixel.util.FlxPoint.toString","flixel/util/FlxPoint.hx",270,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_LINE(272)
	::flixel::util::LabelValuePair _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(272)
	{
		HX_STACK_LINE(272)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(272)
		_this->label = HX_CSTRING("x");
		HX_STACK_LINE(272)
		_this->value = this->x;
		HX_STACK_LINE(272)
		_g = _this;
	}
	HX_STACK_LINE(273)
	::flixel::util::LabelValuePair _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(273)
	{
		HX_STACK_LINE(273)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(273)
		_this->label = HX_CSTRING("y");
		HX_STACK_LINE(273)
		_this->value = this->y;
		HX_STACK_LINE(273)
		_g1 = _this;
	}
	HX_STACK_LINE(271)
	Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(271)
	return ::flixel::util::FlxStringUtil_obj::getDebugString(_g2);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,toString,return )

Float FlxPoint_obj::set_x( Float Value){
	HX_STACK_FRAME("flixel.util.FlxPoint","set_x",0x1c7d1965,"flixel.util.FlxPoint.set_x","flixel/util/FlxPoint.hx",281,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(281)
	return this->x = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,set_x,return )

Float FlxPoint_obj::set_y( Float Value){
	HX_STACK_FRAME("flixel.util.FlxPoint","set_y",0x1c7d1966,"flixel.util.FlxPoint.set_y","flixel/util/FlxPoint.hx",289,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(289)
	return this->y = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,set_y,return )

::flixel::util::FlxPool_flixel_util_FlxPoint FlxPoint_obj::_pool;

::flixel::util::FlxPoint FlxPoint_obj::get( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.util.FlxPoint","get",0xdda38820,"flixel.util.FlxPoint.get","flixel/util/FlxPoint.hx",24,0xb59f5266)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(25)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(26)
		point->_inPool = false;
		HX_STACK_LINE(27)
		return point;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,get,return )

::flixel::util::FlxPoint FlxPoint_obj::weak( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.util.FlxPoint","weak",0x1c06edae,"flixel.util.FlxPoint.weak","flixel/util/FlxPoint.hx",39,0xb59f5266)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(40)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(41)
		point->_weak = true;
		HX_STACK_LINE(42)
		return point;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,weak,return )


FlxPoint_obj::FlxPoint_obj()
{
}

Dynamic FlxPoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"weak") ) { return weak_dyn(); }
		if (HX_FIELD_EQ(inName,"ceil") ) { return ceil_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { return _pool; }
		if (HX_FIELD_EQ(inName,"_weak") ) { return _weak; }
		if (HX_FIELD_EQ(inName,"floor") ) { return floor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"copyTo") ) { return copyTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_inPool") ) { return _inPool; }
		if (HX_FIELD_EQ(inName,"putWeak") ) { return putWeak_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addPoint") ) { return addPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"inCoords") ) { return inCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inFlxRect") ) { return inFlxRect_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"distanceTo") ) { return distanceTo_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyToFlash") ) { return copyToFlash_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"subtractPoint") ) { return subtractPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFromFlash") ) { return copyFromFlash_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=inValue.Cast< ::flixel::util::FlxPool_flixel_util_FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_weak") ) { _weak=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_inPool") ) { _inPool=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("_weak"));
	outFields->push(HX_CSTRING("_inPool"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_pool"),
	HX_CSTRING("get"),
	HX_CSTRING("weak"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxPoint_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(FlxPoint_obj,y),HX_CSTRING("y")},
	{hx::fsBool,(int)offsetof(FlxPoint_obj,_weak),HX_CSTRING("_weak")},
	{hx::fsBool,(int)offsetof(FlxPoint_obj,_inPool),HX_CSTRING("_inPool")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("_weak"),
	HX_CSTRING("_inPool"),
	HX_CSTRING("put"),
	HX_CSTRING("putWeak"),
	HX_CSTRING("set"),
	HX_CSTRING("add"),
	HX_CSTRING("addPoint"),
	HX_CSTRING("subtract"),
	HX_CSTRING("subtractPoint"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("copyTo"),
	HX_CSTRING("copyFromFlash"),
	HX_CSTRING("copyToFlash"),
	HX_CSTRING("inCoords"),
	HX_CSTRING("inFlxRect"),
	HX_CSTRING("distanceTo"),
	HX_CSTRING("floor"),
	HX_CSTRING("ceil"),
	HX_CSTRING("destroy"),
	HX_CSTRING("toString"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_y"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPoint_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxPoint_obj::_pool,"_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPoint_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxPoint_obj::_pool,"_pool");
};

#endif

Class FlxPoint_obj::__mClass;

void FlxPoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxPoint"), hx::TCanCast< FlxPoint_obj> ,sStaticFields,sMemberFields,
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

void FlxPoint_obj::__boot()
{
	_pool= ::flixel::util::FlxPool_flixel_util_FlxPoint_obj::__new(hx::ClassOf< ::flixel::util::FlxPoint >());
}

} // end namespace flixel
} // end namespace util
