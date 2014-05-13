#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace tweens{
namespace misc{

Void VarTween_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.misc.VarTween","new",0x19cf09e4,"flixel.tweens.misc.VarTween.new","flixel/tweens/misc/VarTween.hx",28,0x836bddcb)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(29)
	super::__construct(Options);
	HX_STACK_LINE(31)
	this->_vars = Array_obj< ::String >::__new();
	HX_STACK_LINE(32)
	this->_startValues = Array_obj< Float >::__new();
	HX_STACK_LINE(33)
	this->_range = Array_obj< Float >::__new();
}
;
	return null();
}

//VarTween_obj::~VarTween_obj() { }

Dynamic VarTween_obj::__CreateEmpty() { return  new VarTween_obj; }
hx::ObjectPtr< VarTween_obj > VarTween_obj::__new(Dynamic Options)
{  hx::ObjectPtr< VarTween_obj > result = new VarTween_obj();
	result->__construct(Options);
	return result;}

Dynamic VarTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VarTween_obj > result = new VarTween_obj();
	result->__construct(inArgs[0]);
	return result;}

Void VarTween_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.misc.VarTween","destroy",0xef76787e,"flixel.tweens.misc.VarTween.destroy","flixel/tweens/misc/VarTween.hx",21,0x836bddcb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		this->super::destroy();
		HX_STACK_LINE(23)
		this->_object = null();
		HX_STACK_LINE(24)
		this->_properties = null();
	}
return null();
}


::flixel::tweens::misc::VarTween VarTween_obj::tween( Dynamic object,Dynamic properties,Float duration){
	HX_STACK_FRAME("flixel.tweens.misc.VarTween","tween",0xf3504cef,"flixel.tweens.misc.VarTween.tween","flixel/tweens/misc/VarTween.hx",44,0x836bddcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_LINE(56)
	this->_object = object;
	HX_STACK_LINE(57)
	this->_properties = properties;
	HX_STACK_LINE(58)
	this->duration = duration;
	HX_STACK_LINE(59)
	this->start();
	HX_STACK_LINE(60)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(VarTween_obj,tween,return )

Void VarTween_obj::update( ){
{
		HX_STACK_FRAME("flixel.tweens.misc.VarTween","update",0x50d41705,"flixel.tweens.misc.VarTween.update","flixel/tweens/misc/VarTween.hx",64,0x836bddcb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		if (((this->_vars->length < (int)1))){
			HX_STACK_LINE(69)
			this->initializeVars();
		}
		HX_STACK_LINE(72)
		this->super::update();
		HX_STACK_LINE(73)
		int i = this->_vars->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(74)
		while((true)){
			HX_STACK_LINE(74)
			int _g = (i)--;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(74)
			if ((!(((_g > (int)0))))){
				HX_STACK_LINE(74)
				break;
			}
			HX_STACK_LINE(76)
			{
				HX_STACK_LINE(76)
				Dynamic o = this->_object;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(76)
				if (((o != null()))){
					HX_STACK_LINE(76)
					o->__SetField(this->_vars->__get(i),(this->_startValues->__get(i) + (this->_range->__get(i) * this->scale)),true);
				}
			}
		}
	}
return null();
}


Void VarTween_obj::initializeVars( ){
{
		HX_STACK_FRAME("flixel.tweens.misc.VarTween","initializeVars",0x0a5a5e18,"flixel.tweens.misc.VarTween.initializeVars","flixel/tweens/misc/VarTween.hx",81,0x836bddcb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		::String p;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(83)
		Array< ::String > fields;		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(85)
		if ((::Reflect_obj::isObject(this->_properties))){
			HX_STACK_LINE(87)
			Array< ::String > _g = ::Reflect_obj::fields(this->_properties);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(87)
			fields = _g;
		}
		else{
			HX_STACK_LINE(91)
			HX_STACK_DO_THROW(HX_CSTRING("Unsupported properties container - use an object containing key/value pairs."));
		}
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(94)
			while((true)){
				HX_STACK_LINE(94)
				if ((!(((_g < fields->length))))){
					HX_STACK_LINE(94)
					break;
				}
				HX_STACK_LINE(94)
				::String p1 = fields->__get(_g);		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(94)
				++(_g);
				HX_STACK_LINE(96)
				Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(96)
				{
					HX_STACK_LINE(96)
					Dynamic o = this->_object;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(96)
					if (((o == null()))){
						HX_STACK_LINE(96)
						_g1 = null();
					}
					else{
						HX_STACK_LINE(96)
						_g1 = o->__Field(p1,true);
					}
				}
				HX_STACK_LINE(96)
				if (((_g1 == null()))){
					HX_STACK_LINE(98)
					HX_STACK_DO_THROW(((HX_CSTRING("The Object does not have the property \"") + p1) + HX_CSTRING("\", or it is not accessible.")));
				}
				HX_STACK_LINE(101)
				Dynamic a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(101)
				{
					HX_STACK_LINE(101)
					Dynamic o = this->_object;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(101)
					if (((o == null()))){
						HX_STACK_LINE(101)
						a = null();
					}
					else{
						HX_STACK_LINE(101)
						a = o->__Field(p1,true);
					}
				}
				HX_STACK_LINE(103)
				if ((::Math_obj::isNaN(a))){
					HX_STACK_LINE(105)
					HX_STACK_DO_THROW(((HX_CSTRING("The property \"") + p1) + HX_CSTRING("\" is not numeric.")));
				}
				HX_STACK_LINE(107)
				this->_vars->push(p1);
				HX_STACK_LINE(108)
				this->_startValues->push(a);
				HX_STACK_LINE(109)
				Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(109)
				{
					HX_STACK_LINE(109)
					Dynamic o = this->_properties;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(109)
					if (((o == null()))){
						HX_STACK_LINE(109)
						_g2 = null();
					}
					else{
						HX_STACK_LINE(109)
						_g2 = o->__Field(p1,true);
					}
				}
				HX_STACK_LINE(109)
				Float _g3 = (_g2 - a);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(109)
				this->_range->push(_g3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VarTween_obj,initializeVars,(void))


VarTween_obj::VarTween_obj()
{
}

void VarTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VarTween);
	HX_MARK_MEMBER_NAME(_object,"_object");
	HX_MARK_MEMBER_NAME(_properties,"_properties");
	HX_MARK_MEMBER_NAME(_vars,"_vars");
	HX_MARK_MEMBER_NAME(_startValues,"_startValues");
	HX_MARK_MEMBER_NAME(_range,"_range");
	::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VarTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_object,"_object");
	HX_VISIT_MEMBER_NAME(_properties,"_properties");
	HX_VISIT_MEMBER_NAME(_vars,"_vars");
	HX_VISIT_MEMBER_NAME(_startValues,"_startValues");
	HX_VISIT_MEMBER_NAME(_range,"_range");
	::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

Dynamic VarTween_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_vars") ) { return _vars; }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_range") ) { return _range; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { return _object; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_properties") ) { return _properties; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_startValues") ) { return _startValues; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initializeVars") ) { return initializeVars_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VarTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_vars") ) { _vars=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_range") ) { _range=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_properties") ) { _properties=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_startValues") ) { _startValues=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VarTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_object"));
	outFields->push(HX_CSTRING("_properties"));
	outFields->push(HX_CSTRING("_vars"));
	outFields->push(HX_CSTRING("_startValues"));
	outFields->push(HX_CSTRING("_range"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(VarTween_obj,_object),HX_CSTRING("_object")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(VarTween_obj,_properties),HX_CSTRING("_properties")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(VarTween_obj,_vars),HX_CSTRING("_vars")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(VarTween_obj,_startValues),HX_CSTRING("_startValues")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(VarTween_obj,_range),HX_CSTRING("_range")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_object"),
	HX_CSTRING("_properties"),
	HX_CSTRING("_vars"),
	HX_CSTRING("_startValues"),
	HX_CSTRING("_range"),
	HX_CSTRING("destroy"),
	HX_CSTRING("tween"),
	HX_CSTRING("update"),
	HX_CSTRING("initializeVars"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VarTween_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VarTween_obj::__mClass,"__mClass");
};

#endif

Class VarTween_obj::__mClass;

void VarTween_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.misc.VarTween"), hx::TCanCast< VarTween_obj> ,sStaticFields,sMemberFields,
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

void VarTween_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace misc
