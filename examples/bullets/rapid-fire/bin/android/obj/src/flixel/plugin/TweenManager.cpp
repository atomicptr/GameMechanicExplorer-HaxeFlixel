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
#ifndef INCLUDED_flixel_plugin_TweenManager
#include <flixel/plugin/TweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_AngleTween
#include <flixel/tweens/misc/AngleTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#include <flixel/tweens/motion/CircularMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#include <flixel/tweens/motion/CubicMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearMotion
#include <flixel/tweens/motion/LinearMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearPath
#include <flixel/tweens/motion/LinearPath.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadMotion
#include <flixel/tweens/motion/QuadMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadPath
#include <flixel/tweens/motion/QuadPath.h>
#endif
namespace flixel{
namespace plugin{

Void TweenManager_obj::__construct()
{
HX_STACK_FRAME("flixel.plugin.TweenManager","new",0x6947fd5d,"flixel.plugin.TweenManager.new","flixel/plugin/TweenManager.hx",9,0x8f088e93)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->_tweens = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(18)
	super::__construct();
	HX_STACK_LINE(19)
	this->set_visible(false);
}
;
	return null();
}

//TweenManager_obj::~TweenManager_obj() { }

Dynamic TweenManager_obj::__CreateEmpty() { return  new TweenManager_obj; }
hx::ObjectPtr< TweenManager_obj > TweenManager_obj::__new()
{  hx::ObjectPtr< TweenManager_obj > result = new TweenManager_obj();
	result->__construct();
	return result;}

Dynamic TweenManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TweenManager_obj > result = new TweenManager_obj();
	result->__construct();
	return result;}

