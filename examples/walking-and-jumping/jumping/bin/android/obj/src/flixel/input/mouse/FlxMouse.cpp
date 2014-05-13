#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_ui_Mouse
#include <flash/ui/Mouse.h>
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
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_input_mouse__FlxMouse_GraphicCursor
#include <flixel/input/mouse/_FlxMouse/GraphicCursor.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_replay_MouseRecord
#include <flixel/system/replay/MouseRecord.h>
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
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace input{
namespace mouse{

Void FlxMouse_obj::__construct(::flash::display::Sprite CursorContainer)
{
HX_STACK_FRAME("flixel.input.mouse.FlxMouse","new",0x1251bd04,"flixel.input.mouse.FlxMouse.new","flixel/input/mouse/FlxMouse.hx",35,0xe4e80b89)
HX_STACK_THIS(this)
HX_STACK_ARG(CursorContainer,"CursorContainer")
{
	HX_STACK_LINE(134)
	this->_lastWheel = (int)0;
	HX_STACK_LINE(133)
	this->_lastY = (int)0;
	HX_STACK_LINE(132)
	this->_lastX = (int)0;
	HX_STACK_LINE(127)
	this->_visibleWhenFocusLost = true;
	HX_STACK_LINE(126)
	this->_wheelUsed = false;
	HX_STACK_LINE(124)
	this->_cursor = null();
	HX_STACK_LINE(63)
	this->useSystemCursor = false;
	HX_STACK_LINE(59)
	this->visible = false;
	HX_STACK_LINE(49)
	this->screenY = (int)0;
	HX_STACK_LINE(45)
	this->screenX = (int)0;
	HX_STACK_LINE(41)
	this->wheel = (int)0;
	HX_STACK_LINE(429)
	super::__construct(null(),null());
	HX_STACK_LINE(431)
	this->cursorContainer = CursorContainer;
	HX_STACK_LINE(432)
	this->cursorContainer->set_mouseChildren(false);
	HX_STACK_LINE(433)
	this->cursorContainer->set_mouseEnabled(false);
	HX_STACK_LINE(435)
	::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(435)
	{
		HX_STACK_LINE(435)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(435)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(435)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(435)
		point->_inPool = false;
		HX_STACK_LINE(435)
		_g = point;
	}
	HX_STACK_LINE(435)
	this->_point = _g;
	HX_STACK_LINE(436)
	::flixel::util::FlxPoint _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(436)
	{
		HX_STACK_LINE(436)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(436)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(436)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(436)
		point->_inPool = false;
		HX_STACK_LINE(436)
		_g1 = point;
	}
	HX_STACK_LINE(436)
	this->_globalScreenPosition = _g1;
	HX_STACK_LINE(438)
	::flixel::input::mouse::FlxMouseButton _g2 = ::flixel::input::mouse::FlxMouseButton_obj::__new((int)-1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(438)
	this->_leftButton = _g2;
	HX_STACK_LINE(440)
	::flash::display::Stage _g3 = ::flash::Lib_obj::get_current()->get_stage();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(440)
	this->_stage = _g3;
	HX_STACK_LINE(441)
	this->_stage->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->_leftButton->onDown_dyn(),null(),null(),null());
	HX_STACK_LINE(442)
	this->_stage->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->_leftButton->onUp_dyn(),null(),null(),null());
	HX_STACK_LINE(445)
	::flixel::input::mouse::FlxMouseButton _g4 = ::flixel::input::mouse::FlxMouseButton_obj::__new((int)-2);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(445)
	this->_middleButton = _g4;
	HX_STACK_LINE(446)
	::flixel::input::mouse::FlxMouseButton _g5 = ::flixel::input::mouse::FlxMouseButton_obj::__new((int)-3);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(446)
	this->_rightButton = _g5;
	HX_STACK_LINE(448)
	this->_stage->addEventListener(::flash::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN,this->_middleButton->onDown_dyn(),null(),null(),null());
	HX_STACK_LINE(449)
	this->_stage->addEventListener(::flash::events::MouseEvent_obj::MIDDLE_MOUSE_UP,this->_middleButton->onUp_dyn(),null(),null(),null());
	HX_STACK_LINE(450)
	this->_stage->addEventListener(::flash::events::MouseEvent_obj::RIGHT_MOUSE_DOWN,this->_rightButton->onDown_dyn(),null(),null(),null());
	HX_STACK_LINE(451)
	this->_stage->addEventListener(::flash::events::MouseEvent_obj::RIGHT_MOUSE_UP,this->_rightButton->onUp_dyn(),null(),null(),null());
	HX_STACK_LINE(453)
	this->_stage->addEventListener(::flash::events::Event_obj::MOUSE_LEAVE,this->onMouseLeave_dyn(),null(),null(),null());
	HX_STACK_LINE(456)
	this->_stage->addEventListener(::flash::events::MouseEvent_obj::MOUSE_WHEEL,this->onMouseWheel_dyn(),null(),null(),null());
	HX_STACK_LINE(458)
	::flixel::FlxG_obj::signals->gameStarted->add(this->onGameStart_dyn());
	HX_STACK_LINE(459)
	::flash::ui::Mouse_obj::hide();
}
;
	return null();
}

//FlxMouse_obj::~FlxMouse_obj() { }

Dynamic FlxMouse_obj::__CreateEmpty() { return  new FlxMouse_obj; }
hx::ObjectPtr< FlxMouse_obj > FlxMouse_obj::__new(::flash::display::Sprite CursorContainer)
{  hx::ObjectPtr< FlxMouse_obj > result = new FlxMouse_obj();
	result->__construct(CursorContainer);
	return result;}

Dynamic FlxMouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMouse_obj > result = new FlxMouse_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *FlxMouse_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxInput_obj)) return operator ::flixel::interfaces::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

