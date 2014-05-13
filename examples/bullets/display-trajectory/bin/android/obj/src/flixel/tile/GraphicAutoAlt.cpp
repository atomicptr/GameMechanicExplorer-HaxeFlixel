#include <hxcpp.h>

#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_flixel_tile_GraphicAutoAlt
#include <flixel/tile/GraphicAutoAlt.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace flixel{
namespace tile{

Void GraphicAutoAlt_obj::__construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA)
{
HX_STACK_FRAME("flixel.tile.GraphicAutoAlt","new",0x4e2c2272,"flixel.tile.GraphicAutoAlt.new","openfl/Assets.hx",1393,0x989d477c)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_transparent,"transparent")
HX_STACK_ARG(__o_fillRGBA,"fillRGBA")
Dynamic transparent = __o_transparent.Default(true);
Dynamic fillRGBA = __o_fillRGBA.Default(-1);
{
	HX_STACK_LINE(1459)
	super::__construct(width,height,transparent,fillRGBA,null());
	HX_STACK_LINE(1461)
	::haxe::io::Bytes _g = ::haxe::Resource_obj::getBytes(::flixel::tile::GraphicAutoAlt_obj::resourceName);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1461)
	::flash::utils::ByteArray byteArray = ::flash::utils::ByteArray_obj::fromBytes(_g);		HX_STACK_VAR(byteArray,"byteArray");
	HX_STACK_LINE(1462)
	{
		HX_STACK_LINE(1462)
		Dynamic _g1 = ::flash::display::BitmapData_obj::lime_bitmap_data_from_bytes(byteArray,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1462)
		this->__handle = _g1;
	}
}
;
	return null();
}

//GraphicAutoAlt_obj::~GraphicAutoAlt_obj() { }

Dynamic GraphicAutoAlt_obj::__CreateEmpty() { return  new GraphicAutoAlt_obj; }
hx::ObjectPtr< GraphicAutoAlt_obj > GraphicAutoAlt_obj::__new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA)
{  hx::ObjectPtr< GraphicAutoAlt_obj > result = new GraphicAutoAlt_obj();
	result->__construct(width,height,__o_transparent,__o_fillRGBA);
	return result;}

Dynamic GraphicAutoAlt_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicAutoAlt_obj > result = new GraphicAutoAlt_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::String GraphicAutoAlt_obj::resourceName;


GraphicAutoAlt_obj::GraphicAutoAlt_obj()
{
}

Dynamic GraphicAutoAlt_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { return resourceName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GraphicAutoAlt_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicAutoAlt_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("resourceName"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicAutoAlt_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicAutoAlt_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicAutoAlt_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicAutoAlt_obj::resourceName,"resourceName");
};

#endif

Class GraphicAutoAlt_obj::__mClass;

void GraphicAutoAlt_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tile.GraphicAutoAlt"), hx::TCanCast< GraphicAutoAlt_obj> ,sStaticFields,sMemberFields,
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

void GraphicAutoAlt_obj::__boot()
{
	resourceName= HX_CSTRING("__ASSET__:bitmap_flixel_tile_GraphicAutoAlt");
}

} // end namespace flixel
} // end namespace tile
