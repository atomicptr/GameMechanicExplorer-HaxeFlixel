#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_geom_Transform
#include <flash/geom/Transform.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
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
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxRect
#include <flixel/util/FlxPool_flixel_util_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace flixel{

Void FlxCamera_obj::__construct(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_Zoom)
{
HX_STACK_FRAME("flixel.FlxCamera","new",0x0e8a9f77,"flixel.FlxCamera.new","flixel/FlxCamera.hx",28,0xe7aeb95a)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(__o_Height,"Height")
HX_STACK_ARG(__o_Zoom,"Zoom")
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
Float Zoom = __o_Zoom.Default(0);
{
	HX_STACK_LINE(264)
	this->_fxShakeDirection = (int)0;
	HX_STACK_LINE(256)
	this->_fxShakeComplete = null();
	HX_STACK_LINE(252)
	this->_fxShakeDuration = (int)0;
	HX_STACK_LINE(248)
	this->_fxShakeIntensity = (int)0;
	HX_STACK_LINE(244)
	this->_fxFadeAlpha = (int)0;
	HX_STACK_LINE(240)
	this->_fxFadeComplete = null();
	HX_STACK_LINE(236)
	this->_fxFadeIn = false;
	HX_STACK_LINE(232)
	this->_fxFadeDuration = (int)0;
	HX_STACK_LINE(220)
	this->_fxFadeColor = (int)0;
	HX_STACK_LINE(216)
	this->_fxFlashAlpha = (int)0;
	HX_STACK_LINE(212)
	this->_fxFlashComplete = null();
	HX_STACK_LINE(208)
	this->_fxFlashDuration = (int)0;
	HX_STACK_LINE(204)
	this->_fxFlashColor = (int)0;
	HX_STACK_LINE(182)
	this->antialiasing = false;
	HX_STACK_LINE(177)
	this->color = (int)-1;
	HX_STACK_LINE(172)
	this->angle = (int)0;
	HX_STACK_LINE(167)
	this->alpha = (int)1;
	HX_STACK_LINE(143)
	this->useBgAlphaBlending = false;
	HX_STACK_LINE(108)
	this->bounds = null();
	HX_STACK_LINE(103)
	this->deadzone = null();
	HX_STACK_LINE(98)
	this->followLerp = (int)0;
	HX_STACK_LINE(94)
	this->target = null();
	HX_STACK_LINE(420)
	super::__construct();
	HX_STACK_LINE(422)
	::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(422)
	{
		HX_STACK_LINE(422)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(422)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(422)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(422)
		point->_inPool = false;
		HX_STACK_LINE(422)
		_g = point;
	}
	HX_STACK_LINE(422)
	this->_scrollTarget = _g;
	HX_STACK_LINE(424)
	this->x = X;
	HX_STACK_LINE(425)
	this->y = Y;
	HX_STACK_LINE(427)
	this->set_width((  (((Width <= (int)0))) ? int(::flixel::FlxG_obj::width) : int(Width) ));
	HX_STACK_LINE(428)
	this->set_height((  (((Height <= (int)0))) ? int(::flixel::FlxG_obj::height) : int(Height) ));
	HX_STACK_LINE(430)
	::flixel::util::FlxPoint _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(430)
	{
		HX_STACK_LINE(430)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(430)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(430)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(430)
		point->_inPool = false;
		HX_STACK_LINE(430)
		_g1 = point;
	}
	HX_STACK_LINE(430)
	this->scroll = _g1;
	HX_STACK_LINE(431)
	::flixel::util::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(431)
	{
		HX_STACK_LINE(431)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(431)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(431)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(431)
		point->_inPool = false;
		HX_STACK_LINE(431)
		_g2 = point;
	}
	HX_STACK_LINE(431)
	this->followLead = _g2;
	HX_STACK_LINE(432)
	::flixel::util::FlxPoint _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(432)
	{
		HX_STACK_LINE(432)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(432)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(432)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(432)
		point->_inPool = false;
		HX_STACK_LINE(432)
		_g3 = point;
	}
	HX_STACK_LINE(432)
	this->_point = _g3;
	HX_STACK_LINE(433)
	::flixel::util::FlxPoint _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(433)
	{
		HX_STACK_LINE(433)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(433)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(433)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(433)
		point->_inPool = false;
		HX_STACK_LINE(433)
		_g4 = point;
	}
	HX_STACK_LINE(433)
	this->_flashOffset = _g4;
	HX_STACK_LINE(447)
	::flash::display::Sprite _g5 = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(447)
	this->canvas = _g5;
	HX_STACK_LINE(448)
	this->canvas->set_x((-(this->width) * 0.5));
	HX_STACK_LINE(449)
	this->canvas->set_y((-(this->height) * 0.5));
	HX_STACK_LINE(456)
	::flash::display::Sprite _g6 = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(456)
	this->flashSprite = _g6;
	HX_STACK_LINE(457)
	this->set_zoom(Zoom);
	HX_STACK_LINE(459)
	this->_flashOffset->set(((this->width * 0.5) * this->zoom),((this->height * 0.5) * this->zoom));
	HX_STACK_LINE(461)
	this->flashSprite->set_x((this->x + this->_flashOffset->x));
	HX_STACK_LINE(462)
	this->flashSprite->set_y((this->y + this->_flashOffset->y));
	HX_STACK_LINE(467)
	this->flashSprite->addChild(this->canvas);
	HX_STACK_LINE(469)
	::flash::geom::Rectangle _g7 = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,this->width,this->height);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(469)
	this->_flashRect = _g7;
	HX_STACK_LINE(470)
	::flash::geom::Point _g8 = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(470)
	this->_flashPoint = _g8;
	HX_STACK_LINE(472)
	::flixel::util::FlxPoint _g9;		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(472)
	{
		HX_STACK_LINE(472)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(472)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(472)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(472)
		point->_inPool = false;
		HX_STACK_LINE(472)
		_g9 = point;
	}
	HX_STACK_LINE(472)
	this->_fxShakeOffset = _g9;
	HX_STACK_LINE(478)
	::flash::geom::Rectangle _g10 = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,this->width,this->height);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(478)
	this->canvas->set_scrollRect(_g10);
	HX_STACK_LINE(488)
	::flixel::system::layer::DrawStackItem _g11 = ::flixel::system::layer::DrawStackItem_obj::__new();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(488)
	this->_currentStackItem = _g11;
	HX_STACK_LINE(489)
	this->_headOfDrawStack = this->_currentStackItem;
	HX_STACK_LINE(492)
	int _g12 = ::flixel::FlxG_obj::cameras->get_bgColor();		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(492)
	this->bgColor = _g12;
}
;
	return null();
}

//FlxCamera_obj::~FlxCamera_obj() { }

Dynamic FlxCamera_obj::__CreateEmpty() { return  new FlxCamera_obj; }
hx::ObjectPtr< FlxCamera_obj > FlxCamera_obj::__new(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_Zoom)
{  hx::ObjectPtr< FlxCamera_obj > result = new FlxCamera_obj();
	result->__construct(__o_X,__o_Y,__o_Width,__o_Height,__o_Zoom);
	return result;}

Dynamic FlxCamera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCamera_obj > result = new FlxCamera_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

