#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
#ifndef INCLUDED_flixel_plugin_TimerManager
#include <flixel/plugin/TimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
namespace flixel{
namespace plugin{

Void TimerManager_obj::__construct()
{
HX_STACK_FRAME("flixel.plugin.TimerManager","new",0x5fed9243,"flixel.plugin.TimerManager.new","flixel/plugin/TimerManager.hx",18,0x1b0b986d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(21)
	this->_timers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(24)
	this->set_visible(false);
}
;
	return null();
}

//TimerManager_obj::~TimerManager_obj() { }

Dynamic TimerManager_obj::__CreateEmpty() { return  new TimerManager_obj; }
hx::ObjectPtr< TimerManager_obj > TimerManager_obj::__new()
{  hx::ObjectPtr< TimerManager_obj > result = new TimerManager_obj();
	result->__construct();
	return result;}

Dynamic TimerManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TimerManager_obj > result = new TimerManager_obj();
	result->__construct();
	return result;}

Void TimerManager_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.plugin.TimerManager","destroy",0xce8a1c5d,"flixel.plugin.TimerManager.destroy","flixel/plugin/TimerManager.hx",31,0x1b0b986d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		::flixel::util::FlxArrayUtil_obj::clearArray_flixel_util_FlxTimer(this->_timers,null());
		HX_STACK_LINE(33)
		this->_timers = null();
		HX_STACK_LINE(34)
		this->super::destroy();
	}
return null();
}


Void TimerManager_obj::update( ){
{
		HX_STACK_FRAME("flixel.plugin.TimerManager","update",0x5545d406,"flixel.plugin.TimerManager.update","flixel/plugin/TimerManager.hx",43,0x1b0b986d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		Array< ::Dynamic > _g1 = this->_timers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(43)
		while((true)){
			HX_STACK_LINE(43)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(43)
				break;
			}
			HX_STACK_LINE(43)
			::flixel::util::FlxTimer timer = _g1->__get(_g).StaticCast< ::flixel::util::FlxTimer >();		HX_STACK_VAR(timer,"timer");
			HX_STACK_LINE(43)
			++(_g);
			HX_STACK_LINE(45)
			if (((bool((bool(timer->active) && bool(!(timer->finished)))) && bool((timer->time > (int)0))))){
				HX_STACK_LINE(47)
				timer->update();
			}
		}
	}
return null();
}


Void TimerManager_obj::add( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("flixel.plugin.TimerManager","add",0x5fe3b404,"flixel.plugin.TimerManager.add","flixel/plugin/TimerManager.hx",61,0x1b0b986d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(61)
		this->_timers->push(Timer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TimerManager_obj,add,(void))

Void TimerManager_obj::remove( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("flixel.plugin.TimerManager","remove",0xd2c8ea41,"flixel.plugin.TimerManager.remove","flixel/plugin/TimerManager.hx",74,0x1b0b986d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(74)
		Array< ::Dynamic > array = this->_timers;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(74)
		int index = array->indexOf(Timer,null());		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(74)
		if (((index != (int)-1))){
			HX_STACK_LINE(74)
			array[index] = array->__get((array->length - (int)1)).StaticCast< ::flixel::util::FlxTimer >();
			HX_STACK_LINE(74)
			array->pop().StaticCast< ::flixel::util::FlxTimer >();
			HX_STACK_LINE(74)
			array;
		}
		else{
			HX_STACK_LINE(74)
			array;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TimerManager_obj,remove,(void))

Void TimerManager_obj::clear( ){
{
		HX_STACK_FRAME("flixel.plugin.TimerManager","clear",0x1353b230,"flixel.plugin.TimerManager.clear","flixel/plugin/TimerManager.hx",82,0x1b0b986d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		::flixel::util::FlxArrayUtil_obj::clearArray_flixel_util_FlxTimer(this->_timers,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TimerManager_obj,clear,(void))

Void TimerManager_obj::onStateSwitch( ){
{
		HX_STACK_FRAME("flixel.plugin.TimerManager","onStateSwitch",0xcfdacfa9,"flixel.plugin.TimerManager.onStateSwitch","flixel/plugin/TimerManager.hx",87,0x1b0b986d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		::flixel::util::FlxArrayUtil_obj::clearArray_flixel_util_FlxTimer(this->_timers,null());
	}
return null();
}



TimerManager_obj::TimerManager_obj()
{
}

void TimerManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimerManager);
	HX_MARK_MEMBER_NAME(_timers,"_timers");
	HX_MARK_END_CLASS();
}

void TimerManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_timers,"_timers");
}

Dynamic TimerManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_timers") ) { return _timers; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { return onStateSwitch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TimerManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_timers") ) { _timers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TimerManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_timers"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TimerManager_obj,_timers),HX_CSTRING("_timers")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_timers"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("clear"),
	HX_CSTRING("onStateSwitch"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimerManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimerManager_obj::__mClass,"__mClass");
};

#endif

Class TimerManager_obj::__mClass;

void TimerManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.plugin.TimerManager"), hx::TCanCast< TimerManager_obj> ,sStaticFields,sMemberFields,
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

void TimerManager_obj::__boot()
{
}

} // end namespace flixel
} // end namespace plugin