Void FlxMouse_obj::load( Dynamic Graphic,hx::Null< Float >  __o_Scale,hx::Null< int >  __o_XOffset,hx::Null< int >  __o_YOffset){
Float Scale = __o_Scale.Default(1);
int XOffset = __o_XOffset.Default(0);
int YOffset = __o_YOffset.Default(0);
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","load",0xf3e8bd02,"flixel.input.mouse.FlxMouse.load","flixel/input/mouse/FlxMouse.hx",161,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Scale,"Scale")
	HX_STACK_ARG(XOffset,"XOffset")
	HX_STACK_ARG(YOffset,"YOffset")
{
		HX_STACK_LINE(163)
		if (((this->_cursor != null()))){
			HX_STACK_LINE(165)
			this->cursorContainer->removeChild(this->_cursor);
		}
		HX_STACK_LINE(169)
		if (((Graphic == null()))){
			HX_STACK_LINE(171)
			::flixel::input::mouse::_FlxMouse::GraphicCursor _g = ::flixel::input::mouse::_FlxMouse::GraphicCursor_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(171)
			Graphic = _g;
		}
		HX_STACK_LINE(174)
		if ((::Std_obj::is(Graphic,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(176)
			::flash::display::Bitmap _g1 = ::Type_obj::createInstance(Graphic,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(176)
			this->_cursor = _g1;
		}
		else{
			HX_STACK_LINE(178)
			if ((::Std_obj::is(Graphic,hx::ClassOf< ::flash::display::BitmapData >()))){
				HX_STACK_LINE(180)
				::flash::display::BitmapData _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(180)
				_g2 = hx::TCast< flash::display::BitmapData >::cast(Graphic);
				HX_STACK_LINE(180)
				::flash::display::Bitmap _g3 = ::flash::display::Bitmap_obj::__new(_g2,null(),null());		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(180)
				this->_cursor = _g3;
			}
			else{
				HX_STACK_LINE(182)
				if ((::Std_obj::is(Graphic,hx::ClassOf< ::String >()))){
					HX_STACK_LINE(184)
					::flash::display::BitmapData _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(184)
					{
						HX_STACK_LINE(184)
						::String id = Graphic;		HX_STACK_VAR(id,"id");
						HX_STACK_LINE(184)
						_g4 = ::openfl::Assets_obj::getBitmapData(id,false);
					}
					HX_STACK_LINE(184)
					::flash::display::Bitmap _g5 = ::flash::display::Bitmap_obj::__new(_g4,null(),null());		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(184)
					this->_cursor = _g5;
				}
				else{
					HX_STACK_LINE(188)
					::flixel::input::mouse::_FlxMouse::GraphicCursor _g6 = ::flixel::input::mouse::_FlxMouse::GraphicCursor_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(188)
					::flash::display::Bitmap _g7 = ::flash::display::Bitmap_obj::__new(_g6,null(),null());		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(188)
					this->_cursor = _g7;
				}
			}
		}
		HX_STACK_LINE(191)
		this->_cursor->set_x(XOffset);
		HX_STACK_LINE(192)
		this->_cursor->set_y(YOffset);
		HX_STACK_LINE(193)
		this->_cursor->set_scaleX(Scale);
		HX_STACK_LINE(194)
		this->_cursor->set_scaleY(Scale);
		HX_STACK_LINE(226)
		this->cursorContainer->addChild(this->_cursor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxMouse_obj,load,(void))

Void FlxMouse_obj::unload( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","unload",0x5a7132db,"flixel.input.mouse.FlxMouse.unload","flixel/input/mouse/FlxMouse.hx",236,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(236)
		if (((this->_cursor != null()))){
			HX_STACK_LINE(238)
			if ((this->cursorContainer->get_visible())){
				HX_STACK_LINE(240)
				this->load(null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(244)
				this->cursorContainer->removeChild(this->_cursor);
				HX_STACK_LINE(245)
				this->_cursor = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,unload,(void))

::flixel::util::FlxPoint FlxMouse_obj::getWorldPosition( ::flixel::FlxCamera Camera,::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","getWorldPosition",0x19d33b81,"flixel.input.mouse.FlxMouse.getWorldPosition","flixel/input/mouse/FlxMouse.hx",319,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(320)
	if (((Camera == null()))){
		HX_STACK_LINE(322)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(324)
	if (((point == null()))){
		HX_STACK_LINE(326)
		::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(326)
		{
			HX_STACK_LINE(326)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(326)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(326)
			::flixel::util::FlxPoint point1 = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(326)
			point1->_inPool = false;
			HX_STACK_LINE(326)
			_g = point1;
		}
		HX_STACK_LINE(326)
		point = _g;
	}
	HX_STACK_LINE(328)
	this->getScreenPosition(Camera,this->_point);
	HX_STACK_LINE(329)
	point->set((this->_point->x + Camera->scroll->x),(this->_point->y + Camera->scroll->y));
	HX_STACK_LINE(330)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouse_obj,getWorldPosition,return )

::flixel::util::FlxPoint FlxMouse_obj::getScreenPosition( ::flixel::FlxCamera Camera,::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","getScreenPosition",0x3fbdd70f,"flixel.input.mouse.FlxMouse.getScreenPosition","flixel/input/mouse/FlxMouse.hx",342,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(343)
	if (((Camera == null()))){
		HX_STACK_LINE(345)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(347)
	if (((point == null()))){
		HX_STACK_LINE(349)
		::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(349)
		{
			HX_STACK_LINE(349)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(349)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(349)
			::flixel::util::FlxPoint point1 = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(349)
			point1->_inPool = false;
			HX_STACK_LINE(349)
			_g = point1;
		}
		HX_STACK_LINE(349)
		point = _g;
	}
	HX_STACK_LINE(351)
	point->set_x((Float(((this->_globalScreenPosition->x - Camera->x))) / Float(Camera->zoom)));
	HX_STACK_LINE(352)
	point->set_y((Float(((this->_globalScreenPosition->y - Camera->y))) / Float(Camera->zoom)));
	HX_STACK_LINE(353)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouse_obj,getScreenPosition,return )

Void FlxMouse_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","destroy",0x77a13b9e,"flixel.input.mouse.FlxMouse.destroy","flixel/input/mouse/FlxMouse.hx",361,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(362)
		if (((this->_stage != null()))){
			HX_STACK_LINE(364)
			this->_stage->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->_leftButton->onDown_dyn(),null());
			HX_STACK_LINE(365)
			this->_stage->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->_leftButton->onUp_dyn(),null());
			HX_STACK_LINE(368)
			this->_stage->removeEventListener(::flash::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN,this->_middleButton->onDown_dyn(),null());
			HX_STACK_LINE(369)
			this->_stage->removeEventListener(::flash::events::MouseEvent_obj::MIDDLE_MOUSE_UP,this->_middleButton->onUp_dyn(),null());
			HX_STACK_LINE(370)
			this->_stage->removeEventListener(::flash::events::MouseEvent_obj::RIGHT_MOUSE_DOWN,this->_rightButton->onDown_dyn(),null());
			HX_STACK_LINE(371)
			this->_stage->removeEventListener(::flash::events::MouseEvent_obj::RIGHT_MOUSE_UP,this->_rightButton->onUp_dyn(),null());
			HX_STACK_LINE(373)
			this->_stage->removeEventListener(::flash::events::Event_obj::MOUSE_LEAVE,this->onMouseLeave_dyn(),null());
			HX_STACK_LINE(376)
			this->_stage->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_WHEEL,this->onMouseWheel_dyn(),null());
		}
		HX_STACK_LINE(379)
		::flixel::util::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->_point);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(379)
		this->_point = _g;
		HX_STACK_LINE(380)
		::flixel::util::FlxPoint _g1 = ::flixel::util::FlxDestroyUtil_obj::put(this->_globalScreenPosition);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(380)
		this->_globalScreenPosition = _g1;
		HX_STACK_LINE(382)
		this->cursorContainer = null();
		HX_STACK_LINE(383)
		this->_cursor = null();
		HX_STACK_LINE(389)
		::flixel::input::mouse::FlxMouseButton _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_leftButton);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(389)
		this->_leftButton = _g2;
		HX_STACK_LINE(391)
		::flixel::input::mouse::FlxMouseButton _g3 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_middleButton);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(391)
		this->_middleButton = _g3;
		HX_STACK_LINE(392)
		::flixel::input::mouse::FlxMouseButton _g4 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_rightButton);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(392)
		this->_rightButton = _g4;
		HX_STACK_LINE(395)
		::flash::display::BitmapData _g5 = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_cursorBitmapData);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(395)
		this->_cursorBitmapData = _g5;
		HX_STACK_LINE(396)
		::flixel::FlxG_obj::signals->gameStarted->remove(this->onGameStart_dyn());
		HX_STACK_LINE(398)
		this->super::destroy();
	}
return null();
}


