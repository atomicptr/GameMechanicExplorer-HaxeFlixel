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
#ifndef INCLUDED_flixel_tweens_motion_LinearPath
#include <flixel/tweens/motion/LinearPath.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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

Void LinearPath_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.motion.LinearPath","new",0x6d0ffb80,"flixel.tweens.motion.LinearPath.new","flixel/tweens/motion/LinearPath.hx",11,0x519b896f)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(24)
	this->_index = (int)0;
	HX_STACK_LINE(23)
	this->_speed = (int)0;
	HX_STACK_LINE(16)
	this->distance = (int)0;
	HX_STACK_LINE(33)
	super::__construct(Options);
	HX_STACK_LINE(35)
	this->points = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(36)
	this->_pointD = Array_obj< Float >::__new().Add((int)0);
	HX_STACK_LINE(37)
	this->_pointT = Array_obj< Float >::__new().Add((int)0);
}
;
	return null();
}

//LinearPath_obj::~LinearPath_obj() { }

Dynamic LinearPath_obj::__CreateEmpty() { return  new LinearPath_obj; }
hx::ObjectPtr< LinearPath_obj > LinearPath_obj::__new(Dynamic Options)
{  hx::ObjectPtr< LinearPath_obj > result = new LinearPath_obj();
	result->__construct(Options);
	return result;}

Dynamic LinearPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LinearPath_obj > result = new LinearPath_obj();
	result->__construct(inArgs[0]);
	return result;}

Void LinearPath_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.LinearPath","destroy",0x4706681a,"flixel.tweens.motion.LinearPath.destroy","flixel/tweens/motion/LinearPath.hx",41,0x519b896f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		this->super::destroy();
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(44)
			Array< ::Dynamic > _g1 = this->points;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(44)
			while((true)){
				HX_STACK_LINE(44)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(44)
					break;
				}
				HX_STACK_LINE(44)
				::flixel::util::FlxPoint point = _g1->__get(_g).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(44)
				++(_g);
				HX_STACK_LINE(46)
				::flixel::util::FlxPoint _g2 = ::flixel::util::FlxDestroyUtil_obj::put(point);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(46)
				point = _g2;
			}
		}
		HX_STACK_LINE(48)
		::flixel::util::FlxPoint _g1 = ::flixel::util::FlxDestroyUtil_obj::put(this->_last);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(48)
		this->_last = _g1;
		HX_STACK_LINE(49)
		::flixel::util::FlxPoint _g2 = ::flixel::util::FlxDestroyUtil_obj::put(this->_prevPoint);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(49)
		this->_prevPoint = _g2;
		HX_STACK_LINE(50)
		::flixel::util::FlxPoint _g3 = ::flixel::util::FlxDestroyUtil_obj::put(this->_nextPoint);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(50)
		this->_nextPoint = _g3;
	}
return null();
}


