#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
namespace flixel{
namespace tweens{
namespace misc{

Void ColorTween_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.misc.ColorTween","new",0x82c0df68,"flixel.tweens.misc.ColorTween.new","flixel/tweens/misc/ColorTween.hx",10,0xe14ed287)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(13)
	this->alpha = (int)1;
	HX_STACK_LINE(10)
	super::__construct(Options);
}
;
	return null();
}

//ColorTween_obj::~ColorTween_obj() { }

Dynamic ColorTween_obj::__CreateEmpty() { return  new ColorTween_obj; }
hx::ObjectPtr< ColorTween_obj > ColorTween_obj::__new(Dynamic Options)
{  hx::ObjectPtr< ColorTween_obj > result = new ColorTween_obj();
	result->__construct(Options);
	return result;}

Dynamic ColorTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorTween_obj > result = new ColorTween_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ColorTween_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.misc.ColorTween","destroy",0x7f5b6002,"flixel.tweens.misc.ColorTween.destroy","flixel/tweens/misc/ColorTween.hx",47,0xe14ed287)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		this->super::destroy();
		HX_STACK_LINE(49)
		this->sprite = null();
	}
return null();
}


::flixel::tweens::misc::ColorTween ColorTween_obj::tween( Float Duration,int FromColor,int ToColor,hx::Null< Float >  __o_FromAlpha,hx::Null< Float >  __o_ToAlpha,::flixel::FlxSprite Sprite){
Float FromAlpha = __o_FromAlpha.Default(1);
Float ToAlpha = __o_ToAlpha.Default(1);
	HX_STACK_FRAME("flixel.tweens.misc.ColorTween","tween",0xdc858b73,"flixel.tweens.misc.ColorTween.tween","flixel/tweens/misc/ColorTween.hx",64,0xe14ed287)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FromColor,"FromColor")
	HX_STACK_ARG(ToColor,"ToColor")
	HX_STACK_ARG(FromAlpha,"FromAlpha")
	HX_STACK_ARG(ToAlpha,"ToAlpha")
	HX_STACK_ARG(Sprite,"Sprite")
{
		HX_STACK_LINE(65)
		hx::AndEq(FromColor,(int)16777215);
		HX_STACK_LINE(66)
		hx::AndEq(ToColor,(int)16777215);
		HX_STACK_LINE(67)
		this->color = FromColor;
		HX_STACK_LINE(68)
		this->red = (int((int(FromColor) >> int((int)16))) & int((int)255));
		HX_STACK_LINE(69)
		this->green = (int((int(FromColor) >> int((int)8))) & int((int)255));
		HX_STACK_LINE(70)
		this->blue = (int(FromColor) & int((int)255));
		HX_STACK_LINE(71)
		this->_startR = (Float(this->red) / Float((int)255));
		HX_STACK_LINE(72)
		this->_startG = (Float(this->green) / Float((int)255));
		HX_STACK_LINE(73)
		this->_startB = (Float(this->blue) / Float((int)255));
		HX_STACK_LINE(74)
		this->_rangeR = ((Float(((int((int(ToColor) >> int((int)16))) & int((int)255)))) / Float((int)255)) - this->_startR);
		HX_STACK_LINE(75)
		this->_rangeG = ((Float(((int((int(ToColor) >> int((int)8))) & int((int)255)))) / Float((int)255)) - this->_startG);
		HX_STACK_LINE(76)
		this->_rangeB = ((Float(((int(ToColor) & int((int)255)))) / Float((int)255)) - this->_startB);
		HX_STACK_LINE(77)
		Float _g = this->alpha = FromAlpha;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		this->_startA = _g;
		HX_STACK_LINE(78)
		this->_rangeA = (ToAlpha - this->alpha);
		HX_STACK_LINE(79)
		this->duration = Duration;
		HX_STACK_LINE(80)
		this->sprite = Sprite;
		HX_STACK_LINE(81)
		this->start();
		HX_STACK_LINE(82)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(ColorTween_obj,tween,return )

Void ColorTween_obj::update( ){
{
		HX_STACK_FRAME("flixel.tweens.misc.ColorTween","update",0x76358c01,"flixel.tweens.misc.ColorTween.update","flixel/tweens/misc/ColorTween.hx",86,0xe14ed287)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		this->super::update();
		HX_STACK_LINE(88)
		this->alpha = (this->_startA + (this->_rangeA * this->scale));
		HX_STACK_LINE(89)
		int _g = ::Std_obj::_int((((this->_startR + (this->_rangeR * this->scale))) * (int)255));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		this->red = _g;
		HX_STACK_LINE(90)
		int _g1 = ::Std_obj::_int((((this->_startG + (this->_rangeG * this->scale))) * (int)255));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(90)
		this->green = _g1;
		HX_STACK_LINE(91)
		int _g2 = ::Std_obj::_int((((this->_startB + (this->_rangeB * this->scale))) * (int)255));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(91)
		this->blue = _g2;
		HX_STACK_LINE(92)
		this->color = (int((int((int(this->red) << int((int)16))) | int((int(this->green) << int((int)8))))) | int(this->blue));
		HX_STACK_LINE(94)
		if (((this->sprite != null()))){
			HX_STACK_LINE(96)
			this->sprite->set_color(this->color);
			HX_STACK_LINE(97)
			this->sprite->set_alpha(this->alpha);
		}
	}
return null();
}



ColorTween_obj::ColorTween_obj()
{
}

void ColorTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorTween);
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(red,"red");
	HX_MARK_MEMBER_NAME(green,"green");
	HX_MARK_MEMBER_NAME(blue,"blue");
	HX_MARK_MEMBER_NAME(_startA,"_startA");
	HX_MARK_MEMBER_NAME(_startR,"_startR");
	HX_MARK_MEMBER_NAME(_startG,"_startG");
	HX_MARK_MEMBER_NAME(_startB,"_startB");
	HX_MARK_MEMBER_NAME(_rangeA,"_rangeA");
	HX_MARK_MEMBER_NAME(_rangeR,"_rangeR");
	HX_MARK_MEMBER_NAME(_rangeG,"_rangeG");
	HX_MARK_MEMBER_NAME(_rangeB,"_rangeB");
	::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(red,"red");
	HX_VISIT_MEMBER_NAME(green,"green");
	HX_VISIT_MEMBER_NAME(blue,"blue");
	HX_VISIT_MEMBER_NAME(_startA,"_startA");
	HX_VISIT_MEMBER_NAME(_startR,"_startR");
	HX_VISIT_MEMBER_NAME(_startG,"_startG");
	HX_VISIT_MEMBER_NAME(_startB,"_startB");
	HX_VISIT_MEMBER_NAME(_rangeA,"_rangeA");
	HX_VISIT_MEMBER_NAME(_rangeR,"_rangeR");
	HX_VISIT_MEMBER_NAME(_rangeG,"_rangeG");
	HX_VISIT_MEMBER_NAME(_rangeB,"_rangeB");
	::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ColorTween_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"red") ) { return red; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blue") ) { return blue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"green") ) { return green; }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_startA") ) { return _startA; }
		if (HX_FIELD_EQ(inName,"_startR") ) { return _startR; }
		if (HX_FIELD_EQ(inName,"_startG") ) { return _startG; }
		if (HX_FIELD_EQ(inName,"_startB") ) { return _startB; }
		if (HX_FIELD_EQ(inName,"_rangeA") ) { return _rangeA; }
		if (HX_FIELD_EQ(inName,"_rangeR") ) { return _rangeR; }
		if (HX_FIELD_EQ(inName,"_rangeG") ) { return _rangeG; }
		if (HX_FIELD_EQ(inName,"_rangeB") ) { return _rangeB; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"red") ) { red=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blue") ) { blue=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"green") ) { green=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_startA") ) { _startA=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startR") ) { _startR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startG") ) { _startG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startB") ) { _startB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rangeA") ) { _rangeA=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rangeR") ) { _rangeR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rangeG") ) { _rangeG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rangeB") ) { _rangeB=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("red"));
	outFields->push(HX_CSTRING("green"));
	outFields->push(HX_CSTRING("blue"));
	outFields->push(HX_CSTRING("_startA"));
	outFields->push(HX_CSTRING("_startR"));
	outFields->push(HX_CSTRING("_startG"));
	outFields->push(HX_CSTRING("_startB"));
	outFields->push(HX_CSTRING("_rangeA"));
	outFields->push(HX_CSTRING("_rangeR"));
	outFields->push(HX_CSTRING("_rangeG"));
	outFields->push(HX_CSTRING("_rangeB"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ColorTween_obj,color),HX_CSTRING("color")},
	{hx::fsFloat,(int)offsetof(ColorTween_obj,alpha),HX_CSTRING("alpha")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ColorTween_obj,sprite),HX_CSTRING("sprite")},
	{hx::fsInt,(int)offsetof(ColorTween_obj,red),HX_CSTRING("red")},
	{hx::fsInt,(int)offsetof(ColorTween_obj,green),HX_CSTRING("green")},
	{hx::fsInt,(int)offsetof(ColorTween_obj,blue),HX_CSTRING("blue")},
	{hx::fsFloat,(int)offsetof(ColorTween_obj,_startA),HX_CSTRING("_startA")},
	{hx::fsFloat,(int)offsetof(ColorTween_obj,_startR),HX_CSTRING("_startR")},
	{hx::fsFloat,(int)offsetof(ColorTween_obj,_startG),HX_CSTRING("_startG")},
	{hx::fsFloat,(int)offsetof(ColorTween_obj,_startB),HX_CSTRING("_startB")},
	{hx::fsFloat,(int)offsetof(ColorTween_obj,_rangeA),HX_CSTRING("_rangeA")},
	{hx::fsFloat,(int)offsetof(ColorTween_obj,_rangeR),HX_CSTRING("_rangeR")},
	{hx::fsFloat,(int)offsetof(ColorTween_obj,_rangeG),HX_CSTRING("_rangeG")},
	{hx::fsFloat,(int)offsetof(ColorTween_obj,_rangeB),HX_CSTRING("_rangeB")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("color"),
	HX_CSTRING("alpha"),
	HX_CSTRING("sprite"),
	HX_CSTRING("red"),
	HX_CSTRING("green"),
	HX_CSTRING("blue"),
	HX_CSTRING("_startA"),
	HX_CSTRING("_startR"),
	HX_CSTRING("_startG"),
	HX_CSTRING("_startB"),
	HX_CSTRING("_rangeA"),
	HX_CSTRING("_rangeR"),
	HX_CSTRING("_rangeG"),
	HX_CSTRING("_rangeB"),
	HX_CSTRING("destroy"),
	HX_CSTRING("tween"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTween_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTween_obj::__mClass,"__mClass");
};

#endif

Class ColorTween_obj::__mClass;

void ColorTween_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.misc.ColorTween"), hx::TCanCast< ColorTween_obj> ,sStaticFields,sMemberFields,
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

void ColorTween_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace misc