Void FlxMouse_obj::setGlobalScreenPositionUnsafe( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","setGlobalScreenPositionUnsafe",0xfd93bf24,"flixel.input.mouse.FlxMouse.setGlobalScreenPositionUnsafe","flixel/input/mouse/FlxMouse.hx",407,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(407)
		this->_globalScreenPosition->set(X,Y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouse_obj,setGlobalScreenPositionUnsafe,(void))

Void FlxMouse_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","reset",0xe595a773,"flixel.input.mouse.FlxMouse.reset","flixel/input/mouse/FlxMouse.hx",414,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(415)
		{
			HX_STACK_LINE(415)
			::flixel::input::mouse::FlxMouseButton _this = this->_leftButton;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(415)
			_this->current = (int)0;
			HX_STACK_LINE(415)
			_this->last = (int)0;
		}
		HX_STACK_LINE(418)
		{
			HX_STACK_LINE(418)
			::flixel::input::mouse::FlxMouseButton _this = this->_middleButton;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(418)
			_this->current = (int)0;
			HX_STACK_LINE(418)
			_this->last = (int)0;
		}
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(419)
			::flixel::input::mouse::FlxMouseButton _this = this->_rightButton;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(419)
			_this->current = (int)0;
			HX_STACK_LINE(419)
			_this->last = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,reset,(void))

