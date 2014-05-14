#include <hxcpp.h>

#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
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
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxRect
#include <flixel/util/FlxPool_flixel_util_FlxRect.h>
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

Void FlxRect_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{
HX_STACK_FRAME("flixel.util.FlxRect","new",0xa3a9426e,"flixel.util.FlxRect.new","flixel/util/FlxRect.hx",11,0x4d61f922)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(__o_Height,"Height")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
{
	HX_STACK_LINE(54)
	this->_inPool = false;
	HX_STACK_LINE(58)
	this->x = X;
	HX_STACK_LINE(58)
	this->y = Y;
	HX_STACK_LINE(58)
	this->width = Width;
	HX_STACK_LINE(58)
	this->height = Height;
	HX_STACK_LINE(58)
	hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//FlxRect_obj::~FlxRect_obj() { }

Dynamic FlxRect_obj::__CreateEmpty() { return  new FlxRect_obj; }
hx::ObjectPtr< FlxRect_obj > FlxRect_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{  hx::ObjectPtr< FlxRect_obj > result = new FlxRect_obj();
	result->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return result;}

Dynamic FlxRect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxRect_obj > result = new FlxRect_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

hx::Object *FlxRect_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxPooled_obj)) return operator ::flixel::interfaces::IFlxPooled_obj *();
	return super::__ToInterface(inType);
}

