#include <hxcpp.h>

#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_layer__TileSheetExt_RectPointTileID
#include <flixel/system/layer/_TileSheetExt/RectPointTileID.h>
#endif
namespace flixel{
namespace system{
namespace layer{
namespace _TileSheetExt{

Void RectPointTileID_obj::__construct(int id,::flash::geom::Rectangle rect,::flash::geom::Point point)
{
HX_STACK_FRAME("flixel.system.layer._TileSheetExt.RectPointTileID","new",0xd8d2fe9e,"flixel.system.layer._TileSheetExt.RectPointTileID.new","flixel/system/layer/TileSheetExt.hx",104,0x9b6b4f03)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
HX_STACK_ARG(rect,"rect")
HX_STACK_ARG(point,"point")
{
	HX_STACK_LINE(105)
	this->id = id;
	HX_STACK_LINE(106)
	this->rect = rect;
	HX_STACK_LINE(107)
	this->point = point;
}
;
	return null();
}

//RectPointTileID_obj::~RectPointTileID_obj() { }

Dynamic RectPointTileID_obj::__CreateEmpty() { return  new RectPointTileID_obj; }
hx::ObjectPtr< RectPointTileID_obj > RectPointTileID_obj::__new(int id,::flash::geom::Rectangle rect,::flash::geom::Point point)
{  hx::ObjectPtr< RectPointTileID_obj > result = new RectPointTileID_obj();
	result->__construct(id,rect,point);
	return result;}

Dynamic RectPointTileID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RectPointTileID_obj > result = new RectPointTileID_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *RectPointTileID_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void RectPointTileID_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.layer._TileSheetExt.RectPointTileID","destroy",0xca0c5238,"flixel.system.layer._TileSheetExt.RectPointTileID.destroy","flixel/system/layer/TileSheetExt.hx",111,0x9b6b4f03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		this->rect = null();
		HX_STACK_LINE(113)
		this->point = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RectPointTileID_obj,destroy,(void))


RectPointTileID_obj::RectPointTileID_obj()
{
}

void RectPointTileID_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RectPointTileID);
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(point,"point");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void RectPointTileID_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(point,"point");
	HX_VISIT_MEMBER_NAME(id,"id");
}

Dynamic RectPointTileID_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { return point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RectPointTileID_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=inValue.Cast< ::flash::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RectPointTileID_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("point"));
	outFields->push(HX_CSTRING("id"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flash::geom::Rectangle*/ ,(int)offsetof(RectPointTileID_obj,rect),HX_CSTRING("rect")},
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(RectPointTileID_obj,point),HX_CSTRING("point")},
	{hx::fsInt,(int)offsetof(RectPointTileID_obj,id),HX_CSTRING("id")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("rect"),
	HX_CSTRING("point"),
	HX_CSTRING("id"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RectPointTileID_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RectPointTileID_obj::__mClass,"__mClass");
};

#endif

Class RectPointTileID_obj::__mClass;

void RectPointTileID_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.layer._TileSheetExt.RectPointTileID"), hx::TCanCast< RectPointTileID_obj> ,sStaticFields,sMemberFields,
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

void RectPointTileID_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace layer
} // end namespace _TileSheetExt