Void FlxMouse_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","update",0x7bea17e5,"flixel.input.mouse.FlxMouse.update","flixel/input/mouse/FlxMouse.hx",467,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(468)
		Float _g = ::flixel::FlxG_obj::game->get_mouseX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(468)
		int _g1 = ::Math_obj::floor(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(468)
		this->_globalScreenPosition->set_x(_g1);
		HX_STACK_LINE(469)
		Float _g2 = ::flixel::FlxG_obj::game->get_mouseY();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(469)
		int _g3 = ::Math_obj::floor(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(469)
		this->_globalScreenPosition->set_y(_g3);
		HX_STACK_LINE(472)
		if ((this->visible)){
			HX_STACK_LINE(474)
			this->cursorContainer->set_x(this->_globalScreenPosition->x);
			HX_STACK_LINE(475)
			this->cursorContainer->set_y(this->_globalScreenPosition->y);
		}
		HX_STACK_LINE(485)
		this->updateCursor();
		HX_STACK_LINE(488)
		this->_leftButton->update();
		HX_STACK_LINE(490)
		this->_middleButton->update();
		HX_STACK_LINE(491)
		this->_rightButton->update();
		HX_STACK_LINE(495)
		if ((!(this->_wheelUsed))){
			HX_STACK_LINE(497)
			this->wheel = (int)0;
		}
		HX_STACK_LINE(499)
		this->_wheelUsed = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,update,(void))

Void FlxMouse_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onFocus",0xede20cdd,"flixel.input.mouse.FlxMouse.onFocus","flixel/input/mouse/FlxMouse.hx",506,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(507)
		this->reset();
		HX_STACK_LINE(510)
		this->set_useSystemCursor(this->useSystemCursor);
		HX_STACK_LINE(512)
		this->set_visible(this->_visibleWhenFocusLost);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onFocus,(void))

Void FlxMouse_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onFocusLost",0xc7f71561,"flixel.input.mouse.FlxMouse.onFocusLost","flixel/input/mouse/FlxMouse.hx",520,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(522)
		this->_visibleWhenFocusLost = this->visible;
		HX_STACK_LINE(524)
		if ((this->visible)){
			HX_STACK_LINE(526)
			this->set_visible(false);
		}
		HX_STACK_LINE(529)
		::flash::ui::Mouse_obj::show();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onFocusLost,(void))

