#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureAtlasFrame
#include <flixel/util/loaders/TextureAtlasFrame.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TexturePackerData
#include <flixel/util/loaders/TexturePackerData.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace util{
namespace loaders{

Void TexturePackerData_obj::__construct(::String Description,::String AssetName)
{
HX_STACK_FRAME("flixel.util.loaders.TexturePackerData","new",0x258f8355,"flixel.util.loaders.TexturePackerData.new","flixel/util/loaders/TexturePackerData.hx",26,0x94e9909c)
HX_STACK_THIS(this)
HX_STACK_ARG(Description,"Description")
HX_STACK_ARG(AssetName,"AssetName")
{
	HX_STACK_LINE(27)
	this->assetName = AssetName;
	HX_STACK_LINE(28)
	this->description = Description;
	HX_STACK_LINE(30)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(30)
	this->frames = _g;
	HX_STACK_LINE(32)
	this->parseData();
}
;
	return null();
}

//TexturePackerData_obj::~TexturePackerData_obj() { }

Dynamic TexturePackerData_obj::__CreateEmpty() { return  new TexturePackerData_obj; }
hx::ObjectPtr< TexturePackerData_obj > TexturePackerData_obj::__new(::String Description,::String AssetName)
{  hx::ObjectPtr< TexturePackerData_obj > result = new TexturePackerData_obj();
	result->__construct(Description,AssetName);
	return result;}

Dynamic TexturePackerData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TexturePackerData_obj > result = new TexturePackerData_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *TexturePackerData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void TexturePackerData_obj::parseData( ){
{
		HX_STACK_FRAME("flixel.util.loaders.TexturePackerData","parseData",0xc62180b2,"flixel.util.loaders.TexturePackerData.parseData","flixel/util/loaders/TexturePackerData.hx",40,0x94e9909c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		if (((this->frames->length != (int)0))){
			HX_STACK_LINE(42)
			return null();
		}
		HX_STACK_LINE(44)
		if (((bool((this->assetName == null())) || bool((this->description == null()))))){
			HX_STACK_LINE(44)
			return null();
		}
		struct _Function_1_1{
			inline static ::flixel::util::loaders::CachedGraphics Block( hx::ObjectPtr< ::flixel::util::loaders::TexturePackerData_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/loaders/TexturePackerData.hx",46,0x94e9909c)
				{
					HX_STACK_LINE(46)
					bool Unique = false;		HX_STACK_VAR(Unique,"Unique");
					HX_STACK_LINE(46)
					return ::flixel::FlxG_obj::bitmap->addWithSpaces(__this->assetName,(int)0,(int)0,(int)1,(int)1,Unique,null());
				}
				return null();
			}
		};
		HX_STACK_LINE(46)
		this->asset = (_Function_1_1::Block(this))->bitmap;
		HX_STACK_LINE(47)
		Dynamic data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			::String text = ::openfl::Assets_obj::getText(this->description);		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(47)
			data = ::haxe::format::JsonParser_obj::__new(text)->parseRec();
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(49)
			Dynamic _g1 = ::Lambda_obj::array(data->__Field(HX_CSTRING("frames"),true));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(49)
			while((true)){
				HX_STACK_LINE(49)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(49)
					break;
				}
				HX_STACK_LINE(49)
				Dynamic frame = _g1->__GetItem(_g);		HX_STACK_VAR(frame,"frame");
				HX_STACK_LINE(49)
				++(_g);
				HX_STACK_LINE(51)
				::flixel::util::loaders::TextureAtlasFrame texFrame = ::flixel::util::loaders::TextureAtlasFrame_obj::__new();		HX_STACK_VAR(texFrame,"texFrame");
				HX_STACK_LINE(52)
				texFrame->trimmed = frame->__Field(HX_CSTRING("trimmed"),true);
				HX_STACK_LINE(53)
				texFrame->rotated = frame->__Field(HX_CSTRING("rotated"),true);
				HX_STACK_LINE(54)
				texFrame->name = frame->__Field(HX_CSTRING("filename"),true);
				HX_STACK_LINE(56)
				::flixel::util::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(56)
				{
					HX_STACK_LINE(56)
					::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(frame->__Field(HX_CSTRING("sourceSize"),true)->__Field(HX_CSTRING("w"),true),frame->__Field(HX_CSTRING("sourceSize"),true)->__Field(HX_CSTRING("h"),true));		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(56)
					point->_inPool = false;
					HX_STACK_LINE(56)
					_g2 = point;
				}
				HX_STACK_LINE(56)
				texFrame->sourceSize = _g2;
				HX_STACK_LINE(57)
				::flixel::util::FlxPoint _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(57)
				{
					HX_STACK_LINE(57)
					::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set((int)0,(int)0);		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(57)
					point->_inPool = false;
					HX_STACK_LINE(57)
					_g11 = point;
				}
				HX_STACK_LINE(57)
				texFrame->offset = _g11;
				HX_STACK_LINE(58)
				texFrame->offset->set(frame->__Field(HX_CSTRING("spriteSourceSize"),true)->__Field(HX_CSTRING("x"),true),frame->__Field(HX_CSTRING("spriteSourceSize"),true)->__Field(HX_CSTRING("y"),true));
				HX_STACK_LINE(60)
				if ((frame->__Field(HX_CSTRING("rotated"),true))){
					HX_STACK_LINE(62)
					::flash::geom::Rectangle _g21 = ::flash::geom::Rectangle_obj::__new(frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("x"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("y"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("h"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("w"),true));		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(62)
					texFrame->frame = _g21;
					HX_STACK_LINE(63)
					texFrame->additionalAngle = (int)-90;
				}
				else{
					HX_STACK_LINE(67)
					::flash::geom::Rectangle _g3 = ::flash::geom::Rectangle_obj::__new(frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("x"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("y"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("w"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("h"),true));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(67)
					texFrame->frame = _g3;
					HX_STACK_LINE(68)
					texFrame->additionalAngle = (int)0;
				}
				HX_STACK_LINE(71)
				this->frames->push(texFrame);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TexturePackerData_obj,parseData,(void))

Void TexturePackerData_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.loaders.TexturePackerData","destroy",0x67aefe6f,"flixel.util.loaders.TexturePackerData.destroy","flixel/util/loaders/TexturePackerData.hx",79,0x94e9909c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(80)
			Array< ::Dynamic > _g1 = this->frames;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(80)
			while((true)){
				HX_STACK_LINE(80)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(80)
					break;
				}
				HX_STACK_LINE(80)
				::flixel::util::loaders::TextureAtlasFrame frame = _g1->__get(_g).StaticCast< ::flixel::util::loaders::TextureAtlasFrame >();		HX_STACK_VAR(frame,"frame");
				HX_STACK_LINE(80)
				++(_g);
				HX_STACK_LINE(82)
				::flixel::util::loaders::TextureAtlasFrame _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(frame);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(82)
				frame = _g2;
			}
		}
		HX_STACK_LINE(84)
		this->frames = null();
		HX_STACK_LINE(85)
		this->assetName = null();
		HX_STACK_LINE(86)
		this->asset = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TexturePackerData_obj,destroy,(void))


TexturePackerData_obj::TexturePackerData_obj()
{
}

void TexturePackerData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TexturePackerData);
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(assetName,"assetName");
	HX_MARK_MEMBER_NAME(description,"description");
	HX_MARK_MEMBER_NAME(asset,"asset");
	HX_MARK_END_CLASS();
}

void TexturePackerData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(assetName,"assetName");
	HX_VISIT_MEMBER_NAME(description,"description");
	HX_VISIT_MEMBER_NAME(asset,"asset");
}

Dynamic TexturePackerData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { return asset; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetName") ) { return assetName; }
		if (HX_FIELD_EQ(inName,"parseData") ) { return parseData_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { return description; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TexturePackerData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { asset=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetName") ) { assetName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TexturePackerData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("assetName"));
	outFields->push(HX_CSTRING("description"));
	outFields->push(HX_CSTRING("asset"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TexturePackerData_obj,frames),HX_CSTRING("frames")},
	{hx::fsString,(int)offsetof(TexturePackerData_obj,assetName),HX_CSTRING("assetName")},
	{hx::fsString,(int)offsetof(TexturePackerData_obj,description),HX_CSTRING("description")},
	{hx::fsObject /*::flash::display::BitmapData*/ ,(int)offsetof(TexturePackerData_obj,asset),HX_CSTRING("asset")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("frames"),
	HX_CSTRING("assetName"),
	HX_CSTRING("description"),
	HX_CSTRING("asset"),
	HX_CSTRING("parseData"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TexturePackerData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TexturePackerData_obj::__mClass,"__mClass");
};

#endif

Class TexturePackerData_obj::__mClass;

void TexturePackerData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.loaders.TexturePackerData"), hx::TCanCast< TexturePackerData_obj> ,sStaticFields,sMemberFields,
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

void TexturePackerData_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
} // end namespace loaders
