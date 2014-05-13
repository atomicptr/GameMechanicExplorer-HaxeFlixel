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
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel__FlxSprite_GraphicDefault
#include <flixel/_FlxSprite/GraphicDefault.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
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
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FrameType
#include <flixel/system/layer/frames/FrameType.h>
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
#ifndef INCLUDED_flixel_util_loaders_TexturePackerData
#include <flixel/util/loaders/TexturePackerData.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureRegion
#include <flixel/util/loaders/TextureRegion.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{

Void FlxSprite_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{
HX_STACK_FRAME("flixel.FlxSprite","new",0x4dfa64d7,"flixel.FlxSprite.new","flixel/FlxSprite.hx",35,0x0384bffa)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(183)
	this->_facingFlip = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(179)
	this->_angleChanged = false;
	HX_STACK_LINE(178)
	this->_cosAngle = (int)1;
	HX_STACK_LINE(177)
	this->_sinAngle = (int)0;
	HX_STACK_LINE(148)
	this->_blendInt = (int)0;
	HX_STACK_LINE(147)
	this->_facingVerticalMult = (int)1;
	HX_STACK_LINE(146)
	this->_facingHorizontalMult = (int)1;
	HX_STACK_LINE(145)
	this->_blue = 1.0;
	HX_STACK_LINE(144)
	this->_green = 1.0;
	HX_STACK_LINE(143)
	this->_red = 1.0;
	HX_STACK_LINE(140)
	this->useColorTransform = false;
	HX_STACK_LINE(133)
	this->color = (int)16777215;
	HX_STACK_LINE(107)
	this->flipY = false;
	HX_STACK_LINE(103)
	this->flipX = false;
	HX_STACK_LINE(99)
	this->facing = (int)16;
	HX_STACK_LINE(94)
	this->alpha = 1.0;
	HX_STACK_LINE(90)
	this->bakedRotationAngle = (int)0;
	HX_STACK_LINE(79)
	this->frames = (int)0;
	HX_STACK_LINE(75)
	this->frameHeight = (int)0;
	HX_STACK_LINE(71)
	this->frameWidth = (int)0;
	HX_STACK_LINE(56)
	this->isColored = false;
	HX_STACK_LINE(53)
	this->dirty = true;
	HX_STACK_LINE(48)
	this->antialiasing = false;
	HX_STACK_LINE(195)
	super::__construct(X,Y,null(),null());
	HX_STACK_LINE(197)
	if (((SimpleGraphic != null()))){
		HX_STACK_LINE(199)
		this->loadGraphic(SimpleGraphic,null(),null(),null(),null(),null());
	}
}
;
	return null();
}

//FlxSprite_obj::~FlxSprite_obj() { }

Dynamic FlxSprite_obj::__CreateEmpty() { return  new FlxSprite_obj; }
hx::ObjectPtr< FlxSprite_obj > FlxSprite_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{  hx::ObjectPtr< FlxSprite_obj > result = new FlxSprite_obj();
	result->__construct(__o_X,__o_Y,SimpleGraphic);
	return result;}

Dynamic FlxSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSprite_obj > result = new FlxSprite_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void FlxSprite_obj::initVars( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","initVars",0x31793705,"flixel.FlxSprite.initVars","flixel/FlxSprite.hx",204,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(205)
		this->super::initVars();
		HX_STACK_LINE(207)
		::flixel::animation::FlxAnimationController _g = ::flixel::animation::FlxAnimationController_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(207)
		this->animation = _g;
		HX_STACK_LINE(209)
		::flash::geom::Point _g1 = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(209)
		this->_flashPoint = _g1;
		HX_STACK_LINE(210)
		::flash::geom::Rectangle _g2 = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(210)
		this->_flashRect = _g2;
		HX_STACK_LINE(211)
		::flash::geom::Rectangle _g3 = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(211)
		this->_flashRect2 = _g3;
		HX_STACK_LINE(212)
		::flash::geom::Point _g4 = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(212)
		this->_flashPointZero = _g4;
		HX_STACK_LINE(213)
		::flixel::util::FlxPoint _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(213)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(213)
			::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(213)
			point->_inPool = false;
			HX_STACK_LINE(213)
			_g5 = point;
		}
		HX_STACK_LINE(213)
		this->offset = _g5;
		HX_STACK_LINE(214)
		::flixel::util::FlxPoint _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(214)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(214)
			::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(214)
			point->_inPool = false;
			HX_STACK_LINE(214)
			_g6 = point;
		}
		HX_STACK_LINE(214)
		this->origin = _g6;
		HX_STACK_LINE(215)
		::flixel::util::FlxPoint _g7;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(215)
			::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set((int)1,(int)1);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(215)
			point->_inPool = false;
			HX_STACK_LINE(215)
			_g7 = point;
		}
		HX_STACK_LINE(215)
		this->scale = _g7;
		HX_STACK_LINE(216)
		::flash::geom::Matrix _g8 = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(216)
		this->_matrix = _g8;
	}
return null();
}


Void FlxSprite_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","destroy",0x0fb5c8f1,"flixel.FlxSprite.destroy","flixel/FlxSprite.hx",224,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(225)
		this->super::destroy();
		HX_STACK_LINE(227)
		::flixel::animation::FlxAnimationController _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->animation);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(227)
		this->animation = _g;
		HX_STACK_LINE(229)
		::flixel::util::FlxPoint _g1 = ::flixel::util::FlxDestroyUtil_obj::put(this->offset);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(229)
		this->offset = _g1;
		HX_STACK_LINE(230)
		::flixel::util::FlxPoint _g2 = ::flixel::util::FlxDestroyUtil_obj::put(this->origin);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(230)
		this->origin = _g2;
		HX_STACK_LINE(231)
		::flixel::util::FlxPoint _g3 = ::flixel::util::FlxDestroyUtil_obj::put(this->scale);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(231)
		this->scale = _g3;
		HX_STACK_LINE(233)
		::flash::display::BitmapData _g4 = ::flixel::util::FlxDestroyUtil_obj::dispose(this->framePixels);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(233)
		this->framePixels = _g4;
		HX_STACK_LINE(235)
		this->_flashPoint = null();
		HX_STACK_LINE(236)
		this->_flashRect = null();
		HX_STACK_LINE(237)
		this->_flashRect2 = null();
		HX_STACK_LINE(238)
		this->_flashPointZero = null();
		HX_STACK_LINE(239)
		this->_matrix = null();
		HX_STACK_LINE(240)
		this->colorTransform = null();
		HX_STACK_LINE(241)
		this->set_blend(null());
		HX_STACK_LINE(242)
		this->set_frame(null());
		HX_STACK_LINE(244)
		this->framesData = null();
		HX_STACK_LINE(245)
		this->set_cachedGraphics(null());
		HX_STACK_LINE(246)
		this->region = null();
	}
return null();
}