Void FlxRect_obj::put( ){
{
		HX_STACK_FRAME("flixel.util.FlxRect","put",0xa3aad4dd,"flixel.util.FlxRect.put","flixel/util/FlxRect.hx",66,0x4d61f922)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		if ((!(this->_inPool))){
			HX_STACK_LINE(68)
			this->_inPool = true;
			HX_STACK_LINE(69)
			::flixel::util::FlxRect_obj::_pool->putUnsafe(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,put,(void))

::flixel::util::FlxRect FlxRect_obj::setSize( Float Width,Float Height){
	HX_STACK_FRAME("flixel.util.FlxRect","setSize",0x416a7291,"flixel.util.FlxRect.setSize","flixel/util/FlxRect.hx",80,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_LINE(81)
	this->width = Width;
	HX_STACK_LINE(82)
	this->height = Height;
	HX_STACK_LINE(83)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxRect_obj,setSize,return )

::flixel::util::FlxRect FlxRect_obj::set( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
	HX_STACK_FRAME("flixel.util.FlxRect","set",0xa3ad0db0,"flixel.util.FlxRect.set","flixel/util/FlxRect.hx",96,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
{
		HX_STACK_LINE(97)
		this->x = X;
		HX_STACK_LINE(98)
		this->y = Y;
		HX_STACK_LINE(99)
		this->width = Width;
		HX_STACK_LINE(100)
		this->height = Height;
		HX_STACK_LINE(101)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxRect_obj,set,return )

::flixel::util::FlxRect FlxRect_obj::copyFrom( ::flixel::util::FlxRect Rect){
	HX_STACK_FRAME("flixel.util.FlxRect","copyFrom",0x390d66f1,"flixel.util.FlxRect.copyFrom","flixel/util/FlxRect.hx",111,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Rect,"Rect")
	HX_STACK_LINE(112)
	this->x = Rect->x;
	HX_STACK_LINE(113)
	this->y = Rect->y;
	HX_STACK_LINE(114)
	this->width = Rect->width;
	HX_STACK_LINE(115)
	this->height = Rect->height;
	HX_STACK_LINE(116)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyFrom,return )

::flixel::util::FlxRect FlxRect_obj::copyTo( ::flixel::util::FlxRect Rect){
	HX_STACK_FRAME("flixel.util.FlxRect","copyTo",0x8c91e742,"flixel.util.FlxRect.copyTo","flixel/util/FlxRect.hx",126,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Rect,"Rect")
	HX_STACK_LINE(127)
	Rect->x = this->x;
	HX_STACK_LINE(128)
	Rect->y = this->y;
	HX_STACK_LINE(129)
	Rect->width = this->width;
	HX_STACK_LINE(130)
	Rect->height = this->height;
	HX_STACK_LINE(131)
	return Rect;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyTo,return )

::flixel::util::FlxRect FlxRect_obj::copyFromFlash( ::flash::geom::Rectangle FlashRect){
	HX_STACK_FRAME("flixel.util.FlxRect","copyFromFlash",0x305c74ff,"flixel.util.FlxRect.copyFromFlash","flixel/util/FlxRect.hx",141,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FlashRect,"FlashRect")
	HX_STACK_LINE(142)
	this->x = FlashRect->x;
	HX_STACK_LINE(143)
	this->y = FlashRect->y;
	HX_STACK_LINE(144)
	this->width = FlashRect->width;
	HX_STACK_LINE(145)
	this->height = FlashRect->height;
	HX_STACK_LINE(146)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyFromFlash,return )

::flash::geom::Rectangle FlxRect_obj::copyToFlash( ::flash::geom::Rectangle FlashRect){
	HX_STACK_FRAME("flixel.util.FlxRect","copyToFlash",0xaf702f0e,"flixel.util.FlxRect.copyToFlash","flixel/util/FlxRect.hx",156,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FlashRect,"FlashRect")
	HX_STACK_LINE(157)
	FlashRect->x = this->x;
	HX_STACK_LINE(158)
	FlashRect->y = this->y;
	HX_STACK_LINE(159)
	FlashRect->width = this->width;
	HX_STACK_LINE(160)
	FlashRect->height = this->height;
	HX_STACK_LINE(161)
	return FlashRect;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyToFlash,return )

bool FlxRect_obj::overlaps( ::flixel::util::FlxRect Rect){
	HX_STACK_FRAME("flixel.util.FlxRect","overlaps",0xb5d72e3e,"flixel.util.FlxRect.overlaps","flixel/util/FlxRect.hx",172,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Rect,"Rect")
	HX_STACK_LINE(172)
	return (bool((bool((bool(((Rect->x + Rect->width) > this->x)) && bool((Rect->x < (this->x + this->width))))) && bool(((Rect->y + Rect->height) > this->y)))) && bool((Rect->y < (this->y + this->height))));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,overlaps,return )

bool FlxRect_obj::containsFlxPoint( ::flixel::util::FlxPoint Point){
	HX_STACK_FRAME("flixel.util.FlxRect","containsFlxPoint",0x8d30acef,"flixel.util.FlxRect.containsFlxPoint","flixel/util/FlxRect.hx",183,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Point,"Point")
	HX_STACK_LINE(183)
	return ::flixel::util::FlxMath_obj::pointInFlxRect(Point->x,Point->y,hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,containsFlxPoint,return )

::flixel::util::FlxRect FlxRect_obj::_union( ::flixel::util::FlxRect Rect){
	HX_STACK_FRAME("flixel.util.FlxRect","union",0xe007f69d,"flixel.util.FlxRect.union","flixel/util/FlxRect.hx",194,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Rect,"Rect")
	HX_STACK_LINE(195)
	Float minX = ::Math_obj::min(this->x,Rect->x);		HX_STACK_VAR(minX,"minX");
	HX_STACK_LINE(196)
	Float minY = ::Math_obj::min(this->y,Rect->y);		HX_STACK_VAR(minY,"minY");
	HX_STACK_LINE(197)
	Float maxX = ::Math_obj::max((this->x + this->width),(Rect->x + Rect->width));		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(198)
	Float maxY = ::Math_obj::max((this->y + this->height),(Rect->y + Rect->height));		HX_STACK_VAR(maxY,"maxY");
	HX_STACK_LINE(200)
	this->x = minX;
	HX_STACK_LINE(200)
	this->y = minY;
	HX_STACK_LINE(200)
	this->width = (maxX - minX);
	HX_STACK_LINE(200)
	this->height = (maxY - minY);
	HX_STACK_LINE(200)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,_union,return )

Void FlxRect_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.FlxRect","destroy",0x5418be08,"flixel.util.FlxRect.destroy","flixel/util/FlxRect.hx",206,0x4d61f922)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,destroy,(void))

::String FlxRect_obj::toString( ){
	HX_STACK_FRAME("flixel.util.FlxRect","toString",0xa91b2bde,"flixel.util.FlxRect.toString","flixel/util/FlxRect.hx",212,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_LINE(214)
	::flixel::util::LabelValuePair _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(214)
	{
		HX_STACK_LINE(214)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(214)
		_this->label = HX_CSTRING("x");
		HX_STACK_LINE(214)
		_this->value = this->x;
		HX_STACK_LINE(214)
		_g = _this;
	}
	HX_STACK_LINE(215)
	::flixel::util::LabelValuePair _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(215)
	{
		HX_STACK_LINE(215)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(215)
		_this->label = HX_CSTRING("y");
		HX_STACK_LINE(215)
		_this->value = this->y;
		HX_STACK_LINE(215)
		_g1 = _this;
	}
	HX_STACK_LINE(216)
	::flixel::util::LabelValuePair _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(216)
	{
		HX_STACK_LINE(216)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(216)
		_this->label = HX_CSTRING("w");
		HX_STACK_LINE(216)
		_this->value = this->width;
		HX_STACK_LINE(216)
		_g2 = _this;
	}
	HX_STACK_LINE(217)
	::flixel::util::LabelValuePair _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(217)
	{
		HX_STACK_LINE(217)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(217)
		_this->label = HX_CSTRING("h");
		HX_STACK_LINE(217)
		_this->value = this->height;
		HX_STACK_LINE(217)
		_g3 = _this;
	}
	HX_STACK_LINE(213)
	Array< ::Dynamic > _g4 = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2).Add(_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(213)
	return ::flixel::util::FlxStringUtil_obj::getDebugString(_g4);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,toString,return )

Float FlxRect_obj::get_left( ){
	HX_STACK_FRAME("flixel.util.FlxRect","get_left",0x38171ec2,"flixel.util.FlxRect.get_left","flixel/util/FlxRect.hx",222,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_LINE(222)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_left,return )

Float FlxRect_obj::set_left( Float Value){
	HX_STACK_FRAME("flixel.util.FlxRect","set_left",0xe6747836,"flixel.util.FlxRect.set_left","flixel/util/FlxRect.hx",226,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(227)
	hx::SubEq(this->width,(Value - this->x));
	HX_STACK_LINE(228)
	return this->x = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_left,return )

Float FlxRect_obj::get_right( ){
	HX_STACK_FRAME("flixel.util.FlxRect","get_right",0x5330d8c1,"flixel.util.FlxRect.get_right","flixel/util/FlxRect.hx",233,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_LINE(233)
	return (this->x + this->width);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_right,return )

Float FlxRect_obj::set_right( Float Value){
	HX_STACK_FRAME("flixel.util.FlxRect","set_right",0x3681c4cd,"flixel.util.FlxRect.set_right","flixel/util/FlxRect.hx",237,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(238)
	this->width = (Value - this->x);
	HX_STACK_LINE(239)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_right,return )

Float FlxRect_obj::get_top( ){
	HX_STACK_FRAME("flixel.util.FlxRect","get_top",0x565fc03a,"flixel.util.FlxRect.get_top","flixel/util/FlxRect.hx",244,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_LINE(244)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_top,return )

Float FlxRect_obj::set_top( Float Value){
	HX_STACK_FRAME("flixel.util.FlxRect","set_top",0x49615146,"flixel.util.FlxRect.set_top","flixel/util/FlxRect.hx",248,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(249)
	hx::SubEq(this->height,(Value - this->y));
	HX_STACK_LINE(250)
	return this->y = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_top,return )

Float FlxRect_obj::get_bottom( ){
	HX_STACK_FRAME("flixel.util.FlxRect","get_bottom",0x8edf6266,"flixel.util.FlxRect.get_bottom","flixel/util/FlxRect.hx",255,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_LINE(255)
	return (this->y + this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_bottom,return )

Float FlxRect_obj::set_bottom( Float Value){
	HX_STACK_FRAME("flixel.util.FlxRect","set_bottom",0x925d00da,"flixel.util.FlxRect.set_bottom","flixel/util/FlxRect.hx",259,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(260)
	this->height = (Value - this->y);
	HX_STACK_LINE(261)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_bottom,return )

::flixel::util::FlxPool_flixel_util_FlxRect FlxRect_obj::_pool;

::flixel::util::FlxRect FlxRect_obj::get( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
	HX_STACK_FRAME("flixel.util.FlxRect","get",0xa3a3f2a4,"flixel.util.FlxRect.get","flixel/util/FlxRect.hx",23,0x4d61f922)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
{
		HX_STACK_LINE(24)
		::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(24)
			_this->x = X;
			HX_STACK_LINE(24)
			_this->y = Y;
			HX_STACK_LINE(24)
			_this->width = Width;
			HX_STACK_LINE(24)
			_this->height = Height;
			HX_STACK_LINE(24)
			rect = _this;
		}
		HX_STACK_LINE(25)
		rect->_inPool = false;
		HX_STACK_LINE(26)
		return rect;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxRect_obj,get,return )


FlxRect_obj::FlxRect_obj()
{
}

Dynamic FlxRect_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"top") ) { return get_top(); }
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return get_left(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { return _pool; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"right") ) { return get_right(); }
		if (HX_FIELD_EQ(inName,"union") ) { return _union_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"bottom") ) { return get_bottom(); }
		if (HX_FIELD_EQ(inName,"copyTo") ) { return copyTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_inPool") ) { return _inPool; }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return get_top_dyn(); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return set_top_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return set_left_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return set_right_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return set_bottom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyToFlash") ) { return copyToFlash_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyFromFlash") ) { return copyFromFlash_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"containsFlxPoint") ) { return containsFlxPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxRect_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return set_top(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return set_left(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=inValue.Cast< ::flixel::util::FlxPool_flixel_util_FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right") ) { return set_right(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottom") ) { return set_bottom(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_inPool") ) { _inPool=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxRect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("top"));
	outFields->push(HX_CSTRING("bottom"));
	outFields->push(HX_CSTRING("_inPool"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_pool"),
	HX_CSTRING("get"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxRect_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(FlxRect_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(FlxRect_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(FlxRect_obj,height),HX_CSTRING("height")},
	{hx::fsBool,(int)offsetof(FlxRect_obj,_inPool),HX_CSTRING("_inPool")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("_inPool"),
	HX_CSTRING("put"),
	HX_CSTRING("setSize"),
	HX_CSTRING("set"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("copyTo"),
	HX_CSTRING("copyFromFlash"),
	HX_CSTRING("copyToFlash"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("containsFlxPoint"),
	HX_CSTRING("union"),
	HX_CSTRING("destroy"),
	HX_CSTRING("toString"),
	HX_CSTRING("get_left"),
	HX_CSTRING("set_left"),
	HX_CSTRING("get_right"),
	HX_CSTRING("set_right"),
	HX_CSTRING("get_top"),
	HX_CSTRING("set_top"),
	HX_CSTRING("get_bottom"),
	HX_CSTRING("set_bottom"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRect_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxRect_obj::_pool,"_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRect_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxRect_obj::_pool,"_pool");
};

#endif

Class FlxRect_obj::__mClass;

void FlxRect_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxRect"), hx::TCanCast< FlxRect_obj> ,sStaticFields,sMemberFields,
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

void FlxRect_obj::__boot()
{
	_pool= ::flixel::util::FlxPool_flixel_util_FlxRect_obj::__new(hx::ClassOf< ::flixel::util::FlxRect >());
}

} // end namespace flixel
} // end namespace util