Void FlxMouse_obj::onGameStart( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onGameStart",0x61da7695,"flixel.input.mouse.FlxMouse.onGameStart","flixel/input/mouse/FlxMouse.hx",538,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(538)
		this->set_visible(this->visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onGameStart,(void))

Void FlxMouse_obj::updateCursor( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","updateCursor",0x5b45949b,"flixel.input.mouse.FlxMouse.updateCursor","flixel/input/mouse/FlxMouse.hx",546,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(547)
		this->getScreenPosition(null(),this->_point);
		HX_STACK_LINE(548)
		int _g = ::Std_obj::_int(this->_point->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(548)
		this->screenX = _g;
		HX_STACK_LINE(549)
		int _g1 = ::Std_obj::_int(this->_point->y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(549)
		this->screenY = _g1;
		HX_STACK_LINE(551)
		this->getWorldPosition(null(),hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,updateCursor,(void))

Void FlxMouse_obj::onMouseWheel( ::flash::events::MouseEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onMouseWheel",0xdc642911,"flixel.input.mouse.FlxMouse.onMouseWheel","flixel/input/mouse/FlxMouse.hx",560,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(569)
		this->_wheelUsed = true;
		HX_STACK_LINE(570)
		this->wheel = FlashEvent->delta;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,onMouseWheel,(void))

Void FlxMouse_obj::onMouseLeave( ::flash::events::Event E){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onMouseLeave",0x84fd296d,"flixel.input.mouse.FlxMouse.onMouseLeave","flixel/input/mouse/FlxMouse.hx",581,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(582)
		this->_rightButton->onUp(null());
		HX_STACK_LINE(583)
		this->_middleButton->onUp(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,onMouseLeave,(void))

bool FlxMouse_obj::get_pressed( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_pressed",0x4652635d,"flixel.input.mouse.FlxMouse.get_pressed","flixel/input/mouse/FlxMouse.hx",587,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(587)
	return (this->_leftButton->current > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_pressed,return )

bool FlxMouse_obj::get_justPressed( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justPressed",0x70091811,"flixel.input.mouse.FlxMouse.get_justPressed","flixel/input/mouse/FlxMouse.hx",588,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(588)
	::flixel::input::mouse::FlxMouseButton _this = this->_leftButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(588)
	return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justPressed,return )

bool FlxMouse_obj::get_justReleased( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justReleased",0x9ec2046e,"flixel.input.mouse.FlxMouse.get_justReleased","flixel/input/mouse/FlxMouse.hx",589,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(589)
	::flixel::input::mouse::FlxMouseButton _this = this->_leftButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(589)
	return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justReleased,return )

bool FlxMouse_obj::get_pressedRight( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_pressedRight",0x90e8c73f,"flixel.input.mouse.FlxMouse.get_pressedRight","flixel/input/mouse/FlxMouse.hx",592,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(592)
	return (this->_rightButton->current > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_pressedRight,return )

bool FlxMouse_obj::get_justPressedRight( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justPressedRight",0xa8a2860b,"flixel.input.mouse.FlxMouse.get_justPressedRight","flixel/input/mouse/FlxMouse.hx",593,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(593)
	::flixel::input::mouse::FlxMouseButton _this = this->_rightButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(593)
	return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justPressedRight,return )

bool FlxMouse_obj::get_justReleasedRight( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justReleasedRight",0x8742a88e,"flixel.input.mouse.FlxMouse.get_justReleasedRight","flixel/input/mouse/FlxMouse.hx",594,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(594)
	::flixel::input::mouse::FlxMouseButton _this = this->_rightButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(594)
	return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justReleasedRight,return )

bool FlxMouse_obj::get_pressedMiddle( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_pressedMiddle",0x38fe0e92,"flixel.input.mouse.FlxMouse.get_pressedMiddle","flixel/input/mouse/FlxMouse.hx",596,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(596)
	return (this->_middleButton->current > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_pressedMiddle,return )

bool FlxMouse_obj::get_justPressedMiddle( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justPressedMiddle",0xe3cb4246,"flixel.input.mouse.FlxMouse.get_justPressedMiddle","flixel/input/mouse/FlxMouse.hx",597,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(597)
	::flixel::input::mouse::FlxMouseButton _this = this->_middleButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(597)
	return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justPressedMiddle,return )

bool FlxMouse_obj::get_justReleasedMiddle( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justReleasedMiddle",0xd1495263,"flixel.input.mouse.FlxMouse.get_justReleasedMiddle","flixel/input/mouse/FlxMouse.hx",598,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(598)
	::flixel::input::mouse::FlxMouseButton _this = this->_middleButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(598)
	return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justReleasedMiddle,return )

Void FlxMouse_obj::showSystemCursor( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","showSystemCursor",0xf4551c9e,"flixel.input.mouse.FlxMouse.showSystemCursor","flixel/input/mouse/FlxMouse.hx",605,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(609)
		::flash::ui::Mouse_obj::show();
		HX_STACK_LINE(610)
		this->cursorContainer->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,showSystemCursor,(void))

Void FlxMouse_obj::hideSystemCursor( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","hideSystemCursor",0xb5438fe3,"flixel.input.mouse.FlxMouse.hideSystemCursor","flixel/input/mouse/FlxMouse.hx",618,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(626)
		::flash::ui::Mouse_obj::hide();
		HX_STACK_LINE(628)
		if ((this->visible)){
			HX_STACK_LINE(630)
			this->cursorContainer->set_visible(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,hideSystemCursor,(void))

bool FlxMouse_obj::set_useSystemCursor( bool Value){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","set_useSystemCursor",0x074e74d3,"flixel.input.mouse.FlxMouse.set_useSystemCursor","flixel/input/mouse/FlxMouse.hx",636,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(637)
	if ((Value)){
		HX_STACK_LINE(639)
		this->showSystemCursor();
	}
	else{
		HX_STACK_LINE(643)
		this->hideSystemCursor();
	}
	HX_STACK_LINE(645)
	return this->useSystemCursor = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,set_useSystemCursor,return )

bool FlxMouse_obj::set_visible( bool Value){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","set_visible",0xb9fd1039,"flixel.input.mouse.FlxMouse.set_visible","flixel/input/mouse/FlxMouse.hx",649,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(650)
	if ((Value)){
		HX_STACK_LINE(652)
		if ((this->useSystemCursor)){
			HX_STACK_LINE(654)
			::flash::ui::Mouse_obj::show();
		}
		else{
			HX_STACK_LINE(658)
			if (((this->_cursor == null()))){
				HX_STACK_LINE(660)
				this->load(null(),null(),null(),null());
			}
			HX_STACK_LINE(663)
			this->cursorContainer->set_visible(true);
			HX_STACK_LINE(664)
			::flash::ui::Mouse_obj::hide();
		}
	}
	else{
		HX_STACK_LINE(677)
		this->cursorContainer->set_visible(false);
		HX_STACK_LINE(678)
		::flash::ui::Mouse_obj::hide();
	}
	HX_STACK_LINE(688)
	return this->visible = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,set_visible,return )

::flixel::system::replay::MouseRecord FlxMouse_obj::record( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","record",0xf2d1086d,"flixel.input.mouse.FlxMouse.record","flixel/input/mouse/FlxMouse.hx",694,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(695)
	if (((bool((bool((bool((this->_lastX == this->_globalScreenPosition->x)) && bool((this->_lastY == this->_globalScreenPosition->y)))) && bool((this->_leftButton->current == (int)0)))) && bool((this->_lastWheel == this->wheel))))){
		HX_STACK_LINE(698)
		return null();
	}
	HX_STACK_LINE(700)
	int _g = ::Math_obj::floor(this->_globalScreenPosition->x);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(700)
	this->_lastX = _g;
	HX_STACK_LINE(701)
	int _g1 = ::Math_obj::floor(this->_globalScreenPosition->y);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(701)
	this->_lastY = _g1;
	HX_STACK_LINE(702)
	this->_lastWheel = this->wheel;
	HX_STACK_LINE(703)
	return ::flixel::system::replay::MouseRecord_obj::__new(this->_lastX,this->_lastY,this->_leftButton->current,this->_lastWheel);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,record,return )

Void FlxMouse_obj::playback( ::flixel::system::replay::MouseRecord Record){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","playback",0xaadcd2f7,"flixel.input.mouse.FlxMouse.playback","flixel/input/mouse/FlxMouse.hx",707,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Record,"Record")
		HX_STACK_LINE(708)
		this->_leftButton->current = Record->button;
		HX_STACK_LINE(709)
		this->wheel = Record->wheel;
		HX_STACK_LINE(710)
		{
			HX_STACK_LINE(710)
			::flixel::util::FlxPoint _this = this->_globalScreenPosition;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(710)
			_this->set_x(Record->x);
			HX_STACK_LINE(710)
			_this->set_y(Record->y);
			HX_STACK_LINE(710)
			_this;
		}
		HX_STACK_LINE(711)
		this->updateCursor();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,playback,(void))


FlxMouse_obj::FlxMouse_obj()
{
}

void FlxMouse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMouse);
	HX_MARK_MEMBER_NAME(wheel,"wheel");
	HX_MARK_MEMBER_NAME(screenX,"screenX");
	HX_MARK_MEMBER_NAME(screenY,"screenY");
	HX_MARK_MEMBER_NAME(cursorContainer,"cursorContainer");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(useSystemCursor,"useSystemCursor");
	HX_MARK_MEMBER_NAME(_leftButton,"_leftButton");
	HX_MARK_MEMBER_NAME(_middleButton,"_middleButton");
	HX_MARK_MEMBER_NAME(_rightButton,"_rightButton");
	HX_MARK_MEMBER_NAME(_cursor,"_cursor");
	HX_MARK_MEMBER_NAME(_cursorBitmapData,"_cursorBitmapData");
	HX_MARK_MEMBER_NAME(_wheelUsed,"_wheelUsed");
	HX_MARK_MEMBER_NAME(_visibleWhenFocusLost,"_visibleWhenFocusLost");
	HX_MARK_MEMBER_NAME(_lastX,"_lastX");
	HX_MARK_MEMBER_NAME(_lastY,"_lastY");
	HX_MARK_MEMBER_NAME(_lastWheel,"_lastWheel");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_globalScreenPosition,"_globalScreenPosition");
	HX_MARK_MEMBER_NAME(_stage,"_stage");
	HX_MARK_END_CLASS();
}

void FlxMouse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(wheel,"wheel");
	HX_VISIT_MEMBER_NAME(screenX,"screenX");
	HX_VISIT_MEMBER_NAME(screenY,"screenY");
	HX_VISIT_MEMBER_NAME(cursorContainer,"cursorContainer");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(useSystemCursor,"useSystemCursor");
	HX_VISIT_MEMBER_NAME(_leftButton,"_leftButton");
	HX_VISIT_MEMBER_NAME(_middleButton,"_middleButton");
	HX_VISIT_MEMBER_NAME(_rightButton,"_rightButton");
	HX_VISIT_MEMBER_NAME(_cursor,"_cursor");
	HX_VISIT_MEMBER_NAME(_cursorBitmapData,"_cursorBitmapData");
	HX_VISIT_MEMBER_NAME(_wheelUsed,"_wheelUsed");
	HX_VISIT_MEMBER_NAME(_visibleWhenFocusLost,"_visibleWhenFocusLost");
	HX_VISIT_MEMBER_NAME(_lastX,"_lastX");
	HX_VISIT_MEMBER_NAME(_lastY,"_lastY");
	HX_VISIT_MEMBER_NAME(_lastWheel,"_lastWheel");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_globalScreenPosition,"_globalScreenPosition");
	HX_VISIT_MEMBER_NAME(_stage,"_stage");
}

Dynamic FlxMouse_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { return wheel; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lastX") ) { return _lastX; }
		if (HX_FIELD_EQ(inName,"_lastY") ) { return _lastY; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"_stage") ) { return _stage; }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"record") ) { return record_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { return screenX; }
		if (HX_FIELD_EQ(inName,"screenY") ) { return screenY; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"pressed") ) { return get_pressed(); }
		if (HX_FIELD_EQ(inName,"_cursor") ) { return _cursor; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"playback") ) { return playback_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_wheelUsed") ) { return _wheelUsed; }
		if (HX_FIELD_EQ(inName,"_lastWheel") ) { return _lastWheel; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return get_justPressed(); }
		if (HX_FIELD_EQ(inName,"_leftButton") ) { return _leftButton; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"onGameStart") ) { return onGameStart_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return get_pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return get_justReleased(); }
		if (HX_FIELD_EQ(inName,"pressedRight") ) { return get_pressedRight(); }
		if (HX_FIELD_EQ(inName,"_rightButton") ) { return _rightButton; }
		if (HX_FIELD_EQ(inName,"updateCursor") ) { return updateCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseLeave") ) { return onMouseLeave_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pressedMiddle") ) { return get_pressedMiddle(); }
		if (HX_FIELD_EQ(inName,"_middleButton") ) { return _middleButton; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cursorContainer") ) { return cursorContainer; }
		if (HX_FIELD_EQ(inName,"useSystemCursor") ) { return useSystemCursor; }
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return get_justPressed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"justPressedRight") ) { return get_justPressedRight(); }
		if (HX_FIELD_EQ(inName,"getWorldPosition") ) { return getWorldPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return get_justReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pressedRight") ) { return get_pressedRight_dyn(); }
		if (HX_FIELD_EQ(inName,"showSystemCursor") ) { return showSystemCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"hideSystemCursor") ) { return hideSystemCursor_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"justReleasedRight") ) { return get_justReleasedRight(); }
		if (HX_FIELD_EQ(inName,"justPressedMiddle") ) { return get_justPressedMiddle(); }
		if (HX_FIELD_EQ(inName,"_cursorBitmapData") ) { return _cursorBitmapData; }
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return getScreenPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pressedMiddle") ) { return get_pressedMiddle_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"justReleasedMiddle") ) { return get_justReleasedMiddle(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_useSystemCursor") ) { return set_useSystemCursor_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_justPressedRight") ) { return get_justPressedRight_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_visibleWhenFocusLost") ) { return _visibleWhenFocusLost; }
		if (HX_FIELD_EQ(inName,"_globalScreenPosition") ) { return _globalScreenPosition; }
		if (HX_FIELD_EQ(inName,"get_justReleasedRight") ) { return get_justReleasedRight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_justPressedMiddle") ) { return get_justPressedMiddle_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_justReleasedMiddle") ) { return get_justReleasedMiddle_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"setGlobalScreenPositionUnsafe") ) { return setGlobalScreenPositionUnsafe_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMouse_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { wheel=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lastX") ) { _lastX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastY") ) { _lastY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stage") ) { _stage=inValue.Cast< ::flash::display::Stage >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { screenX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenY") ) { screenY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cursor") ) { _cursor=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_wheelUsed") ) { _wheelUsed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastWheel") ) { _lastWheel=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_leftButton") ) { _leftButton=inValue.Cast< ::flixel::input::mouse::FlxMouseButton >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_rightButton") ) { _rightButton=inValue.Cast< ::flixel::input::mouse::FlxMouseButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_middleButton") ) { _middleButton=inValue.Cast< ::flixel::input::mouse::FlxMouseButton >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cursorContainer") ) { cursorContainer=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useSystemCursor") ) { if (inCallProp) return set_useSystemCursor(inValue);useSystemCursor=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_cursorBitmapData") ) { _cursorBitmapData=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_visibleWhenFocusLost") ) { _visibleWhenFocusLost=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_globalScreenPosition") ) { _globalScreenPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMouse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("wheel"));
	outFields->push(HX_CSTRING("screenX"));
	outFields->push(HX_CSTRING("screenY"));
	outFields->push(HX_CSTRING("cursorContainer"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("useSystemCursor"));
	outFields->push(HX_CSTRING("pressed"));
	outFields->push(HX_CSTRING("justPressed"));
	outFields->push(HX_CSTRING("justReleased"));
	outFields->push(HX_CSTRING("pressedRight"));
	outFields->push(HX_CSTRING("justPressedRight"));
	outFields->push(HX_CSTRING("justReleasedRight"));
	outFields->push(HX_CSTRING("pressedMiddle"));
	outFields->push(HX_CSTRING("justPressedMiddle"));
	outFields->push(HX_CSTRING("justReleasedMiddle"));
	outFields->push(HX_CSTRING("_leftButton"));
	outFields->push(HX_CSTRING("_middleButton"));
	outFields->push(HX_CSTRING("_rightButton"));
	outFields->push(HX_CSTRING("_cursor"));
	outFields->push(HX_CSTRING("_cursorBitmapData"));
	outFields->push(HX_CSTRING("_wheelUsed"));
	outFields->push(HX_CSTRING("_visibleWhenFocusLost"));
	outFields->push(HX_CSTRING("_lastX"));
	outFields->push(HX_CSTRING("_lastY"));
	outFields->push(HX_CSTRING("_lastWheel"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_globalScreenPosition"));
	outFields->push(HX_CSTRING("_stage"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxMouse_obj,wheel),HX_CSTRING("wheel")},
	{hx::fsInt,(int)offsetof(FlxMouse_obj,screenX),HX_CSTRING("screenX")},
	{hx::fsInt,(int)offsetof(FlxMouse_obj,screenY),HX_CSTRING("screenY")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(FlxMouse_obj,cursorContainer),HX_CSTRING("cursorContainer")},
	{hx::fsBool,(int)offsetof(FlxMouse_obj,visible),HX_CSTRING("visible")},
	{hx::fsBool,(int)offsetof(FlxMouse_obj,useSystemCursor),HX_CSTRING("useSystemCursor")},
	{hx::fsObject /*::flixel::input::mouse::FlxMouseButton*/ ,(int)offsetof(FlxMouse_obj,_leftButton),HX_CSTRING("_leftButton")},
	{hx::fsObject /*::flixel::input::mouse::FlxMouseButton*/ ,(int)offsetof(FlxMouse_obj,_middleButton),HX_CSTRING("_middleButton")},
	{hx::fsObject /*::flixel::input::mouse::FlxMouseButton*/ ,(int)offsetof(FlxMouse_obj,_rightButton),HX_CSTRING("_rightButton")},
	{hx::fsObject /*::flash::display::Bitmap*/ ,(int)offsetof(FlxMouse_obj,_cursor),HX_CSTRING("_cursor")},
	{hx::fsObject /*::flash::display::BitmapData*/ ,(int)offsetof(FlxMouse_obj,_cursorBitmapData),HX_CSTRING("_cursorBitmapData")},
	{hx::fsBool,(int)offsetof(FlxMouse_obj,_wheelUsed),HX_CSTRING("_wheelUsed")},
	{hx::fsBool,(int)offsetof(FlxMouse_obj,_visibleWhenFocusLost),HX_CSTRING("_visibleWhenFocusLost")},
	{hx::fsInt,(int)offsetof(FlxMouse_obj,_lastX),HX_CSTRING("_lastX")},
	{hx::fsInt,(int)offsetof(FlxMouse_obj,_lastY),HX_CSTRING("_lastY")},
	{hx::fsInt,(int)offsetof(FlxMouse_obj,_lastWheel),HX_CSTRING("_lastWheel")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxMouse_obj,_point),HX_CSTRING("_point")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxMouse_obj,_globalScreenPosition),HX_CSTRING("_globalScreenPosition")},
	{hx::fsObject /*::flash::display::Stage*/ ,(int)offsetof(FlxMouse_obj,_stage),HX_CSTRING("_stage")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("wheel"),
	HX_CSTRING("screenX"),
	HX_CSTRING("screenY"),
	HX_CSTRING("cursorContainer"),
	HX_CSTRING("visible"),
	HX_CSTRING("useSystemCursor"),
	HX_CSTRING("_leftButton"),
	HX_CSTRING("_middleButton"),
	HX_CSTRING("_rightButton"),
	HX_CSTRING("_cursor"),
	HX_CSTRING("_cursorBitmapData"),
	HX_CSTRING("_wheelUsed"),
	HX_CSTRING("_visibleWhenFocusLost"),
	HX_CSTRING("_lastX"),
	HX_CSTRING("_lastY"),
	HX_CSTRING("_lastWheel"),
	HX_CSTRING("_point"),
	HX_CSTRING("_globalScreenPosition"),
	HX_CSTRING("_stage"),
	HX_CSTRING("load"),
	HX_CSTRING("unload"),
	HX_CSTRING("getWorldPosition"),
	HX_CSTRING("getScreenPosition"),
	HX_CSTRING("destroy"),
	HX_CSTRING("setGlobalScreenPositionUnsafe"),
	HX_CSTRING("reset"),
	HX_CSTRING("update"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onGameStart"),
	HX_CSTRING("updateCursor"),
	HX_CSTRING("onMouseWheel"),
	HX_CSTRING("onMouseLeave"),
	HX_CSTRING("get_pressed"),
	HX_CSTRING("get_justPressed"),
	HX_CSTRING("get_justReleased"),
	HX_CSTRING("get_pressedRight"),
	HX_CSTRING("get_justPressedRight"),
	HX_CSTRING("get_justReleasedRight"),
	HX_CSTRING("get_pressedMiddle"),
	HX_CSTRING("get_justPressedMiddle"),
	HX_CSTRING("get_justReleasedMiddle"),
	HX_CSTRING("showSystemCursor"),
	HX_CSTRING("hideSystemCursor"),
	HX_CSTRING("set_useSystemCursor"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("record"),
	HX_CSTRING("playback"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMouse_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMouse_obj::__mClass,"__mClass");
};

#endif

Class FlxMouse_obj::__mClass;

void FlxMouse_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.mouse.FlxMouse"), hx::TCanCast< FlxMouse_obj> ,sStaticFields,sMemberFields,
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

void FlxMouse_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
} // end namespace mouse
