#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
namespace flixel{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC1(IFlxSignal_obj,add,)

HX_DEFINE_DYNAMIC_FUNC1(IFlxSignal_obj,addOnce,)

HX_DEFINE_DYNAMIC_FUNC1(IFlxSignal_obj,remove,)

HX_DEFINE_DYNAMIC_FUNC0(IFlxSignal_obj,removeAll,)

HX_DEFINE_DYNAMIC_FUNC1(IFlxSignal_obj,has,return )


static ::String sMemberFields[] = {
	HX_CSTRING("dispatch"),
	HX_CSTRING("add"),
	HX_CSTRING("addOnce"),
	HX_CSTRING("remove"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("has"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxSignal_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxSignal_obj::__mClass,"__mClass");
};

#endif

Class IFlxSignal_obj::__mClass;

void IFlxSignal_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.interfaces.IFlxSignal"), hx::TCanCast< IFlxSignal_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void IFlxSignal_obj::__boot()
{
}

} // end namespace flixel
} // end namespace interfaces
