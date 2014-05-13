#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
namespace flixel{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC0(IFlxDestroyable_obj,destroy,)


static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxDestroyable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxDestroyable_obj::__mClass,"__mClass");
};

#endif

Class IFlxDestroyable_obj::__mClass;

void IFlxDestroyable_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.interfaces.IFlxDestroyable"), hx::TCanCast< IFlxDestroyable_obj> ,0,sMemberFields,
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

void IFlxDestroyable_obj::__boot()
{
}

} // end namespace flixel
} // end namespace interfaces
