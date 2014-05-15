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
HX_STACK_FRAME("flixel.FlxSprite","new",0x4dfa64d7,"flixel.FlxSprite.new","flixel/FlxSprite.hx",34,0x0384bffa)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(182)
	this->_facingFlip = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(178)
	this->_angleChanged = false;
	HX_STACK_LINE(177)
	this->_cosAngle = (int)1;
	HX_STACK_LINE(176)
	this->_sinAngle = (int)0;
	HX_STACK_LINE(147)
	this->_blendInt = (int)0;
	HX_STACK_LINE(146)
	this->_facingVerticalMult = (int)1;
	HX_STACK_LINE(145)
	this->_facingHorizontalMult = (int)1;
	HX_STACK_LINE(144)
	this->_blue = 1.0;
	HX_STACK_LINE(143)
	this->_green = 1.0;
	HX_STACK_LINE(142)
	this->_red = 1.0;
	HX_STACK_LINE(139)
	this->useColorTransform = false;
	HX_STACK_LINE(132)
	this->color = (int)16777215;
	HX_STACK_LINE(106)
	this->flipY = false;
	HX_STACK_LINE(102)
	this->flipX = false;
	HX_STACK_LINE(98)
	this->facing = (int)16;
	HX_STACK_LINE(93)
	this->alpha = 1.0;
	HX_STACK_LINE(89)
	this->bakedRotationAngle = (int)0;
	HX_STACK_LINE(78)
	this->frames = (int)0;
	HX_STACK_LINE(74)
	this->frameHeight = (int)0;
	HX_STACK_LINE(70)
	this->frameWidth = (int)0;
	HX_STACK_LINE(55)
	this->isColored = false;
	HX_STACK_LINE(52)
	this->dirty = true;
	HX_STACK_LINE(47)
	this->antialiasing = false;
	HX_STACK_LINE(194)
	super::__construct(X,Y,null(),null());
	HX_STACK_LINE(196)
	if (((SimpleGraphic != null()))){
		HX_STACK_LINE(198)
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
		HX_STACK_FRAME("flixel.FlxSprite","initVars",0x31793705,"flixel.FlxSprite.initVars","flixel/FlxSprite.hx",203,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(204)
		this->super::initVars();
		HX_STACK_LINE(206)
		::flixel::animation::FlxAnimationController _g = ::flixel::animation::FlxAnimationController_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(206)
		this->animation = _g;
		HX_STACK_LINE(208)
		::flash::geom::Point _g1 = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(208)
		this->_flashPoint = _g1;
		HX_STACK_LINE(209)
		::flash::geom::Rectangle _g2 = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(209)
		this->_flashRect = _g2;
		HX_STACK_LINE(210)
		::flash::geom::Rectangle _g3 = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(210)
		this->_flashRect2 = _g3;
		HX_STACK_LINE(211)
		::flash::geom::Point _g4 = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(211)
		this->_flashPointZero = _g4;
		HX_STACK_LINE(212)
		::flixel::util::FlxPoint _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(212)
		{
			HX_STACK_LINE(212)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(212)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(212)
			::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(212)
			point->_inPool = false;
			HX_STACK_LINE(212)
			_g5 = point;
		}
		HX_STACK_LINE(212)
		this->offset = _g5;
		HX_STACK_LINE(213)
		::flixel::util::FlxPoint _g6;		HX_STACK_VAR(_g6,"_g6");
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
			_g6 = point;
		}
		HX_STACK_LINE(213)
		this->origin = _g6;
		HX_STACK_LINE(214)
		::flixel::util::FlxPoint _g7;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set((int)1,(int)1);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(214)
			point->_inPool = false;
			HX_STACK_LINE(214)
			_g7 = point;
		}
		HX_STACK_LINE(214)
		this->scale = _g7;
		HX_STACK_LINE(215)
		::flash::geom::Matrix _g8 = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(215)
		this->_matrix = _g8;
	}
return null();
}


Void FlxSprite_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","destroy",0x0fb5c8f1,"flixel.FlxSprite.destroy","flixel/FlxSprite.hx",223,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(224)
		this->super::destroy();
		HX_STACK_LINE(226)
		::flixel::animation::FlxAnimationController _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->animation);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(226)
		this->animation = _g;
		HX_STACK_LINE(228)
		::flixel::util::FlxPoint _g1 = ::flixel::util::FlxDestroyUtil_obj::put(this->offset);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(228)
		this->offset = _g1;
		HX_STACK_LINE(229)
		::flixel::util::FlxPoint _g2 = ::flixel::util::FlxDestroyUtil_obj::put(this->origin);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(229)
		this->origin = _g2;
		HX_STACK_LINE(230)
		::flixel::util::FlxPoint _g3 = ::flixel::util::FlxDestroyUtil_obj::put(this->scale);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(230)
		this->scale = _g3;
		HX_STACK_LINE(232)
		::flash::display::BitmapData _g4 = ::flixel::util::FlxDestroyUtil_obj::dispose(this->framePixels);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(232)
		this->framePixels = _g4;
		HX_STACK_LINE(234)
		this->_flashPoint = null();
		HX_STACK_LINE(235)
		this->_flashRect = null();
		HX_STACK_LINE(236)
		this->_flashRect2 = null();
		HX_STACK_LINE(237)
		this->_flashPointZero = null();
		HX_STACK_LINE(238)
		this->_matrix = null();
		HX_STACK_LINE(239)
		this->colorTransform = null();
		HX_STACK_LINE(240)
		this->set_blend(null());
		HX_STACK_LINE(241)
		this->set_frame(null());
		HX_STACK_LINE(243)
		this->framesData = null();
		HX_STACK_LINE(244)
		this->set_cachedGraphics(null());
		HX_STACK_LINE(245)
		this->region = null();
	}
return null();
}


