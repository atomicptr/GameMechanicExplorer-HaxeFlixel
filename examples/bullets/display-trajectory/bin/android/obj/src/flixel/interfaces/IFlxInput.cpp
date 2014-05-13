#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
namespace flixel{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC0(IFlxInput_obj,reset,)

HX_DEFINE_DYNAMIC_FUNC0(IFlxInput_obj,update,)

HX_DEFINE_DYNAMIC_FUNC0(IFlxInput_obj,onFocus,)

HX_DEFINE_DYNAMIC_FUNC0(IFlxInput_obj,onFocusLost,)

HX_DEFINE_DYNAMIC_FUNC0(IFlxInput_obj,destroy,)


static ::String sMemberFields[] = {
	HX_CSTRING("reset"),
	HX_CSTRING("update"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxInput_obj::__mClass,"__mClass");
};

#endif

Class IFlxInput_obj::__mClass;

void IFlxInput_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.interfaces.IFlxInput"), hx::TCanCast< IFlxInput_obj> ,0,sMemberFields,
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

void IFlxInput_obj::__boot()
{
}

} // end namespace flixel
} // end namespace interfaces
