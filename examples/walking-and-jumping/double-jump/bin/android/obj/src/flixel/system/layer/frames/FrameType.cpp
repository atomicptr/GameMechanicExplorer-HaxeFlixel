#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_layer_frames_FrameType
#include <flixel/system/layer/frames/FrameType.h>
#endif
namespace flixel{
namespace system{
namespace layer{
namespace frames{

::flixel::system::layer::frames::FrameType FrameType_obj::REGULAR;

::flixel::system::layer::frames::FrameType FrameType_obj::ROTATED;

HX_DEFINE_CREATE_ENUM(FrameType_obj)

int FrameType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("REGULAR")) return 0;
	if (inName==HX_CSTRING("ROTATED")) return 1;
	return super::__FindIndex(inName);
}

int FrameType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("REGULAR")) return 0;
	if (inName==HX_CSTRING("ROTATED")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FrameType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("REGULAR")) return REGULAR;
	if (inName==HX_CSTRING("ROTATED")) return ROTATED;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("REGULAR"),
	HX_CSTRING("ROTATED"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FrameType_obj::REGULAR,"REGULAR");
	HX_MARK_MEMBER_NAME(FrameType_obj::ROTATED,"ROTATED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FrameType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FrameType_obj::REGULAR,"REGULAR");
	HX_VISIT_MEMBER_NAME(FrameType_obj::ROTATED,"ROTATED");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class FrameType_obj::__mClass;

Dynamic __Create_FrameType_obj() { return new FrameType_obj; }

void FrameType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.layer.frames.FrameType"), hx::TCanCast< FrameType_obj >,sStaticFields,sMemberFields,
	&__Create_FrameType_obj, &__Create,
	&super::__SGetClass(), &CreateFrameType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FrameType_obj::__boot()
{
hx::Static(REGULAR) = hx::CreateEnum< FrameType_obj >(HX_CSTRING("REGULAR"),0);
hx::Static(ROTATED) = hx::CreateEnum< FrameType_obj >(HX_CSTRING("ROTATED"),1);
}


} // end namespace flixel
} // end namespace system
} // end namespace layer
} // end namespace frames