::flixel::FlxSprite FlxSprite_obj::clone( ::flixel::FlxSprite NewSprite){
	HX_STACK_FRAME("flixel.FlxSprite","clone",0x3c30f394,"flixel.FlxSprite.clone","flixel/FlxSprite.hx",249,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewSprite,"NewSprite")
	HX_STACK_LINE(250)
	if (((NewSprite == null()))){
		HX_STACK_LINE(252)
		::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(252)
		NewSprite = _g;
	}
	HX_STACK_LINE(255)
	return NewSprite->loadGraphicFromSprite(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,clone,return )

::flixel::FlxSprite FlxSprite_obj::loadGraphicFromSprite( ::flixel::FlxSprite Sprite){
	HX_STACK_FRAME("flixel.FlxSprite","loadGraphicFromSprite",0xd0637b08,"flixel.FlxSprite.loadGraphicFromSprite","flixel/FlxSprite.hx",266,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_LINE(267)
	if ((!(this->exists))){
		HX_STACK_LINE(269)
		::Class _g = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(269)
		::String _g1 = ::Type_obj::getClassName(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(269)
		::String _g2 = (HX_CSTRING("Warning, trying to clone ") + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(269)
		Dynamic Data = (_g2 + HX_CSTRING(" object that doesn't exist."));		HX_STACK_VAR(Data,"Data");
		HX_STACK_LINE(269)
		Dynamic();
	}
	HX_STACK_LINE(272)
	::flixel::system::layer::Region _g3 = Sprite->region->clone();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(272)
	this->region = _g3;
	HX_STACK_LINE(273)
	this->bakedRotationAngle = Sprite->bakedRotationAngle;
	HX_STACK_LINE(274)
	this->set_cachedGraphics(Sprite->cachedGraphics);
	HX_STACK_LINE(276)
	int _g4 = this->frameWidth = Sprite->frameWidth;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(276)
	this->set_width(_g4);
	HX_STACK_LINE(277)
	int _g5 = this->frameHeight = Sprite->frameHeight;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(277)
	this->set_height(_g5);
	HX_STACK_LINE(278)
	if (((this->bakedRotationAngle > (int)0))){
		HX_STACK_LINE(280)
		Float _g6 = Sprite->get_width();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(280)
		this->set_width(_g6);
		HX_STACK_LINE(281)
		Float _g7 = Sprite->get_height();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(281)
		this->set_height(_g7);
		HX_STACK_LINE(282)
		this->centerOffsets(null());
	}
	HX_STACK_LINE(285)
	this->updateFrameData();
	HX_STACK_LINE(286)
	this->resetHelpers();
	HX_STACK_LINE(287)
	this->antialiasing = Sprite->antialiasing;
	HX_STACK_LINE(288)
	this->animation->copyFrom(Sprite->animation);
	HX_STACK_LINE(289)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,loadGraphicFromSprite,return )

::flixel::FlxSprite FlxSprite_obj::loadGraphic( Dynamic Graphic,hx::Null< bool >  __o_Animated,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< bool >  __o_Unique,::String Key){
bool Animated = __o_Animated.Default(false);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","loadGraphic",0x47377c99,"flixel.FlxSprite.loadGraphic","flixel/FlxSprite.hx",304,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Animated,"Animated")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(305)
		this->bakedRotationAngle = (int)0;
		HX_STACK_LINE(306)
		::flixel::util::loaders::CachedGraphics _g = ::flixel::FlxG_obj::bitmap->addWithSpaces(Graphic,(int)0,(int)0,(int)1,(int)1,Unique,Key);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(306)
		this->set_cachedGraphics(_g);
		HX_STACK_LINE(308)
		if (((Width == (int)0))){
			HX_STACK_LINE(310)
			int _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(310)
			if (((Animated == true))){
				HX_STACK_LINE(310)
				_g1 = this->cachedGraphics->bitmap->get_height();
			}
			else{
				HX_STACK_LINE(310)
				_g1 = this->cachedGraphics->bitmap->get_width();
			}
			HX_STACK_LINE(310)
			Width = _g1;
			HX_STACK_LINE(311)
			int _g2 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(311)
			int _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(311)
			if (((Width > _g2))){
				HX_STACK_LINE(311)
				_g3 = this->cachedGraphics->bitmap->get_width();
			}
			else{
				HX_STACK_LINE(311)
				_g3 = Width;
			}
			HX_STACK_LINE(311)
			Width = _g3;
		}
		HX_STACK_LINE(314)
		if (((Height == (int)0))){
			HX_STACK_LINE(316)
			int _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(316)
			if (((Animated == true))){
				HX_STACK_LINE(316)
				_g4 = Width;
			}
			else{
				HX_STACK_LINE(316)
				_g4 = this->cachedGraphics->bitmap->get_height();
			}
			HX_STACK_LINE(316)
			Height = _g4;
			HX_STACK_LINE(317)
			int _g5 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(317)
			int _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(317)
			if (((Height > _g5))){
				HX_STACK_LINE(317)
				_g6 = this->cachedGraphics->bitmap->get_height();
			}
			else{
				HX_STACK_LINE(317)
				_g6 = Height;
			}
			HX_STACK_LINE(317)
			Height = _g6;
		}
		HX_STACK_LINE(320)
		if ((!(::Std_obj::is(Graphic,hx::ClassOf< ::flixel::util::loaders::TextureRegion >())))){
			HX_STACK_LINE(322)
			::flixel::system::layer::Region _g7 = ::flixel::system::layer::Region_obj::__new((int)0,(int)0,Width,Height,null(),null(),null(),null());		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(322)
			this->region = _g7;
			HX_STACK_LINE(323)
			int _g8 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(323)
			this->region->width = _g8;
			HX_STACK_LINE(324)
			int _g9 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(324)
			this->region->height = _g9;
		}
		else{
			HX_STACK_LINE(328)
			::flixel::system::layer::Region _g10 = (hx::TCast< flixel::util::loaders::TextureRegion >::cast(Graphic))->region->clone();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(328)
			this->region = _g10;
			HX_STACK_LINE(330)
			if (((this->region->tileWidth > (int)0))){
				HX_STACK_LINE(331)
				Width = this->region->tileWidth;
			}
			else{
				HX_STACK_LINE(333)
				this->region->tileWidth = this->region->width;
			}
			HX_STACK_LINE(335)
			if (((this->region->tileHeight > (int)0))){
				HX_STACK_LINE(336)
				Height = this->region->tileWidth;
			}
			else{
				HX_STACK_LINE(338)
				this->region->tileHeight = this->region->height;
			}
		}
		HX_STACK_LINE(341)
		int _g11 = this->frameWidth = Width;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(341)
		this->set_width(_g11);
		HX_STACK_LINE(342)
		int _g12 = this->frameHeight = Height;		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(342)
		this->set_height(_g12);
		HX_STACK_LINE(344)
		this->animation->destroyAnimations();
		HX_STACK_LINE(346)
		this->updateFrameData();
		HX_STACK_LINE(347)
		this->resetHelpers();
		HX_STACK_LINE(349)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadGraphic,return )

::flixel::FlxSprite FlxSprite_obj::loadRotatedGraphic( Dynamic Graphic,hx::Null< int >  __o_Rotations,hx::Null< int >  __o_Frame,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer,::String Key){
int Rotations = __o_Rotations.Default(16);
int Frame = __o_Frame.Default(-1);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","loadRotatedGraphic",0xceb71e2e,"flixel.FlxSprite.loadRotatedGraphic","flixel/FlxSprite.hx",365,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Rotations,"Rotations")
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_ARG(AntiAliasing,"AntiAliasing")
	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(367)
		Float _g = ::Math_obj::sqrt(Rotations);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(367)
		int rows = ::Std_obj::_int(_g);		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(368)
		::flash::display::BitmapData brush = ::flixel::FlxG_obj::bitmap->addWithSpaces(Graphic,(int)0,(int)0,(int)1,(int)1,false,Key)->bitmap;		HX_STACK_VAR(brush,"brush");
		HX_STACK_LINE(369)
		bool isRegion = ::Std_obj::is(Graphic,hx::ClassOf< ::flixel::util::loaders::TextureRegion >());		HX_STACK_VAR(isRegion,"isRegion");
		HX_STACK_LINE(370)
		::flixel::util::loaders::TextureRegion spriteRegion;		HX_STACK_VAR(spriteRegion,"spriteRegion");
		HX_STACK_LINE(370)
		if (((isRegion == true))){
			HX_STACK_LINE(370)
			spriteRegion = Graphic;
		}
		else{
			HX_STACK_LINE(370)
			spriteRegion = null();
		}
		HX_STACK_LINE(371)
		::flixel::system::layer::Region tempRegion;		HX_STACK_VAR(tempRegion,"tempRegion");
		HX_STACK_LINE(371)
		if (((isRegion == true))){
			HX_STACK_LINE(371)
			tempRegion = spriteRegion->region;
		}
		else{
			HX_STACK_LINE(371)
			tempRegion = null();
		}
		HX_STACK_LINE(373)
		if (((bool((Frame >= (int)0)) || bool(isRegion)))){
			HX_STACK_LINE(376)
			::flash::display::BitmapData full = brush;		HX_STACK_VAR(full,"full");
			HX_STACK_LINE(378)
			if ((isRegion)){
				HX_STACK_LINE(380)
				::flash::display::BitmapData _g1 = ::flash::display::BitmapData_obj::__new(tempRegion->width,tempRegion->height,null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(380)
				brush = _g1;
				HX_STACK_LINE(381)
				this->_flashRect->x = tempRegion->startX;
				HX_STACK_LINE(382)
				this->_flashRect->y = tempRegion->startY;
				HX_STACK_LINE(383)
				this->_flashRect->width = tempRegion->width;
				HX_STACK_LINE(384)
				this->_flashRect->height = tempRegion->height;
				HX_STACK_LINE(385)
				brush->copyPixels(full,this->_flashRect,this->_flashPointZero,null(),null(),null());
			}
			else{
				HX_STACK_LINE(389)
				int _g2 = full->get_height();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(389)
				int _g3 = full->get_height();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(389)
				::flash::display::BitmapData _g4 = ::flash::display::BitmapData_obj::__new(_g2,_g3,null(),null(),null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(389)
				brush = _g4;
				HX_STACK_LINE(390)
				int _g5 = brush->get_width();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(390)
				int rx = (Frame * _g5);		HX_STACK_VAR(rx,"rx");
				HX_STACK_LINE(391)
				int ry = (int)0;		HX_STACK_VAR(ry,"ry");
				HX_STACK_LINE(392)
				int fw = full->get_width();		HX_STACK_VAR(fw,"fw");
				HX_STACK_LINE(393)
				if (((rx >= fw))){
					HX_STACK_LINE(395)
					int _g6 = ::Std_obj::_int((Float(rx) / Float(fw)));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(395)
					int _g7 = brush->get_height();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(395)
					int _g8 = (_g6 * _g7);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(395)
					ry = _g8;
					HX_STACK_LINE(396)
					hx::ModEq(rx,fw);
				}
				HX_STACK_LINE(398)
				this->_flashRect->x = rx;
				HX_STACK_LINE(399)
				this->_flashRect->y = ry;
				HX_STACK_LINE(400)
				int _g9 = brush->get_width();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(400)
				this->_flashRect->width = _g9;
				HX_STACK_LINE(401)
				int _g10 = brush->get_height();		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(401)
				this->_flashRect->height = _g10;
				HX_STACK_LINE(402)
				brush->copyPixels(full,this->_flashRect,this->_flashPointZero,null(),null(),null());
			}
		}
		HX_STACK_LINE(406)
		int max = brush->get_width();		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(407)
		int _g11 = brush->get_height();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(407)
		if (((_g11 > max))){
			HX_STACK_LINE(409)
			int _g12 = brush->get_height();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(409)
			max = _g12;
		}
		HX_STACK_LINE(412)
		if ((AutoBuffer)){
			HX_STACK_LINE(414)
			int _g13 = ::Std_obj::_int((max * 1.5));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(414)
			max = _g13;
		}
		HX_STACK_LINE(417)
		int columns = ::Math_obj::ceil((Float(Rotations) / Float(rows)));		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(418)
		this->set_width((max * columns));
		HX_STACK_LINE(419)
		this->set_height((max * rows));
		HX_STACK_LINE(420)
		::String key = HX_CSTRING("");		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(421)
		if ((::Std_obj::is(Graphic,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(423)
			key = Graphic;
		}
		else{
			HX_STACK_LINE(425)
			if ((::Std_obj::is(Graphic,hx::ClassOf< ::Class >()))){
				HX_STACK_LINE(427)
				::String _g14 = ::Type_obj::getClassName(Graphic);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(427)
				key = _g14;
			}
			else{
				HX_STACK_LINE(429)
				if (((  ((::Std_obj::is(Graphic,hx::ClassOf< ::flash::display::BitmapData >()))) ? bool((Key != null())) : bool(false) ))){
					HX_STACK_LINE(431)
					key = Key;
				}
				else{
					HX_STACK_LINE(433)
					if ((isRegion)){
						HX_STACK_LINE(435)
						key = spriteRegion->data->key;
						HX_STACK_LINE(436)
						hx::AddEq(key,(((((((((HX_CSTRING(":") + tempRegion->startX) + HX_CSTRING(":")) + tempRegion->startY) + HX_CSTRING(":")) + tempRegion->width) + HX_CSTRING(":")) + tempRegion->height) + HX_CSTRING(":")) + Rotations));
					}
					else{
						HX_STACK_LINE(440)
						return null();
					}
				}
			}
		}
		HX_STACK_LINE(443)
		if ((!(isRegion))){
			HX_STACK_LINE(445)
			Float _g15 = this->get_width();		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(445)
			::String _g16 = (((HX_CSTRING(":") + Frame) + HX_CSTRING(":")) + _g15);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(445)
			::String _g17 = (_g16 + HX_CSTRING("x"));		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(445)
			Float _g18 = this->get_height();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(445)
			::String _g19 = (_g17 + _g18);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(445)
			::String _g20 = (_g19 + HX_CSTRING(":"));		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(445)
			::String _g21 = (_g20 + Rotations);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(445)
			hx::AddEq(key,_g21);
		}
		HX_STACK_LINE(448)
		bool skipGen;		HX_STACK_VAR(skipGen,"skipGen");
		HX_STACK_LINE(448)
		{
			HX_STACK_LINE(448)
			::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(448)
			if ((_this->_cache->exists(key))){
				HX_STACK_LINE(448)
				::flixel::util::loaders::CachedGraphics _g22 = _this->_cache->get(key);		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(448)
				skipGen = (_g22 != null());
			}
			else{
				HX_STACK_LINE(448)
				skipGen = false;
			}
		}
		HX_STACK_LINE(449)
		Float _g23 = this->get_width();		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(449)
		int _g24 = ::Std_obj::_int(_g23);		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(449)
		int _g25 = (_g24 + columns);		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(449)
		int _g26 = (_g25 - (int)1);		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(449)
		Float _g27 = this->get_height();		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(449)
		int _g28 = ::Std_obj::_int(_g27);		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(449)
		int _g29 = (_g28 + rows);		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(449)
		int _g30 = (_g29 - (int)1);		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(449)
		::flixel::util::loaders::CachedGraphics _g31 = ::flixel::FlxG_obj::bitmap->create(_g26,_g30,(int)0,true,key);		HX_STACK_VAR(_g31,"_g31");
		HX_STACK_LINE(449)
		this->set_cachedGraphics(_g31);
		HX_STACK_LINE(450)
		this->bakedRotationAngle = (Float((int)360) / Float(Rotations));
		HX_STACK_LINE(453)
		if ((!(skipGen))){
			HX_STACK_LINE(455)
			int row = (int)0;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(456)
			int column;		HX_STACK_VAR(column,"column");
			HX_STACK_LINE(457)
			Float bakedAngle = (int)0;		HX_STACK_VAR(bakedAngle,"bakedAngle");
			HX_STACK_LINE(458)
			int _g32 = brush->get_width();		HX_STACK_VAR(_g32,"_g32");
			HX_STACK_LINE(458)
			Float _g33 = (_g32 * 0.5);		HX_STACK_VAR(_g33,"_g33");
			HX_STACK_LINE(458)
			int halfBrushWidth = ::Std_obj::_int(_g33);		HX_STACK_VAR(halfBrushWidth,"halfBrushWidth");
			HX_STACK_LINE(459)
			int _g34 = brush->get_height();		HX_STACK_VAR(_g34,"_g34");
			HX_STACK_LINE(459)
			Float _g35 = (_g34 * 0.5);		HX_STACK_VAR(_g35,"_g35");
			HX_STACK_LINE(459)
			int halfBrushHeight = ::Std_obj::_int(_g35);		HX_STACK_VAR(halfBrushHeight,"halfBrushHeight");
			HX_STACK_LINE(460)
			int midpointX = ::Std_obj::_int((max * 0.5));		HX_STACK_VAR(midpointX,"midpointX");
			HX_STACK_LINE(461)
			int midpointY = ::Std_obj::_int((max * 0.5));		HX_STACK_VAR(midpointY,"midpointY");
			HX_STACK_LINE(462)
			while((true)){
				HX_STACK_LINE(462)
				if ((!(((row < rows))))){
					HX_STACK_LINE(462)
					break;
				}
				HX_STACK_LINE(464)
				column = (int)0;
				HX_STACK_LINE(465)
				while((true)){
					HX_STACK_LINE(465)
					if ((!(((column < columns))))){
						HX_STACK_LINE(465)
						break;
					}
					HX_STACK_LINE(467)
					this->_matrix->identity();
					HX_STACK_LINE(468)
					this->_matrix->translate(-(halfBrushWidth),-(halfBrushHeight));
					HX_STACK_LINE(469)
					this->_matrix->rotate((bakedAngle * ((Float(::Math_obj::PI) / Float((int)180)))));
					HX_STACK_LINE(470)
					this->_matrix->translate((((max * column) + midpointX) + column),(midpointY + row));
					HX_STACK_LINE(471)
					hx::AddEq(bakedAngle,this->bakedRotationAngle);
					HX_STACK_LINE(472)
					this->cachedGraphics->bitmap->draw(brush,this->_matrix,null(),null(),null(),AntiAliasing);
					HX_STACK_LINE(473)
					(column)++;
				}
				HX_STACK_LINE(475)
				hx::AddEq(midpointY,max);
				HX_STACK_LINE(476)
				(row)++;
			}
		}
		HX_STACK_LINE(479)
		int _g36 = this->frameHeight = max;		HX_STACK_VAR(_g36,"_g36");
		HX_STACK_LINE(479)
		this->frameWidth = _g36;
		HX_STACK_LINE(480)
		Float _g37 = this->set_height(max);		HX_STACK_VAR(_g37,"_g37");
		HX_STACK_LINE(480)
		this->set_width(_g37);
		HX_STACK_LINE(482)
		::flixel::system::layer::Region _g38 = ::flixel::system::layer::Region_obj::__new((int)0,(int)0,max,max,(int)1,(int)1,null(),null());		HX_STACK_VAR(_g38,"_g38");
		HX_STACK_LINE(482)
		this->region = _g38;
		HX_STACK_LINE(483)
		int _g39 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g39,"_g39");
		HX_STACK_LINE(483)
		this->region->width = _g39;
		HX_STACK_LINE(484)
		int _g40 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g40,"_g40");
		HX_STACK_LINE(484)
		this->region->height = _g40;
		HX_STACK_LINE(487)
		this->antialiasing = AntiAliasing;
		HX_STACK_LINE(490)
		this->updateFrameData();
		HX_STACK_LINE(491)
		this->resetHelpers();
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
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadRotatedGraphic,return )

::flixel::FlxSprite FlxSprite_obj::loadGraphicFromTexture( Dynamic Data,hx::Null< bool >  __o_Unique,::String FrameName){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","loadGraphicFromTexture",0xc5fe4c78,"flixel.FlxSprite.loadGraphicFromTexture","flixel/FlxSprite.hx",513,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(FrameName,"FrameName")
{
		HX_STACK_LINE(514)
		this->bakedRotationAngle = (int)0;
		HX_STACK_LINE(516)
		if ((::Std_obj::is(Data,hx::ClassOf< ::flixel::util::loaders::CachedGraphics >()))){
			HX_STACK_LINE(518)
			this->set_cachedGraphics(Data);
			HX_STACK_LINE(519)
			if (((this->cachedGraphics->data == null()))){
				HX_STACK_LINE(521)
				return null();
			}
		}
		else{
			HX_STACK_LINE(524)
			if ((::Std_obj::is(Data,hx::ClassOf< ::flixel::util::loaders::TexturePackerData >()))){
				HX_STACK_LINE(526)
				::flixel::util::loaders::CachedGraphics _g = ::flixel::FlxG_obj::bitmap->addWithSpaces(Data->__Field(HX_CSTRING("assetName"),true),(int)0,(int)0,(int)1,(int)1,Unique,null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(526)
				this->set_cachedGraphics(_g);
				HX_STACK_LINE(527)
				this->cachedGraphics->data = Data;
			}
			else{
				HX_STACK_LINE(531)
				return null();
			}
		}
		HX_STACK_LINE(534)
		::flixel::system::layer::Region _g1 = ::flixel::system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(534)
		this->region = _g1;
		HX_STACK_LINE(535)
		int _g2 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(535)
		this->region->width = _g2;
		HX_STACK_LINE(536)
		int _g3 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(536)
		this->region->height = _g3;
		HX_STACK_LINE(538)
		this->animation->destroyAnimations();
		HX_STACK_LINE(539)
		this->updateFrameData();
		HX_STACK_LINE(540)
		this->resetHelpers();
		HX_STACK_LINE(542)
		if (((FrameName != null()))){
			HX_STACK_LINE(544)
			this->animation->set_frameName(FrameName);
		}
		HX_STACK_LINE(547)
		{
			HX_STACK_LINE(547)
			this->set_width(this->frameWidth);
			HX_STACK_LINE(547)
			this->set_height(this->frameHeight);
		}
		HX_STACK_LINE(548)
		this->origin->set((this->frameWidth * 0.5),(this->frameHeight * 0.5));
		HX_STACK_LINE(549)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,loadGraphicFromTexture,return )

::flixel::FlxSprite FlxSprite_obj::loadRotatedGraphicFromTexture( Dynamic Data,::String Image,hx::Null< int >  __o_Rotations,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer){
int Rotations = __o_Rotations.Default(16);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","loadRotatedGraphicFromTexture",0xa93b1903,"flixel.FlxSprite.loadRotatedGraphicFromTexture","flixel/FlxSprite.hx",564,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_ARG(Image,"Image")
	HX_STACK_ARG(Rotations,"Rotations")
	HX_STACK_ARG(AntiAliasing,"AntiAliasing")
	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
{
		HX_STACK_LINE(565)
		::flixel::FlxSprite temp = this->loadGraphicFromTexture(Data,null(),null());		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(567)
		if (((temp == null()))){
			HX_STACK_LINE(569)
			return null();
		}
		HX_STACK_LINE(572)
		this->animation->set_frameName(Image);
		HX_STACK_LINE(575)
		this->antialiasing = AntiAliasing;
		HX_STACK_LINE(581)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxSprite_obj,loadRotatedGraphicFromTexture,return )

::flixel::FlxSprite FlxSprite_obj::makeGraphic( int Width,int Height,hx::Null< int >  __o_Color,hx::Null< bool >  __o_Unique,::String Key){
int Color = __o_Color.Default(-1);
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","makeGraphic",0xbaa3e5d1,"flixel.FlxSprite.makeGraphic","flixel/FlxSprite.hx",594,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(595)
		this->bakedRotationAngle = (int)0;
		HX_STACK_LINE(596)
		::flixel::util::loaders::CachedGraphics _g = ::flixel::FlxG_obj::bitmap->create(Width,Height,Color,Unique,Key);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(596)
		this->set_cachedGraphics(_g);
		HX_STACK_LINE(597)
		::flixel::system::layer::Region _g1 = ::flixel::system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(597)
		this->region = _g1;
		HX_STACK_LINE(598)
		this->region->width = Width;
		HX_STACK_LINE(599)
		this->region->height = Height;
		HX_STACK_LINE(600)
		int _g2 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(600)
		int _g3 = this->frameWidth = _g2;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(600)
		int _g4 = this->region->tileWidth = _g3;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(600)
		this->set_width(_g4);
		HX_STACK_LINE(601)
		int _g5 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(601)
		int _g6 = this->frameHeight = _g5;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(601)
		int _g7 = this->region->tileHeight = _g6;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(601)
		this->set_height(_g7);
		HX_STACK_LINE(602)
		this->animation->destroyAnimations();
		HX_STACK_LINE(603)
		this->updateFrameData();
		HX_STACK_LINE(604)
		this->resetHelpers();
		HX_STACK_LINE(605)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxSprite_obj,makeGraphic,return )

Void FlxSprite_obj::resetSize( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetSize",0x5d8771e7,"flixel.FlxSprite.resetSize","flixel/FlxSprite.hx",612,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(613)
		this->_flashRect->x = (int)0;
		HX_STACK_LINE(614)
		this->_flashRect->y = (int)0;
		HX_STACK_LINE(615)
		this->_flashRect->width = this->frameWidth;
		HX_STACK_LINE(616)
		this->_flashRect->height = this->frameHeight;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSize,(void))

Void FlxSprite_obj::resetFrameSize( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetFrameSize",0xb7baa4a8,"flixel.FlxSprite.resetFrameSize","flixel/FlxSprite.hx",623,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(624)
		int _g = ::Std_obj::_int(this->frame->sourceSize->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(624)
		this->frameWidth = _g;
		HX_STACK_LINE(625)
		int _g1 = ::Std_obj::_int(this->frame->sourceSize->y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(625)
		this->frameHeight = _g1;
		HX_STACK_LINE(626)
		{
			HX_STACK_LINE(626)
			this->_flashRect->x = (int)0;
			HX_STACK_LINE(626)
			this->_flashRect->y = (int)0;
			HX_STACK_LINE(626)
			this->_flashRect->width = this->frameWidth;
			HX_STACK_LINE(626)
			this->_flashRect->height = this->frameHeight;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrameSize,(void))

Void FlxSprite_obj::resetSizeFromFrame( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetSizeFromFrame",0xf893db7c,"flixel.FlxSprite.resetSizeFromFrame","flixel/FlxSprite.hx",633,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(634)
		this->set_width(this->frameWidth);
		HX_STACK_LINE(635)
		this->set_height(this->frameHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSizeFromFrame,(void))

Void FlxSprite_obj::setGraphicSize( hx::Null< int >  __o_Width,hx::Null< int >  __o_Height){
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
	HX_STACK_FRAME("flixel.FlxSprite","setGraphicSize",0x516eb7f0,"flixel.FlxSprite.setGraphicSize","flixel/FlxSprite.hx",646,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
{
		HX_STACK_LINE(647)
		if (((bool((Width <= (int)0)) && bool((Height <= (int)0))))){
			HX_STACK_LINE(648)
			return null();
		}
		HX_STACK_LINE(651)
		Float newScaleX = (Float(Width) / Float(this->frameWidth));		HX_STACK_VAR(newScaleX,"newScaleX");
		HX_STACK_LINE(652)
		Float newScaleY = (Float(Height) / Float(this->frameHeight));		HX_STACK_VAR(newScaleY,"newScaleY");
		HX_STACK_LINE(653)
		this->scale->set(newScaleX,newScaleY);
		HX_STACK_LINE(655)
		if (((Width <= (int)0))){
			HX_STACK_LINE(656)
			this->scale->set_x(newScaleY);
		}
		else{
			HX_STACK_LINE(658)
			if (((Height <= (int)0))){
				HX_STACK_LINE(659)
				this->scale->set_y(newScaleX);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,setGraphicSize,(void))

Void FlxSprite_obj::updateHitbox( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","updateHitbox",0x9470392a,"flixel.FlxSprite.updateHitbox","flixel/FlxSprite.hx",668,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(669)
		Float newWidth = (this->scale->x * this->frameWidth);		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(670)
		Float newHeight = (this->scale->y * this->frameHeight);		HX_STACK_VAR(newHeight,"newHeight");
		HX_STACK_LINE(672)
		this->set_width(newWidth);
		HX_STACK_LINE(673)
		this->set_height(newHeight);
		HX_STACK_LINE(674)
		this->offset->set(-(((((newWidth - this->frameWidth)) * 0.5))),-(((((newHeight - this->frameHeight)) * 0.5))));
		HX_STACK_LINE(675)
		this->origin->set((this->frameWidth * 0.5),(this->frameHeight * 0.5));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateHitbox,(void))

Void FlxSprite_obj::resetHelpers( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetHelpers",0x6fc22ddf,"flixel.FlxSprite.resetHelpers","flixel/FlxSprite.hx",682,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(683)
		{
			HX_STACK_LINE(683)
			this->_flashRect->x = (int)0;
			HX_STACK_LINE(683)
			this->_flashRect->y = (int)0;
			HX_STACK_LINE(683)
			this->_flashRect->width = this->frameWidth;
			HX_STACK_LINE(683)
			this->_flashRect->height = this->frameHeight;
		}
		HX_STACK_LINE(684)
		this->_flashRect2->x = (int)0;
		HX_STACK_LINE(685)
		this->_flashRect2->y = (int)0;
		HX_STACK_LINE(686)
		int _g = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(686)
		this->_flashRect2->width = _g;
		HX_STACK_LINE(687)
		int _g1 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(687)
		this->_flashRect2->height = _g1;
		HX_STACK_LINE(688)
		this->origin->set((this->frameWidth * 0.5),(this->frameHeight * 0.5));
		HX_STACK_LINE(702)
		this->_halfWidth = (this->frameWidth * 0.5);
		HX_STACK_LINE(703)
		this->_halfHeight = (this->frameHeight * 0.5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetHelpers,(void))

Void FlxSprite_obj::update( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","update",0xe75bd5f2,"flixel.FlxSprite.update","flixel/FlxSprite.hx",707,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(708)
		this->super::update();
		HX_STACK_LINE(709)
		this->animation->update();
	}
return null();
}


Void FlxSprite_obj::draw( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","draw",0xe68b7fad,"flixel.FlxSprite.draw","flixel/FlxSprite.hx",716,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(717)
		if (((this->alpha == (int)0))){
			HX_STACK_LINE(719)
			return null();
		}
		HX_STACK_LINE(722)
		if ((this->dirty)){
			HX_STACK_LINE(724)
			this->calcFrame(null());
		}
		HX_STACK_LINE(728)
		::flixel::system::layer::DrawStackItem drawItem;		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(729)
		Array< Float > currDrawData;		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(730)
		int currIndex;		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(732)
		Float cos;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(733)
		Float sin;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(735)
		Float ox = this->origin->x;		HX_STACK_VAR(ox,"ox");
		HX_STACK_LINE(736)
		if (((this->_facingHorizontalMult != (int)1))){
			HX_STACK_LINE(738)
			ox = (this->frameWidth - ox);
		}
		HX_STACK_LINE(740)
		Float oy = this->origin->y;		HX_STACK_VAR(oy,"oy");
		HX_STACK_LINE(741)
		if (((this->_facingVerticalMult != (int)1))){
			HX_STACK_LINE(743)
			oy = (this->frameHeight - oy);
		}
		HX_STACK_LINE(747)
		bool simpleRender = this->isSimpleRender();		HX_STACK_VAR(simpleRender,"simpleRender");
		HX_STACK_LINE(749)
		{
			HX_STACK_LINE(749)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(749)
			Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(749)
			while((true)){
				HX_STACK_LINE(749)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(749)
					break;
				}
				HX_STACK_LINE(749)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(749)
				++(_g);
				HX_STACK_LINE(751)
				if (((  ((!(((bool(!(camera->visible)) || bool(!(camera->exists))))))) ? bool(!(this->isOnScreen(camera))) : bool(true) ))){
					HX_STACK_LINE(753)
					continue;
				}
				HX_STACK_LINE(757)
				::flixel::system::layer::DrawStackItem _g2 = camera->getDrawStackItem(this->cachedGraphics,this->isColored,this->_blendInt,this->antialiasing);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(757)
				drawItem = _g2;
				HX_STACK_LINE(758)
				currDrawData = drawItem->drawData;
				HX_STACK_LINE(759)
				currIndex = drawItem->position;
				HX_STACK_LINE(761)
				this->_point->set_x(((this->x - (camera->scroll->x * this->scrollFactor->x)) - this->offset->x));
				HX_STACK_LINE(762)
				this->_point->set_y(((this->y - (camera->scroll->y * this->scrollFactor->y)) - this->offset->y));
				HX_STACK_LINE(764)
				this->_point->set_x((this->_point->x + this->origin->x));
				HX_STACK_LINE(765)
				this->_point->set_y((this->_point->y + this->origin->y));
				HX_STACK_LINE(803)
				Float csx = this->_facingHorizontalMult;		HX_STACK_VAR(csx,"csx");
				HX_STACK_LINE(804)
				Float csy = this->_facingVerticalMult;		HX_STACK_VAR(csy,"csy");
				HX_STACK_LINE(805)
				Float ssy = (int)0;		HX_STACK_VAR(ssy,"ssy");
				HX_STACK_LINE(806)
				Float ssx = (int)0;		HX_STACK_VAR(ssx,"ssx");
				HX_STACK_LINE(808)
				Float x1 = (ox - this->frame->center->x);		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(809)
				Float y1 = (oy - this->frame->center->y);		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(811)
				Float x2 = x1;		HX_STACK_VAR(x2,"x2");
				HX_STACK_LINE(812)
				Float y2 = y1;		HX_STACK_VAR(y2,"y2");
				HX_STACK_LINE(815)
				Float a = csx;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(816)
				Float b = ssx;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(817)
				Float c = ssy;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(818)
				Float d = csy;		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(820)
				if ((!(simpleRender))){
					HX_STACK_LINE(822)
					if (((bool(this->_angleChanged) && bool((this->bakedRotationAngle <= (int)0))))){
						HX_STACK_LINE(824)
						Float radians = (-(this->angle) * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(radians,"radians");
						HX_STACK_LINE(825)
						Float _g11 = ::Math_obj::sin(radians);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(825)
						this->_sinAngle = _g11;
						HX_STACK_LINE(826)
						Float _g21 = ::Math_obj::cos(radians);		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(826)
						this->_cosAngle = _g21;
						HX_STACK_LINE(827)
						this->_angleChanged = false;
					}
					HX_STACK_LINE(830)
					Float sx = (this->scale->x * this->_facingHorizontalMult);		HX_STACK_VAR(sx,"sx");
					HX_STACK_LINE(831)
					Float sy = (this->scale->y * this->_facingVerticalMult);		HX_STACK_VAR(sy,"sy");
					HX_STACK_LINE(833)
					if ((this->frame->rotated)){
						HX_STACK_LINE(835)
						cos = -(this->_sinAngle);
						HX_STACK_LINE(836)
						sin = this->_cosAngle;
						HX_STACK_LINE(838)
						csx = (cos * sx);
						HX_STACK_LINE(839)
						ssy = (sin * sy);
						HX_STACK_LINE(840)
						ssx = (sin * sx);
						HX_STACK_LINE(841)
						csy = (cos * sy);
						HX_STACK_LINE(843)
						x2 = ((x1 * ssx) - (y1 * csy));
						HX_STACK_LINE(844)
						y2 = ((x1 * csx) + (y1 * ssy));
						HX_STACK_LINE(846)
						a = csy;
						HX_STACK_LINE(847)
						b = ssy;
						HX_STACK_LINE(848)
						c = ssx;
						HX_STACK_LINE(849)
						d = csx;
					}
					else{
						HX_STACK_LINE(853)
						cos = this->_cosAngle;
						HX_STACK_LINE(854)
						sin = this->_sinAngle;
						HX_STACK_LINE(856)
						csx = (cos * sx);
						HX_STACK_LINE(857)
						ssy = (sin * sy);
						HX_STACK_LINE(858)
						ssx = (sin * sx);
						HX_STACK_LINE(859)
						csy = (cos * sy);
						HX_STACK_LINE(861)
						x2 = ((x1 * csx) + (y1 * ssy));
						HX_STACK_LINE(862)
						y2 = ((-(x1) * ssx) + (y1 * csy));
						HX_STACK_LINE(864)
						a = csx;
						HX_STACK_LINE(865)
						b = ssx;
						HX_STACK_LINE(866)
						c = ssy;
						HX_STACK_LINE(867)
						d = csy;
					}
				}
				else{
					HX_STACK_LINE(872)
					x2 = (x1 * csx);
					HX_STACK_LINE(873)
					y2 = (y1 * csy);
				}
				HX_STACK_LINE(876)
				{
					HX_STACK_LINE(876)
					::flixel::util::FlxPoint _g21 = this->_point;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(876)
					_g21->set_x((_g21->x - x2));
				}
				HX_STACK_LINE(877)
				{
					HX_STACK_LINE(877)
					::flixel::util::FlxPoint _g21 = this->_point;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(877)
					_g21->set_y((_g21->y - y2));
				}
				HX_STACK_LINE(879)
				if ((this->pixelPerfectRender)){
					HX_STACK_LINE(881)
					::flixel::util::FlxPoint _this = this->_point;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(881)
					int _g3 = ::Math_obj::floor(_this->x);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(881)
					_this->set_x(_g3);
					HX_STACK_LINE(881)
					int _g4 = ::Math_obj::floor(_this->y);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(881)
					_this->set_y(_g4);
					HX_STACK_LINE(881)
					_this;
				}
				HX_STACK_LINE(884)
				int _g5 = (currIndex)++;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(884)
				currDrawData[_g5] = this->_point->x;
				HX_STACK_LINE(885)
				int _g6 = (currIndex)++;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(885)
				currDrawData[_g6] = this->_point->y;
				HX_STACK_LINE(887)
				int _g7 = (currIndex)++;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(887)
				currDrawData[_g7] = this->frame->tileID;
				HX_STACK_LINE(889)
				int _g8 = (currIndex)++;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(889)
				currDrawData[_g8] = a;
				HX_STACK_LINE(890)
				int _g9 = (currIndex)++;		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(890)
				currDrawData[_g9] = -(b);
				HX_STACK_LINE(891)
				int _g10 = (currIndex)++;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(891)
				currDrawData[_g10] = c;
				HX_STACK_LINE(892)
				int _g11 = (currIndex)++;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(892)
				currDrawData[_g11] = d;
				HX_STACK_LINE(894)
				if ((this->isColored)){
					HX_STACK_LINE(896)
					int _g12 = (currIndex)++;		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(896)
					currDrawData[_g12] = this->_red;
					HX_STACK_LINE(897)
					int _g13 = (currIndex)++;		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(897)
					currDrawData[_g13] = this->_green;
					HX_STACK_LINE(898)
					int _g14 = (currIndex)++;		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(898)
					currDrawData[_g14] = this->_blue;
				}
				HX_STACK_LINE(900)
				int _g15 = (currIndex)++;		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(900)
				currDrawData[_g15] = (this->alpha * camera->alpha);
				HX_STACK_LINE(901)
				drawItem->position = currIndex;
			}
		}
	}
return null();
}


Void FlxSprite_obj::stamp( ::flixel::FlxSprite Brush,hx::Null< int >  __o_X,hx::Null< int >  __o_Y){
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.FlxSprite","stamp",0x77d9503a,"flixel.FlxSprite.stamp","flixel/FlxSprite.hx",922,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Brush,"Brush")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(923)
		{
			HX_STACK_LINE(923)
			bool Force = false;		HX_STACK_VAR(Force,"Force");
			HX_STACK_LINE(923)
			Brush->calcFrame(true);
		}
		HX_STACK_LINE(924)
		::flash::display::BitmapData bitmapData = Brush->framePixels;		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(927)
		if (((bool((bool((bool(((bool((Brush->angle == (int)0)) || bool((Brush->bakedRotationAngle > (int)0))))) && bool((Brush->scale->x == (int)1)))) && bool((Brush->scale->y == (int)1)))) && bool((Brush->blend == null()))))){
			HX_STACK_LINE(929)
			this->_flashPoint->x = (X + this->region->startX);
			HX_STACK_LINE(930)
			this->_flashPoint->y = (Y + this->region->startY);
			HX_STACK_LINE(931)
			int _g = bitmapData->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(931)
			this->_flashRect2->width = _g;
			HX_STACK_LINE(932)
			int _g1 = bitmapData->get_height();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(932)
			this->_flashRect2->height = _g1;
			HX_STACK_LINE(933)
			this->cachedGraphics->bitmap->copyPixels(bitmapData,this->_flashRect2,this->_flashPoint,null(),null(),true);
			HX_STACK_LINE(934)
			int _g2 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(934)
			this->_flashRect2->width = _g2;
			HX_STACK_LINE(935)
			int _g3 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(935)
			this->_flashRect2->height = _g3;
			HX_STACK_LINE(937)
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
	HX_STACK_FRAME("flixel.FlxSprite","drawFrame",0x99d67540,"flixel.FlxSprite.drawFrame","flixel/FlxSprite.hx",975,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(975)
		this->calcFrame(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawFrame,(void))

Void FlxSprite_obj::centerOffsets( hx::Null< bool >  __o_AdjustPosition){
bool AdjustPosition = __o_AdjustPosition.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","centerOffsets",0x583e0f62,"flixel.FlxSprite.centerOffsets","flixel/FlxSprite.hx",984,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AdjustPosition,"AdjustPosition")
{
		HX_STACK_LINE(985)
		Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(985)
		Float _g1 = (this->frameWidth - _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(985)
		Float _g2 = (_g1 * 0.5);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(985)
		this->offset->set_x(_g2);
		HX_STACK_LINE(986)
		Float _g3 = this->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(986)
		Float _g4 = (this->frameHeight - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(986)
		Float _g5 = (_g4 * 0.5);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(986)
		this->offset->set_y(_g5);
		HX_STACK_LINE(987)
		if ((AdjustPosition)){
			HX_STACK_LINE(989)
			{
				HX_STACK_LINE(989)
				::flixel::FlxSprite _g6 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(989)
				_g6->set_x((_g6->x + this->offset->x));
			}
			HX_STACK_LINE(990)
			{
				HX_STACK_LINE(990)
				::flixel::FlxSprite _g6 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(990)
				_g6->set_y((_g6->y + this->offset->y));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,centerOffsets,(void))

Void FlxSprite_obj::centerOrigin( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","centerOrigin",0x4cbae644,"flixel.FlxSprite.centerOrigin","flixel/FlxSprite.hx",1000,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1000)
		this->origin->set((this->frameWidth * 0.5),(this->frameHeight * 0.5));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,centerOrigin,(void))

Array< ::Dynamic > FlxSprite_obj::replaceColor( int Color,int NewColor,hx::Null< bool >  __o_FetchPositions){
bool FetchPositions = __o_FetchPositions.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","replaceColor",0x7b700138,"flixel.FlxSprite.replaceColor","flixel/FlxSprite.hx",1011,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(NewColor,"NewColor")
	HX_STACK_ARG(FetchPositions,"FetchPositions")
{
		HX_STACK_LINE(1012)
		Array< ::Dynamic > positions = null();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(1013)
		if ((FetchPositions)){
			HX_STACK_LINE(1015)
			Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1015)
			positions = _g;
		}
		HX_STACK_LINE(1018)
		int row = this->region->startY;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1019)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1020)
		int rows = this->region->height;		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(1021)
		int columns = this->region->width;		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(1022)
		this->cachedGraphics->bitmap->lock();
		HX_STACK_LINE(1023)
		while((true)){
			HX_STACK_LINE(1023)
			if ((!(((row < rows))))){
				HX_STACK_LINE(1023)
				break;
			}
			HX_STACK_LINE(1025)
			column = this->region->startX;
			HX_STACK_LINE(1026)
			while((true)){
				HX_STACK_LINE(1026)
				if ((!(((column < columns))))){
					HX_STACK_LINE(1026)
					break;
				}
				HX_STACK_LINE(1028)
				int _g1 = this->cachedGraphics->bitmap->getPixel32(column,row);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1028)
				if (((_g1 == Color))){
					HX_STACK_LINE(1030)
					this->cachedGraphics->bitmap->setPixel32(column,row,NewColor);
					HX_STACK_LINE(1031)
					if ((FetchPositions)){
						HX_STACK_LINE(1033)
						::flixel::util::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1033)
						{
							HX_STACK_LINE(1033)
							::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(column,row);		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(1033)
							point->_inPool = false;
							HX_STACK_LINE(1033)
							_g2 = point;
						}
						HX_STACK_LINE(1033)
						positions->push(_g2);
					}
					HX_STACK_LINE(1035)
					this->dirty = true;
				}
				HX_STACK_LINE(1037)
				(column)++;
			}
			HX_STACK_LINE(1039)
			(row)++;
		}
		HX_STACK_LINE(1041)
		this->cachedGraphics->bitmap->unlock(null());
		HX_STACK_LINE(1042)
		this->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
		HX_STACK_LINE(1043)
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
	HX_STACK_FRAME("flixel.FlxSprite","setColorTransform",0xa09a3582,"flixel.FlxSprite.setColorTransform","flixel/FlxSprite.hx",1059,0x0384bffa)
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
		HX_STACK_LINE(1060)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1060)
		{
			HX_STACK_LINE(1060)
			int Red = ::Std_obj::_int((redMultiplier * (int)255));		HX_STACK_VAR(Red,"Red");
			HX_STACK_LINE(1060)
			int Green = ::Std_obj::_int((greenMultiplier * (int)255));		HX_STACK_VAR(Green,"Green");
			HX_STACK_LINE(1060)
			int Blue = ::Std_obj::_int((blueMultiplier * (int)255));		HX_STACK_VAR(Blue,"Blue");
			HX_STACK_LINE(1060)
			_g = (int((int((int(Red) << int((int)16))) | int((int(Green) << int((int)8))))) | int(Blue));
		}
		HX_STACK_LINE(1060)
		this->set_color(_g);
		HX_STACK_LINE(1061)
		this->set_alpha(alphaMultiplier);
		HX_STACK_LINE(1063)
		if (((this->colorTransform == null()))){
			HX_STACK_LINE(1065)
			::flash::geom::ColorTransform _g1 = ::flash::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1065)
			this->colorTransform = _g1;
		}
		else{
			HX_STACK_LINE(1069)
			this->colorTransform->redMultiplier = redMultiplier;
			HX_STACK_LINE(1070)
			this->colorTransform->greenMultiplier = greenMultiplier;
			HX_STACK_LINE(1071)
			this->colorTransform->blueMultiplier = blueMultiplier;
			HX_STACK_LINE(1072)
			this->colorTransform->alphaMultiplier = alphaMultiplier;
			HX_STACK_LINE(1073)
			this->colorTransform->redOffset = redOffset;
			HX_STACK_LINE(1074)
			this->colorTransform->greenOffset = greenOffset;
			HX_STACK_LINE(1075)
			this->colorTransform->blueOffset = blueOffset;
			HX_STACK_LINE(1076)
			this->colorTransform->alphaOffset = alphaOffset;
		}
		HX_STACK_LINE(1079)
		this->useColorTransform = (bool((bool((bool((bool((bool((this->alpha != (int)1)) || bool((this->color != (int)16777215)))) || bool((redOffset != (int)0)))) || bool((greenOffset != (int)0)))) || bool((blueOffset != (int)0)))) || bool((alphaOffset != (int)0)));
		HX_STACK_LINE(1080)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(FlxSprite_obj,setColorTransform,(void))

Void FlxSprite_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","updateColorTransform",0x79f9051b,"flixel.FlxSprite.updateColorTransform","flixel/FlxSprite.hx",1084,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1085)
		if (((bool((this->alpha != (int)1)) || bool((this->color != (int)16777215))))){
			HX_STACK_LINE(1087)
			if (((this->colorTransform == null()))){
				HX_STACK_LINE(1089)
				::flash::geom::ColorTransform _g = ::flash::geom::ColorTransform_obj::__new((Float(((int(this->color) >> int((int)16)))) / Float((int)255)),(Float(((int((int(this->color) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this->color) & int((int)255)))) / Float((int)255)),this->alpha,null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1089)
				this->colorTransform = _g;
			}
			else{
				HX_STACK_LINE(1093)
				this->colorTransform->redMultiplier = (Float(((int(this->color) >> int((int)16)))) / Float((int)255));
				HX_STACK_LINE(1094)
				this->colorTransform->greenMultiplier = (Float(((int((int(this->color) >> int((int)8))) & int((int)255)))) / Float((int)255));
				HX_STACK_LINE(1095)
				this->colorTransform->blueMultiplier = (Float(((int(this->color) & int((int)255)))) / Float((int)255));
				HX_STACK_LINE(1096)
				this->colorTransform->alphaMultiplier = this->alpha;
			}
			HX_STACK_LINE(1098)
			this->useColorTransform = true;
		}
		else{
			HX_STACK_LINE(1102)
			if (((this->colorTransform != null()))){
				HX_STACK_LINE(1104)
				this->colorTransform->redMultiplier = (int)1;
				HX_STACK_LINE(1105)
				this->colorTransform->greenMultiplier = (int)1;
				HX_STACK_LINE(1106)
				this->colorTransform->blueMultiplier = (int)1;
				HX_STACK_LINE(1107)
				this->colorTransform->alphaMultiplier = (int)1;
			}
			HX_STACK_LINE(1110)
			this->useColorTransform = false;
		}
		HX_STACK_LINE(1112)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateColorTransform,(void))

bool FlxSprite_obj::pixelsOverlapPoint( ::flixel::util::FlxPoint point,hx::Null< int >  __o_Mask,::flixel::FlxCamera Camera){
int Mask = __o_Mask.Default(255);
	HX_STACK_FRAME("flixel.FlxSprite","pixelsOverlapPoint",0x4c878b7f,"flixel.FlxSprite.pixelsOverlapPoint","flixel/FlxSprite.hx",1125,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(Mask,"Mask")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(1126)
		if (((Camera == null()))){
			HX_STACK_LINE(1128)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1130)
		this->getScreenXY(this->_point,Camera);
		HX_STACK_LINE(1131)
		this->_point->set_x((this->_point->x - this->offset->x));
		HX_STACK_LINE(1132)
		this->_point->set_y((this->_point->y - this->offset->y));
		HX_STACK_LINE(1133)
		this->_flashPoint->x = ((point->x - Camera->scroll->x) - this->_point->x);
		HX_STACK_LINE(1134)
		this->_flashPoint->y = ((point->y - Camera->scroll->y) - this->_point->y);
		HX_STACK_LINE(1136)
		if ((point->_weak)){
			HX_STACK_LINE(1136)
			::flixel::util::FlxPoint_obj::_pool->put(point);
		}
		HX_STACK_LINE(1139)
		if (((bool((bool((bool((this->_flashPoint->x < (int)0)) || bool((this->_flashPoint->x > this->frameWidth)))) || bool((this->_flashPoint->y < (int)0)))) || bool((this->_flashPoint->y > this->frameHeight))))){
			HX_STACK_LINE(1141)
			return false;
		}
		else{
			HX_STACK_LINE(1145)
			::flash::display::BitmapData frameData;		HX_STACK_VAR(frameData,"frameData");
			HX_STACK_LINE(1145)
			{
				HX_STACK_LINE(1145)
				::flash::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
				HX_STACK_LINE(1145)
				if (((this->frame != null()))){
					HX_STACK_LINE(1145)
					if (((bool(this->flipX) && bool(this->flipY)))){
						HX_STACK_LINE(1145)
						::flash::display::BitmapData _g = this->frame->getHVReversedBitmap();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1145)
						frameBmd = _g;
					}
					else{
						HX_STACK_LINE(1145)
						if ((this->flipX)){
							HX_STACK_LINE(1145)
							::flash::display::BitmapData _g1 = this->frame->getHReversedBitmap();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1145)
							frameBmd = _g1;
						}
						else{
							HX_STACK_LINE(1145)
							if ((this->flipY)){
								HX_STACK_LINE(1145)
								::flash::display::BitmapData _g2 = this->frame->getVReversedBitmap();		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(1145)
								frameBmd = _g2;
							}
							else{
								HX_STACK_LINE(1145)
								::flash::display::BitmapData _g3 = this->frame->getBitmap();		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(1145)
								frameBmd = _g3;
							}
						}
					}
				}
				HX_STACK_LINE(1145)
				frameData = frameBmd;
			}
			HX_STACK_LINE(1146)
			int _g4 = ::Std_obj::_int(this->_flashPoint->x);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1146)
			int _g5 = ::Std_obj::_int(this->_flashPoint->y);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1146)
			int pixelColor = frameData->getPixel32(_g4,_g5);		HX_STACK_VAR(pixelColor,"pixelColor");
			HX_STACK_LINE(1147)
			int pixelAlpha = (int((int(pixelColor) >> int((int)24))) & int((int)255));		HX_STACK_VAR(pixelAlpha,"pixelAlpha");
			HX_STACK_LINE(1148)
			return ((pixelAlpha * this->alpha) >= Mask);
		}
		HX_STACK_LINE(1139)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,pixelsOverlapPoint,return )

Void FlxSprite_obj::calcFrame( hx::Null< bool >  __o_RunOnCpp){
bool RunOnCpp = __o_RunOnCpp.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","calcFrame",0xc4d45b0f,"flixel.FlxSprite.calcFrame","flixel/FlxSprite.hx",1158,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RunOnCpp,"RunOnCpp")
{
		HX_STACK_LINE(1159)
		if (((this->cachedGraphics == null()))){
			HX_STACK_LINE(1161)
			this->loadGraphic(hx::ClassOf< ::flixel::_FlxSprite::GraphicDefault >(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(1165)
		if ((!(RunOnCpp))){
			HX_STACK_LINE(1167)
			return null();
		}
		HX_STACK_LINE(1171)
		if (((this->frame != null()))){
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::FlxSprite_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",1173,0x0384bffa)
					{
						HX_STACK_LINE(1173)
						int _g = __this->framePixels->get_width();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1173)
						return (_g != __this->frameWidth);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::flixel::FlxSprite_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",1173,0x0384bffa)
					{
						HX_STACK_LINE(1173)
						int _g1 = __this->framePixels->get_height();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1173)
						return (_g1 != __this->frameHeight);
					}
					return null();
				}
			};
			HX_STACK_LINE(1173)
			if (((  ((!(((  ((!(((this->framePixels == null()))))) ? bool(_Function_2_1::Block(this)) : bool(true) ))))) ? bool(_Function_2_2::Block(this)) : bool(true) ))){
				HX_STACK_LINE(1175)
				if (((this->framePixels != null()))){
					HX_STACK_LINE(1176)
					this->framePixels->dispose();
				}
				HX_STACK_LINE(1178)
				int _g2 = ::Std_obj::_int(this->frame->sourceSize->x);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1178)
				int _g3 = ::Std_obj::_int(this->frame->sourceSize->y);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1178)
				::flash::display::BitmapData _g4 = ::flash::display::BitmapData_obj::__new(_g2,_g3,null(),null(),null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1178)
				this->framePixels = _g4;
			}
			HX_STACK_LINE(1181)
			::flash::display::BitmapData _g9;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(1181)
			{
				HX_STACK_LINE(1181)
				::flash::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
				HX_STACK_LINE(1181)
				if (((this->frame != null()))){
					HX_STACK_LINE(1181)
					if (((bool(this->flipX) && bool(this->flipY)))){
						HX_STACK_LINE(1181)
						::flash::display::BitmapData _g5 = this->frame->getHVReversedBitmap();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(1181)
						frameBmd = _g5;
					}
					else{
						HX_STACK_LINE(1181)
						if ((this->flipX)){
							HX_STACK_LINE(1181)
							::flash::display::BitmapData _g6 = this->frame->getHReversedBitmap();		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(1181)
							frameBmd = _g6;
						}
						else{
							HX_STACK_LINE(1181)
							if ((this->flipY)){
								HX_STACK_LINE(1181)
								::flash::display::BitmapData _g7 = this->frame->getVReversedBitmap();		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(1181)
								frameBmd = _g7;
							}
							else{
								HX_STACK_LINE(1181)
								::flash::display::BitmapData _g8 = this->frame->getBitmap();		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(1181)
								frameBmd = _g8;
							}
						}
					}
				}
				HX_STACK_LINE(1181)
				_g9 = frameBmd;
			}
			HX_STACK_LINE(1181)
			this->framePixels->copyPixels(_g9,this->_flashRect,this->_flashPointZero,null(),null(),null());
		}
		HX_STACK_LINE(1184)
		if ((this->useColorTransform)){
			HX_STACK_LINE(1186)
			this->framePixels->colorTransform(this->_flashRect,this->colorTransform);
		}
		HX_STACK_LINE(1189)
		this->dirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,calcFrame,(void))

Void FlxSprite_obj::updateFrameData( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","updateFrameData",0x631dd0a5,"flixel.FlxSprite.updateFrameData","flixel/FlxSprite.hx",1197,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1198)
		if (((this->cachedGraphics == null()))){
			HX_STACK_LINE(1200)
			return null();
		}
		HX_STACK_LINE(1203)
		if (((bool((this->cachedGraphics->data != null())) && bool(((bool((this->region->tileWidth == (int)0)) && bool((this->region->tileHeight == (int)0)))))))){
			HX_STACK_LINE(1205)
			::flixel::system::layer::frames::FlxSpriteFrames _g = this->cachedGraphics->get_tilesheet()->getTexturePackerFrames(this->cachedGraphics->data,null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1205)
			this->framesData = _g;
		}
		else{
			HX_STACK_LINE(1209)
			::flixel::system::layer::frames::FlxSpriteFrames _g1 = this->cachedGraphics->get_tilesheet()->getSpriteSheetFrames(this->region,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1209)
			this->framesData = _g1;
		}
		HX_STACK_LINE(1212)
		this->set_frame(this->framesData->frames->__get((int)0).StaticCast< ::flixel::system::layer::frames::FlxFrame >());
		HX_STACK_LINE(1213)
		this->frames = this->framesData->frames->length;
		HX_STACK_LINE(1214)
		{
			HX_STACK_LINE(1214)
			this->set_width(this->frameWidth);
			HX_STACK_LINE(1214)
			this->set_height(this->frameHeight);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateFrameData,(void))

::flash::display::BitmapData FlxSprite_obj::getFlxFrameBitmapData( ){
	HX_STACK_FRAME("flixel.FlxSprite","getFlxFrameBitmapData",0xc4eba061,"flixel.FlxSprite.getFlxFrameBitmapData","flixel/FlxSprite.hx",1221,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1222)
	::flash::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
	HX_STACK_LINE(1223)
	if (((this->frame != null()))){
		HX_STACK_LINE(1225)
		if (((bool(this->flipX) && bool(this->flipY)))){
			HX_STACK_LINE(1227)
			::flash::display::BitmapData _g = this->frame->getHVReversedBitmap();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1227)
			frameBmd = _g;
		}
		else{
			HX_STACK_LINE(1229)
			if ((this->flipX)){
				HX_STACK_LINE(1231)
				::flash::display::BitmapData _g1 = this->frame->getHReversedBitmap();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1231)
				frameBmd = _g1;
			}
			else{
				HX_STACK_LINE(1233)
				if ((this->flipY)){
					HX_STACK_LINE(1235)
					::flash::display::BitmapData _g2 = this->frame->getVReversedBitmap();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1235)
					frameBmd = _g2;
				}
				else{
					HX_STACK_LINE(1239)
					::flash::display::BitmapData _g3 = this->frame->getBitmap();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1239)
					frameBmd = _g3;
				}
			}
		}
	}
	HX_STACK_LINE(1243)
	return frameBmd;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,getFlxFrameBitmapData,return )

::flixel::util::FlxPoint FlxSprite_obj::getGraphicMidpoint( ::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.FlxSprite","getGraphicMidpoint",0xc420be03,"flixel.FlxSprite.getGraphicMidpoint","flixel/FlxSprite.hx",1253,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(1254)
	if (((point == null()))){
		HX_STACK_LINE(1256)
		::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1256)
		{
			HX_STACK_LINE(1256)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(1256)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(1256)
			::flixel::util::FlxPoint point1 = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(1256)
			point1->_inPool = false;
			HX_STACK_LINE(1256)
			_g = point1;
		}
		HX_STACK_LINE(1256)
		point = _g;
	}
	HX_STACK_LINE(1258)
	return point->set((this->x + (this->frameWidth * 0.5)),(this->y + (this->frameHeight * 0.5)));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,getGraphicMidpoint,return )

Void FlxSprite_obj::resetFrameBitmapDatas( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetFrameBitmapDatas",0x2832a393,"flixel.FlxSprite.resetFrameBitmapDatas","flixel/FlxSprite.hx",1267,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1267)
		this->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrameBitmapDatas,(void))

bool FlxSprite_obj::isOnScreen( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxSprite","isOnScreen",0xb5403c5e,"flixel.FlxSprite.isOnScreen","flixel/FlxSprite.hx",1278,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(1279)
	if (((Camera == null()))){
		HX_STACK_LINE(1281)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(1284)
	Float minX = ((this->x - this->offset->x) - (Camera->scroll->x * this->scrollFactor->x));		HX_STACK_VAR(minX,"minX");
	HX_STACK_LINE(1285)
	Float minY = ((this->y - this->offset->y) - (Camera->scroll->y * this->scrollFactor->y));		HX_STACK_VAR(minY,"minY");
	HX_STACK_LINE(1286)
	Float maxX = (int)0;		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(1287)
	Float maxY = (int)0;		HX_STACK_VAR(maxY,"maxY");
	HX_STACK_LINE(1289)
	if (((bool((bool(((bool((this->angle == (int)0)) || bool((this->bakedRotationAngle > (int)0))))) && bool((this->scale->x == (int)1)))) && bool((this->scale->y == (int)1))))){
		HX_STACK_LINE(1291)
		maxX = (minX + this->frameWidth);
		HX_STACK_LINE(1292)
		maxY = (minY + this->frameHeight);
	}
	else{
		HX_STACK_LINE(1296)
		Float radiusX = this->_halfWidth;		HX_STACK_VAR(radiusX,"radiusX");
		HX_STACK_LINE(1297)
		Float radiusY = this->_halfHeight;		HX_STACK_VAR(radiusY,"radiusY");
		HX_STACK_LINE(1299)
		if (((this->origin->x == this->_halfWidth))){
			HX_STACK_LINE(1301)
			Float _g = ::Math_obj::abs((this->_halfWidth * this->scale->x));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1301)
			radiusX = _g;
		}
		else{
			HX_STACK_LINE(1305)
			Float sox = (this->scale->x * this->origin->x);		HX_STACK_VAR(sox,"sox");
			HX_STACK_LINE(1306)
			Float sfw = (this->scale->x * this->frameWidth);		HX_STACK_VAR(sfw,"sfw");
			HX_STACK_LINE(1307)
			Float x1 = ::Math_obj::abs(sox);		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(1308)
			Float x2 = ::Math_obj::abs((sfw - sox));		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(1309)
			Float _g1 = ::Math_obj::max(x2,x1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1309)
			radiusX = _g1;
		}
		HX_STACK_LINE(1312)
		if (((this->origin->y == this->_halfHeight))){
			HX_STACK_LINE(1314)
			Float _g2 = ::Math_obj::abs((this->_halfHeight * this->scale->y));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1314)
			radiusY = _g2;
		}
		else{
			HX_STACK_LINE(1318)
			Float soy = (this->scale->y * this->origin->y);		HX_STACK_VAR(soy,"soy");
			HX_STACK_LINE(1319)
			Float sfh = (this->scale->y * this->frameHeight);		HX_STACK_VAR(sfh,"sfh");
			HX_STACK_LINE(1320)
			Float y1 = ::Math_obj::abs(soy);		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(1321)
			Float y2 = ::Math_obj::abs((sfh - soy));		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(1322)
			Float _g3 = ::Math_obj::max(y2,y1);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1322)
			radiusY = _g3;
		}
		HX_STACK_LINE(1325)
		Float radius = ::Math_obj::max(radiusX,radiusY);		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(1326)
		hx::MultEq(radius,1.41421356237);
		HX_STACK_LINE(1328)
		hx::AddEq(minX,this->origin->x);
		HX_STACK_LINE(1329)
		maxX = (minX + radius);
		HX_STACK_LINE(1330)
		hx::SubEq(minX,radius);
		HX_STACK_LINE(1332)
		hx::AddEq(minY,this->origin->y);
		HX_STACK_LINE(1333)
		maxY = (minY + radius);
		HX_STACK_LINE(1334)
		hx::SubEq(minY,radius);
	}
	HX_STACK_LINE(1337)
	if (((bool((maxX < (int)0)) || bool((minX > Camera->width))))){
		HX_STACK_LINE(1338)
		return false;
	}
	HX_STACK_LINE(1340)
	if (((bool((maxY < (int)0)) || bool((minY > Camera->height))))){
		HX_STACK_LINE(1341)
		return false;
	}
	HX_STACK_LINE(1343)
	return true;
}


bool FlxSprite_obj::isSimpleRender( ){
	HX_STACK_FRAME("flixel.FlxSprite","isSimpleRender",0x6aa0d51b,"flixel.FlxSprite.isSimpleRender","flixel/FlxSprite.hx",1355,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1355)
	return (bool((bool(((bool((bool((this->angle == (int)0)) && bool((this->frame->additionalAngle == (int)0)))) || bool((this->bakedRotationAngle > (int)0))))) && bool((this->scale->x == (int)1)))) && bool((this->scale->y == (int)1)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,isSimpleRender,return )

Void FlxSprite_obj::setFacingFlip( int Direction,bool FlipX,bool FlipY){
{
		HX_STACK_FRAME("flixel.FlxSprite","setFacingFlip",0x6816c060,"flixel.FlxSprite.setFacingFlip","flixel/FlxSprite.hx",1371,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Direction,"Direction")
		HX_STACK_ARG(FlipX,"FlipX")
		HX_STACK_ARG(FlipY,"FlipY")
		struct _Function_1_1{
			inline static Dynamic Block( bool &FlipY,bool &FlipX){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",1371,0x0384bffa)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , FlipX,false);
					__result->Add(HX_CSTRING("y") , FlipY,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1371)
		this->_facingFlip->set(Direction,_Function_1_1::Block(FlipY,FlipX));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,setFacingFlip,(void))

::flash::display::BitmapData FlxSprite_obj::get_pixels( ){
	HX_STACK_FRAME("flixel.FlxSprite","get_pixels",0x90b8575f,"flixel.FlxSprite.get_pixels","flixel/FlxSprite.hx",1379,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1379)
	return this->cachedGraphics->bitmap;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_pixels,return )

::flash::display::BitmapData FlxSprite_obj::set_pixels( ::flash::display::BitmapData Pixels){
	HX_STACK_FRAME("flixel.FlxSprite","set_pixels",0x9435f5d3,"flixel.FlxSprite.set_pixels","flixel/FlxSprite.hx",1383,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Pixels,"Pixels")
	HX_STACK_LINE(1384)
	::String key = ::flixel::FlxG_obj::bitmap->getCacheKeyFor(Pixels);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(1386)
	if (((key == null()))){
		HX_STACK_LINE(1388)
		::String _g = ::flixel::FlxG_obj::bitmap->getUniqueKey(null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1388)
		key = _g;
		HX_STACK_LINE(1389)
		::flixel::util::loaders::CachedGraphics _g1 = ::flixel::FlxG_obj::bitmap->addWithSpaces(Pixels,(int)0,(int)0,(int)1,(int)1,false,key);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1389)
		this->set_cachedGraphics(_g1);
		HX_STACK_LINE(1390)
		this->cachedGraphics->set_destroyOnNoUse(true);
	}
	else{
		HX_STACK_LINE(1394)
		::flixel::util::loaders::CachedGraphics _g2 = ::flixel::FlxG_obj::bitmap->get(key);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1394)
		this->set_cachedGraphics(_g2);
	}
	HX_STACK_LINE(1397)
	if (((this->region == null()))){
		HX_STACK_LINE(1399)
		::flixel::system::layer::Region _g3 = ::flixel::system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1399)
		this->region = _g3;
	}
	HX_STACK_LINE(1402)
	this->region->startX = (int)0;
	HX_STACK_LINE(1403)
	this->region->startY = (int)0;
	HX_STACK_LINE(1404)
	int _g4 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(1404)
	int _g5 = this->region->width = _g4;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(1404)
	this->region->tileWidth = _g5;
	HX_STACK_LINE(1405)
	int _g6 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(1405)
	int _g7 = this->region->height = _g6;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(1405)
	this->region->tileHeight = _g7;
	HX_STACK_LINE(1406)
	this->region->spacingX = (int)0;
	HX_STACK_LINE(1407)
	this->region->spacingY = (int)0;
	HX_STACK_LINE(1409)
	int _g8 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(1409)
	int _g9 = this->frameWidth = _g8;		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(1409)
	this->set_width(_g9);
	HX_STACK_LINE(1410)
	int _g10 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(1410)
	int _g11 = this->frameHeight = _g10;		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(1410)
	this->set_height(_g11);
	HX_STACK_LINE(1411)
	this->animation->destroyAnimations();
	HX_STACK_LINE(1413)
	this->updateFrameData();
	HX_STACK_LINE(1414)
	this->resetHelpers();
	HX_STACK_LINE(1418)
	this->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
	HX_STACK_LINE(1420)
	return Pixels;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_pixels,return )

::flixel::system::layer::frames::FlxFrame FlxSprite_obj::set_frame( ::flixel::system::layer::frames::FlxFrame Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_frame",0xf8c58847,"flixel.FlxSprite.set_frame","flixel/FlxSprite.hx",1424,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1425)
	this->frame = Value;
	HX_STACK_LINE(1426)
	if (((this->frame != null()))){
		HX_STACK_LINE(1428)
		{
			HX_STACK_LINE(1428)
			int _g = ::Std_obj::_int(this->frame->sourceSize->x);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1428)
			this->frameWidth = _g;
			HX_STACK_LINE(1428)
			int _g1 = ::Std_obj::_int(this->frame->sourceSize->y);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1428)
			this->frameHeight = _g1;
			HX_STACK_LINE(1428)
			{
				HX_STACK_LINE(1428)
				this->_flashRect->x = (int)0;
				HX_STACK_LINE(1428)
				this->_flashRect->y = (int)0;
				HX_STACK_LINE(1428)
				this->_flashRect->width = this->frameWidth;
				HX_STACK_LINE(1428)
				this->_flashRect->height = this->frameHeight;
			}
		}
		HX_STACK_LINE(1429)
		this->dirty = true;
	}
	else{
		HX_STACK_LINE(1431)
		if (((bool((bool((this->framesData != null())) && bool((this->framesData->frames != null())))) && bool((this->framesData->frames->length > (int)0))))){
			HX_STACK_LINE(1433)
			this->frame = this->framesData->frames->__get((int)0).StaticCast< ::flixel::system::layer::frames::FlxFrame >();
			HX_STACK_LINE(1434)
			this->dirty = true;
		}
	}
	HX_STACK_LINE(1436)
	return this->frame;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_frame,return )

int FlxSprite_obj::set_facing( int Direction){
	HX_STACK_FRAME("flixel.FlxSprite","set_facing",0xeb9145c0,"flixel.FlxSprite.set_facing","flixel/FlxSprite.hx",1440,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Direction,"Direction")
	HX_STACK_LINE(1441)
	Dynamic flip = this->_facingFlip->get(Direction);		HX_STACK_VAR(flip,"flip");
	HX_STACK_LINE(1442)
	if (((flip != null()))){
		HX_STACK_LINE(1444)
		this->set_flipX(flip->__Field(HX_CSTRING("x"),true));
		HX_STACK_LINE(1445)
		this->set_flipY(flip->__Field(HX_CSTRING("y"),true));
	}
	HX_STACK_LINE(1448)
	return this->facing = Direction;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_facing,return )

Float FlxSprite_obj::set_alpha( Float Alpha){
	HX_STACK_FRAME("flixel.FlxSprite","set_alpha",0x13d8b778,"flixel.FlxSprite.set_alpha","flixel/FlxSprite.hx",1452,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_LINE(1453)
	if (((Alpha > (int)1))){
		HX_STACK_LINE(1455)
		Alpha = (int)1;
	}
	HX_STACK_LINE(1457)
	if (((Alpha < (int)0))){
		HX_STACK_LINE(1459)
		Alpha = (int)0;
	}
	HX_STACK_LINE(1461)
	if (((Alpha == this->alpha))){
		HX_STACK_LINE(1463)
		return this->alpha;
	}
	HX_STACK_LINE(1465)
	this->alpha = Alpha;
	HX_STACK_LINE(1466)
	this->updateColorTransform();
	HX_STACK_LINE(1467)
	return this->alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_alpha,return )

int FlxSprite_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.FlxSprite","set_color",0x3c9e817d,"flixel.FlxSprite.set_color","flixel/FlxSprite.hx",1471,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(1472)
	hx::AndEq(Color,(int)16777215);
	HX_STACK_LINE(1473)
	if (((this->color == Color))){
		HX_STACK_LINE(1475)
		return Color;
	}
	HX_STACK_LINE(1477)
	this->color = Color;
	HX_STACK_LINE(1478)
	this->updateColorTransform();
	HX_STACK_LINE(1481)
	this->_red = (Float(((int(this->color) >> int((int)16)))) / Float((int)255));
	HX_STACK_LINE(1482)
	this->_green = (Float(((int((int(this->color) >> int((int)8))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1483)
	this->_blue = (Float(((int(this->color) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1484)
	this->isColored = (this->color < (int)16777215);
	HX_STACK_LINE(1487)
	return this->color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_color,return )

Float FlxSprite_obj::set_angle( Float Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_angle",0x152453ed,"flixel.FlxSprite.set_angle","flixel/FlxSprite.hx",1491,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1492)
	this->_angleChanged = (bool((this->angle != Value)) || bool(this->_angleChanged));
	HX_STACK_LINE(1493)
	return this->super::set_angle(Value);
}


::flash::display::BlendMode FlxSprite_obj::set_blend( ::flash::display::BlendMode Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_blend",0xa736f86b,"flixel.FlxSprite.set_blend","flixel/FlxSprite.hx",1497,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1499)
	if (((Value != null()))){
		HX_STACK_LINE(1501)
		switch( (int)(Value->__Index())){
			case (int)7: {
				HX_STACK_LINE(1504)
				this->_blendInt = (int)65536;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(1507)
				this->_blendInt = (int)131072;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(1509)
				this->_blendInt = (int)262144;
			}
			;break;
			default: {
				HX_STACK_LINE(1512)
				this->_blendInt = (int)0;
			}
		}
	}
	else{
		HX_STACK_LINE(1517)
		this->_blendInt = (int)0;
	}
	HX_STACK_LINE(1521)
	return this->blend = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_blend,return )

::flixel::util::loaders::CachedGraphics FlxSprite_obj::set_cachedGraphics( ::flixel::util::loaders::CachedGraphics Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_cachedGraphics",0x92ade373,"flixel.FlxSprite.set_cachedGraphics","flixel/FlxSprite.hx",1529,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1530)
	::flixel::util::loaders::CachedGraphics oldCached = this->cachedGraphics;		HX_STACK_VAR(oldCached,"oldCached");
	HX_STACK_LINE(1532)
	if (((bool((this->cachedGraphics != Value)) && bool((Value != null()))))){
		HX_STACK_LINE(1534)
		::flixel::util::loaders::CachedGraphics _g = Value;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1534)
		int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1534)
		_g->set_useCount((_g1 + (int)1));
		HX_STACK_LINE(1534)
		_g1;
	}
	HX_STACK_LINE(1537)
	if (((bool((oldCached != null())) && bool((oldCached != Value))))){
		HX_STACK_LINE(1539)
		::flixel::util::loaders::CachedGraphics _g = oldCached;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1539)
		int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1539)
		_g->set_useCount((_g1 - (int)1));
		HX_STACK_LINE(1539)
		_g1;
	}
	HX_STACK_LINE(1542)
	return this->cachedGraphics = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_cachedGraphics,return )

bool FlxSprite_obj::set_flipX( bool Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_flipX",0xf4d45525,"flixel.FlxSprite.set_flipX","flixel/FlxSprite.hx",1546,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1548)
	if ((Value)){
		HX_STACK_LINE(1548)
		this->_facingHorizontalMult = (int)-1;
	}
	else{
		HX_STACK_LINE(1548)
		this->_facingHorizontalMult = (int)1;
	}
	HX_STACK_LINE(1550)
	if (((this->flipX != Value))){
		HX_STACK_LINE(1552)
		this->dirty = true;
	}
	HX_STACK_LINE(1554)
	return this->flipX = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_flipX,return )

bool FlxSprite_obj::set_flipY( bool Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_flipY",0xf4d45526,"flixel.FlxSprite.set_flipY","flixel/FlxSprite.hx",1558,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1560)
	if ((Value)){
		HX_STACK_LINE(1560)
		this->_facingVerticalMult = (int)-1;
	}
	else{
		HX_STACK_LINE(1560)
		this->_facingVerticalMult = (int)1;
	}
	HX_STACK_LINE(1562)
	if (((this->flipY != Value))){
		HX_STACK_LINE(1564)
		this->dirty = true;
	}
	HX_STACK_LINE(1566)
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
