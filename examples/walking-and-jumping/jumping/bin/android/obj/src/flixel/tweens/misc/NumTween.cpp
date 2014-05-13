#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
namespace flixel{
namespace tweens{
namespace misc{

Void NumTween_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.misc.NumTween","new",0x5bbfa6a5,"flixel.tweens.misc.NumTween.new","flixel/tweens/misc/NumTween.hx",8,0x6392d42a)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(8)
	super::__construct(Options);
}
;
	return null();
}

//NumTween_obj::~NumTween_obj() { }

Dynamic NumTween_obj::__CreateEmpty() { return  new NumTween_obj; }
hx::ObjectPtr< NumTween_obj > NumTween_obj::__new(Dynamic Options)
{  hx::ObjectPtr< NumTween_obj > result = new NumTween_obj();
	result->__construct(Options);
	return result;}

Dynamic NumTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NumTween_obj > result = new NumTween_obj();
	result->__construct(inArgs[0]);
	return result;}

Void NumTween_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.misc.NumTween","destroy",0x8c3b09bf,"flixel.tweens.misc.NumTween.destroy","flixel/tweens/misc/NumTween.hx",24,0x6392d42a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		this->super::destroy();
		HX_STACK_LINE(26)
		this->_tweenFunction = null();
	}
return null();
}


::flixel::tweens::misc::NumTween NumTween_obj::tween( Float fromValue,Float toValue,Float duration,Dynamic tweenFunction){
	HX_STACK_FRAME("flixel.tweens.misc.NumTween","tween",0x08325bf0,"flixel.tweens.misc.NumTween.tween","flixel/tweens/misc/NumTween.hx",38,0x6392d42a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fromValue,"fromValue")
	HX_STACK_ARG(toValue,"toValue")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(tweenFunction,"tweenFunction")
	HX_STACK_LINE(39)
	this->_tweenFunction = tweenFunction;
	HX_STACK_LINE(40)
	Float _g = this->value = fromValue;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(40)
	this->_start = _g;
	HX_STACK_LINE(41)
	this->_range = (toValue - this->value);
	HX_STACK_LINE(42)
	this->duration = duration;
	HX_STACK_LINE(43)
	this->start();
	HX_STACK_LINE(44)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(NumTween_obj,tween,return )

Void NumTween_obj::update( ){
{
		HX_STACK_FRAME("flixel.tweens.misc.NumTween","update",0x81bf28e4,"flixel.tweens.misc.NumTween.update","flixel/tweens/misc/NumTween.hx",48,0x6392d42a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		this->super::update();
		HX_STACK_LINE(50)
		this->value = (this->_start + (this->_range * this->scale));
		HX_STACK_LINE(52)
		if (((this->_tweenFunction_dyn() != null()))){
			HX_STACK_LINE(53)
			this->_tweenFunction(this->value);
		}
	}
return null();
}



NumTween_obj::NumTween_obj()
{
}

void NumTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NumTween);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(_tweenFunction,"_tweenFunction");
	HX_MARK_MEMBER_NAME(_start,"_start");
	HX_MARK_MEMBER_NAME(_range,"_range");
	::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NumTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(_tweenFunction,"_tweenFunction");
	HX_VISIT_MEMBER_NAME(_start,"_start");
	HX_VISIT_MEMBER_NAME(_range,"_range");
	::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

Dynamic NumTween_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_start") ) { return _start; }
		if (HX_FIELD_EQ(inName,"_range") ) { return _range; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_tweenFunction") ) { return _tweenFunction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NumTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_start") ) { _start=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_range") ) { _range=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_tweenFunction") ) { _tweenFunction=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NumTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("_start"));
	outFields->push(HX_CSTRING("_range"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(NumTween_obj,value),HX_CSTRING("value")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NumTween_obj,_tweenFunction),HX_CSTRING("_tweenFunction")},
	{hx::fsFloat,(int)offsetof(NumTween_obj,_start),HX_CSTRING("_start")},
	{hx::fsFloat,(int)offsetof(NumTween_obj,_range),HX_CSTRING("_range")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("value"),
	HX_CSTRING("_tweenFunction"),
	HX_CSTRING("_start"),
	HX_CSTRING("_range"),
	HX_CSTRING("destroy"),
	HX_CSTRING("tween"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NumTween_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NumTween_obj::__mClass,"__mClass");
};

#endif

Class NumTween_obj::__mClass;

void NumTween_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.misc.NumTween"), hx::TCanCast< NumTween_obj> ,sStaticFields,sMemberFields,
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

void NumTween_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace misc
