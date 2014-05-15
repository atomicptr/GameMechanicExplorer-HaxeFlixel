#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_DebuggerLayout
#include <flixel/system/debug/DebuggerLayout.h>
#endif
namespace flixel{
namespace system{
namespace debug{

::flixel::system::debug::DebuggerLayout DebuggerLayout_obj::BIG;

::flixel::system::debug::DebuggerLayout DebuggerLayout_obj::LEFT;

::flixel::system::debug::DebuggerLayout DebuggerLayout_obj::MICRO;

::flixel::system::debug::DebuggerLayout DebuggerLayout_obj::RIGHT;

::flixel::system::debug::DebuggerLayout DebuggerLayout_obj::STANDARD;

::flixel::system::debug::DebuggerLayout DebuggerLayout_obj::TOP;

HX_DEFINE_CREATE_ENUM(DebuggerLayout_obj)

int DebuggerLayout_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("BIG")) return 2;
	if (inName==HX_CSTRING("LEFT")) return 4;
	if (inName==HX_CSTRING("MICRO")) return 1;
	if (inName==HX_CSTRING("RIGHT")) return 5;
	if (inName==HX_CSTRING("STANDARD")) return 0;
	if (inName==HX_CSTRING("TOP")) return 3;
	return super::__FindIndex(inName);
}

int DebuggerLayout_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("BIG")) return 0;
	if (inName==HX_CSTRING("LEFT")) return 0;
	if (inName==HX_CSTRING("MICRO")) return 0;
	if (inName==HX_CSTRING("RIGHT")) return 0;
	if (inName==HX_CSTRING("STANDARD")) return 0;
	if (inName==HX_CSTRING("TOP")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic DebuggerLayout_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("BIG")) return BIG;
	if (inName==HX_CSTRING("LEFT")) return LEFT;
	if (inName==HX_CSTRING("MICRO")) return MICRO;
	if (inName==HX_CSTRING("RIGHT")) return RIGHT;
	if (inName==HX_CSTRING("STANDARD")) return STANDARD;
	if (inName==HX_CSTRING("TOP")) return TOP;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("STANDARD"),
	HX_CSTRING("MICRO"),
	HX_CSTRING("BIG"),
	HX_CSTRING("TOP"),
	HX_CSTRING("LEFT"),
	HX_CSTRING("RIGHT"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DebuggerLayout_obj::BIG,"BIG");
	HX_MARK_MEMBER_NAME(DebuggerLayout_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(DebuggerLayout_obj::MICRO,"MICRO");
	HX_MARK_MEMBER_NAME(DebuggerLayout_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(DebuggerLayout_obj::STANDARD,"STANDARD");
	HX_MARK_MEMBER_NAME(DebuggerLayout_obj::TOP,"TOP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DebuggerLayout_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DebuggerLayout_obj::BIG,"BIG");
	HX_VISIT_MEMBER_NAME(DebuggerLayout_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(DebuggerLayout_obj::MICRO,"MICRO");
	HX_VISIT_MEMBER_NAME(DebuggerLayout_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(DebuggerLayout_obj::STANDARD,"STANDARD");
	HX_VISIT_MEMBER_NAME(DebuggerLayout_obj::TOP,"TOP");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class DebuggerLayout_obj::__mClass;

Dynamic __Create_DebuggerLayout_obj() { return new DebuggerLayout_obj; }

void DebuggerLayout_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.DebuggerLayout"), hx::TCanCast< DebuggerLayout_obj >,sStaticFields,sMemberFields,
	&__Create_DebuggerLayout_obj, &__Create,
	&super::__SGetClass(), &CreateDebuggerLayout_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void DebuggerLayout_obj::__boot()
{
hx::Static(BIG) = hx::CreateEnum< DebuggerLayout_obj >(HX_CSTRING("BIG"),2);
hx::Static(LEFT) = hx::CreateEnum< DebuggerLayout_obj >(HX_CSTRING("LEFT"),4);
hx::Static(MICRO) = hx::CreateEnum< DebuggerLayout_obj >(HX_CSTRING("MICRO"),1);
hx::Static(RIGHT) = hx::CreateEnum< DebuggerLayout_obj >(HX_CSTRING("RIGHT"),5);
hx::Static(STANDARD) = hx::CreateEnum< DebuggerLayout_obj >(HX_CSTRING("STANDARD"),0);
hx::Static(TOP) = hx::CreateEnum< DebuggerLayout_obj >(HX_CSTRING("TOP"),3);
}


} // end namespace flixel
} // end namespace system
} // end namespace debug
