#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSort
#include <flixel/util/FlxSort.h>
#endif
namespace flixel{
namespace util{

Void FlxSort_obj::__construct()
{
	return null();
}

//FlxSort_obj::~FlxSort_obj() { }

Dynamic FlxSort_obj::__CreateEmpty() { return  new FlxSort_obj; }
hx::ObjectPtr< FlxSort_obj > FlxSort_obj::__new()
{  hx::ObjectPtr< FlxSort_obj > result = new FlxSort_obj();
	result->__construct();
	return result;}

Dynamic FlxSort_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSort_obj > result = new FlxSort_obj();
	result->__construct();
	return result;}

int FlxSort_obj::ASCENDING;

int FlxSort_obj::DESCENDING;

int FlxSort_obj::byY( int Order,::flixel::FlxObject Obj1,::flixel::FlxObject Obj2){
	HX_STACK_FRAME("flixel.util.FlxSort","byY",0x7c03b7ea,"flixel.util.FlxSort.byY","flixel/util/FlxSort.hx",18,0x198bbf28)
	HX_STACK_ARG(Order,"Order")
	HX_STACK_ARG(Obj1,"Obj1")
	HX_STACK_ARG(Obj2,"Obj2")
	HX_STACK_LINE(18)
	Float Value1 = Obj1->y;		HX_STACK_VAR(Value1,"Value1");
	HX_STACK_LINE(18)
	Float Value2 = Obj2->y;		HX_STACK_VAR(Value2,"Value2");
	HX_STACK_LINE(18)
	int result = (int)0;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(18)
	if (((Value1 < Value2))){
		HX_STACK_LINE(18)
		result = Order;
	}
	else{
		HX_STACK_LINE(18)
		if (((Value1 > Value2))){
			HX_STACK_LINE(18)
			result = -(Order);
		}
	}
	HX_STACK_LINE(18)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSort_obj,byY,return )

int FlxSort_obj::byValues( int Order,Float Value1,Float Value2){
	HX_STACK_FRAME("flixel.util.FlxSort","byValues",0xe62fb2d1,"flixel.util.FlxSort.byValues","flixel/util/FlxSort.hx",25,0x198bbf28)
	HX_STACK_ARG(Order,"Order")
	HX_STACK_ARG(Value1,"Value1")
	HX_STACK_ARG(Value2,"Value2")
	HX_STACK_LINE(26)
	int result = (int)0;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(28)
	if (((Value1 < Value2))){
		HX_STACK_LINE(30)
		result = Order;
	}
	else{
		HX_STACK_LINE(32)
		if (((Value1 > Value2))){
			HX_STACK_LINE(34)
			result = -(Order);
		}
	}
	HX_STACK_LINE(37)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSort_obj,byValues,return )


FlxSort_obj::FlxSort_obj()
{
}

Dynamic FlxSort_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"byY") ) { return byY_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"byValues") ) { return byValues_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSort_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSort_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ASCENDING"),
	HX_CSTRING("DESCENDING"),
	HX_CSTRING("byY"),
	HX_CSTRING("byValues"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSort_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxSort_obj::ASCENDING,"ASCENDING");
	HX_MARK_MEMBER_NAME(FlxSort_obj::DESCENDING,"DESCENDING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSort_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxSort_obj::ASCENDING,"ASCENDING");
	HX_VISIT_MEMBER_NAME(FlxSort_obj::DESCENDING,"DESCENDING");
};

#endif

Class FlxSort_obj::__mClass;

void FlxSort_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxSort"), hx::TCanCast< FlxSort_obj> ,sStaticFields,sMemberFields,
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

void FlxSort_obj::__boot()
{
	ASCENDING= (int)-1;
	DESCENDING= (int)1;
}

} // end namespace flixel
} // end namespace util
