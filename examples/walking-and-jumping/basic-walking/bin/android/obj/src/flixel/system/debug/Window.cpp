#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug__Window_GraphicCloseButton
#include <flixel/system/debug/_Window/GraphicCloseButton.h>
#endif
#ifndef INCLUDED_flixel_system_debug__Window_GraphicWindowHandle
#include <flixel/system/debug/_Window/GraphicWindowHandle.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void Window_obj::__construct(::String Title,::flash::display::BitmapData Icon,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds,hx::Null< bool >  __o_Closable)
{
HX_STACK_FRAME("flixel.system.debug.Window","new",0x5aefd38a,"flixel.system.debug.Window.new","flixel/system/debug/Window.hx",98,0xb8dfd4e5)
HX_STACK_THIS(this)
HX_STACK_ARG(Title,"Title")
HX_STACK_ARG(Icon,"Icon")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(__o_Height,"Height")
HX_STACK_ARG(__o_Resizable,"Resizable")
HX_STACK_ARG(Bounds,"Bounds")
HX_STACK_ARG(__o_Closable,"Closable")
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
bool Resizable = __o_Resizable.Default(true);
bool Closable = __o_Closable.Default(false);
{
	HX_STACK_LINE(99)
	super::__construct();
	HX_STACK_LINE(101)
	::flash::geom::Point _g = ::flash::geom::Point_obj::__new((int)50,(int)30);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(101)
	this->minSize = _g;
	HX_STACK_LINE(103)
	Float _g1 = ::Math_obj::abs(Width);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(103)
	int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(103)
	this->_width = _g2;
	HX_STACK_LINE(104)
	Float _g3 = ::Math_obj::abs(Height);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(104)
	int _g4 = ::Std_obj::_int(_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(104)
	this->_height = _g4;
	HX_STACK_LINE(105)
	this->updateBounds(Bounds);
	HX_STACK_LINE(106)
	::flash::geom::Point _g5 = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(106)
	this->_drag = _g5;
	HX_STACK_LINE(107)
	this->_resizable = Resizable;
	HX_STACK_LINE(109)
	::flash::display::BitmapData _g6 = ::flash::display::BitmapData_obj::__new((int)1,(int)2,true,(int)-16777216,null());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(109)
	::flash::display::Bitmap _g7 = ::flash::display::Bitmap_obj::__new(_g6,null(),null());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(109)
	this->_shadow = _g7;
	HX_STACK_LINE(110)
	::flash::display::BitmapData _g8 = ::flash::display::BitmapData_obj::__new((int)1,(int)1,true,(int)-580952225,null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(110)
	::flash::display::Bitmap _g9 = ::flash::display::Bitmap_obj::__new(_g8,null(),null());		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(110)
	this->_background = _g9;
	HX_STACK_LINE(111)
	::flash::display::BitmapData _g10 = ::flash::display::BitmapData_obj::__new((int)1,(int)15,true,(int)-1157627904,null());		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(111)
	::flash::display::Bitmap _g11 = ::flash::display::Bitmap_obj::__new(_g10,null(),null());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(111)
	this->_header = _g11;
	HX_STACK_LINE(112)
	Float _g12 = this->_header->get_height();		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(112)
	this->_background->set_y(_g12);
	HX_STACK_LINE(114)
	::flash::text::TextField _g13 = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(114)
	this->_title = _g13;
	HX_STACK_LINE(115)
	this->_title->set_x((int)2);
	HX_STACK_LINE(116)
	this->_title->set_y((int)-1);
	HX_STACK_LINE(117)
	this->_title->set_alpha(0.8);
	HX_STACK_LINE(118)
	this->_title->set_height((int)20);
	HX_STACK_LINE(119)
	this->_title->set_selectable(false);
	HX_STACK_LINE(120)
	this->_title->set_multiline(false);
	HX_STACK_LINE(121)
	this->_title->set_embedFonts(true);
	HX_STACK_LINE(122)
	::flash::text::TextFormat _g14 = ::flash::text::TextFormat_obj::__new(::flixel::system::FlxAssets_obj::FONT_DEBUGGER,(int)12,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(122)
	this->_title->set_defaultTextFormat(_g14);
	HX_STACK_LINE(123)
	this->_title->set_text(Title);
	HX_STACK_LINE(125)
	this->addChild(this->_shadow);
	HX_STACK_LINE(126)
	this->addChild(this->_background);
	HX_STACK_LINE(127)
	this->addChild(this->_header);
	HX_STACK_LINE(128)
	this->addChild(this->_title);
	HX_STACK_LINE(130)
	if (((Icon != null()))){
		HX_STACK_LINE(132)
		::flash::display::Bitmap _icon = ::flash::display::Bitmap_obj::__new(Icon,null(),null());		HX_STACK_VAR(_icon,"_icon");
		HX_STACK_LINE(133)
		_icon->set_x((int)5);
		HX_STACK_LINE(134)
		_icon->set_y((int)2);
		HX_STACK_LINE(135)
		_icon->set_alpha(0.8);
		HX_STACK_LINE(136)
		Float _g15 = _icon->get_x();		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(136)
		Float _g16 = _icon->get_width();		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(136)
		Float _g17 = (_g15 + _g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(136)
		Float _g18 = (_g17 + (int)2);		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(136)
		this->_title->set_x(_g18);
		HX_STACK_LINE(137)
		this->addChild(_icon);
	}
	HX_STACK_LINE(140)
	if ((this->_resizable)){
		HX_STACK_LINE(142)
		::flixel::system::debug::_Window::GraphicWindowHandle _g19 = ::flixel::system::debug::_Window::GraphicWindowHandle_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(142)
		::flash::display::Bitmap _g20 = ::flash::display::Bitmap_obj::__new(_g19,null(),null());		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(142)
		this->_handle = _g20;
		HX_STACK_LINE(143)
		this->addChild(this->_handle);
	}
	HX_STACK_LINE(146)
	if ((Closable)){
		HX_STACK_LINE(148)
		::flixel::system::debug::_Window::GraphicCloseButton _g21 = ::flixel::system::debug::_Window::GraphicCloseButton_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(148)
		::flixel::system::ui::FlxSystemButton _g22 = ::flixel::system::ui::FlxSystemButton_obj::__new(_g21,this->close_dyn(),null());		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(148)
		this->_closeButton = _g22;
		HX_STACK_LINE(149)
		this->_closeButton->set_alpha(0.8);
		HX_STACK_LINE(150)
		this->addChild(this->_closeButton);
	}
	else{
		HX_STACK_LINE(154)
		this->_id = ::flixel::system::debug::Window_obj::WINDOW_AMOUNT;
		HX_STACK_LINE(155)
		this->loadSaveData();
		HX_STACK_LINE(156)
		(::flixel::system::debug::Window_obj::WINDOW_AMOUNT)++;
	}
	HX_STACK_LINE(159)
	if (((bool((this->_width != (int)0)) || bool((this->_height != (int)0))))){
		HX_STACK_LINE(161)
		this->updateSize();
	}
	HX_STACK_LINE(163)
	this->bound();
	HX_STACK_LINE(165)
	this->addEventListener(::flash::events::Event_obj::ENTER_FRAME,this->init_dyn(),null(),null(),null());
}
;
	return null();
}

//Window_obj::~Window_obj() { }

Dynamic Window_obj::__CreateEmpty() { return  new Window_obj; }
hx::ObjectPtr< Window_obj > Window_obj::__new(::String Title,::flash::display::BitmapData Icon,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds,hx::Null< bool >  __o_Closable)
{  hx::ObjectPtr< Window_obj > result = new Window_obj();
	result->__construct(Title,Icon,__o_Width,__o_Height,__o_Resizable,Bounds,__o_Closable);
	return result;}

Dynamic Window_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Window_obj > result = new Window_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

Void Window_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","destroy",0x5fb40d24,"flixel.system.debug.Window.destroy","flixel/system/debug/Window.hx",172,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(173)
		this->minSize = null();
		HX_STACK_LINE(174)
		this->maxSize = null();
		HX_STACK_LINE(175)
		this->_bounds = null();
		HX_STACK_LINE(176)
		if (((this->_shadow != null()))){
			HX_STACK_LINE(178)
			this->removeChild(this->_shadow);
		}
		HX_STACK_LINE(180)
		this->_shadow = null();
		HX_STACK_LINE(181)
		if (((this->_background != null()))){
			HX_STACK_LINE(183)
			this->removeChild(this->_background);
		}
		HX_STACK_LINE(185)
		this->_background = null();
		HX_STACK_LINE(186)
		if (((this->_header != null()))){
			HX_STACK_LINE(188)
			this->removeChild(this->_header);
		}
		HX_STACK_LINE(190)
		this->_header = null();
		HX_STACK_LINE(191)
		if (((this->_title != null()))){
			HX_STACK_LINE(193)
			this->removeChild(this->_title);
		}
		HX_STACK_LINE(195)
		this->_title = null();
		HX_STACK_LINE(196)
		if (((this->_handle != null()))){
			HX_STACK_LINE(198)
			this->removeChild(this->_handle);
		}
		HX_STACK_LINE(200)
		this->_handle = null();
		HX_STACK_LINE(201)
		this->_drag = null();
		HX_STACK_LINE(202)
		::flixel::system::ui::FlxSystemButton _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_closeButton);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(202)
		this->_closeButton = _g;
		HX_STACK_LINE(204)
		::flash::display::Stage stage = ::flash::Lib_obj::get_current()->get_stage();		HX_STACK_VAR(stage,"stage");
		HX_STACK_LINE(205)
		if ((stage->hasEventListener(::flash::events::MouseEvent_obj::MOUSE_MOVE))){
			HX_STACK_LINE(207)
			stage->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_MOVE,this->onMouseMove_dyn(),null());
		}
		HX_STACK_LINE(209)
		if ((this->hasEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN))){
			HX_STACK_LINE(211)
			this->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null());
		}
		HX_STACK_LINE(213)
		if ((stage->hasEventListener(::flash::events::MouseEvent_obj::MOUSE_UP))){
			HX_STACK_LINE(215)
			stage->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,destroy,(void))