::flixel::FlxSprite FlxSprite_obj::clone( ::flixel::FlxSprite NewSprite){
	HX_STACK_FRAME("flixel.FlxSprite","clone",0x3c30f394,"flixel.FlxSprite.clone","flixel/FlxSprite.hx",250,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewSprite,"NewSprite")
	HX_STACK_LINE(251)
	if (((NewSprite == null()))){
		HX_STACK_LINE(253)
		::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(253)
		NewSprite = _g;
	}
	HX_STACK_LINE(256)
	return NewSprite->loadGraphicFromSprite(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,clone,return )

::flixel::FlxSprite FlxSprite_obj::loadGraphicFromSprite( ::flixel::FlxSprite Sprite){
	HX_STACK_FRAME("flixel.FlxSprite","loadGraphicFromSprite",0xd0637b08,"flixel.FlxSprite.loadGraphicFromSprite","flixel/FlxSprite.hx",267,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_LINE(268)
	if ((!(this->exists))){
		HX_STACK_LINE(270)
		::Class _g = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(270)
		::String _g1 = ::Type_obj::getClassName(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(270)
		::String _g2 = (HX_CSTRING("Warning, trying to clone ") + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(270)
		Dynamic Data = (_g2 + HX_CSTRING(" object that doesn't exist."));		HX_STACK_VAR(Data,"Data");
		HX_STACK_LINE(270)
		Dynamic();
	}
	HX_STACK_LINE(273)
	::flixel::system::layer::Region _g3 = Sprite->region->clone();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(273)
	this->region = _g3;
	HX_STACK_LINE(274)
	this->bakedRotationAngle = Sprite->bakedRotationAngle;
	HX_STACK_LINE(275)
	this->set_cachedGraphics(Sprite->cachedGraphics);
	HX_STACK_LINE(277)
	int _g4 = this->frameWidth = Sprite->frameWidth;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(277)
	this->set_width(_g4);
	HX_STACK_LINE(278)
	int _g5 = this->frameHeight = Sprite->frameHeight;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(278)
	this->set_height(_g5);
	HX_STACK_LINE(279)
	if (((this->bakedRotationAngle > (int)0))){
		HX_STACK_LINE(281)
		Float _g6 = Sprite->get_width();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(281)
		this->set_width(_g6);
		HX_STACK_LINE(282)
		Float _g7 = Sprite->get_height();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(282)
		this->set_height(_g7);
		HX_STACK_LINE(283)
		this->centerOffsets(null());
	}
	HX_STACK_LINE(286)
	this->updateFrameData();
	HX_STACK_LINE(287)
	this->resetHelpers();
	HX_STACK_LINE(288)
	this->antialiasing = Sprite->antialiasing;
	HX_STACK_LINE(289)
	this->animation->copyFrom(Sprite->animation);
	HX_STACK_LINE(290)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,loadGraphicFromSprite,return )

::flixel::FlxSprite FlxSprite_obj::loadGraphic( Dynamic Graphic,hx::Null< bool >  __o_Animated,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< bool >  __o_Unique,::String Key){
bool Animated = __o_Animated.Default(false);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","loadGraphic",0x47377c99,"flixel.FlxSprite.loadGraphic","flixel/FlxSprite.hx",305,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Animated,"Animated")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(306)
		this->bakedRotationAngle = (int)0;
		HX_STACK_LINE(307)
		::flixel::util::loaders::CachedGraphics _g = ::flixel::FlxG_obj::bitmap->addWithSpaces(Graphic,(int)0,(int)0,(int)1,(int)1,Unique,Key);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(307)
		this->set_cachedGraphics(_g);
		HX_STACK_LINE(309)
		if (((Width == (int)0))){
			HX_STACK_LINE(311)
			int _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(311)
			if (((Animated == true))){
				HX_STACK_LINE(311)
				_g1 = this->cachedGraphics->bitmap->get_height();
			}
			else{
				HX_STACK_LINE(311)
				_g1 = this->cachedGraphics->bitmap->get_width();
			}
			HX_STACK_LINE(311)
			Width = _g1;
			HX_STACK_LINE(312)
			int _g2 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(312)
			int _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(312)
			if (((Width > _g2))){
				HX_STACK_LINE(312)
				_g3 = this->cachedGraphics->bitmap->get_width();
			}
			else{
				HX_STACK_LINE(312)
				_g3 = Width;
			}
			HX_STACK_LINE(312)
			Width = _g3;
		}
		HX_STACK_LINE(315)
		if (((Height == (int)0))){
			HX_STACK_LINE(317)
			int _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(317)
			if (((Animated == true))){
				HX_STACK_LINE(317)
				_g4 = Width;
			}
			else{
				HX_STACK_LINE(317)
				_g4 = this->cachedGraphics->bitmap->get_height();
			}
			HX_STACK_LINE(317)
			Height = _g4;
			HX_STACK_LINE(318)
			int _g5 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(318)
			int _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(318)
			if (((Height > _g5))){
				HX_STACK_LINE(318)
				_g6 = this->cachedGraphics->bitmap->get_height();
			}
			else{
				HX_STACK_LINE(318)
				_g6 = Height;
			}
			HX_STACK_LINE(318)
			Height = _g6;
		}
		HX_STACK_LINE(321)
		if ((!(::Std_obj::is(Graphic,hx::ClassOf< ::flixel::util::loaders::TextureRegion >())))){
			HX_STACK_LINE(323)
			::flixel::system::layer::Region _g7 = ::flixel::system::layer::Region_obj::__new((int)0,(int)0,Width,Height,null(),null(),null(),null());		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(323)
			this->region = _g7;
			HX_STACK_LINE(324)
			int _g8 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(324)
			this->region->width = _g8;
			HX_STACK_LINE(325)
			int _g9 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(325)
			this->region->height = _g9;
		}
		else{
			HX_STACK_LINE(329)
			::flixel::system::layer::Region _g10 = (hx::TCast< flixel::util::loaders::TextureRegion >::cast(Graphic))->region->clone();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(329)
			this->region = _g10;
			HX_STACK_LINE(331)
			if (((this->region->tileWidth > (int)0))){
				HX_STACK_LINE(332)
				Width = this->region->tileWidth;
			}
			else{
				HX_STACK_LINE(334)
				this->region->tileWidth = this->region->width;
			}
			HX_STACK_LINE(336)
			if (((this->region->tileHeight > (int)0))){
				HX_STACK_LINE(337)
				Height = this->region->tileWidth;
			}
			else{
				HX_STACK_LINE(339)
				this->region->tileHeight = this->region->height;
			}
		}
		HX_STACK_LINE(342)
		int _g11 = this->frameWidth = Width;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(342)
		this->set_width(_g11);
		HX_STACK_LINE(343)
		int _g12 = this->frameHeight = Height;		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(343)
		this->set_height(_g12);
		HX_STACK_LINE(345)
		this->animation->destroyAnimations();
		HX_STACK_LINE(347)
		this->updateFrameData();
		HX_STACK_LINE(348)
		this->resetHelpers();
		HX_STACK_LINE(350)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadGraphic,return )

::flixel::FlxSprite FlxSprite_obj::loadRotatedGraphic( Dynamic Graphic,hx::Null< int >  __o_Rotations,hx::Null< int >  __o_Frame,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer,::String Key){
int Rotations = __o_Rotations.Default(16);
int Frame = __o_Frame.Default(-1);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","loadRotatedGraphic",0xceb71e2e,"flixel.FlxSprite.loadRotatedGraphic","flixel/FlxSprite.hx",366,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Rotations,"Rotations")
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_ARG(AntiAliasing,"AntiAliasing")
	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(368)
		Float _g = ::Math_obj::sqrt(Rotations);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(368)
		int rows = ::Std_obj::_int(_g);		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(369)
		::flash::display::BitmapData brush = ::flixel::FlxG_obj::bitmap->addWithSpaces(Graphic,(int)0,(int)0,(int)1,(int)1,false,Key)->bitmap;		HX_STACK_VAR(brush,"brush");
		HX_STACK_LINE(370)
		bool isRegion = ::Std_obj::is(Graphic,hx::ClassOf< ::flixel::util::loaders::TextureRegion >());		HX_STACK_VAR(isRegion,"isRegion");
		HX_STACK_LINE(371)
		::flixel::util::loaders::TextureRegion spriteRegion;		HX_STACK_VAR(spriteRegion,"spriteRegion");
		HX_STACK_LINE(371)
		if (((isRegion == true))){
			HX_STACK_LINE(371)
			spriteRegion = Graphic;
		}
		else{
			HX_STACK_LINE(371)
			spriteRegion = null();
		}
		HX_STACK_LINE(372)
		::flixel::system::layer::Region tempRegion;		HX_STACK_VAR(tempRegion,"tempRegion");
		HX_STACK_LINE(372)
		if (((isRegion == true))){
			HX_STACK_LINE(372)
			tempRegion = spriteRegion->region;
		}
		else{
			HX_STACK_LINE(372)
			tempRegion = null();
		}
		HX_STACK_LINE(374)
		if (((bool((Frame >= (int)0)) || bool(isRegion)))){
			HX_STACK_LINE(377)
			::flash::display::BitmapData full = brush;		HX_STACK_VAR(full,"full");
			HX_STACK_LINE(379)
			if ((isRegion)){
				HX_STACK_LINE(381)
				::flash::display::BitmapData _g1 = ::flash::display::BitmapData_obj::__new(tempRegion->width,tempRegion->height,null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(381)
				brush = _g1;
				HX_STACK_LINE(382)
				this->_flashRect->x = tempRegion->startX;
				HX_STACK_LINE(383)
				this->_flashRect->y = tempRegion->startY;
				HX_STACK_LINE(384)
				this->_flashRect->width = tempRegion->width;
				HX_STACK_LINE(385)
				this->_flashRect->height = tempRegion->height;
				HX_STACK_LINE(386)
				brush->copyPixels(full,this->_flashRect,this->_flashPointZero,null(),null(),null());
			}
			else{
				HX_STACK_LINE(390)
				int _g2 = full->get_height();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(390)
				int _g3 = full->get_height();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(390)
				::flash::display::BitmapData _g4 = ::flash::display::BitmapData_obj::__new(_g2,_g3,null(),null(),null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(390)
				brush = _g4;
				HX_STACK_LINE(391)
				int _g5 = brush->get_width();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(391)
				int rx = (Frame * _g5);		HX_STACK_VAR(rx,"rx");
				HX_STACK_LINE(392)
				int ry = (int)0;		HX_STACK_VAR(ry,"ry");
				HX_STACK_LINE(393)
				int fw = full->get_width();		HX_STACK_VAR(fw,"fw");
				HX_STACK_LINE(394)
				if (((rx >= fw))){
					HX_STACK_LINE(396)
					int _g6 = ::Std_obj::_int((Float(rx) / Float(fw)));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(396)
					int _g7 = brush->get_height();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(396)
					int _g8 = (_g6 * _g7);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(396)
					ry = _g8;
					HX_STACK_LINE(397)
					hx::ModEq(rx,fw);
				}
				HX_STACK_LINE(399)
				this->_flashRect->x = rx;
				HX_STACK_LINE(400)
				this->_flashRect->y = ry;
				HX_STACK_LINE(401)
				int _g9 = brush->get_width();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(401)
				this->_flashRect->width = _g9;
				HX_STACK_LINE(402)
				int _g10 = brush->get_height();		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(402)
				this->_flashRect->height = _g10;
				HX_STACK_LINE(403)
				brush->copyPixels(full,this->_flashRect,this->_flashPointZero,null(),null(),null());
			}
		}
		HX_STACK_LINE(407)
		int max = brush->get_width();		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(408)
		int _g11 = brush->get_height();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(408)
		if (((_g11 > max))){
			HX_STACK_LINE(410)
			int _g12 = brush->get_height();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(410)
			max = _g12;
		}
		HX_STACK_LINE(413)
		if ((AutoBuffer)){
			HX_STACK_LINE(415)
			int _g13 = ::Std_obj::_int((max * 1.5));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(415)
			max = _g13;
		}
		HX_STACK_LINE(418)
		int columns = ::Math_obj::ceil((Float(Rotations) / Float(rows)));		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(419)
		this->set_width((max * columns));
		HX_STACK_LINE(420)
		this->set_height((max * rows));
		HX_STACK_LINE(421)
		::String key = HX_CSTRING("");		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(422)
		if ((::Std_obj::is(Graphic,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(424)
			key = Graphic;
		}
		else{
			HX_STACK_LINE(426)
			if ((::Std_obj::is(Graphic,hx::ClassOf< ::Class >()))){
				HX_STACK_LINE(428)
				::String _g14 = ::Type_obj::getClassName(Graphic);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(428)
				key = _g14;
			}
			else{
				HX_STACK_LINE(430)
				if (((  ((::Std_obj::is(Graphic,hx::ClassOf< ::flash::display::BitmapData >()))) ? bool((Key != null())) : bool(false) ))){
					HX_STACK_LINE(432)
					key = Key;
				}
				else{
					HX_STACK_LINE(434)
					if ((isRegion)){
						HX_STACK_LINE(436)
						key = spriteRegion->data->key;
						HX_STACK_LINE(437)
						hx::AddEq(key,(((((((((HX_CSTRING(":") + tempRegion->startX) + HX_CSTRING(":")) + tempRegion->startY) + HX_CSTRING(":")) + tempRegion->width) + HX_CSTRING(":")) + tempRegion->height) + HX_CSTRING(":")) + Rotations));
					}
					else{
						HX_STACK_LINE(441)
						return null();
					}
				}
			}
		}
		HX_STACK_LINE(444)
		if ((!(isRegion))){
			HX_STACK_LINE(446)
			Float _g15 = this->get_width();		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(446)
			::String _g16 = (((HX_CSTRING(":") + Frame) + HX_CSTRING(":")) + _g15);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(446)
			::String _g17 = (_g16 + HX_CSTRING("x"));		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(446)
			Float _g18 = this->get_height();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(446)
			::String _g19 = (_g17 + _g18);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(446)
			::String _g20 = (_g19 + HX_CSTRING(":"));		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(446)
			::String _g21 = (_g20 + Rotations);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(446)
			hx::AddEq(key,_g21);
		}
		HX_STACK_LINE(449)
		bool skipGen;		HX_STACK_VAR(skipGen,"skipGen");
		HX_STACK_LINE(449)
		{
			HX_STACK_LINE(449)
			::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(449)
			if ((_this->_cache->exists(key))){
				HX_STACK_LINE(449)
				::flixel::util::loaders::CachedGraphics _g22 = _this->_cache->get(key);		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(449)
				skipGen = (_g22 != null());
			}
			else{
				HX_STACK_LINE(449)
				skipGen = false;
			}
		}
		HX_STACK_LINE(450)
		Float _g23 = this->get_width();		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(450)
		int _g24 = ::Std_obj::_int(_g23);		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(450)
		int _g25 = (_g24 + columns);		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(450)
		int _g26 = (_g25 - (int)1);		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(450)
		Float _g27 = this->get_height();		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(450)
		int _g28 = ::Std_obj::_int(_g27);		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(450)
		int _g29 = (_g28 + rows);		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(450)
		int _g30 = (_g29 - (int)1);		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(450)
		::flixel::util::loaders::CachedGraphics _g31 = ::flixel::FlxG_obj::bitmap->create(_g26,_g30,(int)0,true,key);		HX_STACK_VAR(_g31,"_g31");
		HX_STACK_LINE(450)
		this->set_cachedGraphics(_g31);
		HX_STACK_LINE(451)
		this->bakedRotationAngle = (Float((int)360) / Float(Rotations));
		HX_STACK_LINE(454)
		if ((!(skipGen))){
			HX_STACK_LINE(456)
			int row = (int)0;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(457)
			int column;		HX_STACK_VAR(column,"column");
			HX_STACK_LINE(458)
			Float bakedAngle = (int)0;		HX_STACK_VAR(bakedAngle,"bakedAngle");
			HX_STACK_LINE(459)
			int _g32 = brush->get_width();		HX_STACK_VAR(_g32,"_g32");
			HX_STACK_LINE(459)
			Float _g33 = (_g32 * 0.5);		HX_STACK_VAR(_g33,"_g33");
			HX_STACK_LINE(459)
			int halfBrushWidth = ::Std_obj::_int(_g33);		HX_STACK_VAR(halfBrushWidth,"halfBrushWidth");
			HX_STACK_LINE(460)
			int _g34 = brush->get_height();		HX_STACK_VAR(_g34,"_g34");
			HX_STACK_LINE(460)
			Float _g35 = (_g34 * 0.5);		HX_STACK_VAR(_g35,"_g35");
			HX_STACK_LINE(460)
			int halfBrushHeight = ::Std_obj::_int(_g35);		HX_STACK_VAR(halfBrushHeight,"halfBrushHeight");
			HX_STACK_LINE(461)
			int midpointX = ::Std_obj::_int((max * 0.5));		HX_STACK_VAR(midpointX,"midpointX");
			HX_STACK_LINE(462)
			int midpointY = ::Std_obj::_int((max * 0.5));		HX_STACK_VAR(midpointY,"midpointY");
			HX_STACK_LINE(463)
			while((true)){
				HX_STACK_LINE(463)
				if ((!(((row < rows))))){
					HX_STACK_LINE(463)
					break;
				}
				HX_STACK_LINE(465)
				column = (int)0;
				HX_STACK_LINE(466)
				while((true)){
					HX_STACK_LINE(466)
					if ((!(((column < columns))))){
						HX_STACK_LINE(466)
						break;
					}
					HX_STACK_LINE(468)
					this->_matrix->identity();
					HX_STACK_LINE(469)
					this->_matrix->translate(-(halfBrushWidth),-(halfBrushHeight));
					HX_STACK_LINE(470)
					this->_matrix->rotate((bakedAngle * ((Float(::Math_obj::PI) / Float((int)180)))));
					HX_STACK_LINE(471)
					this->_matrix->translate((((max * column) + midpointX) + column),(midpointY + row));
					HX_STACK_LINE(472)
					hx::AddEq(bakedAngle,this->bakedRotationAngle);
					HX_STACK_LINE(473)
					this->cachedGraphics->bitmap->draw(brush,this->_matrix,null(),null(),null(),AntiAliasing);
					HX_STACK_LINE(474)
					(column)++;
				}
				HX_STACK_LINE(476)
				hx::AddEq(midpointY,max);
				HX_STACK_LINE(477)
				(row)++;
			}
		}
		HX_STACK_LINE(480)
		int _g36 = this->frameHeight = max;		HX_STACK_VAR(_g36,"_g36");
		HX_STACK_LINE(480)
		this->frameWidth = _g36;
		HX_STACK_LINE(481)
		Float _g37 = this->set_height(max);		HX_STACK_VAR(_g37,"_g37");
		HX_STACK_LINE(481)
		this->set_width(_g37);
		HX_STACK_LINE(483)
		::flixel::system::layer::Region _g38 = ::flixel::system::layer::Region_obj::__new((int)0,(int)0,max,max,(int)1,(int)1,null(),null());		HX_STACK_VAR(_g38,"_g38");
		HX_STACK_LINE(483)
		this->region = _g38;
		HX_STACK_LINE(484)
		int _g39 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g39,"_g39");
		HX_STACK_LINE(484)
		this->region->width = _g39;
		HX_STACK_LINE(485)
		int _g40 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g40,"_g40");
		HX_STACK_LINE(485)
		this->region->height = _g40;
		HX_STACK_LINE(488)
		this->antialiasing = AntiAliasing;
		HX_STACK_LINE(491)
		this->updateFrameData();
		HX_STACK_LINE(493)
		if ((AutoBuffer)){
			HX_STACK_LINE(495)
			int _g41 = brush->get_width();		HX_STACK_VAR(_g41,"_g41");
			HX_STACK_LINE(495)
			this->set_width(_g41);
			HX_STACK_LINE(496)
			int _g42 = brush->get_height();		HX_STACK_VAR(_g42,"_g42");
			HX_STACK_LINE(496)
			this->set_height(_g42);
			HX_STACK_LINE(497)
			this->centerOffsets(null());
		}
		HX_STACK_LINE(500)
		this->animation->createPrerotated(null());
		HX_STACK_LINE(501)
		this->resetHelpers();
		HX_STACK_LINE(502)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadRotatedGraphic,return )

::flixel::FlxSprite FlxSprite_obj::loadGraphicFromTexture( Dynamic Data,hx::Null< bool >  __o_Unique,::String FrameName){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","loadGraphicFromTexture",0xc5fe4c78,"flixel.FlxSprite.loadGraphicFromTexture","flixel/FlxSprite.hx",514,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(FrameName,"FrameName")
{
		HX_STACK_LINE(515)
		this->bakedRotationAngle = (int)0;
		HX_STACK_LINE(517)
		if ((::Std_obj::is(Data,hx::ClassOf< ::flixel::util::loaders::CachedGraphics >()))){
			HX_STACK_LINE(519)
			this->set_cachedGraphics(Data);
			HX_STACK_LINE(520)
			if (((this->cachedGraphics->data == null()))){
				HX_STACK_LINE(522)
				return null();
			}
		}
		else{
			HX_STACK_LINE(525)
			if ((::Std_obj::is(Data,hx::ClassOf< ::flixel::util::loaders::TexturePackerData >()))){
				HX_STACK_LINE(527)
				::flixel::util::loaders::CachedGraphics _g = ::flixel::FlxG_obj::bitmap->addWithSpaces(Data->__Field(HX_CSTRING("assetName"),true),(int)0,(int)0,(int)1,(int)1,Unique,null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(527)
				this->set_cachedGraphics(_g);
				HX_STACK_LINE(528)
				this->cachedGraphics->data = Data;
			}
			else{
				HX_STACK_LINE(532)
				return null();
			}
		}
		HX_STACK_LINE(535)
		::flixel::system::layer::Region _g1 = ::flixel::system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(535)
		this->region = _g1;
		HX_STACK_LINE(536)
		int _g2 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(536)
		this->region->width = _g2;
		HX_STACK_LINE(537)
		int _g3 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(537)
		this->region->height = _g3;
		HX_STACK_LINE(539)
		this->animation->destroyAnimations();
		HX_STACK_LINE(540)
		this->updateFrameData();
		HX_STACK_LINE(541)
		this->resetHelpers();
		HX_STACK_LINE(543)
		if (((FrameName != null()))){
			HX_STACK_LINE(545)
			this->animation->set_frameName(FrameName);
		}
		HX_STACK_LINE(548)
		{
			HX_STACK_LINE(548)
			this->set_width(this->frameWidth);
			HX_STACK_LINE(548)
			this->set_height(this->frameHeight);
		}
		HX_STACK_LINE(549)
		this->origin->set((this->frameWidth * 0.5),(this->frameHeight * 0.5));
		HX_STACK_LINE(550)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,loadGraphicFromTexture,return )

::flixel::FlxSprite FlxSprite_obj::loadRotatedGraphicFromTexture( Dynamic Data,::String Image,hx::Null< int >  __o_Rotations,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer){
int Rotations = __o_Rotations.Default(16);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","loadRotatedGraphicFromTexture",0xa93b1903,"flixel.FlxSprite.loadRotatedGraphicFromTexture","flixel/FlxSprite.hx",565,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_ARG(Image,"Image")
	HX_STACK_ARG(Rotations,"Rotations")
	HX_STACK_ARG(AntiAliasing,"AntiAliasing")
	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
{
		HX_STACK_LINE(566)
		::flixel::FlxSprite temp = this->loadGraphicFromTexture(Data,null(),null());		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(568)
		if (((temp == null()))){
			HX_STACK_LINE(570)
			return null();
		}
		HX_STACK_LINE(573)
		this->animation->set_frameName(Image);
		HX_STACK_LINE(576)
		this->antialiasing = AntiAliasing;
		HX_STACK_LINE(587)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxSprite_obj,loadRotatedGraphicFromTexture,return )

::flixel::FlxSprite FlxSprite_obj::makeGraphic( int Width,int Height,hx::Null< int >  __o_Color,hx::Null< bool >  __o_Unique,::String Key){
int Color = __o_Color.Default(-1);
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","makeGraphic",0xbaa3e5d1,"flixel.FlxSprite.makeGraphic","flixel/FlxSprite.hx",600,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(601)
		this->bakedRotationAngle = (int)0;
		HX_STACK_LINE(602)
		::flixel::util::loaders::CachedGraphics _g = ::flixel::FlxG_obj::bitmap->create(Width,Height,Color,Unique,Key);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(602)
		this->set_cachedGraphics(_g);
		HX_STACK_LINE(603)
		::flixel::system::layer::Region _g1 = ::flixel::system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(603)
		this->region = _g1;
		HX_STACK_LINE(604)
		this->region->width = Width;
		HX_STACK_LINE(605)
		this->region->height = Height;
		HX_STACK_LINE(606)
		int _g2 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(606)
		int _g3 = this->frameWidth = _g2;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(606)
		int _g4 = this->region->tileWidth = _g3;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(606)
		this->set_width(_g4);
		HX_STACK_LINE(607)
		int _g5 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(607)
		int _g6 = this->frameHeight = _g5;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(607)
		int _g7 = this->region->tileHeight = _g6;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(607)
		this->set_height(_g7);
		HX_STACK_LINE(608)
		this->animation->destroyAnimations();
		HX_STACK_LINE(609)
		this->updateFrameData();
		HX_STACK_LINE(610)
		this->resetHelpers();
		HX_STACK_LINE(611)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxSprite_obj,makeGraphic,return )

Void FlxSprite_obj::resetSize( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetSize",0x5d8771e7,"flixel.FlxSprite.resetSize","flixel/FlxSprite.hx",618,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(619)
		this->_flashRect->x = (int)0;
		HX_STACK_LINE(620)
		this->_flashRect->y = (int)0;
		HX_STACK_LINE(621)
		this->_flashRect->width = this->frameWidth;
		HX_STACK_LINE(622)
		this->_flashRect->height = this->frameHeight;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSize,(void))

Void FlxSprite_obj::resetFrameSize( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetFrameSize",0xb7baa4a8,"flixel.FlxSprite.resetFrameSize","flixel/FlxSprite.hx",629,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(630)
		int _g = ::Std_obj::_int(this->frame->sourceSize->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(630)
		this->frameWidth = _g;
		HX_STACK_LINE(631)
		int _g1 = ::Std_obj::_int(this->frame->sourceSize->y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(631)
		this->frameHeight = _g1;
		HX_STACK_LINE(632)
		{
			HX_STACK_LINE(632)
			this->_flashRect->x = (int)0;
			HX_STACK_LINE(632)
			this->_flashRect->y = (int)0;
			HX_STACK_LINE(632)
			this->_flashRect->width = this->frameWidth;
			HX_STACK_LINE(632)
			this->_flashRect->height = this->frameHeight;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrameSize,(void))

Void FlxSprite_obj::resetSizeFromFrame( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetSizeFromFrame",0xf893db7c,"flixel.FlxSprite.resetSizeFromFrame","flixel/FlxSprite.hx",639,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(640)
		this->set_width(this->frameWidth);
		HX_STACK_LINE(641)
		this->set_height(this->frameHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSizeFromFrame,(void))

Void FlxSprite_obj::setGraphicSize( hx::Null< int >  __o_Width,hx::Null< int >  __o_Height){
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
	HX_STACK_FRAME("flixel.FlxSprite","setGraphicSize",0x516eb7f0,"flixel.FlxSprite.setGraphicSize","flixel/FlxSprite.hx",652,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
{
		HX_STACK_LINE(653)
		if (((bool((Width <= (int)0)) && bool((Height <= (int)0))))){
			HX_STACK_LINE(654)
			return null();
		}
		HX_STACK_LINE(657)
		Float newScaleX = (Float(Width) / Float(this->frameWidth));		HX_STACK_VAR(newScaleX,"newScaleX");
		HX_STACK_LINE(658)
		Float newScaleY = (Float(Height) / Float(this->frameHeight));		HX_STACK_VAR(newScaleY,"newScaleY");
		HX_STACK_LINE(659)
		this->scale->set(newScaleX,newScaleY);
		HX_STACK_LINE(661)
		if (((Width <= (int)0))){
			HX_STACK_LINE(662)
			this->scale->set_x(newScaleY);
		}
		else{
			HX_STACK_LINE(664)
			if (((Height <= (int)0))){
				HX_STACK_LINE(665)
				this->scale->set_y(newScaleX);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,setGraphicSize,(void))

Void FlxSprite_obj::updateHitbox( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","updateHitbox",0x9470392a,"flixel.FlxSprite.updateHitbox","flixel/FlxSprite.hx",674,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(675)
		Float newWidth = (this->scale->x * this->frameWidth);		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(676)
		Float newHeight = (this->scale->y * this->frameHeight);		HX_STACK_VAR(newHeight,"newHeight");
		HX_STACK_LINE(678)
		this->set_width(newWidth);
		HX_STACK_LINE(679)
		this->set_height(newHeight);
		HX_STACK_LINE(680)
		this->offset->set(-(((((newWidth - this->frameWidth)) * 0.5))),-(((((newHeight - this->frameHeight)) * 0.5))));
		HX_STACK_LINE(681)
		this->origin->set((this->frameWidth * 0.5),(this->frameHeight * 0.5));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateHitbox,(void))

Void FlxSprite_obj::resetHelpers( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetHelpers",0x6fc22ddf,"flixel.FlxSprite.resetHelpers","flixel/FlxSprite.hx",688,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(689)
		{
			HX_STACK_LINE(689)
			this->_flashRect->x = (int)0;
			HX_STACK_LINE(689)
			this->_flashRect->y = (int)0;
			HX_STACK_LINE(689)
			this->_flashRect->width = this->frameWidth;
			HX_STACK_LINE(689)
			this->_flashRect->height = this->frameHeight;
		}
		HX_STACK_LINE(690)
		this->_flashRect2->x = (int)0;
		HX_STACK_LINE(691)
		this->_flashRect2->y = (int)0;
		HX_STACK_LINE(692)
		int _g = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(692)
		this->_flashRect2->width = _g;
		HX_STACK_LINE(693)
		int _g1 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(693)
		this->_flashRect2->height = _g1;
		HX_STACK_LINE(694)
		this->origin->set((this->frameWidth * 0.5),(this->frameHeight * 0.5));
		HX_STACK_LINE(701)
		this->_halfWidth = (this->frameWidth * 0.5);
		HX_STACK_LINE(702)
		this->_halfHeight = (this->frameHeight * 0.5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetHelpers,(void))

Void FlxSprite_obj::update( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","update",0xe75bd5f2,"flixel.FlxSprite.update","flixel/FlxSprite.hx",706,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(707)
		this->super::update();
		HX_STACK_LINE(708)
		this->animation->update();
	}
return null();
}


Void FlxSprite_obj::draw( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","draw",0xe68b7fad,"flixel.FlxSprite.draw","flixel/FlxSprite.hx",715,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(716)
		if (((this->alpha == (int)0))){
			HX_STACK_LINE(718)
			return null();
		}
		HX_STACK_LINE(721)
		if ((this->dirty)){
			HX_STACK_LINE(723)
			this->calcFrame(null());
		}
		HX_STACK_LINE(727)
		::flixel::system::layer::DrawStackItem drawItem;		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(728)
		Array< Float > currDrawData;		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(729)
		int currIndex;		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(731)
		Float cos;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(732)
		Float sin;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(734)
		Float ox = this->origin->x;		HX_STACK_VAR(ox,"ox");
		HX_STACK_LINE(735)
		if (((this->_facingHorizontalMult != (int)1))){
			HX_STACK_LINE(737)
			ox = (this->frameWidth - ox);
		}
		HX_STACK_LINE(739)
		Float oy = this->origin->y;		HX_STACK_VAR(oy,"oy");
		HX_STACK_LINE(740)
		if (((this->_facingVerticalMult != (int)1))){
			HX_STACK_LINE(742)
			oy = (this->frameHeight - oy);
		}
		HX_STACK_LINE(746)
		bool simpleRender = this->isSimpleRender();		HX_STACK_VAR(simpleRender,"simpleRender");
		HX_STACK_LINE(748)
		{
			HX_STACK_LINE(748)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(748)
			Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(748)
			while((true)){
				HX_STACK_LINE(748)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(748)
					break;
				}
				HX_STACK_LINE(748)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(748)
				++(_g);
				HX_STACK_LINE(750)
				if (((  ((!(((bool(!(camera->visible)) || bool(!(camera->exists))))))) ? bool(!(this->isOnScreen(camera))) : bool(true) ))){
					HX_STACK_LINE(752)
					continue;
				}
				HX_STACK_LINE(756)
				::flixel::system::layer::DrawStackItem _g2 = camera->getDrawStackItem(this->cachedGraphics,this->isColored,this->_blendInt,this->antialiasing);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(756)
				drawItem = _g2;
				HX_STACK_LINE(757)
				currDrawData = drawItem->drawData;
				HX_STACK_LINE(758)
				currIndex = drawItem->position;
				HX_STACK_LINE(760)
				this->_point->set_x(((this->x - (camera->scroll->x * this->scrollFactor->x)) - this->offset->x));
				HX_STACK_LINE(761)
				this->_point->set_y(((this->y - (camera->scroll->y * this->scrollFactor->y)) - this->offset->y));
				HX_STACK_LINE(763)
				this->_point->set_x((this->_point->x + this->origin->x));
				HX_STACK_LINE(764)
				this->_point->set_y((this->_point->y + this->origin->y));
				HX_STACK_LINE(802)
				Float csx = this->_facingHorizontalMult;		HX_STACK_VAR(csx,"csx");
				HX_STACK_LINE(803)
				Float csy = this->_facingVerticalMult;		HX_STACK_VAR(csy,"csy");
				HX_STACK_LINE(804)
				Float ssy = (int)0;		HX_STACK_VAR(ssy,"ssy");
				HX_STACK_LINE(805)
				Float ssx = (int)0;		HX_STACK_VAR(ssx,"ssx");
				HX_STACK_LINE(807)
				Float x1 = (ox - this->frame->center->x);		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(808)
				Float y1 = (oy - this->frame->center->y);		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(810)
				Float x2 = x1;		HX_STACK_VAR(x2,"x2");
				HX_STACK_LINE(811)
				Float y2 = y1;		HX_STACK_VAR(y2,"y2");
				HX_STACK_LINE(814)
				Float a = csx;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(815)
				Float b = ssx;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(816)
				Float c = ssy;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(817)
				Float d = csy;		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(819)
				if ((!(simpleRender))){
					HX_STACK_LINE(821)
					if (((bool(this->_angleChanged) && bool((this->bakedRotationAngle <= (int)0))))){
						HX_STACK_LINE(823)
						Float radians = (-(this->angle) * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(radians,"radians");
						HX_STACK_LINE(824)
						Float _g11 = ::Math_obj::sin(radians);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(824)
						this->_sinAngle = _g11;
						HX_STACK_LINE(825)
						Float _g21 = ::Math_obj::cos(radians);		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(825)
						this->_cosAngle = _g21;
						HX_STACK_LINE(826)
						this->_angleChanged = false;
					}
					HX_STACK_LINE(829)
					Float sx = (this->scale->x * this->_facingHorizontalMult);		HX_STACK_VAR(sx,"sx");
					HX_STACK_LINE(830)
					Float sy = (this->scale->y * this->_facingVerticalMult);		HX_STACK_VAR(sy,"sy");
					HX_STACK_LINE(832)
					if (((this->frame->type == ::flixel::system::layer::frames::FrameType_obj::ROTATED))){
						HX_STACK_LINE(834)
						cos = -(this->_sinAngle);
						HX_STACK_LINE(835)
						sin = this->_cosAngle;
						HX_STACK_LINE(837)
						csx = (cos * sx);
						HX_STACK_LINE(838)
						ssy = (sin * sy);
						HX_STACK_LINE(839)
						ssx = (sin * sx);
						HX_STACK_LINE(840)
						csy = (cos * sy);
						HX_STACK_LINE(842)
						x2 = ((x1 * ssx) - (y1 * csy));
						HX_STACK_LINE(843)
						y2 = ((x1 * csx) + (y1 * ssy));
						HX_STACK_LINE(845)
						a = csy;
						HX_STACK_LINE(846)
						b = ssy;
						HX_STACK_LINE(847)
						c = ssx;
						HX_STACK_LINE(848)
						d = csx;
					}
					else{
						HX_STACK_LINE(852)
						cos = this->_cosAngle;
						HX_STACK_LINE(853)
						sin = this->_sinAngle;
						HX_STACK_LINE(855)
						csx = (cos * sx);
						HX_STACK_LINE(856)
						ssy = (sin * sy);
						HX_STACK_LINE(857)
						ssx = (sin * sx);
						HX_STACK_LINE(858)
						csy = (cos * sy);
						HX_STACK_LINE(860)
						x2 = ((x1 * csx) + (y1 * ssy));
						HX_STACK_LINE(861)
						y2 = ((-(x1) * ssx) + (y1 * csy));
						HX_STACK_LINE(863)
						a = csx;
						HX_STACK_LINE(864)
						b = ssx;
						HX_STACK_LINE(865)
						c = ssy;
						HX_STACK_LINE(866)
						d = csy;
					}
				}
				else{
					HX_STACK_LINE(871)
					x2 = (x1 * csx);
					HX_STACK_LINE(872)
					y2 = (y1 * csy);
				}
				HX_STACK_LINE(875)
				{
					HX_STACK_LINE(875)
					::flixel::util::FlxPoint _g21 = this->_point;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(875)
					_g21->set_x((_g21->x - x2));
				}
				HX_STACK_LINE(876)
				{
					HX_STACK_LINE(876)
					::flixel::util::FlxPoint _g21 = this->_point;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(876)
					_g21->set_y((_g21->y - y2));
				}
				HX_STACK_LINE(878)
				if ((this->pixelPerfectRender)){
					HX_STACK_LINE(880)
					::flixel::util::FlxPoint _this = this->_point;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(880)
					int _g3 = ::Math_obj::floor(_this->x);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(880)
					_this->set_x(_g3);
					HX_STACK_LINE(880)
					int _g4 = ::Math_obj::floor(_this->y);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(880)
					_this->set_y(_g4);
					HX_STACK_LINE(880)
					_this;
				}
				HX_STACK_LINE(883)
				int _g5 = (currIndex)++;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(883)
				currDrawData[_g5] = this->_point->x;
				HX_STACK_LINE(884)
				int _g6 = (currIndex)++;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(884)
				currDrawData[_g6] = this->_point->y;
				HX_STACK_LINE(886)
				int _g7 = (currIndex)++;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(886)
				currDrawData[_g7] = this->frame->tileID;
				HX_STACK_LINE(888)
				int _g8 = (currIndex)++;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(888)
				currDrawData[_g8] = a;
				HX_STACK_LINE(889)
				int _g9 = (currIndex)++;		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(889)
				currDrawData[_g9] = -(b);
				HX_STACK_LINE(890)
				int _g10 = (currIndex)++;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(890)
				currDrawData[_g10] = c;
				HX_STACK_LINE(891)
				int _g11 = (currIndex)++;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(891)
				currDrawData[_g11] = d;
				HX_STACK_LINE(893)
				if ((this->isColored)){
					HX_STACK_LINE(895)
					int _g12 = (currIndex)++;		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(895)
					currDrawData[_g12] = this->_red;
					HX_STACK_LINE(896)
					int _g13 = (currIndex)++;		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(896)
					currDrawData[_g13] = this->_green;
					HX_STACK_LINE(897)
					int _g14 = (currIndex)++;		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(897)
					currDrawData[_g14] = this->_blue;
				}
				HX_STACK_LINE(899)
				int _g15 = (currIndex)++;		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(899)
				currDrawData[_g15] = (this->alpha * camera->alpha);
				HX_STACK_LINE(900)
				drawItem->position = currIndex;
			}
		}
	}
return null();
}


Void FlxSprite_obj::stamp( ::flixel::FlxSprite Brush,hx::Null< int >  __o_X,hx::Null< int >  __o_Y){
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.FlxSprite","stamp",0x77d9503a,"flixel.FlxSprite.stamp","flixel/FlxSprite.hx",921,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Brush,"Brush")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(922)
		{
			HX_STACK_LINE(922)
			bool Force = false;		HX_STACK_VAR(Force,"Force");
			HX_STACK_LINE(922)
			Brush->calcFrame(true);
		}
		HX_STACK_LINE(923)
		::flash::display::BitmapData bitmapData = Brush->framePixels;		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(926)
		if (((bool((bool((bool(((bool((Brush->angle == (int)0)) || bool((Brush->bakedRotationAngle > (int)0))))) && bool((Brush->scale->x == (int)1)))) && bool((Brush->scale->y == (int)1)))) && bool((Brush->blend == null()))))){
			HX_STACK_LINE(928)
			this->_flashPoint->x = (X + this->region->startX);
			HX_STACK_LINE(929)
			this->_flashPoint->y = (Y + this->region->startY);
			HX_STACK_LINE(930)
			int _g = bitmapData->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(930)
			this->_flashRect2->width = _g;
			HX_STACK_LINE(931)
			int _g1 = bitmapData->get_height();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(931)
			this->_flashRect2->height = _g1;
			HX_STACK_LINE(932)
			this->cachedGraphics->bitmap->copyPixels(bitmapData,this->_flashRect2,this->_flashPoint,null(),null(),true);
			HX_STACK_LINE(933)
			int _g2 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(933)
			this->_flashRect2->width = _g2;
			HX_STACK_LINE(934)
			int _g3 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(934)
			this->_flashRect2->height = _g3;
			HX_STACK_LINE(936)
			this->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
			HX_STACK_LINE(942)
			return null();
		}
		HX_STACK_LINE(946)
		this->_matrix->identity();
		HX_STACK_LINE(947)
		this->_matrix->translate(-(Brush->origin->x),-(Brush->origin->y));
		HX_STACK_LINE(948)
		this->_matrix->scale(Brush->scale->x,Brush->scale->y);
		HX_STACK_LINE(949)
		if (((Brush->angle != (int)0))){
			HX_STACK_LINE(951)
			this->_matrix->rotate((Brush->angle * ((Float(::Math_obj::PI) / Float((int)180)))));
		}
		HX_STACK_LINE(953)
		this->_matrix->translate(((X + this->region->startX) + Brush->origin->x),((Y + this->region->startY) + Brush->origin->y));
		HX_STACK_LINE(954)
		::flash::display::BlendMode brushBlend = Brush->blend;		HX_STACK_VAR(brushBlend,"brushBlend");
		HX_STACK_LINE(955)
		this->cachedGraphics->bitmap->draw(bitmapData,this->_matrix,null(),brushBlend,null(),Brush->antialiasing);
		HX_STACK_LINE(956)
		this->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,stamp,(void))

Void FlxSprite_obj::drawFrame( hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","drawFrame",0x99d67540,"flixel.FlxSprite.drawFrame","flixel/FlxSprite.hx",977,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(977)
		this->calcFrame(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawFrame,(void))

Void FlxSprite_obj::centerOffsets( hx::Null< bool >  __o_AdjustPosition){
bool AdjustPosition = __o_AdjustPosition.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","centerOffsets",0x583e0f62,"flixel.FlxSprite.centerOffsets","flixel/FlxSprite.hx",986,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AdjustPosition,"AdjustPosition")
{
		HX_STACK_LINE(987)
		Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(987)
		Float _g1 = (this->frameWidth - _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(987)
		Float _g2 = (_g1 * 0.5);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(987)
		this->offset->set_x(_g2);
		HX_STACK_LINE(988)
		Float _g3 = this->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(988)
		Float _g4 = (this->frameHeight - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(988)
		Float _g5 = (_g4 * 0.5);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(988)
		this->offset->set_y(_g5);
		HX_STACK_LINE(989)
		if ((AdjustPosition)){
			HX_STACK_LINE(991)
			{
				HX_STACK_LINE(991)
				::flixel::FlxSprite _g6 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(991)
				_g6->set_x((_g6->x + this->offset->x));
			}
			HX_STACK_LINE(992)
			{
				HX_STACK_LINE(992)
				::flixel::FlxSprite _g6 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(992)
				_g6->set_y((_g6->y + this->offset->y));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,centerOffsets,(void))

Void FlxSprite_obj::centerOrigin( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","centerOrigin",0x4cbae644,"flixel.FlxSprite.centerOrigin","flixel/FlxSprite.hx",1002,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1002)
		this->origin->set((this->frameWidth * 0.5),(this->frameHeight * 0.5));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,centerOrigin,(void))

Array< ::Dynamic > FlxSprite_obj::replaceColor( int Color,int NewColor,hx::Null< bool >  __o_FetchPositions){
bool FetchPositions = __o_FetchPositions.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","replaceColor",0x7b700138,"flixel.FlxSprite.replaceColor","flixel/FlxSprite.hx",1013,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(NewColor,"NewColor")
	HX_STACK_ARG(FetchPositions,"FetchPositions")
{
		HX_STACK_LINE(1014)
		Array< ::Dynamic > positions = null();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(1015)
		if ((FetchPositions)){
			HX_STACK_LINE(1017)
			Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1017)
			positions = _g;
		}
		HX_STACK_LINE(1020)
		int row = this->region->startY;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1021)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1022)
		int rows = this->region->height;		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(1023)
		int columns = this->region->width;		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(1024)
		this->cachedGraphics->bitmap->lock();
		HX_STACK_LINE(1025)
		while((true)){
			HX_STACK_LINE(1025)
			if ((!(((row < rows))))){
				HX_STACK_LINE(1025)
				break;
			}
			HX_STACK_LINE(1027)
			column = this->region->startX;
			HX_STACK_LINE(1028)
			while((true)){
				HX_STACK_LINE(1028)
				if ((!(((column < columns))))){
					HX_STACK_LINE(1028)
					break;
				}
				HX_STACK_LINE(1030)
				int _g1 = this->cachedGraphics->bitmap->getPixel32(column,row);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1030)
				if (((_g1 == Color))){
					HX_STACK_LINE(1032)
					this->cachedGraphics->bitmap->setPixel32(column,row,NewColor);
					HX_STACK_LINE(1033)
					if ((FetchPositions)){
						HX_STACK_LINE(1035)
						::flixel::util::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1035)
						{
							HX_STACK_LINE(1035)
							::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(column,row);		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(1035)
							point->_inPool = false;
							HX_STACK_LINE(1035)
							_g2 = point;
						}
						HX_STACK_LINE(1035)
						positions->push(_g2);
					}
					HX_STACK_LINE(1037)
					this->dirty = true;
				}
				HX_STACK_LINE(1039)
				(column)++;
			}
			HX_STACK_LINE(1041)
			(row)++;
		}
		HX_STACK_LINE(1043)
		this->cachedGraphics->bitmap->unlock(null());
		HX_STACK_LINE(1044)
		this->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
		HX_STACK_LINE(1045)
		return positions;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,replaceColor,return )

Void FlxSprite_obj::setColorTransform( hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset){
Float redMultiplier = __o_redMultiplier.Default(1.0);
Float greenMultiplier = __o_greenMultiplier.Default(1.0);
Float blueMultiplier = __o_blueMultiplier.Default(1.0);
Float alphaMultiplier = __o_alphaMultiplier.Default(1.0);
Float redOffset = __o_redOffset.Default(0);
Float greenOffset = __o_greenOffset.Default(0);
Float blueOffset = __o_blueOffset.Default(0);
Float alphaOffset = __o_alphaOffset.Default(0);
	HX_STACK_FRAME("flixel.FlxSprite","setColorTransform",0xa09a3582,"flixel.FlxSprite.setColorTransform","flixel/FlxSprite.hx",1061,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(redMultiplier,"redMultiplier")
	HX_STACK_ARG(greenMultiplier,"greenMultiplier")
	HX_STACK_ARG(blueMultiplier,"blueMultiplier")
	HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
	HX_STACK_ARG(redOffset,"redOffset")
	HX_STACK_ARG(greenOffset,"greenOffset")
	HX_STACK_ARG(blueOffset,"blueOffset")
	HX_STACK_ARG(alphaOffset,"alphaOffset")
{
		HX_STACK_LINE(1062)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1062)
		{
			HX_STACK_LINE(1062)
			int Red = ::Std_obj::_int((redMultiplier * (int)255));		HX_STACK_VAR(Red,"Red");
			HX_STACK_LINE(1062)
			int Green = ::Std_obj::_int((greenMultiplier * (int)255));		HX_STACK_VAR(Green,"Green");
			HX_STACK_LINE(1062)
			int Blue = ::Std_obj::_int((blueMultiplier * (int)255));		HX_STACK_VAR(Blue,"Blue");
			HX_STACK_LINE(1062)
			_g = (int((int((int(Red) << int((int)16))) | int((int(Green) << int((int)8))))) | int(Blue));
		}
		HX_STACK_LINE(1062)
		this->set_color(_g);
		HX_STACK_LINE(1063)
		this->set_alpha(alphaMultiplier);
		HX_STACK_LINE(1065)
		if (((this->colorTransform == null()))){
			HX_STACK_LINE(1067)
			::flash::geom::ColorTransform _g1 = ::flash::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1067)
			this->colorTransform = _g1;
		}
		else{
			HX_STACK_LINE(1071)
			this->colorTransform->redMultiplier = redMultiplier;
			HX_STACK_LINE(1072)
			this->colorTransform->greenMultiplier = greenMultiplier;
			HX_STACK_LINE(1073)
			this->colorTransform->blueMultiplier = blueMultiplier;
			HX_STACK_LINE(1074)
			this->colorTransform->alphaMultiplier = alphaMultiplier;
			HX_STACK_LINE(1075)
			this->colorTransform->redOffset = redOffset;
			HX_STACK_LINE(1076)
			this->colorTransform->greenOffset = greenOffset;
			HX_STACK_LINE(1077)
			this->colorTransform->blueOffset = blueOffset;
			HX_STACK_LINE(1078)
			this->colorTransform->alphaOffset = alphaOffset;
		}
		HX_STACK_LINE(1081)
		this->useColorTransform = (bool((bool((bool((bool((bool((this->alpha != (int)1)) || bool((this->color != (int)16777215)))) || bool((redOffset != (int)0)))) || bool((greenOffset != (int)0)))) || bool((blueOffset != (int)0)))) || bool((alphaOffset != (int)0)));
		HX_STACK_LINE(1082)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(FlxSprite_obj,setColorTransform,(void))

Void FlxSprite_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","updateColorTransform",0x79f9051b,"flixel.FlxSprite.updateColorTransform","flixel/FlxSprite.hx",1086,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1087)
		if (((bool((this->alpha != (int)1)) || bool((this->color != (int)16777215))))){
			HX_STACK_LINE(1089)
			if (((this->colorTransform == null()))){
				HX_STACK_LINE(1091)
				::flash::geom::ColorTransform _g = ::flash::geom::ColorTransform_obj::__new((Float(((int(this->color) >> int((int)16)))) / Float((int)255)),(Float(((int((int(this->color) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this->color) & int((int)255)))) / Float((int)255)),this->alpha,null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1091)
				this->colorTransform = _g;
			}
			else{
				HX_STACK_LINE(1095)
				this->colorTransform->redMultiplier = (Float(((int(this->color) >> int((int)16)))) / Float((int)255));
				HX_STACK_LINE(1096)
				this->colorTransform->greenMultiplier = (Float(((int((int(this->color) >> int((int)8))) & int((int)255)))) / Float((int)255));
				HX_STACK_LINE(1097)
				this->colorTransform->blueMultiplier = (Float(((int(this->color) & int((int)255)))) / Float((int)255));
				HX_STACK_LINE(1098)
				this->colorTransform->alphaMultiplier = this->alpha;
			}
			HX_STACK_LINE(1100)
			this->useColorTransform = true;
		}
		else{
			HX_STACK_LINE(1104)
			if (((this->colorTransform != null()))){
				HX_STACK_LINE(1106)
				this->colorTransform->redMultiplier = (int)1;
				HX_STACK_LINE(1107)
				this->colorTransform->greenMultiplier = (int)1;
				HX_STACK_LINE(1108)
				this->colorTransform->blueMultiplier = (int)1;
				HX_STACK_LINE(1109)
				this->colorTransform->alphaMultiplier = (int)1;
			}
			HX_STACK_LINE(1112)
			this->useColorTransform = false;
		}
		HX_STACK_LINE(1114)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateColorTransform,(void))

bool FlxSprite_obj::pixelsOverlapPoint( ::flixel::util::FlxPoint point,hx::Null< int >  __o_Mask,::flixel::FlxCamera Camera){
int Mask = __o_Mask.Default(255);
	HX_STACK_FRAME("flixel.FlxSprite","pixelsOverlapPoint",0x4c878b7f,"flixel.FlxSprite.pixelsOverlapPoint","flixel/FlxSprite.hx",1127,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(Mask,"Mask")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(1128)
		if (((Camera == null()))){
			HX_STACK_LINE(1130)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1132)
		this->getScreenXY(this->_point,Camera);
		HX_STACK_LINE(1133)
		this->_point->set_x((this->_point->x - this->offset->x));
		HX_STACK_LINE(1134)
		this->_point->set_y((this->_point->y - this->offset->y));
		HX_STACK_LINE(1135)
		this->_flashPoint->x = ((point->x - Camera->scroll->x) - this->_point->x);
		HX_STACK_LINE(1136)
		this->_flashPoint->y = ((point->y - Camera->scroll->y) - this->_point->y);
		HX_STACK_LINE(1138)
		if ((point->_weak)){
			HX_STACK_LINE(1138)
			::flixel::util::FlxPoint_obj::_pool->put(point);
		}
		HX_STACK_LINE(1141)
		if (((bool((bool((bool((this->_flashPoint->x < (int)0)) || bool((this->_flashPoint->x > this->frameWidth)))) || bool((this->_flashPoint->y < (int)0)))) || bool((this->_flashPoint->y > this->frameHeight))))){
			HX_STACK_LINE(1143)
			return false;
		}
		else{
			HX_STACK_LINE(1147)
			::flash::display::BitmapData frameData;		HX_STACK_VAR(frameData,"frameData");
			HX_STACK_LINE(1147)
			{
				HX_STACK_LINE(1147)
				if (((bool((this->frame != null())) && bool(this->dirty)))){
					HX_STACK_LINE(1147)
					if (((bool((bool(!(this->flipX)) && bool(!(this->flipY)))) && bool((this->frame->type == ::flixel::system::layer::frames::FrameType_obj::REGULAR))))){
						HX_STACK_LINE(1147)
						::flash::display::BitmapData _g = this->frame->paintOnBitmap(this->framePixels);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1147)
						this->framePixels = _g;
					}
					else{
						HX_STACK_LINE(1147)
						::flash::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
						HX_STACK_LINE(1147)
						if (((bool(this->flipX) && bool(this->flipY)))){
							HX_STACK_LINE(1147)
							::flash::display::BitmapData _g1 = this->frame->getHVReversedBitmap();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1147)
							frameBmd = _g1;
						}
						else{
							HX_STACK_LINE(1147)
							if ((this->flipX)){
								HX_STACK_LINE(1147)
								::flash::display::BitmapData _g2 = this->frame->getHReversedBitmap();		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(1147)
								frameBmd = _g2;
							}
							else{
								HX_STACK_LINE(1147)
								if ((this->flipY)){
									HX_STACK_LINE(1147)
									::flash::display::BitmapData _g3 = this->frame->getVReversedBitmap();		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(1147)
									frameBmd = _g3;
								}
								else{
									HX_STACK_LINE(1147)
									::flash::display::BitmapData _g4 = this->frame->getBitmap();		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(1147)
									frameBmd = _g4;
								}
							}
						}
						struct _Function_5_1{
							inline static bool Block( hx::ObjectPtr< ::flixel::FlxSprite_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",1147,0x0384bffa)
								{
									HX_STACK_LINE(1147)
									int _g5 = __this->framePixels->get_width();		HX_STACK_VAR(_g5,"_g5");
									HX_STACK_LINE(1147)
									return (_g5 != __this->frameWidth);
								}
								return null();
							}
						};
						struct _Function_5_2{
							inline static bool Block( hx::ObjectPtr< ::flixel::FlxSprite_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",1147,0x0384bffa)
								{
									HX_STACK_LINE(1147)
									int _g6 = __this->framePixels->get_height();		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(1147)
									return (_g6 != __this->frameHeight);
								}
								return null();
							}
						};
						HX_STACK_LINE(1147)
						if (((  ((!(((  ((!(((this->framePixels == null()))))) ? bool(_Function_5_1::Block(this)) : bool(true) ))))) ? bool(_Function_5_2::Block(this)) : bool(true) ))){
							HX_STACK_LINE(1147)
							if (((this->framePixels != null()))){
								HX_STACK_LINE(1147)
								this->framePixels->dispose();
							}
							HX_STACK_LINE(1147)
							int _g7 = ::Std_obj::_int(this->frame->sourceSize->x);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(1147)
							int _g8 = ::Std_obj::_int(this->frame->sourceSize->y);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(1147)
							::flash::display::BitmapData _g9 = ::flash::display::BitmapData_obj::__new(_g7,_g8,null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(1147)
							this->framePixels = _g9;
						}
						HX_STACK_LINE(1147)
						this->framePixels->copyPixels(frameBmd,this->_flashRect,this->_flashPointZero,null(),null(),null());
					}
					HX_STACK_LINE(1147)
					if ((this->useColorTransform)){
						HX_STACK_LINE(1147)
						this->framePixels->colorTransform(this->_flashRect,this->colorTransform);
					}
					HX_STACK_LINE(1147)
					this->dirty = false;
				}
				HX_STACK_LINE(1147)
				frameData = this->framePixels;
			}
			HX_STACK_LINE(1148)
			int _g10 = ::Std_obj::_int(this->_flashPoint->x);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(1148)
			int _g11 = ::Std_obj::_int(this->_flashPoint->y);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1148)
			int pixelColor = frameData->getPixel32(_g10,_g11);		HX_STACK_VAR(pixelColor,"pixelColor");
			HX_STACK_LINE(1149)
			int pixelAlpha = (int((int(pixelColor) >> int((int)24))) & int((int)255));		HX_STACK_VAR(pixelAlpha,"pixelAlpha");
			HX_STACK_LINE(1150)
			return ((pixelAlpha * this->alpha) >= Mask);
		}
		HX_STACK_LINE(1141)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,pixelsOverlapPoint,return )

Void FlxSprite_obj::calcFrame( hx::Null< bool >  __o_RunOnCpp){
bool RunOnCpp = __o_RunOnCpp.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","calcFrame",0xc4d45b0f,"flixel.FlxSprite.calcFrame","flixel/FlxSprite.hx",1160,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RunOnCpp,"RunOnCpp")
{
		HX_STACK_LINE(1161)
		if (((this->cachedGraphics == null()))){
			HX_STACK_LINE(1163)
			this->loadGraphic(hx::ClassOf< ::flixel::_FlxSprite::GraphicDefault >(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(1167)
		if ((!(RunOnCpp))){
			HX_STACK_LINE(1169)
			return null();
		}
		HX_STACK_LINE(1173)
		{
			HX_STACK_LINE(1173)
			if (((bool((this->frame != null())) && bool(this->dirty)))){
				HX_STACK_LINE(1173)
				if (((bool((bool(!(this->flipX)) && bool(!(this->flipY)))) && bool((this->frame->type == ::flixel::system::layer::frames::FrameType_obj::REGULAR))))){
					HX_STACK_LINE(1173)
					::flash::display::BitmapData _g = this->frame->paintOnBitmap(this->framePixels);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1173)
					this->framePixels = _g;
				}
				else{
					HX_STACK_LINE(1173)
					::flash::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
					HX_STACK_LINE(1173)
					if (((bool(this->flipX) && bool(this->flipY)))){
						HX_STACK_LINE(1173)
						::flash::display::BitmapData _g1 = this->frame->getHVReversedBitmap();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1173)
						frameBmd = _g1;
					}
					else{
						HX_STACK_LINE(1173)
						if ((this->flipX)){
							HX_STACK_LINE(1173)
							::flash::display::BitmapData _g2 = this->frame->getHReversedBitmap();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(1173)
							frameBmd = _g2;
						}
						else{
							HX_STACK_LINE(1173)
							if ((this->flipY)){
								HX_STACK_LINE(1173)
								::flash::display::BitmapData _g3 = this->frame->getVReversedBitmap();		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(1173)
								frameBmd = _g3;
							}
							else{
								HX_STACK_LINE(1173)
								::flash::display::BitmapData _g4 = this->frame->getBitmap();		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(1173)
								frameBmd = _g4;
							}
						}
					}
					struct _Function_4_1{
						inline static bool Block( hx::ObjectPtr< ::flixel::FlxSprite_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",1173,0x0384bffa)
							{
								HX_STACK_LINE(1173)
								int _g5 = __this->framePixels->get_width();		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(1173)
								return (_g5 != __this->frameWidth);
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static bool Block( hx::ObjectPtr< ::flixel::FlxSprite_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",1173,0x0384bffa)
							{
								HX_STACK_LINE(1173)
								int _g6 = __this->framePixels->get_height();		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(1173)
								return (_g6 != __this->frameHeight);
							}
							return null();
						}
					};
					HX_STACK_LINE(1173)
					if (((  ((!(((  ((!(((this->framePixels == null()))))) ? bool(_Function_4_1::Block(this)) : bool(true) ))))) ? bool(_Function_4_2::Block(this)) : bool(true) ))){
						HX_STACK_LINE(1173)
						if (((this->framePixels != null()))){
							HX_STACK_LINE(1173)
							this->framePixels->dispose();
						}
						HX_STACK_LINE(1173)
						int _g7 = ::Std_obj::_int(this->frame->sourceSize->x);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(1173)
						int _g8 = ::Std_obj::_int(this->frame->sourceSize->y);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(1173)
						::flash::display::BitmapData _g9 = ::flash::display::BitmapData_obj::__new(_g7,_g8,null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(1173)
						this->framePixels = _g9;
					}
					HX_STACK_LINE(1173)
					this->framePixels->copyPixels(frameBmd,this->_flashRect,this->_flashPointZero,null(),null(),null());
				}
				HX_STACK_LINE(1173)
				if ((this->useColorTransform)){
					HX_STACK_LINE(1173)
					this->framePixels->colorTransform(this->_flashRect,this->colorTransform);
				}
				HX_STACK_LINE(1173)
				this->dirty = false;
			}
			HX_STACK_LINE(1173)
			this->framePixels;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,calcFrame,(void))

Void FlxSprite_obj::updateFrameData( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","updateFrameData",0x631dd0a5,"flixel.FlxSprite.updateFrameData","flixel/FlxSprite.hx",1181,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1182)
		if (((this->cachedGraphics == null()))){
			HX_STACK_LINE(1184)
			return null();
		}
		HX_STACK_LINE(1187)
		if (((bool((this->cachedGraphics->data != null())) && bool(((bool((this->region->tileWidth == (int)0)) && bool((this->region->tileHeight == (int)0)))))))){
			HX_STACK_LINE(1189)
			::flixel::system::layer::frames::FlxSpriteFrames _g = this->cachedGraphics->get_tilesheet()->getTexturePackerFrames(this->cachedGraphics->data,null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1189)
			this->framesData = _g;
		}
		else{
			HX_STACK_LINE(1193)
			::flixel::system::layer::frames::FlxSpriteFrames _g1 = this->cachedGraphics->get_tilesheet()->getSpriteSheetFrames(this->region,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1193)
			this->framesData = _g1;
		}
		HX_STACK_LINE(1196)
		this->frames = this->framesData->frames->length;
		HX_STACK_LINE(1197)
		this->animation->set_frameIndex((int)0);
		HX_STACK_LINE(1198)
		this->set_frame(this->framesData->frames->__get((int)0).StaticCast< ::flixel::system::layer::frames::FlxFrame >());
		HX_STACK_LINE(1200)
		{
			HX_STACK_LINE(1200)
			this->set_width(this->frameWidth);
			HX_STACK_LINE(1200)
			this->set_height(this->frameHeight);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateFrameData,(void))

::flash::display::BitmapData FlxSprite_obj::getFlxFrameBitmapData( ){
	HX_STACK_FRAME("flixel.FlxSprite","getFlxFrameBitmapData",0xc4eba061,"flixel.FlxSprite.getFlxFrameBitmapData","flixel/FlxSprite.hx",1207,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1208)
	if (((bool((this->frame != null())) && bool(this->dirty)))){
		HX_STACK_LINE(1210)
		if (((bool((bool(!(this->flipX)) && bool(!(this->flipY)))) && bool((this->frame->type == ::flixel::system::layer::frames::FrameType_obj::REGULAR))))){
			HX_STACK_LINE(1212)
			::flash::display::BitmapData _g = this->frame->paintOnBitmap(this->framePixels);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1212)
			this->framePixels = _g;
		}
		else{
			HX_STACK_LINE(1216)
			::flash::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
			HX_STACK_LINE(1218)
			if (((bool(this->flipX) && bool(this->flipY)))){
				HX_STACK_LINE(1220)
				::flash::display::BitmapData _g1 = this->frame->getHVReversedBitmap();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1220)
				frameBmd = _g1;
			}
			else{
				HX_STACK_LINE(1222)
				if ((this->flipX)){
					HX_STACK_LINE(1224)
					::flash::display::BitmapData _g2 = this->frame->getHReversedBitmap();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1224)
					frameBmd = _g2;
				}
				else{
					HX_STACK_LINE(1226)
					if ((this->flipY)){
						HX_STACK_LINE(1228)
						::flash::display::BitmapData _g3 = this->frame->getVReversedBitmap();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1228)
						frameBmd = _g3;
					}
					else{
						HX_STACK_LINE(1232)
						::flash::display::BitmapData _g4 = this->frame->getBitmap();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(1232)
						frameBmd = _g4;
					}
				}
			}
			struct _Function_3_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::FlxSprite_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",1235,0x0384bffa)
					{
						HX_STACK_LINE(1235)
						int _g5 = __this->framePixels->get_width();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(1235)
						return (_g5 != __this->frameWidth);
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static bool Block( hx::ObjectPtr< ::flixel::FlxSprite_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",1235,0x0384bffa)
					{
						HX_STACK_LINE(1235)
						int _g6 = __this->framePixels->get_height();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(1235)
						return (_g6 != __this->frameHeight);
					}
					return null();
				}
			};
			HX_STACK_LINE(1235)
			if (((  ((!(((  ((!(((this->framePixels == null()))))) ? bool(_Function_3_1::Block(this)) : bool(true) ))))) ? bool(_Function_3_2::Block(this)) : bool(true) ))){
				HX_STACK_LINE(1237)
				if (((this->framePixels != null()))){
					HX_STACK_LINE(1238)
					this->framePixels->dispose();
				}
				HX_STACK_LINE(1240)
				int _g7 = ::Std_obj::_int(this->frame->sourceSize->x);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(1240)
				int _g8 = ::Std_obj::_int(this->frame->sourceSize->y);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(1240)
				::flash::display::BitmapData _g9 = ::flash::display::BitmapData_obj::__new(_g7,_g8,null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(1240)
				this->framePixels = _g9;
			}
			HX_STACK_LINE(1243)
			this->framePixels->copyPixels(frameBmd,this->_flashRect,this->_flashPointZero,null(),null(),null());
		}
		HX_STACK_LINE(1246)
		if ((this->useColorTransform)){
			HX_STACK_LINE(1248)
			this->framePixels->colorTransform(this->_flashRect,this->colorTransform);
		}
		HX_STACK_LINE(1251)
		this->dirty = false;
	}
	HX_STACK_LINE(1255)
	return this->framePixels;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,getFlxFrameBitmapData,return )

::flixel::util::FlxPoint FlxSprite_obj::getGraphicMidpoint( ::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.FlxSprite","getGraphicMidpoint",0xc420be03,"flixel.FlxSprite.getGraphicMidpoint","flixel/FlxSprite.hx",1265,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(1266)
	if (((point == null()))){
		HX_STACK_LINE(1268)
		::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1268)
		{
			HX_STACK_LINE(1268)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(1268)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(1268)
			::flixel::util::FlxPoint point1 = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(1268)
			point1->_inPool = false;
			HX_STACK_LINE(1268)
			_g = point1;
		}
		HX_STACK_LINE(1268)
		point = _g;
	}
	HX_STACK_LINE(1270)
	return point->set((this->x + (this->frameWidth * 0.5)),(this->y + (this->frameHeight * 0.5)));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,getGraphicMidpoint,return )

Void FlxSprite_obj::resetFrameBitmapDatas( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetFrameBitmapDatas",0x2832a393,"flixel.FlxSprite.resetFrameBitmapDatas","flixel/FlxSprite.hx",1279,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1279)
		this->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrameBitmapDatas,(void))

bool FlxSprite_obj::isOnScreen( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxSprite","isOnScreen",0xb5403c5e,"flixel.FlxSprite.isOnScreen","flixel/FlxSprite.hx",1290,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(1291)
	if (((Camera == null()))){
		HX_STACK_LINE(1293)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(1296)
	Float minX = ((this->x - this->offset->x) - (Camera->scroll->x * this->scrollFactor->x));		HX_STACK_VAR(minX,"minX");
	HX_STACK_LINE(1297)
	Float minY = ((this->y - this->offset->y) - (Camera->scroll->y * this->scrollFactor->y));		HX_STACK_VAR(minY,"minY");
	HX_STACK_LINE(1298)
	Float maxX = (int)0;		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(1299)
	Float maxY = (int)0;		HX_STACK_VAR(maxY,"maxY");
	HX_STACK_LINE(1301)
	if (((bool((bool(((bool((this->angle == (int)0)) || bool((this->bakedRotationAngle > (int)0))))) && bool((this->scale->x == (int)1)))) && bool((this->scale->y == (int)1))))){
		HX_STACK_LINE(1303)
		maxX = (minX + this->frameWidth);
		HX_STACK_LINE(1304)
		maxY = (minY + this->frameHeight);
	}
	else{
		HX_STACK_LINE(1308)
		Float radiusX = this->_halfWidth;		HX_STACK_VAR(radiusX,"radiusX");
		HX_STACK_LINE(1309)
		Float radiusY = this->_halfHeight;		HX_STACK_VAR(radiusY,"radiusY");
		HX_STACK_LINE(1311)
		if (((this->origin->x == this->_halfWidth))){
			HX_STACK_LINE(1313)
			Float _g = ::Math_obj::abs((this->_halfWidth * this->scale->x));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1313)
			radiusX = _g;
		}
		else{
			HX_STACK_LINE(1317)
			Float sox = (this->scale->x * this->origin->x);		HX_STACK_VAR(sox,"sox");
			HX_STACK_LINE(1318)
			Float sfw = (this->scale->x * this->frameWidth);		HX_STACK_VAR(sfw,"sfw");
			HX_STACK_LINE(1319)
			Float x1 = ::Math_obj::abs(sox);		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(1320)
			Float x2 = ::Math_obj::abs((sfw - sox));		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(1321)
			Float _g1 = ::Math_obj::max(x2,x1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1321)
			radiusX = _g1;
		}
		HX_STACK_LINE(1324)
		if (((this->origin->y == this->_halfHeight))){
			HX_STACK_LINE(1326)
			Float _g2 = ::Math_obj::abs((this->_halfHeight * this->scale->y));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1326)
			radiusY = _g2;
		}
		else{
			HX_STACK_LINE(1330)
			Float soy = (this->scale->y * this->origin->y);		HX_STACK_VAR(soy,"soy");
			HX_STACK_LINE(1331)
			Float sfh = (this->scale->y * this->frameHeight);		HX_STACK_VAR(sfh,"sfh");
			HX_STACK_LINE(1332)
			Float y1 = ::Math_obj::abs(soy);		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(1333)
			Float y2 = ::Math_obj::abs((sfh - soy));		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(1334)
			Float _g3 = ::Math_obj::max(y2,y1);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1334)
			radiusY = _g3;
		}
		HX_STACK_LINE(1337)
		Float radius = ::Math_obj::max(radiusX,radiusY);		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(1338)
		hx::MultEq(radius,1.41421356237);
		HX_STACK_LINE(1340)
		hx::AddEq(minX,this->origin->x);
		HX_STACK_LINE(1341)
		maxX = (minX + radius);
		HX_STACK_LINE(1342)
		hx::SubEq(minX,radius);
		HX_STACK_LINE(1344)
		hx::AddEq(minY,this->origin->y);
		HX_STACK_LINE(1345)
		maxY = (minY + radius);
		HX_STACK_LINE(1346)
		hx::SubEq(minY,radius);
	}
	HX_STACK_LINE(1349)
	if (((bool((maxX < (int)0)) || bool((minX > Camera->width))))){
		HX_STACK_LINE(1350)
		return false;
	}
	HX_STACK_LINE(1352)
	if (((bool((maxY < (int)0)) || bool((minY > Camera->height))))){
		HX_STACK_LINE(1353)
		return false;
	}
	HX_STACK_LINE(1355)
	return true;
}


bool FlxSprite_obj::isSimpleRender( ){
	HX_STACK_FRAME("flixel.FlxSprite","isSimpleRender",0x6aa0d51b,"flixel.FlxSprite.isSimpleRender","flixel/FlxSprite.hx",1367,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1367)
	return (bool((bool(((bool((bool((this->angle == (int)0)) && bool((this->frame->additionalAngle == (int)0)))) || bool((this->bakedRotationAngle > (int)0))))) && bool((this->scale->x == (int)1)))) && bool((this->scale->y == (int)1)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,isSimpleRender,return )

Void FlxSprite_obj::setFacingFlip( int Direction,bool FlipX,bool FlipY){
{
		HX_STACK_FRAME("flixel.FlxSprite","setFacingFlip",0x6816c060,"flixel.FlxSprite.setFacingFlip","flixel/FlxSprite.hx",1383,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Direction,"Direction")
		HX_STACK_ARG(FlipX,"FlipX")
		HX_STACK_ARG(FlipY,"FlipY")
		struct _Function_1_1{
			inline static Dynamic Block( bool &FlipY,bool &FlipX){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",1383,0x0384bffa)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , FlipX,false);
					__result->Add(HX_CSTRING("y") , FlipY,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1383)
		this->_facingFlip->set(Direction,_Function_1_1::Block(FlipY,FlipX));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,setFacingFlip,(void))

::flash::display::BitmapData FlxSprite_obj::get_pixels( ){
	HX_STACK_FRAME("flixel.FlxSprite","get_pixels",0x90b8575f,"flixel.FlxSprite.get_pixels","flixel/FlxSprite.hx",1391,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1391)
	return this->cachedGraphics->bitmap;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_pixels,return )

::flash::display::BitmapData FlxSprite_obj::set_pixels( ::flash::display::BitmapData Pixels){
	HX_STACK_FRAME("flixel.FlxSprite","set_pixels",0x9435f5d3,"flixel.FlxSprite.set_pixels","flixel/FlxSprite.hx",1395,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Pixels,"Pixels")
	HX_STACK_LINE(1396)
	::String key = ::flixel::FlxG_obj::bitmap->getCacheKeyFor(Pixels);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(1398)
	if (((key == null()))){
		HX_STACK_LINE(1400)
		::String _g = ::flixel::FlxG_obj::bitmap->getUniqueKey(null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1400)
		key = _g;
		HX_STACK_LINE(1401)
		::flixel::util::loaders::CachedGraphics _g1 = ::flixel::FlxG_obj::bitmap->addWithSpaces(Pixels,(int)0,(int)0,(int)1,(int)1,false,key);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1401)
		this->set_cachedGraphics(_g1);
		HX_STACK_LINE(1402)
		this->cachedGraphics->set_destroyOnNoUse(true);
	}
	else{
		HX_STACK_LINE(1406)
		::flixel::util::loaders::CachedGraphics _g2 = ::flixel::FlxG_obj::bitmap->get(key);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1406)
		this->set_cachedGraphics(_g2);
	}
	HX_STACK_LINE(1409)
	if (((this->region == null()))){
		HX_STACK_LINE(1411)
		::flixel::system::layer::Region _g3 = ::flixel::system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1411)
		this->region = _g3;
	}
	HX_STACK_LINE(1414)
	this->region->startX = (int)0;
	HX_STACK_LINE(1415)
	this->region->startY = (int)0;
	HX_STACK_LINE(1416)
	int _g4 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(1416)
	int _g5 = this->region->width = _g4;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(1416)
	this->region->tileWidth = _g5;
	HX_STACK_LINE(1417)
	int _g6 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(1417)
	int _g7 = this->region->height = _g6;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(1417)
	this->region->tileHeight = _g7;
	HX_STACK_LINE(1418)
	this->region->spacingX = (int)0;
	HX_STACK_LINE(1419)
	this->region->spacingY = (int)0;
	HX_STACK_LINE(1421)
	int _g8 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(1421)
	int _g9 = this->frameWidth = _g8;		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(1421)
	this->set_width(_g9);
	HX_STACK_LINE(1422)
	int _g10 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(1422)
	int _g11 = this->frameHeight = _g10;		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(1422)
	this->set_height(_g11);
	HX_STACK_LINE(1423)
	this->animation->destroyAnimations();
	HX_STACK_LINE(1425)
	this->updateFrameData();
	HX_STACK_LINE(1426)
	this->resetHelpers();
	HX_STACK_LINE(1430)
	this->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
	HX_STACK_LINE(1432)
	return Pixels;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_pixels,return )

::flixel::system::layer::frames::FlxFrame FlxSprite_obj::set_frame( ::flixel::system::layer::frames::FlxFrame Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_frame",0xf8c58847,"flixel.FlxSprite.set_frame","flixel/FlxSprite.hx",1436,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1437)
	this->frame = Value;
	HX_STACK_LINE(1438)
	if (((this->frame != null()))){
		HX_STACK_LINE(1440)
		{
			HX_STACK_LINE(1440)
			int _g = ::Std_obj::_int(this->frame->sourceSize->x);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1440)
			this->frameWidth = _g;
			HX_STACK_LINE(1440)
			int _g1 = ::Std_obj::_int(this->frame->sourceSize->y);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1440)
			this->frameHeight = _g1;
			HX_STACK_LINE(1440)
			{
				HX_STACK_LINE(1440)
				this->_flashRect->x = (int)0;
				HX_STACK_LINE(1440)
				this->_flashRect->y = (int)0;
				HX_STACK_LINE(1440)
				this->_flashRect->width = this->frameWidth;
				HX_STACK_LINE(1440)
				this->_flashRect->height = this->frameHeight;
			}
		}
		HX_STACK_LINE(1441)
		this->dirty = true;
	}
	else{
		HX_STACK_LINE(1443)
		if (((bool((bool((this->framesData != null())) && bool((this->framesData->frames != null())))) && bool((this->framesData->frames->length > (int)0))))){
			HX_STACK_LINE(1445)
			this->frame = this->framesData->frames->__get((int)0).StaticCast< ::flixel::system::layer::frames::FlxFrame >();
			HX_STACK_LINE(1446)
			this->dirty = true;
		}
	}
	HX_STACK_LINE(1448)
	return this->frame;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_frame,return )

int FlxSprite_obj::set_facing( int Direction){
	HX_STACK_FRAME("flixel.FlxSprite","set_facing",0xeb9145c0,"flixel.FlxSprite.set_facing","flixel/FlxSprite.hx",1452,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Direction,"Direction")
	HX_STACK_LINE(1453)
	Dynamic flip = this->_facingFlip->get(Direction);		HX_STACK_VAR(flip,"flip");
	HX_STACK_LINE(1454)
	if (((flip != null()))){
		HX_STACK_LINE(1456)
		this->set_flipX(flip->__Field(HX_CSTRING("x"),true));
		HX_STACK_LINE(1457)
		this->set_flipY(flip->__Field(HX_CSTRING("y"),true));
	}
	HX_STACK_LINE(1460)
	return this->facing = Direction;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_facing,return )

Float FlxSprite_obj::set_alpha( Float Alpha){
	HX_STACK_FRAME("flixel.FlxSprite","set_alpha",0x13d8b778,"flixel.FlxSprite.set_alpha","flixel/FlxSprite.hx",1464,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_LINE(1465)
	if (((Alpha > (int)1))){
		HX_STACK_LINE(1467)
		Alpha = (int)1;
	}
	HX_STACK_LINE(1469)
	if (((Alpha < (int)0))){
		HX_STACK_LINE(1471)
		Alpha = (int)0;
	}
	HX_STACK_LINE(1473)
	if (((Alpha == this->alpha))){
		HX_STACK_LINE(1475)
		return this->alpha;
	}
	HX_STACK_LINE(1477)
	this->alpha = Alpha;
	HX_STACK_LINE(1478)
	this->updateColorTransform();
	HX_STACK_LINE(1479)
	return this->alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_alpha,return )

int FlxSprite_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.FlxSprite","set_color",0x3c9e817d,"flixel.FlxSprite.set_color","flixel/FlxSprite.hx",1483,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(1484)
	hx::AndEq(Color,(int)16777215);
	HX_STACK_LINE(1485)
	if (((this->color == Color))){
		HX_STACK_LINE(1487)
		return Color;
	}
	HX_STACK_LINE(1489)
	this->color = Color;
	HX_STACK_LINE(1490)
	this->updateColorTransform();
	HX_STACK_LINE(1493)
	this->_red = (Float(((int(this->color) >> int((int)16)))) / Float((int)255));
	HX_STACK_LINE(1494)
	this->_green = (Float(((int((int(this->color) >> int((int)8))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1495)
	this->_blue = (Float(((int(this->color) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1496)
	this->isColored = (this->color < (int)16777215);
	HX_STACK_LINE(1499)
	return this->color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_color,return )

Float FlxSprite_obj::set_angle( Float Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_angle",0x152453ed,"flixel.FlxSprite.set_angle","flixel/FlxSprite.hx",1503,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1504)
	this->_angleChanged = (bool((this->angle != Value)) || bool(this->_angleChanged));
	HX_STACK_LINE(1505)
	return this->super::set_angle(Value);
}


::flash::display::BlendMode FlxSprite_obj::set_blend( ::flash::display::BlendMode Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_blend",0xa736f86b,"flixel.FlxSprite.set_blend","flixel/FlxSprite.hx",1509,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1511)
	if (((Value != null()))){
		HX_STACK_LINE(1513)
		switch( (int)(Value->__Index())){
			case (int)7: {
				HX_STACK_LINE(1516)
				this->_blendInt = (int)65536;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(1519)
				this->_blendInt = (int)131072;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(1521)
				this->_blendInt = (int)262144;
			}
			;break;
			default: {
				HX_STACK_LINE(1524)
				this->_blendInt = (int)0;
			}
		}
	}
	else{
		HX_STACK_LINE(1529)
		this->_blendInt = (int)0;
	}
	HX_STACK_LINE(1533)
	return this->blend = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_blend,return )

::flixel::util::loaders::CachedGraphics FlxSprite_obj::set_cachedGraphics( ::flixel::util::loaders::CachedGraphics Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_cachedGraphics",0x92ade373,"flixel.FlxSprite.set_cachedGraphics","flixel/FlxSprite.hx",1541,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1542)
	::flixel::util::loaders::CachedGraphics oldCached = this->cachedGraphics;		HX_STACK_VAR(oldCached,"oldCached");
	HX_STACK_LINE(1544)
	if (((bool((this->cachedGraphics != Value)) && bool((Value != null()))))){
		HX_STACK_LINE(1546)
		::flixel::util::loaders::CachedGraphics _g = Value;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1546)
		int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1546)
		_g->set_useCount((_g1 + (int)1));
		HX_STACK_LINE(1546)
		_g1;
	}
	HX_STACK_LINE(1549)
	if (((bool((oldCached != null())) && bool((oldCached != Value))))){
		HX_STACK_LINE(1551)
		::flixel::util::loaders::CachedGraphics _g = oldCached;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1551)
		int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1551)
		_g->set_useCount((_g1 - (int)1));
		HX_STACK_LINE(1551)
		_g1;
	}
	HX_STACK_LINE(1554)
	return this->cachedGraphics = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_cachedGraphics,return )

bool FlxSprite_obj::set_flipX( bool Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_flipX",0xf4d45525,"flixel.FlxSprite.set_flipX","flixel/FlxSprite.hx",1558,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1560)
	if ((Value)){
		HX_STACK_LINE(1560)
		this->_facingHorizontalMult = (int)-1;
	}
	else{
		HX_STACK_LINE(1560)
		this->_facingHorizontalMult = (int)1;
	}
	HX_STACK_LINE(1562)
	if (((this->flipX != Value))){
		HX_STACK_LINE(1564)
		this->dirty = true;
	}
	HX_STACK_LINE(1566)
	return this->flipX = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_flipX,return )

bool FlxSprite_obj::set_flipY( bool Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_flipY",0xf4d45526,"flixel.FlxSprite.set_flipY","flixel/FlxSprite.hx",1570,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1572)
	if ((Value)){
		HX_STACK_LINE(1572)
		this->_facingVerticalMult = (int)-1;
	}
	else{
		HX_STACK_LINE(1572)
		this->_facingVerticalMult = (int)1;
	}
	HX_STACK_LINE(1574)
	if (((this->flipY != Value))){
		HX_STACK_LINE(1576)
		this->dirty = true;
	}
	HX_STACK_LINE(1578)
	return this->flipY = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_flipY,return )


FlxSprite_obj::FlxSprite_obj()
{
}

void FlxSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSprite);
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_MEMBER_NAME(framePixels,"framePixels");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(isColored,"isColored");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(frameWidth,"frameWidth");
	HX_MARK_MEMBER_NAME(frameHeight,"frameHeight");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(region,"region");
	HX_MARK_MEMBER_NAME(framesData,"framesData");
	HX_MARK_MEMBER_NAME(cachedGraphics,"cachedGraphics");
	HX_MARK_MEMBER_NAME(bakedRotationAngle,"bakedRotationAngle");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(facing,"facing");
	HX_MARK_MEMBER_NAME(flipX,"flipX");
	HX_MARK_MEMBER_NAME(flipY,"flipY");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(colorTransform,"colorTransform");
	HX_MARK_MEMBER_NAME(useColorTransform,"useColorTransform");
	HX_MARK_MEMBER_NAME(_red,"_red");
	HX_MARK_MEMBER_NAME(_green,"_green");
	HX_MARK_MEMBER_NAME(_blue,"_blue");
	HX_MARK_MEMBER_NAME(_facingHorizontalMult,"_facingHorizontalMult");
	HX_MARK_MEMBER_NAME(_facingVerticalMult,"_facingVerticalMult");
	HX_MARK_MEMBER_NAME(_blendInt,"_blendInt");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_MARK_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_halfWidth,"_halfWidth");
	HX_MARK_MEMBER_NAME(_halfHeight,"_halfHeight");
	HX_MARK_MEMBER_NAME(_sinAngle,"_sinAngle");
	HX_MARK_MEMBER_NAME(_cosAngle,"_cosAngle");
	HX_MARK_MEMBER_NAME(_angleChanged,"_angleChanged");
	HX_MARK_MEMBER_NAME(_facingFlip,"_facingFlip");
	::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animation,"animation");
	HX_VISIT_MEMBER_NAME(framePixels,"framePixels");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(isColored,"isColored");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(frameWidth,"frameWidth");
	HX_VISIT_MEMBER_NAME(frameHeight,"frameHeight");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(region,"region");
	HX_VISIT_MEMBER_NAME(framesData,"framesData");
	HX_VISIT_MEMBER_NAME(cachedGraphics,"cachedGraphics");
	HX_VISIT_MEMBER_NAME(bakedRotationAngle,"bakedRotationAngle");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(facing,"facing");
	HX_VISIT_MEMBER_NAME(flipX,"flipX");
	HX_VISIT_MEMBER_NAME(flipY,"flipY");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(colorTransform,"colorTransform");
	HX_VISIT_MEMBER_NAME(useColorTransform,"useColorTransform");
	HX_VISIT_MEMBER_NAME(_red,"_red");
	HX_VISIT_MEMBER_NAME(_green,"_green");
	HX_VISIT_MEMBER_NAME(_blue,"_blue");
	HX_VISIT_MEMBER_NAME(_facingHorizontalMult,"_facingHorizontalMult");
	HX_VISIT_MEMBER_NAME(_facingVerticalMult,"_facingVerticalMult");
	HX_VISIT_MEMBER_NAME(_blendInt,"_blendInt");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_VISIT_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_halfWidth,"_halfWidth");
	HX_VISIT_MEMBER_NAME(_halfHeight,"_halfHeight");
	HX_VISIT_MEMBER_NAME(_sinAngle,"_sinAngle");
	HX_VISIT_MEMBER_NAME(_cosAngle,"_cosAngle");
	HX_VISIT_MEMBER_NAME(_angleChanged,"_angleChanged");
	HX_VISIT_MEMBER_NAME(_facingFlip,"_facingFlip");
	::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_red") ) { return _red; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"flipX") ) { return flipX; }
		if (HX_FIELD_EQ(inName,"flipY") ) { return flipY; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"_blue") ) { return _blue; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { return get_pixels(); }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		if (HX_FIELD_EQ(inName,"region") ) { return region; }
		if (HX_FIELD_EQ(inName,"facing") ) { return facing; }
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"_green") ) { return _green; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"initVars") ) { return initVars_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { return animation; }
		if (HX_FIELD_EQ(inName,"isColored") ) { return isColored; }
		if (HX_FIELD_EQ(inName,"_blendInt") ) { return _blendInt; }
		if (HX_FIELD_EQ(inName,"_sinAngle") ) { return _sinAngle; }
		if (HX_FIELD_EQ(inName,"_cosAngle") ) { return _cosAngle; }
		if (HX_FIELD_EQ(inName,"resetSize") ) { return resetSize_dyn(); }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return drawFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frame") ) { return set_frame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return set_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipX") ) { return set_flipX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipY") ) { return set_flipY_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { return frameWidth; }
		if (HX_FIELD_EQ(inName,"framesData") ) { return framesData; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"_halfWidth") ) { return _halfWidth; }
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return isOnScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pixels") ) { return get_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return set_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"set_facing") ) { return set_facing_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framePixels") ) { return framePixels; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { return frameHeight; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { return _flashRect2; }
		if (HX_FIELD_EQ(inName,"_halfHeight") ) { return _halfHeight; }
		if (HX_FIELD_EQ(inName,"_facingFlip") ) { return _facingFlip; }
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return loadGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"makeGraphic") ) { return makeGraphic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"updateHitbox") ) { return updateHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return resetHelpers_dyn(); }
		if (HX_FIELD_EQ(inName,"centerOrigin") ) { return centerOrigin_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceColor") ) { return replaceColor_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_angleChanged") ) { return _angleChanged; }
		if (HX_FIELD_EQ(inName,"centerOffsets") ) { return centerOffsets_dyn(); }
		if (HX_FIELD_EQ(inName,"setFacingFlip") ) { return setFacingFlip_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cachedGraphics") ) { return cachedGraphics; }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform; }
		if (HX_FIELD_EQ(inName,"resetFrameSize") ) { return resetFrameSize_dyn(); }
		if (HX_FIELD_EQ(inName,"setGraphicSize") ) { return setGraphicSize_dyn(); }
		if (HX_FIELD_EQ(inName,"isSimpleRender") ) { return isSimpleRender_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { return _flashPointZero; }
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useColorTransform") ) { return useColorTransform; }
		if (HX_FIELD_EQ(inName,"setColorTransform") ) { return setColorTransform_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bakedRotationAngle") ) { return bakedRotationAngle; }
		if (HX_FIELD_EQ(inName,"loadRotatedGraphic") ) { return loadRotatedGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"resetSizeFromFrame") ) { return resetSizeFromFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"pixelsOverlapPoint") ) { return pixelsOverlapPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getGraphicMidpoint") ) { return getGraphicMidpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cachedGraphics") ) { return set_cachedGraphics_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_facingVerticalMult") ) { return _facingVerticalMult; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_facingHorizontalMult") ) { return _facingHorizontalMult; }
		if (HX_FIELD_EQ(inName,"loadGraphicFromSprite") ) { return loadGraphicFromSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"getFlxFrameBitmapData") ) { return getFlxFrameBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"resetFrameBitmapDatas") ) { return resetFrameBitmapDatas_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"loadGraphicFromTexture") ) { return loadGraphicFromTexture_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"loadRotatedGraphicFromTexture") ) { return loadRotatedGraphicFromTexture_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_red") ) { _red=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp) return set_frame(inValue);frame=inValue.Cast< ::flixel::system::layer::frames::FlxFrame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipX") ) { if (inCallProp) return set_flipX(inValue);flipX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipY") ) { if (inCallProp) return set_flipY(inValue);flipY=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { if (inCallProp) return set_blend(inValue);blend=inValue.Cast< ::flash::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp) return set_color(inValue);color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blue") ) { _blue=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { return set_pixels(inValue); }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"region") ) { region=inValue.Cast< ::flixel::system::layer::Region >(); return inValue; }
		if (HX_FIELD_EQ(inName,"facing") ) { if (inCallProp) return set_facing(inValue);facing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_green") ) { _green=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast< ::flixel::animation::FlxAnimationController >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isColored") ) { isColored=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blendInt") ) { _blendInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sinAngle") ) { _sinAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cosAngle") ) { _cosAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { frameWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framesData") ) { framesData=inValue.Cast< ::flixel::system::layer::frames::FlxSpriteFrames >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfWidth") ) { _halfWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framePixels") ) { framePixels=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { frameHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { _flashRect2=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfHeight") ) { _halfHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_facingFlip") ) { _facingFlip=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { antialiasing=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_angleChanged") ) { _angleChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cachedGraphics") ) { if (inCallProp) return set_cachedGraphics(inValue);cachedGraphics=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { colorTransform=inValue.Cast< ::flash::geom::ColorTransform >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { _flashPointZero=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useColorTransform") ) { useColorTransform=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bakedRotationAngle") ) { bakedRotationAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_facingVerticalMult") ) { _facingVerticalMult=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_facingHorizontalMult") ) { _facingHorizontalMult=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("animation"));
	outFields->push(HX_CSTRING("framePixels"));
	outFields->push(HX_CSTRING("antialiasing"));
	outFields->push(HX_CSTRING("dirty"));
	outFields->push(HX_CSTRING("isColored"));
	outFields->push(HX_CSTRING("pixels"));
	outFields->push(HX_CSTRING("frame"));
	outFields->push(HX_CSTRING("frameWidth"));
	outFields->push(HX_CSTRING("frameHeight"));
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("region"));
	outFields->push(HX_CSTRING("framesData"));
	outFields->push(HX_CSTRING("cachedGraphics"));
	outFields->push(HX_CSTRING("bakedRotationAngle"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("facing"));
	outFields->push(HX_CSTRING("flipX"));
	outFields->push(HX_CSTRING("flipY"));
	outFields->push(HX_CSTRING("origin"));
	outFields->push(HX_CSTRING("offset"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("blend"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("colorTransform"));
	outFields->push(HX_CSTRING("useColorTransform"));
	outFields->push(HX_CSTRING("_red"));
	outFields->push(HX_CSTRING("_green"));
	outFields->push(HX_CSTRING("_blue"));
	outFields->push(HX_CSTRING("_facingHorizontalMult"));
	outFields->push(HX_CSTRING("_facingVerticalMult"));
	outFields->push(HX_CSTRING("_blendInt"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("_flashRect2"));
	outFields->push(HX_CSTRING("_flashPointZero"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("_halfWidth"));
	outFields->push(HX_CSTRING("_halfHeight"));
	outFields->push(HX_CSTRING("_sinAngle"));
	outFields->push(HX_CSTRING("_cosAngle"));
	outFields->push(HX_CSTRING("_angleChanged"));
	outFields->push(HX_CSTRING("_facingFlip"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::animation::FlxAnimationController*/ ,(int)offsetof(FlxSprite_obj,animation),HX_CSTRING("animation")},
	{hx::fsObject /*::flash::display::BitmapData*/ ,(int)offsetof(FlxSprite_obj,framePixels),HX_CSTRING("framePixels")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,antialiasing),HX_CSTRING("antialiasing")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,dirty),HX_CSTRING("dirty")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,isColored),HX_CSTRING("isColored")},
	{hx::fsObject /*::flixel::system::layer::frames::FlxFrame*/ ,(int)offsetof(FlxSprite_obj,frame),HX_CSTRING("frame")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,frameWidth),HX_CSTRING("frameWidth")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,frameHeight),HX_CSTRING("frameHeight")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,frames),HX_CSTRING("frames")},
	{hx::fsObject /*::flixel::system::layer::Region*/ ,(int)offsetof(FlxSprite_obj,region),HX_CSTRING("region")},
	{hx::fsObject /*::flixel::system::layer::frames::FlxSpriteFrames*/ ,(int)offsetof(FlxSprite_obj,framesData),HX_CSTRING("framesData")},
	{hx::fsObject /*::flixel::util::loaders::CachedGraphics*/ ,(int)offsetof(FlxSprite_obj,cachedGraphics),HX_CSTRING("cachedGraphics")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,bakedRotationAngle),HX_CSTRING("bakedRotationAngle")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,alpha),HX_CSTRING("alpha")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,facing),HX_CSTRING("facing")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,flipX),HX_CSTRING("flipX")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,flipY),HX_CSTRING("flipY")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxSprite_obj,origin),HX_CSTRING("origin")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxSprite_obj,offset),HX_CSTRING("offset")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxSprite_obj,scale),HX_CSTRING("scale")},
	{hx::fsObject /*::flash::display::BlendMode*/ ,(int)offsetof(FlxSprite_obj,blend),HX_CSTRING("blend")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,color),HX_CSTRING("color")},
	{hx::fsObject /*::flash::geom::ColorTransform*/ ,(int)offsetof(FlxSprite_obj,colorTransform),HX_CSTRING("colorTransform")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,useColorTransform),HX_CSTRING("useColorTransform")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,_red),HX_CSTRING("_red")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,_green),HX_CSTRING("_green")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,_blue),HX_CSTRING("_blue")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,_facingHorizontalMult),HX_CSTRING("_facingHorizontalMult")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,_facingVerticalMult),HX_CSTRING("_facingVerticalMult")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,_blendInt),HX_CSTRING("_blendInt")},
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(FlxSprite_obj,_flashPoint),HX_CSTRING("_flashPoint")},
	{hx::fsObject /*::flash::geom::Rectangle*/ ,(int)offsetof(FlxSprite_obj,_flashRect),HX_CSTRING("_flashRect")},
	{hx::fsObject /*::flash::geom::Rectangle*/ ,(int)offsetof(FlxSprite_obj,_flashRect2),HX_CSTRING("_flashRect2")},
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(FlxSprite_obj,_flashPointZero),HX_CSTRING("_flashPointZero")},
	{hx::fsObject /*::flash::geom::Matrix*/ ,(int)offsetof(FlxSprite_obj,_matrix),HX_CSTRING("_matrix")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,_halfWidth),HX_CSTRING("_halfWidth")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,_halfHeight),HX_CSTRING("_halfHeight")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,_sinAngle),HX_CSTRING("_sinAngle")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,_cosAngle),HX_CSTRING("_cosAngle")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,_angleChanged),HX_CSTRING("_angleChanged")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(FlxSprite_obj,_facingFlip),HX_CSTRING("_facingFlip")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("animation"),
	HX_CSTRING("framePixels"),
	HX_CSTRING("antialiasing"),
	HX_CSTRING("dirty"),
	HX_CSTRING("isColored"),
	HX_CSTRING("frame"),
	HX_CSTRING("frameWidth"),
	HX_CSTRING("frameHeight"),
	HX_CSTRING("frames"),
	HX_CSTRING("region"),
	HX_CSTRING("framesData"),
	HX_CSTRING("cachedGraphics"),
	HX_CSTRING("bakedRotationAngle"),
	HX_CSTRING("alpha"),
	HX_CSTRING("facing"),
	HX_CSTRING("flipX"),
	HX_CSTRING("flipY"),
	HX_CSTRING("origin"),
	HX_CSTRING("offset"),
	HX_CSTRING("scale"),
	HX_CSTRING("blend"),
	HX_CSTRING("color"),
	HX_CSTRING("colorTransform"),
	HX_CSTRING("useColorTransform"),
	HX_CSTRING("_red"),
	HX_CSTRING("_green"),
	HX_CSTRING("_blue"),
	HX_CSTRING("_facingHorizontalMult"),
	HX_CSTRING("_facingVerticalMult"),
	HX_CSTRING("_blendInt"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("_flashRect2"),
	HX_CSTRING("_flashPointZero"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("_halfWidth"),
	HX_CSTRING("_halfHeight"),
	HX_CSTRING("_sinAngle"),
	HX_CSTRING("_cosAngle"),
	HX_CSTRING("_angleChanged"),
	HX_CSTRING("_facingFlip"),
	HX_CSTRING("initVars"),
	HX_CSTRING("destroy"),
	HX_CSTRING("clone"),
	HX_CSTRING("loadGraphicFromSprite"),
	HX_CSTRING("loadGraphic"),
	HX_CSTRING("loadRotatedGraphic"),
	HX_CSTRING("loadGraphicFromTexture"),
	HX_CSTRING("loadRotatedGraphicFromTexture"),
	HX_CSTRING("makeGraphic"),
	HX_CSTRING("resetSize"),
	HX_CSTRING("resetFrameSize"),
	HX_CSTRING("resetSizeFromFrame"),
	HX_CSTRING("setGraphicSize"),
	HX_CSTRING("updateHitbox"),
	HX_CSTRING("resetHelpers"),
	HX_CSTRING("update"),
	HX_CSTRING("draw"),
	HX_CSTRING("stamp"),
	HX_CSTRING("drawFrame"),
	HX_CSTRING("centerOffsets"),
	HX_CSTRING("centerOrigin"),
	HX_CSTRING("replaceColor"),
	HX_CSTRING("setColorTransform"),
	HX_CSTRING("updateColorTransform"),
	HX_CSTRING("pixelsOverlapPoint"),
	HX_CSTRING("calcFrame"),
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("getFlxFrameBitmapData"),
	HX_CSTRING("getGraphicMidpoint"),
	HX_CSTRING("resetFrameBitmapDatas"),
	HX_CSTRING("isOnScreen"),
	HX_CSTRING("isSimpleRender"),
	HX_CSTRING("setFacingFlip"),
	HX_CSTRING("get_pixels"),
	HX_CSTRING("set_pixels"),
	HX_CSTRING("set_frame"),
	HX_CSTRING("set_facing"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("set_color"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("set_blend"),
	HX_CSTRING("set_cachedGraphics"),
	HX_CSTRING("set_flipX"),
	HX_CSTRING("set_flipY"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSprite_obj::__mClass,"__mClass");
};

#endif

Class FlxSprite_obj::__mClass;

void FlxSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxSprite"), hx::TCanCast< FlxSprite_obj> ,sStaticFields,sMemberFields,
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

void FlxSprite_obj::__boot()
{
}

} // end namespace flixel
