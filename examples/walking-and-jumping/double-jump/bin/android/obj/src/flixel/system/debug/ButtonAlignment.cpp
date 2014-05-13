#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_ButtonAlignment
#include <flixel/system/debug/ButtonAlignment.h>
#endif
namespace flixel{
namespace system{
namespace debug{

::flixel::system::debug::ButtonAlignment ButtonAlignment_obj::LEFT;

::flixel::system::debug::ButtonAlignment ButtonAlignment_obj::MIDDLE;

::flixel::system::debug::ButtonAlignment ButtonAlignment_obj::RIGHT;

HX_DEFINE_CREATE_ENUM(ButtonAlignment_obj)

int ButtonAlignment_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("LEFT")) return 0;
	if (inName==HX_CSTRING("MIDDLE")) return 1;
	if (inName==HX_CSTRING("RIGHT")) return 2;
	return super::__FindIndex(inName);
}

int ButtonAlignment_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("LEFT")) return 0;
	if (inName==HX_CSTRING("MIDDLE")) return 0;
	if (inName==HX_CSTRING("RIGHT")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ButtonAlignment_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("LEFT")) return LEFT;
	if (inName==HX_CSTRING("MIDDLE")) return MIDDLE;
	if (inName==HX_CSTRING("RIGHT")) return RIGHT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("LEFT"),
	HX_CSTRING("MIDDLE"),
	HX_CSTRING("RIGHT"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ButtonAlignment_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(ButtonAlignment_obj::MIDDLE,"MIDDLE");
	HX_MARK_MEMBER_NAME(ButtonAlignment_obj::RIGHT,"RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ButtonAlignment_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ButtonAlignment_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(ButtonAlignment_obj::MIDDLE,"MIDDLE");
	HX_VISIT_MEMBER_NAME(ButtonAlignment_obj::RIGHT,"RIGHT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class ButtonAlignment_obj::__mClass;

Dynamic __Create_ButtonAlignment_obj() { return new ButtonAlignment_obj; }

void ButtonAlignment_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.ButtonAlignment"), hx::TCanCast< ButtonAlignment_obj >,sStaticFields,sMemberFields,
	&__Create_ButtonAlignment_obj, &__Create,
	&super::__SGetClass(), &CreateButtonAlignment_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ButtonAlignment_obj::__boot()
{
hx::Static(LEFT) = hx::CreateEnum< ButtonAlignment_obj >(HX_CSTRING("LEFT"),0);
hx::Static(MIDDLE) = hx::CreateEnum< ButtonAlignment_obj >(HX_CSTRING("MIDDLE"),1);
hx::Static(RIGHT) = hx::CreateEnum< ButtonAlignment_obj >(HX_CSTRING("RIGHT"),2);
}


} // end namespace flixel
} // end namespace system
} // end namespace debug