::flixel::system::layer::DrawStackItem FlxCamera_obj::getDrawStackItem( ::flixel::util::loaders::CachedGraphics ObjGraphics,bool ObjColored,int ObjBlending,hx::Null< bool >  __o_ObjAntialiasing){
bool ObjAntialiasing = __o_ObjAntialiasing.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","getDrawStackItem",0x060ba7ea,"flixel.FlxCamera.getDrawStackItem","flixel/FlxCamera.hx",310,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjGraphics,"ObjGraphics")
	HX_STACK_ARG(ObjColored,"ObjColored")
	HX_STACK_ARG(ObjBlending,"ObjBlending")
	HX_STACK_ARG(ObjAntialiasing,"ObjAntialiasing")
{
		HX_STACK_LINE(311)
		::flixel::system::layer::DrawStackItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
		HX_STACK_LINE(312)
		if (((this->_currentStackItem->initialized == false))){
			HX_STACK_LINE(314)
			this->_headOfDrawStack = this->_currentStackItem;
			HX_STACK_LINE(315)
			this->_currentStackItem->graphics = ObjGraphics;
			HX_STACK_LINE(316)
			this->_currentStackItem->antialiasing = ObjAntialiasing;
			HX_STACK_LINE(317)
			this->_currentStackItem->colored = ObjColored;
			HX_STACK_LINE(318)
			this->_currentStackItem->blending = ObjBlending;
			HX_STACK_LINE(319)
			itemToReturn = this->_currentStackItem;
		}
		else{
			HX_STACK_LINE(321)
			if (((bool((bool((bool((this->_currentStackItem->graphics == ObjGraphics)) && bool((this->_currentStackItem->colored == ObjColored)))) && bool((this->_currentStackItem->blending == ObjBlending)))) && bool((this->_currentStackItem->antialiasing == ObjAntialiasing))))){
				HX_STACK_LINE(326)
				itemToReturn = this->_currentStackItem;
			}
		}
		HX_STACK_LINE(329)
		if (((itemToReturn == null()))){
			HX_STACK_LINE(331)
			::flixel::system::layer::DrawStackItem newItem = null();		HX_STACK_VAR(newItem,"newItem");
			HX_STACK_LINE(332)
			if (((::flixel::FlxCamera_obj::_storageHead != null()))){
				HX_STACK_LINE(334)
				newItem = ::flixel::FlxCamera_obj::_storageHead;
				HX_STACK_LINE(335)
				::flixel::system::layer::DrawStackItem newHead = ::flixel::FlxCamera_obj::_storageHead->next;		HX_STACK_VAR(newHead,"newHead");
				HX_STACK_LINE(336)
				newItem->next = null();
				HX_STACK_LINE(337)
				::flixel::FlxCamera_obj::_storageHead = newHead;
			}
			else{
				HX_STACK_LINE(341)
				::flixel::system::layer::DrawStackItem _g = ::flixel::system::layer::DrawStackItem_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(341)
				newItem = _g;
			}
			HX_STACK_LINE(344)
			newItem->graphics = ObjGraphics;
			HX_STACK_LINE(345)
			newItem->antialiasing = ObjAntialiasing;
			HX_STACK_LINE(346)
			newItem->colored = ObjColored;
			HX_STACK_LINE(347)
			newItem->blending = ObjBlending;
			HX_STACK_LINE(348)
			this->_currentStackItem->next = newItem;
			HX_STACK_LINE(349)
			this->_currentStackItem = newItem;
			HX_STACK_LINE(350)
			itemToReturn = this->_currentStackItem;
		}
		HX_STACK_LINE(353)
		itemToReturn->initialized = true;
		HX_STACK_LINE(354)
		return itemToReturn;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,getDrawStackItem,return )

Void FlxCamera_obj::clearDrawStack( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","clearDrawStack",0x8d7c5ba0,"flixel.FlxCamera.clearDrawStack","flixel/FlxCamera.hx",359,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(360)
		::flixel::system::layer::DrawStackItem currItem = this->_headOfDrawStack->next;		HX_STACK_VAR(currItem,"currItem");
		HX_STACK_LINE(361)
		while((true)){
			HX_STACK_LINE(361)
			if ((!(((currItem != null()))))){
				HX_STACK_LINE(361)
				break;
			}
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				currItem->graphics = null();
				HX_STACK_LINE(363)
				currItem->initialized = false;
				HX_STACK_LINE(363)
				currItem->antialiasing = false;
				HX_STACK_LINE(363)
				currItem->position = (int)0;
			}
			HX_STACK_LINE(364)
			::flixel::system::layer::DrawStackItem newStorageHead = currItem;		HX_STACK_VAR(newStorageHead,"newStorageHead");
			HX_STACK_LINE(365)
			currItem = currItem->next;
			HX_STACK_LINE(366)
			if (((::flixel::FlxCamera_obj::_storageHead == null()))){
				HX_STACK_LINE(368)
				::flixel::FlxCamera_obj::_storageHead = newStorageHead;
				HX_STACK_LINE(369)
				newStorageHead->next = null();
			}
			else{
				HX_STACK_LINE(373)
				newStorageHead->next = ::flixel::FlxCamera_obj::_storageHead;
				HX_STACK_LINE(374)
				::flixel::FlxCamera_obj::_storageHead = newStorageHead;
			}
		}
		HX_STACK_LINE(378)
		{
			HX_STACK_LINE(378)
			::flixel::system::layer::DrawStackItem _this = this->_headOfDrawStack;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(378)
			_this->graphics = null();
			HX_STACK_LINE(378)
			_this->initialized = false;
			HX_STACK_LINE(378)
			_this->antialiasing = false;
			HX_STACK_LINE(378)
			_this->position = (int)0;
		}
		HX_STACK_LINE(379)
		this->_headOfDrawStack->next = null();
		HX_STACK_LINE(380)
		this->_currentStackItem = this->_headOfDrawStack;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,clearDrawStack,(void))

Void FlxCamera_obj::render( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","render",0x1f11e49f,"flixel.FlxCamera.render","flixel/FlxCamera.hx",385,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(386)
		::flixel::system::layer::DrawStackItem currItem = this->_headOfDrawStack;		HX_STACK_VAR(currItem,"currItem");
		HX_STACK_LINE(387)
		while((true)){
			HX_STACK_LINE(387)
			if ((!(((currItem != null()))))){
				HX_STACK_LINE(387)
				break;
			}
			HX_STACK_LINE(389)
			Array< Float > data = currItem->drawData;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(390)
			int dataLen = data->length;		HX_STACK_VAR(dataLen,"dataLen");
			HX_STACK_LINE(391)
			int position = currItem->position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(392)
			if (((position > (int)0))){
				HX_STACK_LINE(394)
				int tempFlags = (int)16;		HX_STACK_VAR(tempFlags,"tempFlags");
				HX_STACK_LINE(395)
				hx::OrEq(tempFlags,(int)8);
				HX_STACK_LINE(396)
				if ((currItem->colored)){
					HX_STACK_LINE(398)
					hx::OrEq(tempFlags,(int)4);
				}
				HX_STACK_LINE(400)
				hx::OrEq(tempFlags,currItem->blending);
				HX_STACK_LINE(401)
				::flash::display::Graphics _g = this->canvas->get_graphics();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(401)
				currItem->graphics->get_tilesheet()->tileSheet->drawTiles(_g,data,(bool(this->antialiasing) || bool(currItem->antialiasing)),tempFlags,position);
				HX_STACK_LINE(402)
				(::flixel::system::layer::TileSheetExt_obj::_DRAWCALLS)++;
			}
			HX_STACK_LINE(404)
			currItem = currItem->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,render,(void))

Void FlxCamera_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","destroy",0xb607d391,"flixel.FlxCamera.destroy","flixel/FlxCamera.hx",499,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(511)
		this->flashSprite->removeChild(this->canvas);
		HX_STACK_LINE(512)
		int canvasNumChildren = this->canvas->get_numChildren();		HX_STACK_VAR(canvasNumChildren,"canvasNumChildren");
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(513)
			int _g = canvasNumChildren;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(513)
			while((true)){
				HX_STACK_LINE(513)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(513)
					break;
				}
				HX_STACK_LINE(513)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(515)
				this->canvas->removeChildAt((int)0);
			}
		}
		HX_STACK_LINE(517)
		this->canvas = null();
		HX_STACK_LINE(519)
		this->clearDrawStack();
		HX_STACK_LINE(521)
		{
			HX_STACK_LINE(521)
			::flixel::system::layer::DrawStackItem _this = this->_headOfDrawStack;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(521)
			_this->graphics = null();
			HX_STACK_LINE(521)
			_this->drawData = null();
			HX_STACK_LINE(521)
			_this->next = null();
		}
		HX_STACK_LINE(522)
		this->_headOfDrawStack = null();
		HX_STACK_LINE(523)
		this->_currentStackItem = null();
		HX_STACK_LINE(526)
		::flixel::util::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->scroll);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(526)
		this->scroll = _g;
		HX_STACK_LINE(527)
		::flixel::util::FlxRect _g1 = ::flixel::util::FlxDestroyUtil_obj::put(this->deadzone);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(527)
		this->deadzone = _g1;
		HX_STACK_LINE(528)
		::flixel::util::FlxRect _g2 = ::flixel::util::FlxDestroyUtil_obj::put(this->bounds);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(528)
		this->bounds = _g2;
		HX_STACK_LINE(530)
		this->target = null();
		HX_STACK_LINE(531)
		this->flashSprite = null();
		HX_STACK_LINE(532)
		this->_flashRect = null();
		HX_STACK_LINE(533)
		this->_flashPoint = null();
		HX_STACK_LINE(534)
		this->_fxFlashComplete = null();
		HX_STACK_LINE(535)
		this->_fxFadeComplete = null();
		HX_STACK_LINE(536)
		this->_fxShakeComplete = null();
		HX_STACK_LINE(537)
		this->_fxShakeOffset = null();
		HX_STACK_LINE(539)
		this->super::destroy();
	}
return null();
}


Void FlxCamera_obj::update( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","update",0xa0edff52,"flixel.FlxCamera.update","flixel/FlxCamera.hx",546,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(548)
		if (((this->target != null()))){
			HX_STACK_LINE(550)
			this->updateFollow();
		}
		HX_STACK_LINE(554)
		if (((this->bounds != null()))){
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::flixel::FlxCamera_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",556,0xe7aeb95a)
					{
						HX_STACK_LINE(556)
						Float Value = __this->scroll->x;		HX_STACK_VAR(Value,"Value");
						HX_STACK_LINE(556)
						Float Min = __this->bounds->x;		HX_STACK_VAR(Min,"Min");
						HX_STACK_LINE(556)
						Float Max;		HX_STACK_VAR(Max,"Max");
						struct _Function_3_1{
							inline static Float Block( hx::ObjectPtr< ::flixel::FlxCamera_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",556,0xe7aeb95a)
								{
									HX_STACK_LINE(556)
									::flixel::util::FlxRect _this = __this->bounds;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(556)
									return (_this->x + _this->width);
								}
								return null();
							}
						};
						HX_STACK_LINE(556)
						Max = (_Function_3_1::Block(__this) - __this->width);
						HX_STACK_LINE(556)
						Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
						HX_STACK_LINE(556)
						if (((Value < Min))){
							HX_STACK_LINE(556)
							lowerBound = Min;
						}
						else{
							HX_STACK_LINE(556)
							lowerBound = Value;
						}
						HX_STACK_LINE(556)
						return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
					}
					return null();
				}
			};
			HX_STACK_LINE(556)
			this->scroll->set_x(_Function_2_1::Block(this));
			struct _Function_2_2{
				inline static Float Block( hx::ObjectPtr< ::flixel::FlxCamera_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",557,0xe7aeb95a)
					{
						HX_STACK_LINE(557)
						Float Value = __this->scroll->y;		HX_STACK_VAR(Value,"Value");
						HX_STACK_LINE(557)
						Float Min = __this->bounds->y;		HX_STACK_VAR(Min,"Min");
						HX_STACK_LINE(557)
						Float Max;		HX_STACK_VAR(Max,"Max");
						struct _Function_3_1{
							inline static Float Block( hx::ObjectPtr< ::flixel::FlxCamera_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",557,0xe7aeb95a)
								{
									HX_STACK_LINE(557)
									::flixel::util::FlxRect _this = __this->bounds;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(557)
									return (_this->y + _this->height);
								}
								return null();
							}
						};
						HX_STACK_LINE(557)
						Max = (_Function_3_1::Block(__this) - __this->height);
						HX_STACK_LINE(557)
						Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
						HX_STACK_LINE(557)
						if (((Value < Min))){
							HX_STACK_LINE(557)
							lowerBound = Min;
						}
						else{
							HX_STACK_LINE(557)
							lowerBound = Value;
						}
						HX_STACK_LINE(557)
						return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
					}
					return null();
				}
			};
			HX_STACK_LINE(557)
			this->scroll->set_y(_Function_2_2::Block(this));
		}
		HX_STACK_LINE(560)
		this->updateFlash();
		HX_STACK_LINE(561)
		this->updateFade();
		HX_STACK_LINE(562)
		this->updateShake();
	}
