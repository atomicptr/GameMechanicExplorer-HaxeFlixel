#include <hxcpp.h>

#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureRegion
#include <flixel/util/loaders/TextureRegion.h>
#endif
namespace flixel{
namespace util{
namespace loaders{

Void TextureRegion_obj::__construct(::flixel::util::loaders::CachedGraphics data,hx::Null< int >  __o_startX,hx::Null< int >  __o_startY,hx::Null< int >  __o_tileWidth,hx::Null< int >  __o_tileHeight,hx::Null< int >  __o_spacingX,hx::Null< int >  __o_spacingY,hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{
HX_STACK_FRAME("flixel.util.loaders.TextureRegion","new",0x14240bf9,"flixel.util.loaders.TextureRegion.new","flixel/util/loaders/TextureRegion.hx",13,0xdc04a3f8)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
HX_STACK_ARG(__o_startX,"startX")
HX_STACK_ARG(__o_startY,"startY")
HX_STACK_ARG(__o_tileWidth,"tileWidth")
HX_STACK_ARG(__o_tileHeight,"tileHeight")
HX_STACK_ARG(__o_spacingX,"spacingX")
HX_STACK_ARG(__o_spacingY,"spacingY")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
int startX = __o_startX.Default(0);
int startY = __o_startY.Default(0);
int tileWidth = __o_tileWidth.Default(0);
int tileHeight = __o_tileHeight.Default(0);
int spacingX = __o_spacingX.Default(0);
int spacingY = __o_spacingY.Default(0);
int width = __o_width.Default(0);
int height = __o_height.Default(0);
{
	HX_STACK_LINE(14)
	this->data = data;
	HX_STACK_LINE(16)
	if (((width <= (int)0))){
		HX_STACK_LINE(16)
		int _g = data->bitmap->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(16)
		width = _g;
	}
	HX_STACK_LINE(17)
	if (((height <= (int)0))){
		HX_STACK_LINE(17)
		int _g1 = data->bitmap->get_height();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(17)
		height = _g1;
	}
	HX_STACK_LINE(19)
	::flixel::system::layer::Region _g2 = ::flixel::system::layer::Region_obj::__new(startX,startY,tileWidth,tileHeight,spacingX,spacingY,width,height);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(19)
	this->region = _g2;
}
;
	return null();
}

//TextureRegion_obj::~TextureRegion_obj() { }

Dynamic TextureRegion_obj::__CreateEmpty() { return  new TextureRegion_obj; }
hx::ObjectPtr< TextureRegion_obj > TextureRegion_obj::__new(::flixel::util::loaders::CachedGraphics data,hx::Null< int >  __o_startX,hx::Null< int >  __o_startY,hx::Null< int >  __o_tileWidth,hx::Null< int >  __o_tileHeight,hx::Null< int >  __o_spacingX,hx::Null< int >  __o_spacingY,hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{  hx::ObjectPtr< TextureRegion_obj > result = new TextureRegion_obj();
	result->__construct(data,__o_startX,__o_startY,__o_tileWidth,__o_tileHeight,__o_spacingX,__o_spacingY,__o_width,__o_height);
	return result;}

Dynamic TextureRegion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureRegion_obj > result = new TextureRegion_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return result;}

hx::Object *TextureRegion_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

::flixel::util::loaders::TextureRegion TextureRegion_obj::clone( ){
	HX_STACK_FRAME("flixel.util.loaders.TextureRegion","clone",0x1d6c2736,"flixel.util.loaders.TextureRegion.clone","flixel/util/loaders/TextureRegion.hx",24,0xdc04a3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	return ::flixel::util::loaders::TextureRegion_obj::__new(this->data,this->region->startX,this->region->startY,this->region->tileWidth,this->region->tileHeight,this->region->spacingX,this->region->spacingY,this->region->width,this->region->height);
}


HX_DEFINE_DYNAMIC_FUNC0(TextureRegion_obj,clone,return )

Void TextureRegion_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.loaders.TextureRegion","destroy",0x1cdea913,"flixel.util.loaders.TextureRegion.destroy","flixel/util/loaders/TextureRegion.hx",28,0xdc04a3f8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		this->data = null();
		HX_STACK_LINE(30)
		this->region = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextureRegion_obj,destroy,(void))


TextureRegion_obj::TextureRegion_obj()
{
}

void TextureRegion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureRegion);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(region,"region");
	HX_MARK_END_CLASS();
}

void TextureRegion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(region,"region");
}

Dynamic TextureRegion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { return region; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureRegion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { region=inValue.Cast< ::flixel::system::layer::Region >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureRegion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("region"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::loaders::CachedGraphics*/ ,(int)offsetof(TextureRegion_obj,data),HX_CSTRING("data")},
	{hx::fsObject /*::flixel::system::layer::Region*/ ,(int)offsetof(TextureRegion_obj,region),HX_CSTRING("region")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("data"),
	HX_CSTRING("region"),
	HX_CSTRING("clone"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureRegion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureRegion_obj::__mClass,"__mClass");
};

#endif

Class TextureRegion_obj::__mClass;

void TextureRegion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.loaders.TextureRegion"), hx::TCanCast< TextureRegion_obj> ,sStaticFields,sMemberFields,
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

void TextureRegion_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
} // end namespace loaders
