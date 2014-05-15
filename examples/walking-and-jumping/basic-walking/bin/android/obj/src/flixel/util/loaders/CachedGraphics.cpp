#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TexturePackerData
#include <flixel/util/loaders/TexturePackerData.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureRegion
#include <flixel/util/loaders/TextureRegion.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace util{
namespace loaders{

Void CachedGraphics_obj::__construct(::String Key,::flash::display::BitmapData Bitmap,hx::Null< bool >  __o_Persist)
{
HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","new",0xc149abe7,"flixel.util.loaders.CachedGraphics.new","flixel/util/loaders/CachedGraphics.hx",10,0x7a61d3e8)
HX_STACK_THIS(this)
HX_STACK_ARG(Key,"Key")
HX_STACK_ARG(Bitmap,"Bitmap")
HX_STACK_ARG(__o_Persist,"Persist")
bool Persist = __o_Persist.Default(false);
{
	HX_STACK_LINE(57)
	this->useCount = (int)0;
	HX_STACK_LINE(46)
	this->isDumped = false;
	HX_STACK_LINE(41)
	this->destroyOnNoUse = false;
	HX_STACK_LINE(36)
	this->persist = false;
	HX_STACK_LINE(63)
	this->key = Key;
	HX_STACK_LINE(64)
	this->bitmap = Bitmap;
	HX_STACK_LINE(65)
	this->persist = Persist;
}
;
	return null();
}

//CachedGraphics_obj::~CachedGraphics_obj() { }

Dynamic CachedGraphics_obj::__CreateEmpty() { return  new CachedGraphics_obj; }
hx::ObjectPtr< CachedGraphics_obj > CachedGraphics_obj::__new(::String Key,::flash::display::BitmapData Bitmap,hx::Null< bool >  __o_Persist)
{  hx::ObjectPtr< CachedGraphics_obj > result = new CachedGraphics_obj();
	result->__construct(Key,Bitmap,__o_Persist);
	return result;}

Dynamic CachedGraphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CachedGraphics_obj > result = new CachedGraphics_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void CachedGraphics_obj::dump( ){
{
		HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","dump",0x589cb7cd,"flixel.util.loaders.CachedGraphics.dump","flixel/util/loaders/CachedGraphics.hx",75,0x7a61d3e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(75)
		if (((bool((this->assetsClass != null())) || bool((this->assetsKey != null()))))){
			HX_STACK_LINE(77)
			this->bitmap->dumpBits();
			HX_STACK_LINE(78)
			this->isDumped = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,dump,(void))

Void CachedGraphics_obj::undump( ){
{
		HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","undump",0x016856e6,"flixel.util.loaders.CachedGraphics.undump","flixel/util/loaders/CachedGraphics.hx",89,0x7a61d3e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		if ((this->isDumped)){
			HX_STACK_LINE(91)
			::flash::display::BitmapData newBitmap = this->getBitmapFromSystem();		HX_STACK_VAR(newBitmap,"newBitmap");
			HX_STACK_LINE(93)
			if (((newBitmap != null()))){
				HX_STACK_LINE(95)
				this->bitmap = newBitmap;
				HX_STACK_LINE(96)
				if (((this->_tilesheet != null()))){
					HX_STACK_LINE(99)
					this->_tilesheet->onContext(newBitmap);
				}
			}
			HX_STACK_LINE(103)
			this->isDumped = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,undump,(void))

Void CachedGraphics_obj::onContext( ){
{
		HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","onContext",0x22400957,"flixel.util.loaders.CachedGraphics.onContext","flixel/util/loaders/CachedGraphics.hx",115,0x7a61d3e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		if ((this->isDumped)){
			HX_STACK_LINE(117)
			this->undump();
			HX_STACK_LINE(118)
			this->dump();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,onContext,(void))

::flixel::util::loaders::TextureRegion CachedGraphics_obj::getRegionForFrame( ::String FrameName){
	HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","getRegionForFrame",0x4be29a75,"flixel.util.loaders.CachedGraphics.getRegionForFrame","flixel/util/loaders/CachedGraphics.hx",123,0x7a61d3e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FrameName,"FrameName")
	HX_STACK_LINE(124)
	::flixel::util::loaders::TextureRegion region = ::flixel::util::loaders::TextureRegion_obj::__new(hx::ObjectPtr<OBJ_>(this),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(region,"region");
	HX_STACK_LINE(125)
	::flixel::system::layer::frames::FlxFrame frame;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(125)
	{
		HX_STACK_LINE(125)
		::flixel::system::layer::TileSheetData _this = this->get_tilesheet();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(125)
		frame = _this->flxFrames->get(FrameName);
	}
	HX_STACK_LINE(127)
	if (((frame != null()))){
		HX_STACK_LINE(129)
		int _g = ::Std_obj::_int(frame->frame->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(129)
		region->region->startX = _g;
		HX_STACK_LINE(130)
		int _g1 = ::Std_obj::_int(frame->frame->y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(130)
		region->region->startY = _g1;
		HX_STACK_LINE(131)
		int _g2 = ::Std_obj::_int(frame->frame->width);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(131)
		region->region->width = _g2;
		HX_STACK_LINE(132)
		int _g3 = ::Std_obj::_int(frame->frame->height);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(132)
		region->region->height = _g3;
	}
	HX_STACK_LINE(135)
	return region;
}


HX_DEFINE_DYNAMIC_FUNC1(CachedGraphics_obj,getRegionForFrame,return )

Void CachedGraphics_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","destroy",0x801dd801,"flixel.util.loaders.CachedGraphics.destroy","flixel/util/loaders/CachedGraphics.hx",139,0x7a61d3e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		::flash::display::BitmapData _g = ::flixel::util::FlxDestroyUtil_obj::dispose(this->bitmap);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		this->bitmap = _g;
		HX_STACK_LINE(141)
		::flixel::util::loaders::TexturePackerData _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->data);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(141)
		this->data = _g1;
		HX_STACK_LINE(142)
		::flixel::system::layer::TileSheetData _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_tilesheet);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(142)
		this->_tilesheet = _g2;
		HX_STACK_LINE(143)
		this->key = null();
		HX_STACK_LINE(144)
		this->assetsKey = null();
		HX_STACK_LINE(145)
		this->assetsClass = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,destroy,(void))

::flixel::system::layer::TileSheetData CachedGraphics_obj::get_tilesheet( ){
	HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","get_tilesheet",0xd5f1cecf,"flixel.util.loaders.CachedGraphics.get_tilesheet","flixel/util/loaders/CachedGraphics.hx",149,0x7a61d3e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(150)
	if (((this->_tilesheet == null()))){
		HX_STACK_LINE(152)
		if ((this->isDumped)){
			HX_STACK_LINE(154)
			this->onContext();
		}
		HX_STACK_LINE(157)
		::flixel::system::layer::TileSheetData _g = ::flixel::system::layer::TileSheetData_obj::__new(this->bitmap);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(157)
		this->_tilesheet = _g;
	}
	HX_STACK_LINE(160)
	return this->_tilesheet;
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,get_tilesheet,return )

::flash::display::BitmapData CachedGraphics_obj::getBitmapFromSystem( ){
	HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","getBitmapFromSystem",0xd5289305,"flixel.util.loaders.CachedGraphics.getBitmapFromSystem","flixel/util/loaders/CachedGraphics.hx",164,0x7a61d3e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	::flash::display::BitmapData newBitmap = null();		HX_STACK_VAR(newBitmap,"newBitmap");
	HX_STACK_LINE(166)
	if (((this->assetsClass != null()))){
		HX_STACK_LINE(168)
		::Class _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(168)
		_g = hx::TCast< Class >::cast(this->assetsClass);
		HX_STACK_LINE(168)
		::flash::display::BitmapData _g1 = ::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(168)
		newBitmap = _g1;
	}
	else{
		HX_STACK_LINE(170)
		if (((this->assetsKey != null()))){
			HX_STACK_LINE(172)
			::flash::display::BitmapData _g2 = ::openfl::Assets_obj::getBitmapData(this->assetsKey,false);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(172)
			newBitmap = _g2;
		}
	}
	HX_STACK_LINE(175)
	return newBitmap;
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,getBitmapFromSystem,return )

bool CachedGraphics_obj::get_canBeDumped( ){
	HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","get_canBeDumped",0x64ad8a84,"flixel.util.loaders.CachedGraphics.get_canBeDumped","flixel/util/loaders/CachedGraphics.hx",180,0x7a61d3e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(180)
	return (bool((this->assetsClass != null())) || bool((this->assetsKey != null())));
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,get_canBeDumped,return )

int CachedGraphics_obj::set_useCount( int Value){
	HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","set_useCount",0xf01d7a1e,"flixel.util.loaders.CachedGraphics.set_useCount","flixel/util/loaders/CachedGraphics.hx",184,0x7a61d3e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(185)
	if (((bool((bool((Value <= (int)0)) && bool(this->destroyOnNoUse))) && bool(!(this->persist))))){
		HX_STACK_LINE(187)
		::flixel::FlxG_obj::bitmap->remove(this->key);
	}
	HX_STACK_LINE(190)
	return this->useCount = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(CachedGraphics_obj,set_useCount,return )

bool CachedGraphics_obj::set_destroyOnNoUse( bool Value){
	HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","set_destroyOnNoUse",0xf2e436a3,"flixel.util.loaders.CachedGraphics.set_destroyOnNoUse","flixel/util/loaders/CachedGraphics.hx",194,0x7a61d3e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(195)
	if (((bool((bool((bool(Value) && bool((this->useCount == (int)0)))) && bool((this->key != null())))) && bool(!(this->persist))))){
		HX_STACK_LINE(197)
		::flixel::FlxG_obj::bitmap->remove(this->key);
	}
	HX_STACK_LINE(200)
	return this->destroyOnNoUse = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(CachedGraphics_obj,set_destroyOnNoUse,return )


CachedGraphics_obj::CachedGraphics_obj()
{
}

void CachedGraphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CachedGraphics);
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(assetsKey,"assetsKey");
	HX_MARK_MEMBER_NAME(assetsClass,"assetsClass");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(persist,"persist");
	HX_MARK_MEMBER_NAME(destroyOnNoUse,"destroyOnNoUse");
	HX_MARK_MEMBER_NAME(isDumped,"isDumped");
	HX_MARK_MEMBER_NAME(tilesheet,"tilesheet");
	HX_MARK_MEMBER_NAME(useCount,"useCount");
	HX_MARK_MEMBER_NAME(_tilesheet,"_tilesheet");
	HX_MARK_END_CLASS();
}

void CachedGraphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(assetsKey,"assetsKey");
	HX_VISIT_MEMBER_NAME(assetsClass,"assetsClass");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(persist,"persist");
	HX_VISIT_MEMBER_NAME(destroyOnNoUse,"destroyOnNoUse");
	HX_VISIT_MEMBER_NAME(isDumped,"isDumped");
	HX_VISIT_MEMBER_NAME(tilesheet,"tilesheet");
	HX_VISIT_MEMBER_NAME(useCount,"useCount");
	HX_VISIT_MEMBER_NAME(_tilesheet,"_tilesheet");
}

Dynamic CachedGraphics_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"dump") ) { return dump_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		if (HX_FIELD_EQ(inName,"undump") ) { return undump_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { return persist; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isDumped") ) { return isDumped; }
		if (HX_FIELD_EQ(inName,"useCount") ) { return useCount; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetsKey") ) { return assetsKey; }
		if (HX_FIELD_EQ(inName,"tilesheet") ) { return inCallProp ? get_tilesheet() : tilesheet; }
		if (HX_FIELD_EQ(inName,"onContext") ) { return onContext_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tilesheet") ) { return _tilesheet; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"assetsClass") ) { return assetsClass; }
		if (HX_FIELD_EQ(inName,"canBeDumped") ) { return get_canBeDumped(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_useCount") ) { return set_useCount_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_tilesheet") ) { return get_tilesheet_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyOnNoUse") ) { return destroyOnNoUse; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_canBeDumped") ) { return get_canBeDumped_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getRegionForFrame") ) { return getRegionForFrame_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_destroyOnNoUse") ) { return set_destroyOnNoUse_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getBitmapFromSystem") ) { return getBitmapFromSystem_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CachedGraphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::flixel::util::loaders::TexturePackerData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { persist=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isDumped") ) { isDumped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useCount") ) { if (inCallProp) return set_useCount(inValue);useCount=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetsKey") ) { assetsKey=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tilesheet") ) { tilesheet=inValue.Cast< ::flixel::system::layer::TileSheetData >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tilesheet") ) { _tilesheet=inValue.Cast< ::flixel::system::layer::TileSheetData >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"assetsClass") ) { assetsClass=inValue.Cast< ::Class >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyOnNoUse") ) { if (inCallProp) return set_destroyOnNoUse(inValue);destroyOnNoUse=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CachedGraphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("key"));
	outFields->push(HX_CSTRING("bitmap"));
	outFields->push(HX_CSTRING("assetsKey"));
	outFields->push(HX_CSTRING("assetsClass"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("persist"));
	outFields->push(HX_CSTRING("destroyOnNoUse"));
	outFields->push(HX_CSTRING("isDumped"));
	outFields->push(HX_CSTRING("canBeDumped"));
	outFields->push(HX_CSTRING("tilesheet"));
	outFields->push(HX_CSTRING("useCount"));
	outFields->push(HX_CSTRING("_tilesheet"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(CachedGraphics_obj,key),HX_CSTRING("key")},
	{hx::fsObject /*::flash::display::BitmapData*/ ,(int)offsetof(CachedGraphics_obj,bitmap),HX_CSTRING("bitmap")},
	{hx::fsString,(int)offsetof(CachedGraphics_obj,assetsKey),HX_CSTRING("assetsKey")},
	{hx::fsObject /*::Class*/ ,(int)offsetof(CachedGraphics_obj,assetsClass),HX_CSTRING("assetsClass")},
	{hx::fsObject /*::flixel::util::loaders::TexturePackerData*/ ,(int)offsetof(CachedGraphics_obj,data),HX_CSTRING("data")},
	{hx::fsBool,(int)offsetof(CachedGraphics_obj,persist),HX_CSTRING("persist")},
	{hx::fsBool,(int)offsetof(CachedGraphics_obj,destroyOnNoUse),HX_CSTRING("destroyOnNoUse")},
	{hx::fsBool,(int)offsetof(CachedGraphics_obj,isDumped),HX_CSTRING("isDumped")},
	{hx::fsObject /*::flixel::system::layer::TileSheetData*/ ,(int)offsetof(CachedGraphics_obj,tilesheet),HX_CSTRING("tilesheet")},
	{hx::fsInt,(int)offsetof(CachedGraphics_obj,useCount),HX_CSTRING("useCount")},
	{hx::fsObject /*::flixel::system::layer::TileSheetData*/ ,(int)offsetof(CachedGraphics_obj,_tilesheet),HX_CSTRING("_tilesheet")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("key"),
	HX_CSTRING("bitmap"),
	HX_CSTRING("assetsKey"),
	HX_CSTRING("assetsClass"),
	HX_CSTRING("data"),
	HX_CSTRING("persist"),
	HX_CSTRING("destroyOnNoUse"),
	HX_CSTRING("isDumped"),
	HX_CSTRING("tilesheet"),
	HX_CSTRING("useCount"),
	HX_CSTRING("_tilesheet"),
	HX_CSTRING("dump"),
	HX_CSTRING("undump"),
	HX_CSTRING("onContext"),
	HX_CSTRING("getRegionForFrame"),
	HX_CSTRING("destroy"),
	HX_CSTRING("get_tilesheet"),
	HX_CSTRING("getBitmapFromSystem"),
	HX_CSTRING("get_canBeDumped"),
	HX_CSTRING("set_useCount"),
	HX_CSTRING("set_destroyOnNoUse"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CachedGraphics_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CachedGraphics_obj::__mClass,"__mClass");
};

#endif

Class CachedGraphics_obj::__mClass;

void CachedGraphics_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.loaders.CachedGraphics"), hx::TCanCast< CachedGraphics_obj> ,sStaticFields,sMemberFields,
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

void CachedGraphics_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
} // end namespace loaders