::flixel::tweens::motion::LinearPath LinearPath_obj::setMotion( Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.motion.LinearPath","setMotion",0x1a623e98,"flixel.tweens.motion.LinearPath.setMotion","flixel/tweens/motion/LinearPath.hx",60,0x519b896f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
{
		HX_STACK_LINE(61)
		this->updatePath();
		HX_STACK_LINE(63)
		if ((UseDuration)){
			HX_STACK_LINE(65)
			this->duration = DurationOrSpeed;
			HX_STACK_LINE(66)
			this->_speed = (Float(this->distance) / Float(DurationOrSpeed));
		}
		else{
			HX_STACK_LINE(70)
			this->duration = (Float(this->distance) / Float(DurationOrSpeed));
			HX_STACK_LINE(71)
			this->_speed = DurationOrSpeed;
		}
		HX_STACK_LINE(74)
		hx::TCast< ::flixel::tweens::motion::LinearPath >::cast(this->start());
		HX_STACK_LINE(75)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(LinearPath_obj,setMotion,return )

::flixel::tweens::motion::LinearPath LinearPath_obj::addPoint( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("flixel.tweens.motion.LinearPath","addPoint",0x4da05b4f,"flixel.tweens.motion.LinearPath.addPoint","flixel/tweens/motion/LinearPath.hx",79,0x519b896f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(80)
		if (((this->_last != null()))){
			HX_STACK_LINE(82)
			Float _g = ::Math_obj::sqrt(((((x - this->_last->x)) * ((x - this->_last->x))) + (((y - this->_last->y)) * ((y - this->_last->y)))));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(82)
			hx::AddEq(this->distance,_g);
			HX_STACK_LINE(83)
			this->_pointD[this->points->length] = this->distance;
		}
		HX_STACK_LINE(85)
		::flixel::util::FlxPoint _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(x,y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(85)
			point->_inPool = false;
			HX_STACK_LINE(85)
			_g1 = point;
		}
		HX_STACK_LINE(85)
		this->points[this->points->length] = this->_last = _g1;
		HX_STACK_LINE(86)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(LinearPath_obj,addPoint,return )

::flixel::util::FlxPoint LinearPath_obj::getPoint( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("flixel.tweens.motion.LinearPath","getPoint",0x341a44ba,"flixel.tweens.motion.LinearPath.getPoint","flixel/tweens/motion/LinearPath.hx",90,0x519b896f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(91)
		if (((this->points->length == (int)0))){
			HX_STACK_LINE(93)
			HX_STACK_DO_THROW(HX_CSTRING("No points have been added to the path yet."));
		}
		HX_STACK_LINE(95)
		return this->points->__get(hx::Mod(index,this->points->length)).StaticCast< ::flixel::util::FlxPoint >();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(LinearPath_obj,getPoint,return )

::flixel::tweens::FlxTween LinearPath_obj::start( ){
	HX_STACK_FRAME("flixel.tweens.motion.LinearPath","start",0xb880a782,"flixel.tweens.motion.LinearPath.start","flixel/tweens/motion/LinearPath.hx",99,0x519b896f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(100)
	if ((this->backward)){
		HX_STACK_LINE(100)
		this->_index = (this->points->length - (int)1);
	}
	else{
		HX_STACK_LINE(100)
		this->_index = (int)0;
	}
	HX_STACK_LINE(101)
	this->super::start();
	HX_STACK_LINE(102)
	return hx::ObjectPtr<OBJ_>(this);
}


Void LinearPath_obj::update( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.LinearPath","update",0x391d0ee9,"flixel.tweens.motion.LinearPath.update","flixel/tweens/motion/LinearPath.hx",106,0x519b896f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(107)
		this->super::update();
		HX_STACK_LINE(108)
		Float td;		HX_STACK_VAR(td,"td");
		HX_STACK_LINE(109)
		Float tt;		HX_STACK_VAR(tt,"tt");
		HX_STACK_LINE(111)
		if (((this->points == null()))){
			HX_STACK_LINE(112)
			return null();
		}
		HX_STACK_LINE(114)
		if ((!(this->backward))){
			HX_STACK_LINE(116)
			if (((this->_index < (this->points->length - (int)1)))){
				HX_STACK_LINE(118)
				while((true)){
					HX_STACK_LINE(118)
					if ((!(((this->scale > this->_pointT->__get((this->_index + (int)1))))))){
						HX_STACK_LINE(118)
						break;
					}
					HX_STACK_LINE(120)
					(this->_index)++;
					HX_STACK_LINE(121)
					if (((this->_index == (this->points->length - (int)1)))){
						HX_STACK_LINE(123)
						hx::SubEq(this->_index,(int)1);
						HX_STACK_LINE(124)
						break;
					}
				}
			}
			HX_STACK_LINE(129)
			td = this->_pointT->__get(this->_index);
			HX_STACK_LINE(130)
			tt = (this->_pointT->__get((this->_index + (int)1)) - td);
			HX_STACK_LINE(131)
			td = (Float(((this->scale - td))) / Float(tt));
			HX_STACK_LINE(132)
			this->_prevPoint = this->points->__get(this->_index).StaticCast< ::flixel::util::FlxPoint >();
			HX_STACK_LINE(133)
			this->_nextPoint = this->points->__get((this->_index + (int)1)).StaticCast< ::flixel::util::FlxPoint >();
			HX_STACK_LINE(134)
			this->x = (this->_prevPoint->x + (((this->_nextPoint->x - this->_prevPoint->x)) * td));
			HX_STACK_LINE(135)
			this->y = (this->_prevPoint->y + (((this->_nextPoint->y - this->_prevPoint->y)) * td));
		}
		else{
			HX_STACK_LINE(139)
			if (((this->_index > (int)0))){
				HX_STACK_LINE(141)
				while((true)){
					HX_STACK_LINE(141)
					if ((!(((this->scale < this->_pointT->__get((this->_index - (int)1))))))){
						HX_STACK_LINE(141)
						break;
					}
					HX_STACK_LINE(143)
					hx::SubEq(this->_index,(int)1);
					HX_STACK_LINE(144)
					if (((this->_index == (int)0))){
						HX_STACK_LINE(146)
						hx::AddEq(this->_index,(int)1);
						HX_STACK_LINE(147)
						break;
					}
				}
			}
			HX_STACK_LINE(152)
			td = this->_pointT->__get(this->_index);
			HX_STACK_LINE(153)
			tt = (this->_pointT->__get((this->_index - (int)1)) - td);
			HX_STACK_LINE(154)
			td = (Float(((this->scale - td))) / Float(tt));
			HX_STACK_LINE(155)
			this->_prevPoint = this->points->__get(this->_index).StaticCast< ::flixel::util::FlxPoint >();
			HX_STACK_LINE(156)
			this->_nextPoint = this->points->__get((this->_index - (int)1)).StaticCast< ::flixel::util::FlxPoint >();
			HX_STACK_LINE(157)
			this->x = (this->_prevPoint->x + (((this->_nextPoint->x - this->_prevPoint->x)) * td));
			HX_STACK_LINE(158)
			this->y = (this->_prevPoint->y + (((this->_nextPoint->y - this->_prevPoint->y)) * td));
		}
		HX_STACK_LINE(161)
		this->super::postUpdate();
	}
return null();
}


Void LinearPath_obj::updatePath( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.LinearPath","updatePath",0x8544492e,"flixel.tweens.motion.LinearPath.updatePath","flixel/tweens/motion/LinearPath.hx",168,0x519b896f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(169)
		if (((this->points->length < (int)2))){
			HX_STACK_LINE(169)
			HX_STACK_DO_THROW(HX_CSTRING("A LinearPath must have at least 2 points to operate."));
		}
		HX_STACK_LINE(170)
		if (((this->_pointD->length == this->_pointT->length))){
			HX_STACK_LINE(170)
			return null();
		}
		HX_STACK_LINE(172)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(173)
		while((true)){
			HX_STACK_LINE(173)
			if ((!(((i < this->points->length))))){
				HX_STACK_LINE(173)
				break;
			}
			HX_STACK_LINE(175)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(175)
			Float _g1 = this->_pointD->__get(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(175)
			this->_pointT[i] = (Float(_g1) / Float(this->distance));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LinearPath_obj,updatePath,(void))


LinearPath_obj::LinearPath_obj()
{
}

void LinearPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LinearPath);
	HX_MARK_MEMBER_NAME(distance,"distance");
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_MEMBER_NAME(_pointD,"_pointD");
	HX_MARK_MEMBER_NAME(_pointT,"_pointT");
	HX_MARK_MEMBER_NAME(_speed,"_speed");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_last,"_last");
	HX_MARK_MEMBER_NAME(_prevPoint,"_prevPoint");
	HX_MARK_MEMBER_NAME(_nextPoint,"_nextPoint");
	::flixel::tweens::motion::Motion_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LinearPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(distance,"distance");
	HX_VISIT_MEMBER_NAME(points,"points");
	HX_VISIT_MEMBER_NAME(_pointD,"_pointD");
	HX_VISIT_MEMBER_NAME(_pointT,"_pointT");
	HX_VISIT_MEMBER_NAME(_speed,"_speed");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_last,"_last");
	HX_VISIT_MEMBER_NAME(_prevPoint,"_prevPoint");
	HX_VISIT_MEMBER_NAME(_nextPoint,"_nextPoint");
	::flixel::tweens::motion::Motion_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LinearPath_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_last") ) { return _last; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { return points; }
		if (HX_FIELD_EQ(inName,"_speed") ) { return _speed; }
		if (HX_FIELD_EQ(inName,"_index") ) { return _index; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pointD") ) { return _pointD; }
		if (HX_FIELD_EQ(inName,"_pointT") ) { return _pointT; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance; }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return addPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getPoint") ) { return getPoint_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_prevPoint") ) { return _prevPoint; }
		if (HX_FIELD_EQ(inName,"_nextPoint") ) { return _nextPoint; }
		if (HX_FIELD_EQ(inName,"updatePath") ) { return updatePath_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LinearPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_last") ) { _last=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_speed") ) { _speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pointD") ) { _pointD=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pointT") ) { _pointT=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { distance=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_prevPoint") ) { _prevPoint=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_nextPoint") ) { _nextPoint=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LinearPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("distance"));
	outFields->push(HX_CSTRING("points"));
	outFields->push(HX_CSTRING("_pointD"));
	outFields->push(HX_CSTRING("_pointT"));
	outFields->push(HX_CSTRING("_speed"));
	outFields->push(HX_CSTRING("_index"));
	outFields->push(HX_CSTRING("_last"));
	outFields->push(HX_CSTRING("_prevPoint"));
	outFields->push(HX_CSTRING("_nextPoint"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(LinearPath_obj,distance),HX_CSTRING("distance")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(LinearPath_obj,points),HX_CSTRING("points")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(LinearPath_obj,_pointD),HX_CSTRING("_pointD")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(LinearPath_obj,_pointT),HX_CSTRING("_pointT")},
	{hx::fsFloat,(int)offsetof(LinearPath_obj,_speed),HX_CSTRING("_speed")},
	{hx::fsInt,(int)offsetof(LinearPath_obj,_index),HX_CSTRING("_index")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(LinearPath_obj,_last),HX_CSTRING("_last")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(LinearPath_obj,_prevPoint),HX_CSTRING("_prevPoint")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(LinearPath_obj,_nextPoint),HX_CSTRING("_nextPoint")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("distance"),
	HX_CSTRING("points"),
	HX_CSTRING("_pointD"),
	HX_CSTRING("_pointT"),
	HX_CSTRING("_speed"),
	HX_CSTRING("_index"),
	HX_CSTRING("_last"),
	HX_CSTRING("_prevPoint"),
	HX_CSTRING("_nextPoint"),
	HX_CSTRING("destroy"),
	HX_CSTRING("setMotion"),
	HX_CSTRING("addPoint"),
	HX_CSTRING("getPoint"),
	HX_CSTRING("start"),
	HX_CSTRING("update"),
	HX_CSTRING("updatePath"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LinearPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LinearPath_obj::__mClass,"__mClass");
};

#endif

Class LinearPath_obj::__mClass;

void LinearPath_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.motion.LinearPath"), hx::TCanCast< LinearPath_obj> ,sStaticFields,sMemberFields,
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

void LinearPath_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion
