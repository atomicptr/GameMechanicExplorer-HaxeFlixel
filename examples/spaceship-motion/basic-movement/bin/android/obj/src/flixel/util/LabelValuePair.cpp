#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
namespace flixel{
namespace util{

Void LabelValuePair_obj::__construct()
{
HX_STACK_FRAME("flixel.util.LabelValuePair","new",0x8e753503,"flixel.util.LabelValuePair.new","flixel/util/FlxStringUtil.hx",583,0x4e012e33)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//LabelValuePair_obj::~LabelValuePair_obj() { }

Dynamic LabelValuePair_obj::__CreateEmpty() { return  new LabelValuePair_obj; }
hx::ObjectPtr< LabelValuePair_obj > LabelValuePair_obj::__new()
{  hx::ObjectPtr< LabelValuePair_obj > result = new LabelValuePair_obj();
	result->__construct();
	return result;}

Dynamic LabelValuePair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LabelValuePair_obj > result = new LabelValuePair_obj();
	result->__construct();
	return result;}

hx::Object *LabelValuePair_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

::flixel::util::LabelValuePair LabelValuePair_obj::create( ::String label,Dynamic value){
	HX_STACK_FRAME("flixel.util.LabelValuePair","create",0x3da24a39,"flixel.util.LabelValuePair.create","flixel/util/FlxStringUtil.hx",566,0x4e012e33)
	HX_STACK_THIS(this)
	HX_STACK_ARG(label,"label")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(567)
	this->label = label;
	HX_STACK_LINE(568)
	this->value = value;
	HX_STACK_LINE(569)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(LabelValuePair_obj,create,return )

Void LabelValuePair_obj::put( ){
{
		HX_STACK_FRAME("flixel.util.LabelValuePair","put",0x8e76c772,"flixel.util.LabelValuePair.put","flixel/util/FlxStringUtil.hx",574,0x4e012e33)
		HX_STACK_THIS(this)
		HX_STACK_LINE(574)
		::flixel::util::LabelValuePair_obj::_pool->put(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LabelValuePair_obj,put,(void))

Void LabelValuePair_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.LabelValuePair","destroy",0xc37a1f1d,"flixel.util.LabelValuePair.destroy","flixel/util/FlxStringUtil.hx",578,0x4e012e33)
		HX_STACK_THIS(this)
		HX_STACK_LINE(579)
		this->label = null();
		HX_STACK_LINE(580)
		this->value = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LabelValuePair_obj,destroy,(void))

::flixel::util::FlxPool_flixel_util_LabelValuePair LabelValuePair_obj::_pool;

::flixel::util::LabelValuePair LabelValuePair_obj::weak( ::String label,Dynamic value){
	HX_STACK_FRAME("flixel.util.LabelValuePair","weak",0x1e0c0675,"flixel.util.LabelValuePair.weak","flixel/util/FlxStringUtil.hx",559,0x4e012e33)
	HX_STACK_ARG(label,"label")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(559)
	::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(559)
	_this->label = label;
	HX_STACK_LINE(559)
	_this->value = value;
	HX_STACK_LINE(559)
	return _this;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LabelValuePair_obj,weak,return )


LabelValuePair_obj::LabelValuePair_obj()
{
}

void LabelValuePair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LabelValuePair);
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void LabelValuePair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(value,"value");
}

Dynamic LabelValuePair_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"weak") ) { return weak_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { return _pool; }
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LabelValuePair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=inValue.Cast< ::flixel::util::FlxPool_flixel_util_LabelValuePair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LabelValuePair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("label"));
	outFields->push(HX_CSTRING("value"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_pool"),
	HX_CSTRING("weak"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(LabelValuePair_obj,label),HX_CSTRING("label")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LabelValuePair_obj,value),HX_CSTRING("value")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("label"),
	HX_CSTRING("value"),
	HX_CSTRING("create"),
	HX_CSTRING("put"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LabelValuePair_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LabelValuePair_obj::_pool,"_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LabelValuePair_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LabelValuePair_obj::_pool,"_pool");
};

#endif

Class LabelValuePair_obj::__mClass;

void LabelValuePair_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.LabelValuePair"), hx::TCanCast< LabelValuePair_obj> ,sStaticFields,sMemberFields,
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

void LabelValuePair_obj::__boot()
{
	_pool= ::flixel::util::FlxPool_flixel_util_LabelValuePair_obj::__new(hx::ClassOf< ::flixel::util::LabelValuePair >());
}

} // end namespace flixel
} // end namespace util