::flixel::tweens::motion::QuadPath TweenManager_obj::add_flixel_tweens_motion_QuadPath( ::flixel::tweens::motion::QuadPath Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.plugin.TweenManager","add_flixel_tweens_motion_QuadPath",0x2aa0f560,"flixel.plugin.TweenManager.add_flixel_tweens_motion_QuadPath","flixel/plugin/TweenManager.hx",62,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(64)
		if (((Tween == null()))){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(69)
		this->_tweens->push(Tween);
		HX_STACK_LINE(71)
		if ((Start)){
			HX_STACK_LINE(73)
			Tween->start();
		}
		HX_STACK_LINE(75)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,add_flixel_tweens_motion_QuadPath,return )

::flixel::tweens::motion::LinearPath TweenManager_obj::add_flixel_tweens_motion_LinearPath( ::flixel::tweens::motion::LinearPath Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.plugin.TweenManager","add_flixel_tweens_motion_LinearPath",0xb741727e,"flixel.plugin.TweenManager.add_flixel_tweens_motion_LinearPath","flixel/plugin/TweenManager.hx",62,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(64)
		if (((Tween == null()))){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(69)
		this->_tweens->push(Tween);
		HX_STACK_LINE(71)
		if ((Start)){
			HX_STACK_LINE(73)
			Tween->start();
		}
		HX_STACK_LINE(75)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,add_flixel_tweens_motion_LinearPath,return )

::flixel::tweens::motion::CircularMotion TweenManager_obj::add_flixel_tweens_motion_CircularMotion( ::flixel::tweens::motion::CircularMotion Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.plugin.TweenManager","add_flixel_tweens_motion_CircularMotion",0xb3d7a449,"flixel.plugin.TweenManager.add_flixel_tweens_motion_CircularMotion","flixel/plugin/TweenManager.hx",62,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(64)
		if (((Tween == null()))){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(69)
		this->_tweens->push(Tween);
		HX_STACK_LINE(71)
		if ((Start)){
			HX_STACK_LINE(73)
			Tween->start();
		}
		HX_STACK_LINE(75)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,add_flixel_tweens_motion_CircularMotion,return )

::flixel::tweens::motion::CubicMotion TweenManager_obj::add_flixel_tweens_motion_CubicMotion( ::flixel::tweens::motion::CubicMotion Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.plugin.TweenManager","add_flixel_tweens_motion_CubicMotion",0x8d10bc4c,"flixel.plugin.TweenManager.add_flixel_tweens_motion_CubicMotion","flixel/plugin/TweenManager.hx",62,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(64)
		if (((Tween == null()))){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(69)
		this->_tweens->push(Tween);
		HX_STACK_LINE(71)
		if ((Start)){
			HX_STACK_LINE(73)
			Tween->start();
		}
		HX_STACK_LINE(75)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,add_flixel_tweens_motion_CubicMotion,return )

::flixel::tweens::motion::QuadMotion TweenManager_obj::add_flixel_tweens_motion_QuadMotion( ::flixel::tweens::motion::QuadMotion Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.plugin.TweenManager","add_flixel_tweens_motion_QuadMotion",0xa95c3ab1,"flixel.plugin.TweenManager.add_flixel_tweens_motion_QuadMotion","flixel/plugin/TweenManager.hx",62,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(64)
		if (((Tween == null()))){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(69)
		this->_tweens->push(Tween);
		HX_STACK_LINE(71)
		if ((Start)){
			HX_STACK_LINE(73)
			Tween->start();
		}
		HX_STACK_LINE(75)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,add_flixel_tweens_motion_QuadMotion,return )

::flixel::tweens::motion::LinearMotion TweenManager_obj::add_flixel_tweens_motion_LinearMotion( ::flixel::tweens::motion::LinearMotion Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.plugin.TweenManager","add_flixel_tweens_motion_LinearMotion",0xfcecbb4f,"flixel.plugin.TweenManager.add_flixel_tweens_motion_LinearMotion","flixel/plugin/TweenManager.hx",62,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(64)
		if (((Tween == null()))){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(69)
		this->_tweens->push(Tween);
		HX_STACK_LINE(71)
		if ((Start)){
			HX_STACK_LINE(73)
			Tween->start();
		}
		HX_STACK_LINE(75)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,add_flixel_tweens_motion_LinearMotion,return )

::flixel::tweens::misc::ColorTween TweenManager_obj::add_flixel_tweens_misc_ColorTween( ::flixel::tweens::misc::ColorTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.plugin.TweenManager","add_flixel_tweens_misc_ColorTween",0x5d4514a6,"flixel.plugin.TweenManager.add_flixel_tweens_misc_ColorTween","flixel/plugin/TweenManager.hx",62,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(64)
		if (((Tween == null()))){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(69)
		this->_tweens->push(Tween);
		HX_STACK_LINE(71)
		if ((Start)){
			HX_STACK_LINE(73)
			Tween->start();
		}
		HX_STACK_LINE(75)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,add_flixel_tweens_misc_ColorTween,return )

::flixel::tweens::misc::AngleTween TweenManager_obj::add_flixel_tweens_misc_AngleTween( ::flixel::tweens::misc::AngleTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.plugin.TweenManager","add_flixel_tweens_misc_AngleTween",0x3c5e6c36,"flixel.plugin.TweenManager.add_flixel_tweens_misc_AngleTween","flixel/plugin/TweenManager.hx",62,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(64)
		if (((Tween == null()))){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(69)
		this->_tweens->push(Tween);
		HX_STACK_LINE(71)
		if ((Start)){
			HX_STACK_LINE(73)
			Tween->start();
		}
		HX_STACK_LINE(75)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,add_flixel_tweens_misc_AngleTween,return )

::flixel::tweens::misc::NumTween TweenManager_obj::add_flixel_tweens_misc_NumTween( ::flixel::tweens::misc::NumTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.plugin.TweenManager","add_flixel_tweens_misc_NumTween",0xfb008d63,"flixel.plugin.TweenManager.add_flixel_tweens_misc_NumTween","flixel/plugin/TweenManager.hx",62,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(64)
		if (((Tween == null()))){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(69)
		this->_tweens->push(Tween);
		HX_STACK_LINE(71)
		if ((Start)){
			HX_STACK_LINE(73)
			Tween->start();
		}
		HX_STACK_LINE(75)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,add_flixel_tweens_misc_NumTween,return )

::flixel::tweens::misc::VarTween TweenManager_obj::add_flixel_tweens_misc_VarTween( ::flixel::tweens::misc::VarTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.plugin.TweenManager","add_flixel_tweens_misc_VarTween",0x84afa522,"flixel.plugin.TweenManager.add_flixel_tweens_misc_VarTween","flixel/plugin/TweenManager.hx",62,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(64)
		if (((Tween == null()))){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(69)
		this->_tweens->push(Tween);
		HX_STACK_LINE(71)
		if ((Start)){
			HX_STACK_LINE(73)
			Tween->start();
		}
		HX_STACK_LINE(75)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,add_flixel_tweens_misc_VarTween,return )

Void TweenManager_obj::update( ){
{
		HX_STACK_FRAME("flixel.plugin.TweenManager","update",0xeb2fd52c,"flixel.plugin.TweenManager.update","flixel/plugin/TweenManager.hx",23,0x8f088e93)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		Array< ::Dynamic > finishedTweens = null();		HX_STACK_VAR(finishedTweens,"finishedTweens");
		HX_STACK_LINE(27)
		{
			HX_STACK_LINE(27)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(27)
			Array< ::Dynamic > _g1 = this->_tweens;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(27)
			while((true)){
				HX_STACK_LINE(27)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(27)
					break;
				}
				HX_STACK_LINE(27)
				::flixel::tweens::FlxTween tween = _g1->__get(_g).StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tween,"tween");
				HX_STACK_LINE(27)
				++(_g);
				HX_STACK_LINE(29)
				if ((tween->active)){
					HX_STACK_LINE(31)
					tween->update();
					HX_STACK_LINE(32)
					if ((tween->finished)){
						HX_STACK_LINE(34)
						if (((finishedTweens == null()))){
							HX_STACK_LINE(36)
							Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(36)
							finishedTweens = _g2;
						}
						HX_STACK_LINE(38)
						finishedTweens->push(tween);
					}
				}
			}
		}
		HX_STACK_LINE(43)
		if (((finishedTweens != null()))){
			HX_STACK_LINE(45)
			while((true)){
				HX_STACK_LINE(45)
				if ((!(((finishedTweens->length > (int)0))))){
					HX_STACK_LINE(45)
					break;
				}
				HX_STACK_LINE(47)
				finishedTweens->shift().StaticCast< ::flixel::tweens::FlxTween >()->finish();
			}
		}
	}
return null();
}


::flixel::tweens::FlxTween TweenManager_obj::remove( ::flixel::tweens::FlxTween Tween){
	HX_STACK_FRAME("flixel.plugin.TweenManager","remove",0x68b2eb67,"flixel.plugin.TweenManager.remove","flixel/plugin/TweenManager.hx",87,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_LINE(88)
	if (((Tween == null()))){
		HX_STACK_LINE(90)
		return null();
	}
	HX_STACK_LINE(93)
	Tween->active = false;
	HX_STACK_LINE(94)
	Tween->destroy();
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		Array< ::Dynamic > array = this->_tweens;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(96)
		int index = array->indexOf(Tween,null());		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(96)
		if (((index != (int)-1))){
			HX_STACK_LINE(96)
			array[index] = array->__get((array->length - (int)1)).StaticCast< ::flixel::tweens::FlxTween >();
			HX_STACK_LINE(96)
			array->pop().StaticCast< ::flixel::tweens::FlxTween >();
			HX_STACK_LINE(96)
			array;
		}
		else{
			HX_STACK_LINE(96)
			array;
		}
	}
	HX_STACK_LINE(98)
	return Tween;
}


HX_DEFINE_DYNAMIC_FUNC1(TweenManager_obj,remove,return )

Void TweenManager_obj::clear( ){
{
		HX_STACK_FRAME("flixel.plugin.TweenManager","clear",0xf87297ca,"flixel.plugin.TweenManager.clear","flixel/plugin/TweenManager.hx",106,0x8f088e93)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		while((true)){
			HX_STACK_LINE(106)
			if ((!(((this->_tweens->length > (int)0))))){
				HX_STACK_LINE(106)
				break;
			}
			HX_STACK_LINE(108)
			this->remove(this->_tweens->__get((int)0).StaticCast< ::flixel::tweens::FlxTween >());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TweenManager_obj,clear,(void))

Void TweenManager_obj::onStateSwitch( ){
{
		HX_STACK_FRAME("flixel.plugin.TweenManager","onStateSwitch",0xdb1fdf43,"flixel.plugin.TweenManager.onStateSwitch","flixel/plugin/TweenManager.hx",114,0x8f088e93)
		HX_STACK_THIS(this)
		HX_STACK_LINE(114)
		this->clear();
	}
return null();
}



TweenManager_obj::TweenManager_obj()
{
}

void TweenManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TweenManager);
	HX_MARK_MEMBER_NAME(_tweens,"_tweens");
	HX_MARK_END_CLASS();
}

void TweenManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tweens,"_tweens");
}

Dynamic TweenManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_tweens") ) { return _tweens; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { return onStateSwitch_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_NumTween") ) { return add_flixel_tweens_misc_NumTween_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_VarTween") ) { return add_flixel_tweens_misc_VarTween_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_QuadPath") ) { return add_flixel_tweens_motion_QuadPath_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_ColorTween") ) { return add_flixel_tweens_misc_ColorTween_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_AngleTween") ) { return add_flixel_tweens_misc_AngleTween_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_LinearPath") ) { return add_flixel_tweens_motion_LinearPath_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_QuadMotion") ) { return add_flixel_tweens_motion_QuadMotion_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_CubicMotion") ) { return add_flixel_tweens_motion_CubicMotion_dyn(); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_LinearMotion") ) { return add_flixel_tweens_motion_LinearMotion_dyn(); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_CircularMotion") ) { return add_flixel_tweens_motion_CircularMotion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TweenManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_tweens") ) { _tweens=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TweenManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_tweens"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TweenManager_obj,_tweens),HX_CSTRING("_tweens")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("add_flixel_tweens_motion_QuadPath"),
	HX_CSTRING("add_flixel_tweens_motion_LinearPath"),
	HX_CSTRING("add_flixel_tweens_motion_CircularMotion"),
	HX_CSTRING("add_flixel_tweens_motion_CubicMotion"),
	HX_CSTRING("add_flixel_tweens_motion_QuadMotion"),
	HX_CSTRING("add_flixel_tweens_motion_LinearMotion"),
	HX_CSTRING("add_flixel_tweens_misc_ColorTween"),
	HX_CSTRING("add_flixel_tweens_misc_AngleTween"),
	HX_CSTRING("add_flixel_tweens_misc_NumTween"),
	HX_CSTRING("add_flixel_tweens_misc_VarTween"),
	HX_CSTRING("_tweens"),
	HX_CSTRING("update"),
	HX_CSTRING("remove"),
	HX_CSTRING("clear"),
	HX_CSTRING("onStateSwitch"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TweenManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TweenManager_obj::__mClass,"__mClass");
};

#endif

Class TweenManager_obj::__mClass;

void TweenManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.plugin.TweenManager"), hx::TCanCast< TweenManager_obj> ,sStaticFields,sMemberFields,
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

void TweenManager_obj::__boot()
{
}

} // end namespace flixel
} // end namespace plugin