Void Window_obj::resize( Float Width,Float Height){
{
		HX_STACK_FRAME("flixel.system.debug.Window","resize",0x4ec62d0a,"flixel.system.debug.Window.resize","flixel/system/debug/Window.hx",226,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(227)
		Float _g = ::Math_obj::abs(Width);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(227)
		int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(227)
		this->_width = _g1;
		HX_STACK_LINE(228)
		Float _g2 = ::Math_obj::abs(Height);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(228)
		int _g3 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(228)
		this->_height = _g3;
		HX_STACK_LINE(229)
		this->updateSize();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,resize,(void))

Void Window_obj::reposition( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.system.debug.Window","reposition",0x0fe38572,"flixel.system.debug.Window.reposition","flixel/system/debug/Window.hx",239,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(240)
		this->set_x(X);
		HX_STACK_LINE(241)
		this->set_y(Y);
		HX_STACK_LINE(242)
		this->bound();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,reposition,(void))

Void Window_obj::updateBounds( ::flash::geom::Rectangle Bounds){
{
		HX_STACK_FRAME("flixel.system.debug.Window","updateBounds",0x436474f4,"flixel.system.debug.Window.updateBounds","flixel/system/debug/Window.hx",246,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Bounds,"Bounds")
		HX_STACK_LINE(247)
		this->_bounds = Bounds;
		HX_STACK_LINE(248)
		if (((this->_bounds != null()))){
			HX_STACK_LINE(250)
			::flash::geom::Point _g = ::flash::geom::Point_obj::__new(this->_bounds->width,this->_bounds->height);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(250)
			this->maxSize = _g;
		}
		else{
			HX_STACK_LINE(254)
			::flash::geom::Point _g1 = ::flash::geom::Point_obj::__new(1.79e+308,1.79e+308);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(254)
			this->maxSize = _g1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,updateBounds,(void))

Void Window_obj::setVisible( bool Value){
{
		HX_STACK_FRAME("flixel.system.debug.Window","setVisible",0x6084b306,"flixel.system.debug.Window.setVisible","flixel/system/debug/Window.hx",259,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(260)
		this->set_visible(Value);
		HX_STACK_LINE(261)
		hx::IndexRef((::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("windowSettings"),true)).mPtr,this->_id) = this->get_visible();
		HX_STACK_LINE(262)
		::flixel::FlxG_obj::save->flush(null(),null());
		HX_STACK_LINE(264)
		if (((this->toggleButton != null()))){
			HX_STACK_LINE(266)
			bool _g = !(this->get_visible());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(266)
			this->toggleButton->set_toggled(_g);
		}
		HX_STACK_LINE(268)
		if ((this->get_visible())){
			HX_STACK_LINE(270)
			this->get_parent()->addChild(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,setVisible,(void))

Void Window_obj::toggleVisible( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","toggleVisible",0x493d16e8,"flixel.system.debug.Window.toggleVisible","flixel/system/debug/Window.hx",275,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(276)
		bool _g = !(this->get_visible());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(276)
		this->setVisible(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,toggleVisible,(void))

Void Window_obj::putOnTop( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","putOnTop",0xbb5abdfd,"flixel.system.debug.Window.putOnTop","flixel/system/debug/Window.hx",281,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(281)
		this->get_parent()->addChild(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,putOnTop,(void))

Void Window_obj::loadSaveData( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","loadSaveData",0x8d0923e3,"flixel.system.debug.Window.loadSaveData","flixel/system/debug/Window.hx",286,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(286)
		if (((::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("windowSettings"),true) != null()))){
			HX_STACK_LINE(288)
			this->set_visible(::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("windowSettings"),true)->__GetItem(this->_id));
		}
		else{
			HX_STACK_LINE(292)
			this->initSaveData();
			HX_STACK_LINE(293)
			this->loadSaveData();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,loadSaveData,(void))

Void Window_obj::initSaveData( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","initSaveData",0x7856becd,"flixel.system.debug.Window.initSaveData","flixel/system/debug/Window.hx",298,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(299)
		Array< bool > settings = Array_obj< bool >::__new();		HX_STACK_VAR(settings,"settings");
		HX_STACK_LINE(300)
		{
			HX_STACK_LINE(300)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(300)
			while((true)){
				HX_STACK_LINE(300)
				if ((!(((_g < (int)10))))){
					HX_STACK_LINE(300)
					break;
				}
				HX_STACK_LINE(300)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(302)
				settings[i] = true;
			}
		}
		HX_STACK_LINE(304)
		::flixel::FlxG_obj::save->data->__FieldRef(HX_CSTRING("windowSettings")) = settings;
		HX_STACK_LINE(305)
		::flixel::FlxG_obj::save->flush(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,initSaveData,(void))

Void Window_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","update",0xcd50591f,"flixel.system.debug.Window.update","flixel/system/debug/Window.hx",308,0xb8dfd4e5)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,update,(void))

Void Window_obj::init( ::flash::events::Event E){
{
		HX_STACK_FRAME("flixel.system.debug.Window","init",0x33a1fca6,"flixel.system.debug.Window.init","flixel/system/debug/Window.hx",316,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(320)
		::flash::display::Stage _g = this->get_stage();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(320)
		if (((_g == null()))){
			HX_STACK_LINE(323)
			return null();
		}
		HX_STACK_LINE(325)
		this->removeEventListener(::flash::events::Event_obj::ENTER_FRAME,this->init_dyn(),null());
		HX_STACK_LINE(327)
		this->get_stage()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_MOVE,this->onMouseMove_dyn(),null(),null(),null());
		HX_STACK_LINE(328)
		this->get_stage()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(331)
		this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,init,(void))

Void Window_obj::onMouseMove( ::flash::events::MouseEvent E){
{
		HX_STACK_FRAME("flixel.system.debug.Window","onMouseMove",0xdd6abbe1,"flixel.system.debug.Window.onMouseMove","flixel/system/debug/Window.hx",338,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(340)
		Float _g = this->get_mouseX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(340)
		Float mouseX;		HX_STACK_VAR(mouseX,"mouseX");
		HX_STACK_LINE(340)
		if (((_g < (int)0))){
			HX_STACK_LINE(340)
			mouseX = (int)0;
		}
		else{
			HX_STACK_LINE(340)
			mouseX = this->get_mouseX();
		}
		HX_STACK_LINE(341)
		Float _g1 = this->get_mouseY();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(341)
		Float mouseY;		HX_STACK_VAR(mouseY,"mouseY");
		HX_STACK_LINE(341)
		if (((_g1 < (int)0))){
			HX_STACK_LINE(341)
			mouseY = (int)0;
		}
		else{
			HX_STACK_LINE(341)
			mouseY = this->get_mouseY();
		}
		HX_STACK_LINE(343)
		if ((!(this->get_parent()->get_visible()))){
			HX_STACK_LINE(345)
			bool _g2 = this->_overHeader = false;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(345)
			this->_overHandle = _g2;
			HX_STACK_LINE(346)
			return null();
		}
		HX_STACK_LINE(349)
		if ((this->_dragging)){
			HX_STACK_LINE(351)
			this->_overHeader = true;
			HX_STACK_LINE(352)
			Float _g3 = this->get_parent()->get_mouseX();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(352)
			Float _g4 = (_g3 - this->_drag->x);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(352)
			Float _g5 = this->get_parent()->get_mouseY();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(352)
			Float _g6 = (_g5 - this->_drag->y);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(352)
			this->reposition(_g4,_g6);
		}
		else{
			HX_STACK_LINE(354)
			if ((this->_resizing)){
				HX_STACK_LINE(356)
				this->_overHandle = true;
				HX_STACK_LINE(357)
				this->resize((mouseX - this->_drag->x),(mouseY - this->_drag->y));
			}
			else{
				HX_STACK_LINE(359)
				if (((bool((bool((bool((mouseX >= (int)0)) && bool((mouseX <= this->_width)))) && bool((mouseY >= (int)0)))) && bool((mouseY <= this->_height))))){
					HX_STACK_LINE(361)
					Float _g7 = this->_header->get_width();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(361)
					bool _g9;		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(361)
					if (((mouseX <= _g7))){
						HX_STACK_LINE(361)
						Float _g8 = this->_header->get_height();		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(361)
						_g9 = (mouseY <= _g8);
					}
					else{
						HX_STACK_LINE(361)
						_g9 = false;
					}
					HX_STACK_LINE(361)
					this->_overHeader = _g9;
					HX_STACK_LINE(362)
					if ((this->_resizable)){
						HX_STACK_LINE(364)
						Float _g10 = this->_handle->get_width();		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(364)
						Float _g11 = (this->_width - _g10);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(364)
						bool _g14;		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(364)
						if (((mouseX >= _g11))){
							HX_STACK_LINE(364)
							Float _g12 = this->_handle->get_height();		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(364)
							Float _g13 = (this->_height - _g12);		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(364)
							_g14 = (mouseY >= _g13);
						}
						else{
							HX_STACK_LINE(364)
							_g14 = false;
						}
						HX_STACK_LINE(364)
						this->_overHandle = _g14;
					}
				}
				else{
					HX_STACK_LINE(369)
					bool _g15 = this->_overHeader = false;		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(369)
					this->_overHandle = _g15;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,onMouseMove,(void))

Void Window_obj::onMouseDown( ::flash::events::MouseEvent E){
{
		HX_STACK_FRAME("flixel.system.debug.Window","onMouseDown",0xd777d132,"flixel.system.debug.Window.onMouseDown","flixel/system/debug/Window.hx",378,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(378)
		if ((this->_overHeader)){
			HX_STACK_LINE(380)
			this->get_parent()->addChild(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(381)
			this->_dragging = true;
			HX_STACK_LINE(382)
			Float _g = this->get_mouseX();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(382)
			this->_drag->x = _g;
			HX_STACK_LINE(383)
			Float _g1 = this->get_mouseY();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(383)
			this->_drag->y = _g1;
		}
		else{
			HX_STACK_LINE(385)
			if ((this->_overHandle)){
				HX_STACK_LINE(387)
				this->get_parent()->addChild(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(388)
				this->_resizing = true;
				HX_STACK_LINE(389)
				Float _g2 = this->get_mouseX();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(389)
				Float _g3 = (this->_width - _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(389)
				this->_drag->x = _g3;
				HX_STACK_LINE(390)
				Float _g4 = this->get_mouseY();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(390)
				Float _g5 = (this->_height - _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(390)
				this->_drag->y = _g5;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,onMouseDown,(void))

Void Window_obj::onMouseUp( ::flash::events::MouseEvent E){
{
		HX_STACK_FRAME("flixel.system.debug.Window","onMouseUp",0x62a36b2b,"flixel.system.debug.Window.onMouseUp","flixel/system/debug/Window.hx",398,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(399)
		this->_dragging = false;
		HX_STACK_LINE(400)
		this->_resizing = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,onMouseUp,(void))

Void Window_obj::bound( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","bound",0xf2ff51e8,"flixel.system.debug.Window.bound","flixel/system/debug/Window.hx",410,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(410)
		if (((this->_bounds != null()))){
			HX_STACK_LINE(412)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(412)
			{
				HX_STACK_LINE(412)
				Float Value = this->get_x();		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(412)
				Float Min = this->_bounds->get_left();		HX_STACK_VAR(Min,"Min");
				HX_STACK_LINE(412)
				Float _g = this->_bounds->get_right();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(412)
				Float Max = (_g - this->_width);		HX_STACK_VAR(Max,"Max");
				HX_STACK_LINE(412)
				Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(412)
				if (((Value < Min))){
					HX_STACK_LINE(412)
					lowerBound = Min;
				}
				else{
					HX_STACK_LINE(412)
					lowerBound = Value;
				}
				HX_STACK_LINE(412)
				if (((lowerBound > Max))){
					HX_STACK_LINE(412)
					_g1 = Max;
				}
				else{
					HX_STACK_LINE(412)
					_g1 = lowerBound;
				}
			}
			HX_STACK_LINE(412)
			this->set_x(_g1);
			HX_STACK_LINE(413)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(413)
			{
				HX_STACK_LINE(413)
				Float Value = this->get_y();		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(413)
				Float Min = this->_bounds->get_top();		HX_STACK_VAR(Min,"Min");
				HX_STACK_LINE(413)
				Float _g2 = this->_bounds->get_bottom();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(413)
				Float Max = (_g2 - this->_height);		HX_STACK_VAR(Max,"Max");
				HX_STACK_LINE(413)
				Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(413)
				if (((Value < Min))){
					HX_STACK_LINE(413)
					lowerBound = Min;
				}
				else{
					HX_STACK_LINE(413)
					lowerBound = Value;
				}
				HX_STACK_LINE(413)
				if (((lowerBound > Max))){
					HX_STACK_LINE(413)
					_g3 = Max;
				}
				else{
					HX_STACK_LINE(413)
					_g3 = lowerBound;
				}
			}
			HX_STACK_LINE(413)
			this->set_y(_g3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,bound,(void))

Void Window_obj::updateSize( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","updateSize",0x6f89a180,"flixel.system.debug.Window.updateSize","flixel/system/debug/Window.hx",421,0xb8dfd4e5)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::flixel::system::debug::Window_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/Window.hx",422,0xb8dfd4e5)
				{
					HX_STACK_LINE(422)
					Float Value = __this->_width;		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(422)
					Float Min = __this->minSize->x;		HX_STACK_VAR(Min,"Min");
					HX_STACK_LINE(422)
					Float Max = __this->maxSize->x;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(422)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(422)
					if (((Value < Min))){
						HX_STACK_LINE(422)
						lowerBound = Min;
					}
					else{
						HX_STACK_LINE(422)
						lowerBound = Value;
					}
					HX_STACK_LINE(422)
					return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(422)
		int _g = ::Std_obj::_int(_Function_1_1::Block(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(422)
		this->_width = _g;
		struct _Function_1_2{
			inline static Float Block( hx::ObjectPtr< ::flixel::system::debug::Window_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/Window.hx",423,0xb8dfd4e5)
				{
					HX_STACK_LINE(423)
					Float Value = __this->_height;		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(423)
					Float Min = __this->minSize->y;		HX_STACK_VAR(Min,"Min");
					HX_STACK_LINE(423)
					Float Max = __this->maxSize->y;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(423)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(423)
					if (((Value < Min))){
						HX_STACK_LINE(423)
						lowerBound = Min;
					}
					else{
						HX_STACK_LINE(423)
						lowerBound = Value;
					}
					HX_STACK_LINE(423)
					return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(423)
		int _g1 = ::Std_obj::_int(_Function_1_2::Block(this));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(423)
		this->_height = _g1;
		HX_STACK_LINE(425)
		this->_header->set_scaleX(this->_width);
		HX_STACK_LINE(426)
		this->_background->set_scaleX(this->_width);
		HX_STACK_LINE(427)
		Float _g2 = this->_header->get_height();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(427)
		Float _g3 = (this->_height - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(427)
		this->_background->set_scaleY(_g3);
		HX_STACK_LINE(428)
		this->_shadow->set_scaleX(this->_width);
		HX_STACK_LINE(429)
		this->_shadow->set_y(this->_height);
		HX_STACK_LINE(430)
		this->_title->set_width((this->_width - (int)4));
		HX_STACK_LINE(431)
		if ((this->_resizable)){
			HX_STACK_LINE(433)
			Float _g4 = this->_handle->get_width();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(433)
			Float _g5 = (this->_width - _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(433)
			this->_handle->set_x(_g5);
			HX_STACK_LINE(434)
			Float _g6 = this->_handle->get_height();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(434)
			Float _g7 = (this->_height - _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(434)
			this->_handle->set_y(_g7);
		}
		HX_STACK_LINE(436)
		if (((this->_closeButton != null()))){
			HX_STACK_LINE(438)
			Float _g8 = this->_closeButton->get_width();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(438)
			Float _g9 = (this->_width - _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(438)
			Float _g10 = (_g9 - (int)3);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(438)
			this->_closeButton->set_x(_g10);
			HX_STACK_LINE(439)
			this->_closeButton->set_y((int)3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,updateSize,(void))

Void Window_obj::close( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","close",0x8465b962,"flixel.system.debug.Window.close","flixel/system/debug/Window.hx",445,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(445)
		this->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,close,(void))

int Window_obj::BG_COLOR;

int Window_obj::HEADER_COLOR;

Float Window_obj::HEADER_ALPHA;

int Window_obj::HEADER_HEIGHT;

int Window_obj::WINDOW_AMOUNT;


Window_obj::Window_obj()
{
}

void Window_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Window);
	HX_MARK_MEMBER_NAME(minSize,"minSize");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(toggleButton,"toggleButton");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_bounds,"_bounds");
	HX_MARK_MEMBER_NAME(_background,"_background");
	HX_MARK_MEMBER_NAME(_header,"_header");
	HX_MARK_MEMBER_NAME(_shadow,"_shadow");
	HX_MARK_MEMBER_NAME(_title,"_title");
	HX_MARK_MEMBER_NAME(_handle,"_handle");
	HX_MARK_MEMBER_NAME(_closeButton,"_closeButton");
	HX_MARK_MEMBER_NAME(_overHeader,"_overHeader");
	HX_MARK_MEMBER_NAME(_overHandle,"_overHandle");
	HX_MARK_MEMBER_NAME(_drag,"_drag");
	HX_MARK_MEMBER_NAME(_dragging,"_dragging");
	HX_MARK_MEMBER_NAME(_resizing,"_resizing");
	HX_MARK_MEMBER_NAME(_resizable,"_resizable");
	HX_MARK_MEMBER_NAME(_id,"_id");
	::flash::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Window_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(minSize,"minSize");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(toggleButton,"toggleButton");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_bounds,"_bounds");
	HX_VISIT_MEMBER_NAME(_background,"_background");
	HX_VISIT_MEMBER_NAME(_header,"_header");
	HX_VISIT_MEMBER_NAME(_shadow,"_shadow");
	HX_VISIT_MEMBER_NAME(_title,"_title");
	HX_VISIT_MEMBER_NAME(_handle,"_handle");
	HX_VISIT_MEMBER_NAME(_closeButton,"_closeButton");
	HX_VISIT_MEMBER_NAME(_overHeader,"_overHeader");
	HX_VISIT_MEMBER_NAME(_overHandle,"_overHandle");
	HX_VISIT_MEMBER_NAME(_drag,"_drag");
	HX_VISIT_MEMBER_NAME(_dragging,"_dragging");
	HX_VISIT_MEMBER_NAME(_resizing,"_resizing");
	HX_VISIT_MEMBER_NAME(_resizable,"_resizable");
	HX_VISIT_MEMBER_NAME(_id,"_id");
	::flash::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Window_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { return _id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_drag") ) { return _drag; }
		if (HX_FIELD_EQ(inName,"bound") ) { return bound_dyn(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_title") ) { return _title; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"minSize") ) { return minSize; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return maxSize; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"_bounds") ) { return _bounds; }
		if (HX_FIELD_EQ(inName,"_header") ) { return _header; }
		if (HX_FIELD_EQ(inName,"_shadow") ) { return _shadow; }
		if (HX_FIELD_EQ(inName,"_handle") ) { return _handle; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"putOnTop") ) { return putOnTop_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dragging") ) { return _dragging; }
		if (HX_FIELD_EQ(inName,"_resizing") ) { return _resizing; }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_resizable") ) { return _resizable; }
		if (HX_FIELD_EQ(inName,"reposition") ) { return reposition_dyn(); }
		if (HX_FIELD_EQ(inName,"setVisible") ) { return setVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { return _background; }
		if (HX_FIELD_EQ(inName,"_overHeader") ) { return _overHeader; }
		if (HX_FIELD_EQ(inName,"_overHandle") ) { return _overHandle; }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toggleButton") ) { return toggleButton; }
		if (HX_FIELD_EQ(inName,"_closeButton") ) { return _closeButton; }
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return updateBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"loadSaveData") ) { return loadSaveData_dyn(); }
		if (HX_FIELD_EQ(inName,"initSaveData") ) { return initSaveData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"WINDOW_AMOUNT") ) { return WINDOW_AMOUNT; }
		if (HX_FIELD_EQ(inName,"toggleVisible") ) { return toggleVisible_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Window_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { _id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_drag") ) { _drag=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_title") ) { _title=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"minSize") ) { minSize=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { maxSize=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bounds") ) { _bounds=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_header") ) { _header=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shadow") ) { _shadow=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_handle") ) { _handle=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dragging") ) { _dragging=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_resizing") ) { _resizing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_resizable") ) { _resizable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { _background=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_overHeader") ) { _overHeader=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_overHandle") ) { _overHandle=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toggleButton") ) { toggleButton=inValue.Cast< ::flixel::system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_closeButton") ) { _closeButton=inValue.Cast< ::flixel::system::ui::FlxSystemButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"WINDOW_AMOUNT") ) { WINDOW_AMOUNT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("minSize"));
	outFields->push(HX_CSTRING("maxSize"));
	outFields->push(HX_CSTRING("toggleButton"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_bounds"));
	outFields->push(HX_CSTRING("_background"));
	outFields->push(HX_CSTRING("_header"));
	outFields->push(HX_CSTRING("_shadow"));
	outFields->push(HX_CSTRING("_title"));
	outFields->push(HX_CSTRING("_handle"));
	outFields->push(HX_CSTRING("_closeButton"));
	outFields->push(HX_CSTRING("_overHeader"));
	outFields->push(HX_CSTRING("_overHandle"));
	outFields->push(HX_CSTRING("_drag"));
	outFields->push(HX_CSTRING("_dragging"));
	outFields->push(HX_CSTRING("_resizing"));
	outFields->push(HX_CSTRING("_resizable"));
	outFields->push(HX_CSTRING("_id"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BG_COLOR"),
	HX_CSTRING("HEADER_COLOR"),
	HX_CSTRING("HEADER_ALPHA"),
	HX_CSTRING("HEADER_HEIGHT"),
	HX_CSTRING("WINDOW_AMOUNT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(Window_obj,minSize),HX_CSTRING("minSize")},
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(Window_obj,maxSize),HX_CSTRING("maxSize")},
	{hx::fsObject /*::flixel::system::ui::FlxSystemButton*/ ,(int)offsetof(Window_obj,toggleButton),HX_CSTRING("toggleButton")},
	{hx::fsInt,(int)offsetof(Window_obj,_width),HX_CSTRING("_width")},
	{hx::fsInt,(int)offsetof(Window_obj,_height),HX_CSTRING("_height")},
	{hx::fsObject /*::flash::geom::Rectangle*/ ,(int)offsetof(Window_obj,_bounds),HX_CSTRING("_bounds")},
	{hx::fsObject /*::flash::display::Bitmap*/ ,(int)offsetof(Window_obj,_background),HX_CSTRING("_background")},
	{hx::fsObject /*::flash::display::Bitmap*/ ,(int)offsetof(Window_obj,_header),HX_CSTRING("_header")},
	{hx::fsObject /*::flash::display::Bitmap*/ ,(int)offsetof(Window_obj,_shadow),HX_CSTRING("_shadow")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(Window_obj,_title),HX_CSTRING("_title")},
	{hx::fsObject /*::flash::display::Bitmap*/ ,(int)offsetof(Window_obj,_handle),HX_CSTRING("_handle")},
	{hx::fsObject /*::flixel::system::ui::FlxSystemButton*/ ,(int)offsetof(Window_obj,_closeButton),HX_CSTRING("_closeButton")},
	{hx::fsBool,(int)offsetof(Window_obj,_overHeader),HX_CSTRING("_overHeader")},
	{hx::fsBool,(int)offsetof(Window_obj,_overHandle),HX_CSTRING("_overHandle")},
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(Window_obj,_drag),HX_CSTRING("_drag")},
	{hx::fsBool,(int)offsetof(Window_obj,_dragging),HX_CSTRING("_dragging")},
	{hx::fsBool,(int)offsetof(Window_obj,_resizing),HX_CSTRING("_resizing")},
	{hx::fsBool,(int)offsetof(Window_obj,_resizable),HX_CSTRING("_resizable")},
	{hx::fsInt,(int)offsetof(Window_obj,_id),HX_CSTRING("_id")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("minSize"),
	HX_CSTRING("maxSize"),
	HX_CSTRING("toggleButton"),
	HX_CSTRING("_width"),
	HX_CSTRING("_height"),
	HX_CSTRING("_bounds"),
	HX_CSTRING("_background"),
	HX_CSTRING("_header"),
	HX_CSTRING("_shadow"),
	HX_CSTRING("_title"),
	HX_CSTRING("_handle"),
	HX_CSTRING("_closeButton"),
	HX_CSTRING("_overHeader"),
	HX_CSTRING("_overHandle"),
	HX_CSTRING("_drag"),
	HX_CSTRING("_dragging"),
	HX_CSTRING("_resizing"),
	HX_CSTRING("_resizable"),
	HX_CSTRING("_id"),
	HX_CSTRING("destroy"),
	HX_CSTRING("resize"),
	HX_CSTRING("reposition"),
	HX_CSTRING("updateBounds"),
	HX_CSTRING("setVisible"),
	HX_CSTRING("toggleVisible"),
	HX_CSTRING("putOnTop"),
	HX_CSTRING("loadSaveData"),
	HX_CSTRING("initSaveData"),
	HX_CSTRING("update"),
	HX_CSTRING("init"),
	HX_CSTRING("onMouseMove"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("bound"),
	HX_CSTRING("updateSize"),
	HX_CSTRING("close"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Window_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Window_obj::BG_COLOR,"BG_COLOR");
	HX_MARK_MEMBER_NAME(Window_obj::HEADER_COLOR,"HEADER_COLOR");
	HX_MARK_MEMBER_NAME(Window_obj::HEADER_ALPHA,"HEADER_ALPHA");
	HX_MARK_MEMBER_NAME(Window_obj::HEADER_HEIGHT,"HEADER_HEIGHT");
	HX_MARK_MEMBER_NAME(Window_obj::WINDOW_AMOUNT,"WINDOW_AMOUNT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Window_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Window_obj::BG_COLOR,"BG_COLOR");
	HX_VISIT_MEMBER_NAME(Window_obj::HEADER_COLOR,"HEADER_COLOR");
	HX_VISIT_MEMBER_NAME(Window_obj::HEADER_ALPHA,"HEADER_ALPHA");
	HX_VISIT_MEMBER_NAME(Window_obj::HEADER_HEIGHT,"HEADER_HEIGHT");
	HX_VISIT_MEMBER_NAME(Window_obj::WINDOW_AMOUNT,"WINDOW_AMOUNT");
};

#endif

Class Window_obj::__mClass;

void Window_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.Window"), hx::TCanCast< Window_obj> ,sStaticFields,sMemberFields,
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

void Window_obj::__boot()
{
	BG_COLOR= (int)-580952225;
	HEADER_COLOR= (int)-1157627904;
	HEADER_ALPHA= 0.8;
	HEADER_HEIGHT= (int)15;
	WINDOW_AMOUNT= (int)0;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
