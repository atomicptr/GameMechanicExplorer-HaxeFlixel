#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
namespace flixel{
namespace system{
namespace layer{

Void DrawStackItem_obj::__construct()
{
HX_STACK_FRAME("flixel.system.layer.DrawStackItem","new",0x05802d9f,"flixel.system.layer.DrawStackItem.new","flixel/system/layer/DrawStackItem.hx",5,0xaa5e86d2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->antialiasing = false;
	HX_STACK_LINE(15)
	this->initialized = false;
	HX_STACK_LINE(13)
	this->blending = (int)0;
	HX_STACK_LINE(12)
	this->colored = false;
	HX_STACK_LINE(9)
	this->position = (int)0;
	HX_STACK_LINE(21)
	Array< Float > _g = Array_obj< Float >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(21)
	this->drawData = _g;
}
;
	return null();
}

//DrawStackItem_obj::~DrawStackItem_obj() { }

Dynamic DrawStackItem_obj::__CreateEmpty() { return  new DrawStackItem_obj; }
hx::ObjectPtr< DrawStackItem_obj > DrawStackItem_obj::__new()
{  hx::ObjectPtr< DrawStackItem_obj > result = new DrawStackItem_obj();
	result->__construct();
	return result;}

Dynamic DrawStackItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawStackItem_obj > result = new DrawStackItem_obj();
	result->__construct();
	return result;}

Void DrawStackItem_obj::reset( ){
{
		HX_STACK_FRAME("flixel.system.layer.DrawStackItem","reset",0xd5b5b4ce,"flixel.system.layer.DrawStackItem.reset","flixel/system/layer/DrawStackItem.hx",25,0xaa5e86d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		this->graphics = null();
		HX_STACK_LINE(27)
		this->initialized = false;
		HX_STACK_LINE(28)
		this->antialiasing = false;
		HX_STACK_LINE(29)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawStackItem_obj,reset,(void))

Void DrawStackItem_obj::dispose( ){
{
		HX_STACK_FRAME("flixel.system.layer.DrawStackItem","dispose",0x50a9e95e,"flixel.system.layer.DrawStackItem.dispose","flixel/system/layer/DrawStackItem.hx",33,0xaa5e86d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		this->graphics = null();
		HX_STACK_LINE(35)
		this->drawData = null();
		HX_STACK_LINE(36)
		this->next = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawStackItem_obj,dispose,(void))


DrawStackItem_obj::DrawStackItem_obj()
{
}

void DrawStackItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawStackItem);
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(drawData,"drawData");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(colored,"colored");
	HX_MARK_MEMBER_NAME(blending,"blending");
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_END_CLASS();
}

void DrawStackItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(drawData,"drawData");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(colored,"colored");
	HX_VISIT_MEMBER_NAME(blending,"blending");
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
}

Dynamic DrawStackItem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colored") ) { return colored; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return graphics; }
		if (HX_FIELD_EQ(inName,"drawData") ) { return drawData; }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"blending") ) { return blending; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DrawStackItem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::flixel::system::layer::DrawStackItem >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colored") ) { colored=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawData") ) { drawData=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blending") ) { blending=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { antialiasing=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DrawStackItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("graphics"));
	outFields->push(HX_CSTRING("drawData"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("colored"));
	outFields->push(HX_CSTRING("blending"));
	outFields->push(HX_CSTRING("initialized"));
	outFields->push(HX_CSTRING("antialiasing"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::loaders::CachedGraphics*/ ,(int)offsetof(DrawStackItem_obj,graphics),HX_CSTRING("graphics")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(DrawStackItem_obj,drawData),HX_CSTRING("drawData")},
	{hx::fsInt,(int)offsetof(DrawStackItem_obj,position),HX_CSTRING("position")},
	{hx::fsObject /*::flixel::system::layer::DrawStackItem*/ ,(int)offsetof(DrawStackItem_obj,next),HX_CSTRING("next")},
	{hx::fsBool,(int)offsetof(DrawStackItem_obj,colored),HX_CSTRING("colored")},
	{hx::fsInt,(int)offsetof(DrawStackItem_obj,blending),HX_CSTRING("blending")},
	{hx::fsBool,(int)offsetof(DrawStackItem_obj,initialized),HX_CSTRING("initialized")},
	{hx::fsBool,(int)offsetof(DrawStackItem_obj,antialiasing),HX_CSTRING("antialiasing")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("graphics"),
	HX_CSTRING("drawData"),
	HX_CSTRING("position"),
	HX_CSTRING("next"),
	HX_CSTRING("colored"),
	HX_CSTRING("blending"),
	HX_CSTRING("initialized"),
	HX_CSTRING("antialiasing"),
	HX_CSTRING("reset"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawStackItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawStackItem_obj::__mClass,"__mClass");
};

#endif

Class DrawStackItem_obj::__mClass;

void DrawStackItem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.layer.DrawStackItem"), hx::TCanCast< DrawStackItem_obj> ,sStaticFields,sMemberFields,
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

void DrawStackItem_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace layer