return null();
}


Void FlxCamera_obj::updateFollow( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFollow",0xf2024e63,"flixel.FlxCamera.updateFollow","flixel/FlxCamera.hx",569,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(569)
		if (((this->deadzone == null()))){
			HX_STACK_LINE(571)
			::flixel::util::FlxPoint point = this->target->getMidpoint(this->_point);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(571)
			this->scroll->set((point->x - (this->width * 0.5)),(point->y - (this->height * 0.5)));
		}
		else{
			HX_STACK_LINE(575)
			Float edge;		HX_STACK_VAR(edge,"edge");
			HX_STACK_LINE(576)
			Float targetX = this->target->x;		HX_STACK_VAR(targetX,"targetX");
			HX_STACK_LINE(577)
			Float targetY = this->target->y;		HX_STACK_VAR(targetY,"targetY");
			HX_STACK_LINE(579)
			if (((this->style == (int)4))){
				HX_STACK_LINE(581)
				if (((targetX > (this->scroll->x + this->width)))){
					HX_STACK_LINE(583)
					::flixel::util::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(583)
					_g->set_x((_g->x + this->width));
				}
				else{
					HX_STACK_LINE(585)
					if (((targetX < this->scroll->x))){
						HX_STACK_LINE(587)
						::flixel::util::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(587)
						_g->set_x((_g->x - this->width));
					}
				}
				HX_STACK_LINE(590)
				if (((targetY > (this->scroll->y + this->height)))){
					HX_STACK_LINE(592)
					::flixel::util::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(592)
					_g->set_y((_g->y + this->height));
				}
				else{
					HX_STACK_LINE(594)
					if (((targetY < this->scroll->y))){
						HX_STACK_LINE(596)
						::flixel::util::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(596)
						_g->set_y((_g->y - this->height));
					}
				}
			}
			else{
				HX_STACK_LINE(601)
				edge = (targetX - this->deadzone->x);
				HX_STACK_LINE(602)
				if (((this->_scrollTarget->x > edge))){
					HX_STACK_LINE(604)
					this->_scrollTarget->set_x(edge);
				}
				HX_STACK_LINE(606)
				Float _g = this->target->get_width();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(606)
				Float _g1 = (targetX + _g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(606)
				Float _g2 = (_g1 - this->deadzone->x);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(606)
				Float _g3 = (_g2 - this->deadzone->width);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(606)
				edge = _g3;
				HX_STACK_LINE(607)
				if (((this->_scrollTarget->x < edge))){
					HX_STACK_LINE(609)
					this->_scrollTarget->set_x(edge);
				}
				HX_STACK_LINE(612)
				edge = (targetY - this->deadzone->y);
				HX_STACK_LINE(613)
				if (((this->_scrollTarget->y > edge))){
					HX_STACK_LINE(615)
					this->_scrollTarget->set_y(edge);
				}
				HX_STACK_LINE(617)
				Float _g4 = this->target->get_height();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(617)
				Float _g5 = (targetY + _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(617)
				Float _g6 = (_g5 - this->deadzone->y);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(617)
				Float _g7 = (_g6 - this->deadzone->height);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(617)
				edge = _g7;
				HX_STACK_LINE(618)
				if (((this->_scrollTarget->y < edge))){
					HX_STACK_LINE(620)
					this->_scrollTarget->set_y(edge);
				}
			}
			HX_STACK_LINE(624)
			if ((::Std_obj::is(this->target,hx::ClassOf< ::flixel::FlxSprite >()))){
				HX_STACK_LINE(626)
				if (((this->_lastTargetPosition == null()))){
					HX_STACK_LINE(628)
					::flixel::util::FlxPoint _g8;		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(628)
					{
						HX_STACK_LINE(628)
						::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(this->target->x,this->target->y);		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(628)
						point->_inPool = false;
						HX_STACK_LINE(628)
						_g8 = point;
					}
					HX_STACK_LINE(628)
					this->_lastTargetPosition = _g8;
				}
				HX_STACK_LINE(630)
				{
					HX_STACK_LINE(630)
					::flixel::util::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(630)
					_g->set_x((_g->x + (((this->target->x - this->_lastTargetPosition->x)) * this->followLead->x)));
				}
				HX_STACK_LINE(631)
				{
					HX_STACK_LINE(631)
					::flixel::util::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(631)
					_g->set_y((_g->y + (((this->target->y - this->_lastTargetPosition->y)) * this->followLead->y)));
				}
				HX_STACK_LINE(633)
				this->_lastTargetPosition->set_x(this->target->x);
				HX_STACK_LINE(634)
				this->_lastTargetPosition->set_y(this->target->y);
			}
			HX_STACK_LINE(637)
			if (((this->followLerp == (int)0))){
				HX_STACK_LINE(639)
				::flixel::util::FlxPoint _this = this->scroll;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(639)
				::flixel::util::FlxPoint point = this->_scrollTarget;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(639)
				_this->set_x(point->x);
				HX_STACK_LINE(639)
				_this->set_y(point->y);
				HX_STACK_LINE(639)
				_this;
			}
			else{
				HX_STACK_LINE(643)
				{
					HX_STACK_LINE(643)
					::flixel::util::FlxPoint _g = this->scroll;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(643)
					_g->set_x((_g->x + (Float((((this->_scrollTarget->x - this->scroll->x)) * ::flixel::FlxG_obj::elapsed)) / Float(((::flixel::FlxG_obj::elapsed + (this->followLerp * ::flixel::FlxG_obj::elapsed)))))));
				}
				HX_STACK_LINE(644)
				{
					HX_STACK_LINE(644)
					::flixel::util::FlxPoint _g = this->scroll;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(644)
					_g->set_y((_g->y + (Float((((this->_scrollTarget->y - this->scroll->y)) * ::flixel::FlxG_obj::elapsed)) / Float(((::flixel::FlxG_obj::elapsed + (this->followLerp * ::flixel::FlxG_obj::elapsed)))))));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFollow,(void))

Void FlxCamera_obj::updateFlash( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFlash",0x43f2dcfe,"flixel.FlxCamera.updateFlash","flixel/FlxCamera.hx",652,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(652)
		if (((this->_fxFlashAlpha > 0.0))){
			HX_STACK_LINE(654)
			hx::SubEq(this->_fxFlashAlpha,(Float(::flixel::FlxG_obj::elapsed) / Float(this->_fxFlashDuration)));
			HX_STACK_LINE(655)
			if (((bool((this->_fxFlashAlpha <= (int)0)) && bool((this->_fxFlashComplete_dyn() != null()))))){
				HX_STACK_LINE(657)
				this->_fxFlashComplete();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFlash,(void))

Void FlxCamera_obj::updateFade( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFade",0xaec3f1ee,"flixel.FlxCamera.updateFade","flixel/FlxCamera.hx",664,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(664)
		if (((bool((this->_fxFadeAlpha > 0.0)) && bool((this->_fxFadeAlpha < 1.0))))){
			HX_STACK_LINE(666)
			if ((this->_fxFadeIn)){
				HX_STACK_LINE(668)
				hx::SubEq(this->_fxFadeAlpha,(Float(::flixel::FlxG_obj::elapsed) / Float(this->_fxFadeDuration)));
				HX_STACK_LINE(669)
				if (((this->_fxFadeAlpha <= 0.0))){
					HX_STACK_LINE(671)
					this->_fxFadeAlpha = 0.0;
					HX_STACK_LINE(672)
					if (((this->_fxFadeComplete_dyn() != null()))){
						HX_STACK_LINE(674)
						this->_fxFadeComplete();
					}
				}
			}
			else{
				HX_STACK_LINE(680)
				hx::AddEq(this->_fxFadeAlpha,(Float(::flixel::FlxG_obj::elapsed) / Float(this->_fxFadeDuration)));
				HX_STACK_LINE(681)
				if (((this->_fxFadeAlpha >= 1.0))){
					HX_STACK_LINE(683)
					this->_fxFadeAlpha = 1.0;
					HX_STACK_LINE(684)
					if (((this->_fxFadeComplete_dyn() != null()))){
						HX_STACK_LINE(686)
						this->_fxFadeComplete();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFade,(void))

Void FlxCamera_obj::updateShake( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateShake",0xbd838614,"flixel.FlxCamera.updateShake","flixel/FlxCamera.hx",695,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(695)
		if (((this->_fxShakeDuration > (int)0))){
			HX_STACK_LINE(697)
			hx::SubEq(this->_fxShakeDuration,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(698)
			if (((this->_fxShakeDuration <= (int)0))){
				HX_STACK_LINE(700)
				this->_fxShakeOffset->set(null(),null());
				HX_STACK_LINE(701)
				if (((this->_fxShakeComplete_dyn() != null()))){
					HX_STACK_LINE(704)
					this->_fxShakeComplete();
				}
			}
			else{
				HX_STACK_LINE(709)
				if (((bool((this->_fxShakeDirection == (int)0)) || bool((this->_fxShakeDirection == (int)1))))){
					HX_STACK_LINE(711)
					int _g = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(711)
					Float _g1 = (Float(_g) / Float((int)2147483647));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(711)
					Float _g2 = (_g1 * this->_fxShakeIntensity);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(711)
					Float _g3 = (_g2 * this->width);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(711)
					Float _g4 = (_g3 * (int)2);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(711)
					Float _g5 = (_g4 - (this->_fxShakeIntensity * this->width));		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(711)
					Float _g6 = (_g5 * this->zoom);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(711)
					this->_fxShakeOffset->set_x(_g6);
				}
				HX_STACK_LINE(713)
				if (((bool((this->_fxShakeDirection == (int)0)) || bool((this->_fxShakeDirection == (int)2))))){
					HX_STACK_LINE(715)
					int _g7 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(715)
					Float _g8 = (Float(_g7) / Float((int)2147483647));		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(715)
					Float _g9 = (_g8 * this->_fxShakeIntensity);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(715)
					Float _g10 = (_g9 * this->height);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(715)
					Float _g11 = (_g10 * (int)2);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(715)
					Float _g12 = (_g11 - (this->_fxShakeIntensity * this->height));		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(715)
					Float _g13 = (_g12 * this->zoom);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(715)
					this->_fxShakeOffset->set_y(_g13);
				}
			}
			HX_STACK_LINE(720)
			if (((this->target != null()))){
				HX_STACK_LINE(722)
				this->flashSprite->set_x((this->x + this->_flashOffset->x));
				HX_STACK_LINE(723)
				this->flashSprite->set_y((this->y + this->_flashOffset->y));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateShake,(void))

Void FlxCamera_obj::follow( ::flixel::FlxObject Target,hx::Null< int >  __o_Style,::flixel::util::FlxPoint Offset,hx::Null< Float >  __o_Lerp){
int Style = __o_Style.Default(0);
Float Lerp = __o_Lerp.Default(0);
	HX_STACK_FRAME("flixel.FlxCamera","follow",0x137f0aba,"flixel.FlxCamera.follow","flixel/FlxCamera.hx",737,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(Style,"Style")
	HX_STACK_ARG(Offset,"Offset")
	HX_STACK_ARG(Lerp,"Lerp")
{
		HX_STACK_LINE(738)
		this->style = Style;
		HX_STACK_LINE(739)
		this->target = Target;
		HX_STACK_LINE(740)
		this->followLerp = Lerp;
		HX_STACK_LINE(741)
		Float helper;		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(742)
		Float w = (int)0;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(743)
		Float h = (int)0;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(744)
		this->_lastTargetPosition = null();
		HX_STACK_LINE(746)
		switch( (int)(Style)){
			case (int)1: {
				HX_STACK_LINE(749)
				Float w1;		HX_STACK_VAR(w1,"w1");
				HX_STACK_LINE(749)
				w1 = ((Float(this->width) / Float((int)8)) + ((  (((Offset != null()))) ? Float(Offset->x) : Float((int)0) )));
				HX_STACK_LINE(750)
				Float h1;		HX_STACK_VAR(h1,"h1");
				HX_STACK_LINE(750)
				h1 = ((Float(this->height) / Float((int)3)) + ((  (((Offset != null()))) ? Float(Offset->y) : Float((int)0) )));
				HX_STACK_LINE(751)
				::flixel::util::FlxRect _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(751)
				{
					HX_STACK_LINE(751)
					::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(751)
					{
						HX_STACK_LINE(751)
						::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(751)
						_this->x = (Float(((this->width - w1))) / Float((int)2));
						HX_STACK_LINE(751)
						_this->y = ((Float(((this->height - h1))) / Float((int)2)) - (h1 * 0.25));
						HX_STACK_LINE(751)
						_this->width = w1;
						HX_STACK_LINE(751)
						_this->height = h1;
						HX_STACK_LINE(751)
						rect = _this;
					}
					HX_STACK_LINE(751)
					rect->_inPool = false;
					HX_STACK_LINE(751)
					_g = rect;
				}
				HX_STACK_LINE(751)
				this->deadzone = _g;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(754)
				Float _g1 = ::Math_obj::max(this->width,this->height);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(754)
				Float _g2 = (Float(_g1) / Float((int)4));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(754)
				helper = _g2;
				HX_STACK_LINE(755)
				::flixel::util::FlxRect _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(755)
				{
					HX_STACK_LINE(755)
					::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(755)
						::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(755)
						_this->x = (Float(((this->width - helper))) / Float((int)2));
						HX_STACK_LINE(755)
						_this->y = (Float(((this->height - helper))) / Float((int)2));
						HX_STACK_LINE(755)
						_this->width = helper;
						HX_STACK_LINE(755)
						_this->height = helper;
						HX_STACK_LINE(755)
						rect = _this;
					}
					HX_STACK_LINE(755)
					rect->_inPool = false;
					HX_STACK_LINE(755)
					_g3 = rect;
				}
				HX_STACK_LINE(755)
				this->deadzone = _g3;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(758)
				Float _g4 = ::Math_obj::max(this->width,this->height);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(758)
				Float _g5 = (Float(_g4) / Float((int)8));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(758)
				helper = _g5;
				HX_STACK_LINE(759)
				::flixel::util::FlxRect _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(759)
				{
					HX_STACK_LINE(759)
					::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(759)
					{
						HX_STACK_LINE(759)
						::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(759)
						_this->x = (Float(((this->width - helper))) / Float((int)2));
						HX_STACK_LINE(759)
						_this->y = (Float(((this->height - helper))) / Float((int)2));
						HX_STACK_LINE(759)
						_this->width = helper;
						HX_STACK_LINE(759)
						_this->height = helper;
						HX_STACK_LINE(759)
						rect = _this;
					}
					HX_STACK_LINE(759)
					rect->_inPool = false;
					HX_STACK_LINE(759)
					_g6 = rect;
				}
				HX_STACK_LINE(759)
				this->deadzone = _g6;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(762)
				if (((this->target != null()))){
					HX_STACK_LINE(764)
					Float _g7 = this->target->get_width();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(764)
					Float _g8;		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(764)
					_g8 = (_g7 + ((  (((Offset != null()))) ? Float(Offset->x) : Float((int)0) )));
					HX_STACK_LINE(764)
					w = _g8;
					HX_STACK_LINE(765)
					Float _g9 = this->target->get_height();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(765)
					Float _g10;		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(765)
					_g10 = (_g9 + ((  (((Offset != null()))) ? Float(Offset->y) : Float((int)0) )));
					HX_STACK_LINE(765)
					h = _g10;
				}
				HX_STACK_LINE(767)
				::flixel::util::FlxRect _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(767)
				{
					HX_STACK_LINE(767)
					::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(767)
					{
						HX_STACK_LINE(767)
						::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(767)
						_this->x = (Float(((this->width - w))) / Float((int)2));
						HX_STACK_LINE(767)
						_this->y = ((Float(((this->height - h))) / Float((int)2)) - (h * 0.25));
						HX_STACK_LINE(767)
						_this->width = w;
						HX_STACK_LINE(767)
						_this->height = h;
						HX_STACK_LINE(767)
						rect = _this;
					}
					HX_STACK_LINE(767)
					rect->_inPool = false;
					HX_STACK_LINE(767)
					_g11 = rect;
				}
				HX_STACK_LINE(767)
				this->deadzone = _g11;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(770)
				::flixel::util::FlxRect _g12;		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(770)
				{
					HX_STACK_LINE(770)
					::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(770)
					{
						HX_STACK_LINE(770)
						::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(770)
						_this->x = (int)0;
						HX_STACK_LINE(770)
						_this->y = (int)0;
						HX_STACK_LINE(770)
						_this->width = this->width;
						HX_STACK_LINE(770)
						_this->height = this->height;
						HX_STACK_LINE(770)
						rect = _this;
					}
					HX_STACK_LINE(770)
					rect->_inPool = false;
					HX_STACK_LINE(770)
					_g12 = rect;
				}
				HX_STACK_LINE(770)
				this->deadzone = _g12;
			}
			;break;
			default: {
				HX_STACK_LINE(773)
				this->deadzone = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,follow,(void))

Void FlxCamera_obj::focusOn( ::flixel::util::FlxPoint point){
{
		HX_STACK_FRAME("flixel.FlxCamera","focusOn",0xd304f1ae,"flixel.FlxCamera.focusOn","flixel/FlxCamera.hx",785,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(785)
		this->scroll->set((point->x - (this->width * 0.5)),(point->y - (this->height * 0.5)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,focusOn,(void))

Void FlxCamera_obj::flash( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-1);
Float Duration = __o_Duration.Default(1);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","flash",0x27663887,"flixel.FlxCamera.flash","flixel/FlxCamera.hx",797,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(798)
		if (((bool(!(Force)) && bool((this->_fxFlashAlpha > 0.0))))){
			HX_STACK_LINE(800)
			return null();
		}
		HX_STACK_LINE(802)
		this->_fxFlashColor = Color;
		HX_STACK_LINE(803)
		if (((Duration <= (int)0))){
			HX_STACK_LINE(805)
			Duration = 5e-324;
		}
		HX_STACK_LINE(807)
		this->_fxFlashDuration = Duration;
		HX_STACK_LINE(808)
		this->_fxFlashComplete = OnComplete;
		HX_STACK_LINE(809)
		this->_fxFlashAlpha = 1.0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,flash,(void))

Void FlxCamera_obj::fade( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,hx::Null< bool >  __o_FadeIn,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-16777216);
Float Duration = __o_Duration.Default(1);
bool FadeIn = __o_FadeIn.Default(false);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","fade",0xa5741a85,"flixel.FlxCamera.fade","flixel/FlxCamera.hx",822,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FadeIn,"FadeIn")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(823)
		if (((bool(!(Force)) && bool((this->_fxFadeAlpha > 0.0))))){
			HX_STACK_LINE(825)
			return null();
		}
		HX_STACK_LINE(827)
		this->_fxFadeColor = Color;
		HX_STACK_LINE(828)
		if (((Duration <= (int)0))){
			HX_STACK_LINE(830)
			Duration = 5e-324;
		}
		HX_STACK_LINE(833)
		this->_fxFadeIn = FadeIn;
		HX_STACK_LINE(834)
		this->_fxFadeDuration = Duration;
		HX_STACK_LINE(835)
		this->_fxFadeComplete = OnComplete;
		HX_STACK_LINE(837)
		if ((this->_fxFadeIn)){
			HX_STACK_LINE(839)
			this->_fxFadeAlpha = 0.999999;
		}
		else{
			HX_STACK_LINE(843)
			this->_fxFadeAlpha = 5e-324;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,fade,(void))

Void FlxCamera_obj::shake( hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force,hx::Null< int >  __o_Direction){
Float Intensity = __o_Intensity.Default(0.05);
Float Duration = __o_Duration.Default(0.5);
bool Force = __o_Force.Default(true);
int Direction = __o_Direction.Default(0);
	HX_STACK_FRAME("flixel.FlxCamera","shake",0xa0f6e19d,"flixel.FlxCamera.shake","flixel/FlxCamera.hx",857,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Intensity,"Intensity")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Direction,"Direction")
{
		HX_STACK_LINE(858)
		if (((bool(!(Force)) && bool(((bool((this->_fxShakeOffset->x != (int)0)) || bool((this->_fxShakeOffset->y != (int)0)))))))){
			HX_STACK_LINE(860)
			return null();
		}
		HX_STACK_LINE(862)
		this->_fxShakeIntensity = Intensity;
		HX_STACK_LINE(863)
		this->_fxShakeDuration = Duration;
		HX_STACK_LINE(864)
		this->_fxShakeComplete = OnComplete;
		HX_STACK_LINE(865)
		this->_fxShakeDirection = Direction;
		HX_STACK_LINE(866)
		this->_fxShakeOffset->set(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,shake,(void))

Void FlxCamera_obj::stopFX( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","stopFX",0x29222b1d,"flixel.FlxCamera.stopFX","flixel/FlxCamera.hx",873,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(874)
		this->_fxFlashAlpha = 0.0;
		HX_STACK_LINE(875)
		this->_fxFadeAlpha = 0.0;
		HX_STACK_LINE(876)
		this->_fxShakeDuration = (int)0;
		HX_STACK_LINE(877)
		this->flashSprite->set_x((this->x + this->_flashOffset->x));
		HX_STACK_LINE(878)
		this->flashSprite->set_y((this->y + this->_flashOffset->y));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,stopFX,(void))

::flixel::FlxCamera FlxCamera_obj::copyFrom( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxCamera","copyFrom",0x88512948,"flixel.FlxCamera.copyFrom","flixel/FlxCamera.hx",888,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(889)
	if (((Camera->bounds == null()))){
		HX_STACK_LINE(891)
		this->bounds = null();
	}
	else{
		HX_STACK_LINE(895)
		if (((this->bounds == null()))){
			HX_STACK_LINE(897)
			::flixel::util::FlxRect _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(897)
			{
				HX_STACK_LINE(897)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(897)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(897)
				Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(897)
				Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(897)
				::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(897)
				{
					HX_STACK_LINE(897)
					::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(897)
					_this->x = X;
					HX_STACK_LINE(897)
					_this->y = Y;
					HX_STACK_LINE(897)
					_this->width = Width;
					HX_STACK_LINE(897)
					_this->height = Height;
					HX_STACK_LINE(897)
					rect = _this;
				}
				HX_STACK_LINE(897)
				rect->_inPool = false;
				HX_STACK_LINE(897)
				_g = rect;
			}
			HX_STACK_LINE(897)
			this->bounds = _g;
		}
		HX_STACK_LINE(899)
		{
			HX_STACK_LINE(899)
			::flixel::util::FlxRect _this = this->bounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(899)
			::flixel::util::FlxRect Rect = Camera->bounds;		HX_STACK_VAR(Rect,"Rect");
			HX_STACK_LINE(899)
			_this->x = Rect->x;
			HX_STACK_LINE(899)
			_this->y = Rect->y;
			HX_STACK_LINE(899)
			_this->width = Rect->width;
			HX_STACK_LINE(899)
			_this->height = Rect->height;
			HX_STACK_LINE(899)
			_this;
		}
	}
	HX_STACK_LINE(901)
	this->target = Camera->target;
	HX_STACK_LINE(903)
	if (((this->target != null()))){
		HX_STACK_LINE(905)
		if (((Camera->deadzone == null()))){
			HX_STACK_LINE(907)
			this->deadzone = null();
		}
		else{
			HX_STACK_LINE(911)
			if (((this->deadzone == null()))){
				HX_STACK_LINE(913)
				::flixel::util::FlxRect _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(913)
				{
					HX_STACK_LINE(913)
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(913)
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(913)
					Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
					HX_STACK_LINE(913)
					Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
					HX_STACK_LINE(913)
					::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(913)
					{
						HX_STACK_LINE(913)
						::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(913)
						_this->x = X;
						HX_STACK_LINE(913)
						_this->y = Y;
						HX_STACK_LINE(913)
						_this->width = Width;
						HX_STACK_LINE(913)
						_this->height = Height;
						HX_STACK_LINE(913)
						rect = _this;
					}
					HX_STACK_LINE(913)
					rect->_inPool = false;
					HX_STACK_LINE(913)
					_g1 = rect;
				}
				HX_STACK_LINE(913)
				this->deadzone = _g1;
			}
			HX_STACK_LINE(915)
			{
				HX_STACK_LINE(915)
				::flixel::util::FlxRect _this = this->deadzone;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(915)
				::flixel::util::FlxRect Rect = Camera->deadzone;		HX_STACK_VAR(Rect,"Rect");
				HX_STACK_LINE(915)
				_this->x = Rect->x;
				HX_STACK_LINE(915)
				_this->y = Rect->y;
				HX_STACK_LINE(915)
				_this->width = Rect->width;
				HX_STACK_LINE(915)
				_this->height = Rect->height;
				HX_STACK_LINE(915)
				_this;
			}
		}
	}
	HX_STACK_LINE(918)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,copyFrom,return )

Void FlxCamera_obj::fill( int Color,hx::Null< bool >  __o_BlendAlpha,hx::Null< Float >  __o_FxAlpha,::flash::display::Graphics graphics){
bool BlendAlpha = __o_BlendAlpha.Default(true);
Float FxAlpha = __o_FxAlpha.Default(1.0);
	HX_STACK_FRAME("flixel.FlxCamera","fill",0xa57a338c,"flixel.FlxCamera.fill","flixel/FlxCamera.hx",928,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(BlendAlpha,"BlendAlpha")
	HX_STACK_ARG(FxAlpha,"FxAlpha")
	HX_STACK_ARG(graphics,"graphics")
{
		HX_STACK_LINE(941)
		if (((FxAlpha == (int)0))){
			HX_STACK_LINE(943)
			return null();
		}
		HX_STACK_LINE(946)
		::flash::display::Graphics targetGraphics;		HX_STACK_VAR(targetGraphics,"targetGraphics");
		HX_STACK_LINE(946)
		if (((graphics == null()))){
			HX_STACK_LINE(946)
			targetGraphics = this->canvas->get_graphics();
		}
		else{
			HX_STACK_LINE(946)
			targetGraphics = graphics;
		}
		HX_STACK_LINE(947)
		Color = (int(Color) & int((int)16777215));
		HX_STACK_LINE(950)
		targetGraphics->beginFill(Color,FxAlpha);
		HX_STACK_LINE(951)
		targetGraphics->drawRect((int)0,(int)0,this->width,this->height);
		HX_STACK_LINE(952)
		targetGraphics->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,fill,(void))

Void FlxCamera_obj::drawFX( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","drawFX",0xf9beeb9f,"flixel.FlxCamera.drawFX","flixel/FlxCamera.hx",961,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(962)
		Float alphaComponent;		HX_STACK_VAR(alphaComponent,"alphaComponent");
		HX_STACK_LINE(965)
		if (((this->_fxFlashAlpha > 0.0))){
			HX_STACK_LINE(967)
			alphaComponent = (int((int(this->_fxFlashColor) >> int((int)24))) & int((int)255));
			HX_STACK_LINE(972)
			::flash::display::Graphics _g = this->canvas->get_graphics();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(972)
			this->fill((int(this->_fxFlashColor) & int((int)16777215)),true,(Float((((  (((alphaComponent <= (int)0))) ? Float((int)255) : Float(alphaComponent) )) * this->_fxFlashAlpha)) / Float((int)255)),_g);
		}
		HX_STACK_LINE(977)
		if (((this->_fxFadeAlpha > 0.0))){
			HX_STACK_LINE(979)
			alphaComponent = (int((int(this->_fxFadeColor) >> int((int)24))) & int((int)255));
			HX_STACK_LINE(984)
			::flash::display::Graphics _g1 = this->canvas->get_graphics();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(984)
			this->fill((int(this->_fxFadeColor) & int((int)16777215)),true,(Float((((  (((alphaComponent <= (int)0))) ? Float((int)255) : Float(alphaComponent) )) * this->_fxFadeAlpha)) / Float((int)255)),_g1);
		}
		HX_STACK_LINE(988)
		if (((bool((this->_fxShakeOffset->x != (int)0)) || bool((this->_fxShakeOffset->y != (int)0))))){
			HX_STACK_LINE(990)
			{
				HX_STACK_LINE(990)
				::flash::display::Sprite _g = this->flashSprite;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(990)
				Float _g2 = _g->get_x();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(990)
				Float _g3 = (_g2 + this->_fxShakeOffset->x);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(990)
				_g->set_x(_g3);
			}
			HX_STACK_LINE(991)
			{
				HX_STACK_LINE(991)
				::flash::display::Sprite _g = this->flashSprite;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(991)
				Float _g4 = _g->get_y();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(991)
				Float _g5 = (_g4 + this->_fxShakeOffset->y);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(991)
				_g->set_y(_g5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,drawFX,(void))

Void FlxCamera_obj::setSize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.FlxCamera","setSize",0xa359881a,"flixel.FlxCamera.setSize","flixel/FlxCamera.hx",1025,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(1026)
		this->set_width(Width);
		HX_STACK_LINE(1027)
		this->set_height(Height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setSize,(void))

Void FlxCamera_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.FlxCamera","setPosition",0x5729a882,"flixel.FlxCamera.setPosition","flixel/FlxCamera.hx",1038,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(1039)
		this->x = X;
		HX_STACK_LINE(1040)
		this->y = Y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setPosition,(void))

Void FlxCamera_obj::setBounds( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_UpdateWorld){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","setBounds",0xf7eeb60e,"flixel.FlxCamera.setBounds","flixel/FlxCamera.hx",1053,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(UpdateWorld,"UpdateWorld")
{
		HX_STACK_LINE(1054)
		if (((this->bounds == null()))){
			HX_STACK_LINE(1056)
			::flixel::util::FlxRect _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1056)
			{
				HX_STACK_LINE(1056)
				Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
				HX_STACK_LINE(1056)
				Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
				HX_STACK_LINE(1056)
				Float Width1 = (int)0;		HX_STACK_VAR(Width1,"Width1");
				HX_STACK_LINE(1056)
				Float Height1 = (int)0;		HX_STACK_VAR(Height1,"Height1");
				HX_STACK_LINE(1056)
				::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(1056)
				{
					HX_STACK_LINE(1056)
					::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1056)
					_this->x = X1;
					HX_STACK_LINE(1056)
					_this->y = Y1;
					HX_STACK_LINE(1056)
					_this->width = Width1;
					HX_STACK_LINE(1056)
					_this->height = Height1;
					HX_STACK_LINE(1056)
					rect = _this;
				}
				HX_STACK_LINE(1056)
				rect->_inPool = false;
				HX_STACK_LINE(1056)
				_g = rect;
			}
			HX_STACK_LINE(1056)
			this->bounds = _g;
		}
		HX_STACK_LINE(1058)
		{
			HX_STACK_LINE(1058)
			::flixel::util::FlxRect _this = this->bounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1058)
			_this->x = X;
			HX_STACK_LINE(1058)
			_this->y = Y;
			HX_STACK_LINE(1058)
			_this->width = Width;
			HX_STACK_LINE(1058)
			_this->height = Height;
			HX_STACK_LINE(1058)
			_this;
		}
		HX_STACK_LINE(1059)
		if ((UpdateWorld)){
			HX_STACK_LINE(1061)
			::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1061)
			::flixel::util::FlxRect Rect = this->bounds;		HX_STACK_VAR(Rect,"Rect");
			HX_STACK_LINE(1061)
			_this->x = Rect->x;
			HX_STACK_LINE(1061)
			_this->y = Rect->y;
			HX_STACK_LINE(1061)
			_this->width = Rect->width;
			HX_STACK_LINE(1061)
			_this->height = Rect->height;
			HX_STACK_LINE(1061)
			_this;
		}
		HX_STACK_LINE(1063)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,setBounds,(void))

Void FlxCamera_obj::setScale( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.FlxCamera","setScale",0x46f35511,"flixel.FlxCamera.setScale","flixel/FlxCamera.hx",1067,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(1068)
		this->flashSprite->set_scaleX(X);
		HX_STACK_LINE(1069)
		this->flashSprite->set_scaleY(Y);
		HX_STACK_LINE(1072)
		this->_flashOffset->set_x(((this->width * 0.5) * X));
		HX_STACK_LINE(1073)
		this->_flashOffset->set_y(((this->height * 0.5) * Y));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setScale,(void))

::flixel::util::FlxPoint FlxCamera_obj::getScale( ){
	HX_STACK_FRAME("flixel.FlxCamera","getScale",0x9895fb9d,"flixel.FlxCamera.getScale","flixel/FlxCamera.hx",1081,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1082)
	Float _g = this->flashSprite->get_scaleX();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1082)
	Float _g1 = this->flashSprite->get_scaleY();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1082)
	return this->_point->set(_g,_g1);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,getScale,return )

int FlxCamera_obj::set_width( int Value){
	HX_STACK_FRAME("flixel.FlxCamera","set_width",0x2386b8c0,"flixel.FlxCamera.set_width","flixel/FlxCamera.hx",1086,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1087)
	if (((Value > (int)0))){
		HX_STACK_LINE(1089)
		this->width = Value;
		HX_STACK_LINE(1098)
		if (((this->canvas != null()))){
			HX_STACK_LINE(1100)
			::flash::geom::Rectangle rect = this->canvas->get_scrollRect();		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1101)
			rect->width = Value;
			HX_STACK_LINE(1102)
			this->canvas->set_scrollRect(rect);
			HX_STACK_LINE(1104)
			this->_flashOffset->set_x(((this->width * 0.5) * this->zoom));
			HX_STACK_LINE(1105)
			this->canvas->set_x((-(this->width) * 0.5));
		}
	}
	HX_STACK_LINE(1112)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_width,return )

int FlxCamera_obj::set_height( int Value){
	HX_STACK_FRAME("flixel.FlxCamera","set_height",0xa8aa67ed,"flixel.FlxCamera.set_height","flixel/FlxCamera.hx",1116,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1117)
	if (((Value > (int)0))){
		HX_STACK_LINE(1119)
		this->height = Value;
		HX_STACK_LINE(1128)
		if (((this->canvas != null()))){
			HX_STACK_LINE(1130)
			::flash::geom::Rectangle rect = this->canvas->get_scrollRect();		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1131)
			rect->height = Value;
			HX_STACK_LINE(1132)
			this->canvas->set_scrollRect(rect);
			HX_STACK_LINE(1134)
			this->_flashOffset->set_y(((this->height * 0.5) * this->zoom));
			HX_STACK_LINE(1135)
			this->canvas->set_y((-(this->height) * 0.5));
		}
	}
	HX_STACK_LINE(1142)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_height,return )

Float FlxCamera_obj::set_zoom( Float Zoom){
	HX_STACK_FRAME("flixel.FlxCamera","set_zoom",0x3f00d599,"flixel.FlxCamera.set_zoom","flixel/FlxCamera.hx",1146,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Zoom,"Zoom")
	HX_STACK_LINE(1147)
	if (((Zoom == (int)0))){
		HX_STACK_LINE(1149)
		this->zoom = ::flixel::FlxCamera_obj::defaultZoom;
	}
	else{
		HX_STACK_LINE(1153)
		this->zoom = Zoom;
	}
	HX_STACK_LINE(1155)
	this->setScale(this->zoom,this->zoom);
	HX_STACK_LINE(1156)
	return this->zoom;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_zoom,return )

Float FlxCamera_obj::set_alpha( Float Alpha){
	HX_STACK_FRAME("flixel.FlxCamera","set_alpha",0x7abaaa18,"flixel.FlxCamera.set_alpha","flixel/FlxCamera.hx",1160,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_LINE(1161)
	{
		HX_STACK_LINE(1161)
		Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(1161)
		if (((Alpha < (int)0))){
			HX_STACK_LINE(1161)
			lowerBound = (int)0;
		}
		else{
			HX_STACK_LINE(1161)
			lowerBound = Alpha;
		}
		HX_STACK_LINE(1161)
		if (((lowerBound > (int)1))){
			HX_STACK_LINE(1161)
			this->alpha = (int)1;
		}
		else{
			HX_STACK_LINE(1161)
			this->alpha = lowerBound;
		}
	}
	HX_STACK_LINE(1165)
	this->canvas->set_alpha(Alpha);
	HX_STACK_LINE(1167)
	return Alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_alpha,return )

Float FlxCamera_obj::set_angle( Float Angle){
	HX_STACK_FRAME("flixel.FlxCamera","set_angle",0x7c06468d,"flixel.FlxCamera.set_angle","flixel/FlxCamera.hx",1171,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_LINE(1172)
	this->angle = Angle;
	HX_STACK_LINE(1173)
	this->flashSprite->set_rotation(Angle);
	HX_STACK_LINE(1174)
	return Angle;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_angle,return )

int FlxCamera_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.FlxCamera","set_color",0xa380741d,"flixel.FlxCamera.set_color","flixel/FlxCamera.hx",1178,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(1179)
	this->color = (int(Color) & int((int)16777215));
	HX_STACK_LINE(1190)
	::flash::geom::ColorTransform colorTransform = this->canvas->get_transform()->get_colorTransform();		HX_STACK_VAR(colorTransform,"colorTransform");
	HX_STACK_LINE(1191)
	colorTransform->redMultiplier = (Float(((int(this->color) >> int((int)16)))) / Float((int)255));
	HX_STACK_LINE(1192)
	colorTransform->greenMultiplier = (Float(((int((int(this->color) >> int((int)8))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1193)
	colorTransform->blueMultiplier = (Float(((int(this->color) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1194)
	this->canvas->get_transform()->set_colorTransform(colorTransform);
	HX_STACK_LINE(1197)
	return Color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_color,return )

bool FlxCamera_obj::set_antialiasing( bool Antialiasing){
	HX_STACK_FRAME("flixel.FlxCamera","set_antialiasing",0x0f9a3f7a,"flixel.FlxCamera.set_antialiasing","flixel/FlxCamera.hx",1201,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Antialiasing,"Antialiasing")
	HX_STACK_LINE(1202)
	this->antialiasing = Antialiasing;
	HX_STACK_LINE(1206)
	return Antialiasing;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_antialiasing,return )

int FlxCamera_obj::STYLE_LOCKON;

int FlxCamera_obj::STYLE_PLATFORMER;

int FlxCamera_obj::STYLE_TOPDOWN;

int FlxCamera_obj::STYLE_TOPDOWN_TIGHT;

int FlxCamera_obj::STYLE_SCREEN_BY_SCREEN;

int FlxCamera_obj::STYLE_NO_DEAD_ZONE;

int FlxCamera_obj::SHAKE_BOTH_AXES;

int FlxCamera_obj::SHAKE_HORIZONTAL_ONLY;

int FlxCamera_obj::SHAKE_VERTICAL_ONLY;

Float FlxCamera_obj::defaultZoom;

Array< ::Dynamic > FlxCamera_obj::defaultCameras;

::flixel::system::layer::DrawStackItem FlxCamera_obj::_storageHead;


FlxCamera_obj::FlxCamera_obj()
{
}

void FlxCamera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCamera);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(followLerp,"followLerp");
	HX_MARK_MEMBER_NAME(deadzone,"deadzone");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(scroll,"scroll");
	HX_MARK_MEMBER_NAME(bgColor,"bgColor");
	HX_MARK_MEMBER_NAME(useBgAlphaBlending,"useBgAlphaBlending");
	HX_MARK_MEMBER_NAME(flashSprite,"flashSprite");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(followLead,"followLead");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashOffset,"_flashOffset");
	HX_MARK_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_MARK_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_MARK_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_MARK_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_MARK_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_MARK_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_MARK_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_MARK_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_MARK_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_MARK_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_MARK_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_MARK_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_MARK_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_MARK_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_MARK_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_MARK_MEMBER_NAME(_fxShakeDirection,"_fxShakeDirection");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(_currentStackItem,"_currentStackItem");
	HX_MARK_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
	HX_MARK_END_CLASS();
}

void FlxCamera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(style,"style");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(followLerp,"followLerp");
	HX_VISIT_MEMBER_NAME(deadzone,"deadzone");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(scroll,"scroll");
	HX_VISIT_MEMBER_NAME(bgColor,"bgColor");
	HX_VISIT_MEMBER_NAME(useBgAlphaBlending,"useBgAlphaBlending");
	HX_VISIT_MEMBER_NAME(flashSprite,"flashSprite");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(followLead,"followLead");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashOffset,"_flashOffset");
	HX_VISIT_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_VISIT_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_VISIT_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_VISIT_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_VISIT_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_VISIT_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_VISIT_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_VISIT_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_VISIT_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_VISIT_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_VISIT_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_VISIT_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_VISIT_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_VISIT_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_VISIT_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_VISIT_MEMBER_NAME(_fxShakeDirection,"_fxShakeDirection");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(_currentStackItem,"_currentStackItem");
	HX_VISIT_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
}

Dynamic FlxCamera_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		if (HX_FIELD_EQ(inName,"fade") ) { return fade_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { return style; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		if (HX_FIELD_EQ(inName,"stopFX") ) { return stopFX_dyn(); }
		if (HX_FIELD_EQ(inName,"drawFX") ) { return drawFX_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return bgColor; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"focusOn") ) { return focusOn_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { return deadzone; }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"setScale") ) { return setScale_dyn(); }
		if (HX_FIELD_EQ(inName,"getScale") ) { return getScale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return set_zoom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { return _fxFadeIn; }
		if (HX_FIELD_EQ(inName,"setBounds") ) { return setBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"followLerp") ) { return followLerp; }
		if (HX_FIELD_EQ(inName,"followLead") ) { return followLead; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"updateFade") ) { return updateFade_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { return defaultZoom; }
		if (HX_FIELD_EQ(inName,"flashSprite") ) { return flashSprite; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"updateFlash") ) { return updateFlash_dyn(); }
		if (HX_FIELD_EQ(inName,"updateShake") ) { return updateShake_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storageHead") ) { return _storageHead; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"_flashOffset") ) { return _flashOffset; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { return _fxFadeColor; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { return _fxFadeAlpha; }
		if (HX_FIELD_EQ(inName,"updateFollow") ) { return updateFollow_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { return _fxFlashColor; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { return _fxFlashAlpha; }
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { return _scrollTarget; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultCameras") ) { return defaultCameras; }
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { return _fxShakeOffset; }
		if (HX_FIELD_EQ(inName,"clearDrawStack") ) { return clearDrawStack_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { return _fxFadeDuration; }
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { return _fxFadeComplete; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { return _fxFlashDuration; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { return _fxFlashComplete; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { return _fxShakeDuration; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { return _fxShakeComplete; }
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { return _headOfDrawStack; }
		if (HX_FIELD_EQ(inName,"getDrawStackItem") ) { return getDrawStackItem_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antialiasing") ) { return set_antialiasing_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { return _fxShakeIntensity; }
		if (HX_FIELD_EQ(inName,"_fxShakeDirection") ) { return _fxShakeDirection; }
		if (HX_FIELD_EQ(inName,"_currentStackItem") ) { return _currentStackItem; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useBgAlphaBlending") ) { return useBgAlphaBlending; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { return _lastTargetPosition; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxCamera_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp) return set_zoom(inValue);zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp) return set_width(inValue);width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp) return set_angle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp) return set_color(inValue);color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scroll") ) { scroll=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp) return set_height(inValue);height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { bgColor=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { deadzone=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { _fxFadeIn=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"followLerp") ) { followLerp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"followLead") ) { followLead=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { defaultZoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flashSprite") ) { flashSprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storageHead") ) { _storageHead=inValue.Cast< ::flixel::system::layer::DrawStackItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp) return set_antialiasing(inValue);antialiasing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashOffset") ) { _flashOffset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { _fxFadeColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { _fxFadeAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { _fxFlashColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { _fxFlashAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { _scrollTarget=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultCameras") ) { defaultCameras=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { _fxShakeOffset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { _fxFadeDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { _fxFadeComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { _fxFlashDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { _fxFlashComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { _fxShakeDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { _fxShakeComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { _headOfDrawStack=inValue.Cast< ::flixel::system::layer::DrawStackItem >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { _fxShakeIntensity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDirection") ) { _fxShakeDirection=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentStackItem") ) { _currentStackItem=inValue.Cast< ::flixel::system::layer::DrawStackItem >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useBgAlphaBlending") ) { useBgAlphaBlending=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { _lastTargetPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxCamera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("style"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("followLerp"));
	outFields->push(HX_CSTRING("deadzone"));
	outFields->push(HX_CSTRING("bounds"));
	outFields->push(HX_CSTRING("scroll"));
	outFields->push(HX_CSTRING("bgColor"));
	outFields->push(HX_CSTRING("useBgAlphaBlending"));
	outFields->push(HX_CSTRING("flashSprite"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("zoom"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("antialiasing"));
	outFields->push(HX_CSTRING("followLead"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_flashOffset"));
	outFields->push(HX_CSTRING("_fxFlashColor"));
	outFields->push(HX_CSTRING("_fxFlashDuration"));
	outFields->push(HX_CSTRING("_fxFlashAlpha"));
	outFields->push(HX_CSTRING("_fxFadeColor"));
	outFields->push(HX_CSTRING("_lastTargetPosition"));
	outFields->push(HX_CSTRING("_scrollTarget"));
	outFields->push(HX_CSTRING("_fxFadeDuration"));
	outFields->push(HX_CSTRING("_fxFadeIn"));
	outFields->push(HX_CSTRING("_fxFadeAlpha"));
	outFields->push(HX_CSTRING("_fxShakeIntensity"));
	outFields->push(HX_CSTRING("_fxShakeDuration"));
	outFields->push(HX_CSTRING("_fxShakeOffset"));
	outFields->push(HX_CSTRING("_fxShakeDirection"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("canvas"));
	outFields->push(HX_CSTRING("_currentStackItem"));
	outFields->push(HX_CSTRING("_headOfDrawStack"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("STYLE_LOCKON"),
	HX_CSTRING("STYLE_PLATFORMER"),
	HX_CSTRING("STYLE_TOPDOWN"),
	HX_CSTRING("STYLE_TOPDOWN_TIGHT"),
	HX_CSTRING("STYLE_SCREEN_BY_SCREEN"),
	HX_CSTRING("STYLE_NO_DEAD_ZONE"),
	HX_CSTRING("SHAKE_BOTH_AXES"),
	HX_CSTRING("SHAKE_HORIZONTAL_ONLY"),
	HX_CSTRING("SHAKE_VERTICAL_ONLY"),
	HX_CSTRING("defaultZoom"),
	HX_CSTRING("defaultCameras"),
	HX_CSTRING("_storageHead"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,y),HX_CSTRING("y")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,style),HX_CSTRING("style")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(FlxCamera_obj,target),HX_CSTRING("target")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,followLerp),HX_CSTRING("followLerp")},
	{hx::fsObject /*::flixel::util::FlxRect*/ ,(int)offsetof(FlxCamera_obj,deadzone),HX_CSTRING("deadzone")},
	{hx::fsObject /*::flixel::util::FlxRect*/ ,(int)offsetof(FlxCamera_obj,bounds),HX_CSTRING("bounds")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,scroll),HX_CSTRING("scroll")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,bgColor),HX_CSTRING("bgColor")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,useBgAlphaBlending),HX_CSTRING("useBgAlphaBlending")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,flashSprite),HX_CSTRING("flashSprite")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,height),HX_CSTRING("height")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,zoom),HX_CSTRING("zoom")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,alpha),HX_CSTRING("alpha")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,angle),HX_CSTRING("angle")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,color),HX_CSTRING("color")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,antialiasing),HX_CSTRING("antialiasing")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,followLead),HX_CSTRING("followLead")},
	{hx::fsObject /*::flash::geom::Rectangle*/ ,(int)offsetof(FlxCamera_obj,_flashRect),HX_CSTRING("_flashRect")},
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(FlxCamera_obj,_flashPoint),HX_CSTRING("_flashPoint")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_flashOffset),HX_CSTRING("_flashOffset")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,_fxFlashColor),HX_CSTRING("_fxFlashColor")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFlashDuration),HX_CSTRING("_fxFlashDuration")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,_fxFlashComplete),HX_CSTRING("_fxFlashComplete")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFlashAlpha),HX_CSTRING("_fxFlashAlpha")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,_fxFadeColor),HX_CSTRING("_fxFadeColor")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_lastTargetPosition),HX_CSTRING("_lastTargetPosition")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_scrollTarget),HX_CSTRING("_scrollTarget")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFadeDuration),HX_CSTRING("_fxFadeDuration")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,_fxFadeIn),HX_CSTRING("_fxFadeIn")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,_fxFadeComplete),HX_CSTRING("_fxFadeComplete")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFadeAlpha),HX_CSTRING("_fxFadeAlpha")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxShakeIntensity),HX_CSTRING("_fxShakeIntensity")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxShakeDuration),HX_CSTRING("_fxShakeDuration")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,_fxShakeComplete),HX_CSTRING("_fxShakeComplete")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_fxShakeOffset),HX_CSTRING("_fxShakeOffset")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,_fxShakeDirection),HX_CSTRING("_fxShakeDirection")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_point),HX_CSTRING("_point")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,canvas),HX_CSTRING("canvas")},
	{hx::fsObject /*::flixel::system::layer::DrawStackItem*/ ,(int)offsetof(FlxCamera_obj,_currentStackItem),HX_CSTRING("_currentStackItem")},
	{hx::fsObject /*::flixel::system::layer::DrawStackItem*/ ,(int)offsetof(FlxCamera_obj,_headOfDrawStack),HX_CSTRING("_headOfDrawStack")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("style"),
	HX_CSTRING("target"),
	HX_CSTRING("followLerp"),
	HX_CSTRING("deadzone"),
	HX_CSTRING("bounds"),
	HX_CSTRING("scroll"),
	HX_CSTRING("bgColor"),
	HX_CSTRING("useBgAlphaBlending"),
	HX_CSTRING("flashSprite"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("zoom"),
	HX_CSTRING("alpha"),
	HX_CSTRING("angle"),
	HX_CSTRING("color"),
	HX_CSTRING("antialiasing"),
	HX_CSTRING("followLead"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_flashOffset"),
	HX_CSTRING("_fxFlashColor"),
	HX_CSTRING("_fxFlashDuration"),
	HX_CSTRING("_fxFlashComplete"),
	HX_CSTRING("_fxFlashAlpha"),
	HX_CSTRING("_fxFadeColor"),
	HX_CSTRING("_lastTargetPosition"),
	HX_CSTRING("_scrollTarget"),
	HX_CSTRING("_fxFadeDuration"),
	HX_CSTRING("_fxFadeIn"),
	HX_CSTRING("_fxFadeComplete"),
	HX_CSTRING("_fxFadeAlpha"),
	HX_CSTRING("_fxShakeIntensity"),
	HX_CSTRING("_fxShakeDuration"),
	HX_CSTRING("_fxShakeComplete"),
	HX_CSTRING("_fxShakeOffset"),
	HX_CSTRING("_fxShakeDirection"),
	HX_CSTRING("_point"),
	HX_CSTRING("canvas"),
	HX_CSTRING("_currentStackItem"),
	HX_CSTRING("_headOfDrawStack"),
	HX_CSTRING("getDrawStackItem"),
	HX_CSTRING("clearDrawStack"),
	HX_CSTRING("render"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("updateFollow"),
	HX_CSTRING("updateFlash"),
	HX_CSTRING("updateFade"),
	HX_CSTRING("updateShake"),
	HX_CSTRING("follow"),
	HX_CSTRING("focusOn"),
	HX_CSTRING("flash"),
	HX_CSTRING("fade"),
	HX_CSTRING("shake"),
	HX_CSTRING("stopFX"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("fill"),
	HX_CSTRING("drawFX"),
	HX_CSTRING("setSize"),
	HX_CSTRING("setPosition"),
	HX_CSTRING("setBounds"),
	HX_CSTRING("setScale"),
	HX_CSTRING("getScale"),
	HX_CSTRING("set_width"),
	HX_CSTRING("set_height"),
	HX_CSTRING("set_zoom"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("set_color"),
	HX_CSTRING("set_antialiasing"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_LOCKON,"STYLE_LOCKON");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_PLATFORMER,"STYLE_PLATFORMER");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN,"STYLE_TOPDOWN");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN_TIGHT,"STYLE_TOPDOWN_TIGHT");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_SCREEN_BY_SCREEN,"STYLE_SCREEN_BY_SCREEN");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_NO_DEAD_ZONE,"STYLE_NO_DEAD_ZONE");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::SHAKE_BOTH_AXES,"SHAKE_BOTH_AXES");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::SHAKE_HORIZONTAL_ONLY,"SHAKE_HORIZONTAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::SHAKE_VERTICAL_ONLY,"SHAKE_VERTICAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::defaultCameras,"defaultCameras");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::_storageHead,"_storageHead");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_LOCKON,"STYLE_LOCKON");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_PLATFORMER,"STYLE_PLATFORMER");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN,"STYLE_TOPDOWN");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN_TIGHT,"STYLE_TOPDOWN_TIGHT");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_SCREEN_BY_SCREEN,"STYLE_SCREEN_BY_SCREEN");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_NO_DEAD_ZONE,"STYLE_NO_DEAD_ZONE");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::SHAKE_BOTH_AXES,"SHAKE_BOTH_AXES");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::SHAKE_HORIZONTAL_ONLY,"SHAKE_HORIZONTAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::SHAKE_VERTICAL_ONLY,"SHAKE_VERTICAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::defaultCameras,"defaultCameras");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::_storageHead,"_storageHead");
};

#endif

Class FlxCamera_obj::__mClass;

void FlxCamera_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxCamera"), hx::TCanCast< FlxCamera_obj> ,sStaticFields,sMemberFields,
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

void FlxCamera_obj::__boot()
{
	STYLE_LOCKON= (int)0;
	STYLE_PLATFORMER= (int)1;
	STYLE_TOPDOWN= (int)2;
	STYLE_TOPDOWN_TIGHT= (int)3;
	STYLE_SCREEN_BY_SCREEN= (int)4;
	STYLE_NO_DEAD_ZONE= (int)5;
	SHAKE_BOTH_AXES= (int)0;
	SHAKE_HORIZONTAL_ONLY= (int)1;
	SHAKE_VERTICAL_ONLY= (int)2;
}

} // end namespace flixel
