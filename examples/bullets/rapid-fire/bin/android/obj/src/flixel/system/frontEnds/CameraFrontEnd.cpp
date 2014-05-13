#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void CameraFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","new",0xc6f5a1a3,"flixel.system.frontEnds.CameraFrontEnd.new","flixel/system/frontEnds/CameraFrontEnd.hx",10,0x7a57d3ec)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(27)
	this->useBufferLocking = false;
	HX_STACK_LINE(166)
	::flash::geom::Rectangle _g = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(166)
	this->_cameraRect = _g;
	HX_STACK_LINE(167)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(167)
	this->list = _g1;
	HX_STACK_LINE(168)
	::flixel::FlxCamera_obj::defaultCameras = this->list;
}
;
	return null();
}

//CameraFrontEnd_obj::~CameraFrontEnd_obj() { }

Dynamic CameraFrontEnd_obj::__CreateEmpty() { return  new CameraFrontEnd_obj; }
hx::ObjectPtr< CameraFrontEnd_obj > CameraFrontEnd_obj::__new()
{  hx::ObjectPtr< CameraFrontEnd_obj > result = new CameraFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic CameraFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CameraFrontEnd_obj > result = new CameraFrontEnd_obj();
	result->__construct();
	return result;}

::flixel::FlxCamera CameraFrontEnd_obj::add_flixel_FlxCamera( ::flixel::FlxCamera NewCamera){
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","add_flixel_FlxCamera",0x4d50242f,"flixel.system.frontEnds.CameraFrontEnd.add_flixel_FlxCamera","flixel/system/frontEnds/CameraFrontEnd.hx",42,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewCamera,"NewCamera")
	HX_STACK_LINE(44)
	int _g = ::flixel::FlxG_obj::game->getChildIndex(::flixel::FlxG_obj::game->_inputContainer);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(44)
	::flixel::FlxG_obj::game->addChildAt(NewCamera->flashSprite,_g);
	HX_STACK_LINE(46)
	::flixel::FlxG_obj::cameras->list->push(NewCamera);
	HX_STACK_LINE(47)
	NewCamera->ID = (::flixel::FlxG_obj::cameras->list->length - (int)1);
	HX_STACK_LINE(48)
	return NewCamera;
}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,add_flixel_FlxCamera,return )

Void CameraFrontEnd_obj::remove( ::flixel::FlxCamera Camera,hx::Null< bool >  __o_Destroy){
bool Destroy = __o_Destroy.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","remove",0xaa68b6e1,"flixel.system.frontEnds.CameraFrontEnd.remove","flixel/system/frontEnds/CameraFrontEnd.hx",58,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(Destroy,"Destroy")
{
		HX_STACK_LINE(59)
		int index = this->list->indexOf(Camera,null());		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(60)
		if (((bool((Camera != null())) && bool((index != (int)-1))))){
			HX_STACK_LINE(63)
			::flixel::FlxG_obj::game->removeChild(Camera->flashSprite);
			HX_STACK_LINE(66)
			this->list->splice(index,(int)1);
		}
		else{
			HX_STACK_LINE(70)
			Dynamic();
		}
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(74)
			int _g = this->list->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(74)
			while((true)){
				HX_STACK_LINE(74)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(74)
					break;
				}
				HX_STACK_LINE(74)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(76)
				this->list->__get(i).StaticCast< ::flixel::FlxCamera >()->ID = i;
			}
		}
		HX_STACK_LINE(80)
		if ((Destroy)){
			HX_STACK_LINE(82)
			Camera->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CameraFrontEnd_obj,remove,(void))

Void CameraFrontEnd_obj::reset( ::flixel::FlxCamera NewCamera){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","reset",0xf67331d2,"flixel.system.frontEnds.CameraFrontEnd.reset","flixel/system/frontEnds/CameraFrontEnd.hx",93,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(NewCamera,"NewCamera")
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(95)
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(95)
			while((true)){
				HX_STACK_LINE(95)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(95)
					break;
				}
				HX_STACK_LINE(95)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(95)
				++(_g);
				HX_STACK_LINE(97)
				::flixel::FlxG_obj::game->removeChild(camera->flashSprite);
				HX_STACK_LINE(98)
				camera->destroy();
			}
		}
		HX_STACK_LINE(102)
		this->list->splice((int)0,this->list->length);
		HX_STACK_LINE(104)
		if (((NewCamera == null()))){
			HX_STACK_LINE(106)
			::flixel::FlxCamera _g = ::flixel::FlxCamera_obj::__new((int)0,(int)0,::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(106)
			NewCamera = _g;
		}
		HX_STACK_LINE(109)
		::flixel::FlxCamera _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			int _g1 = ::flixel::FlxG_obj::game->getChildIndex(::flixel::FlxG_obj::game->_inputContainer);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(109)
			::flixel::FlxG_obj::game->addChildAt(NewCamera->flashSprite,_g1);
			HX_STACK_LINE(109)
			::flixel::FlxG_obj::cameras->list->push(NewCamera);
			HX_STACK_LINE(109)
			NewCamera->ID = (::flixel::FlxG_obj::cameras->list->length - (int)1);
			HX_STACK_LINE(109)
			_g2 = NewCamera;
		}
		HX_STACK_LINE(109)
		::flixel::FlxG_obj::camera = _g2;
		HX_STACK_LINE(110)
		NewCamera->ID = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,reset,(void))

Void CameraFrontEnd_obj::flash( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-1);
Float Duration = __o_Duration.Default(1);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","flash",0x12371db3,"flixel.system.frontEnds.CameraFrontEnd.flash","flixel/system/frontEnds/CameraFrontEnd.hx",123,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(123)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(123)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(123)
		while((true)){
			HX_STACK_LINE(123)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(123)
				break;
			}
			HX_STACK_LINE(123)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(123)
			++(_g);
			HX_STACK_LINE(125)
			camera->flash(Color,Duration,OnComplete,Force);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CameraFrontEnd_obj,flash,(void))

Void CameraFrontEnd_obj::fade( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,hx::Null< bool >  __o_FadeIn,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-16777216);
Float Duration = __o_Duration.Default(1);
bool FadeIn = __o_FadeIn.Default(false);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","fade",0x4aaafed9,"flixel.system.frontEnds.CameraFrontEnd.fade","flixel/system/frontEnds/CameraFrontEnd.hx",140,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FadeIn,"FadeIn")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(140)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(140)
		while((true)){
			HX_STACK_LINE(140)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(140)
				break;
			}
			HX_STACK_LINE(140)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(140)
			++(_g);
			HX_STACK_LINE(142)
			camera->fade(Color,Duration,FadeIn,OnComplete,Force);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,fade,(void))

Void CameraFrontEnd_obj::shake( hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force,hx::Null< int >  __o_Direction){
Float Intensity = __o_Intensity.Default(0.05);
Float Duration = __o_Duration.Default(0.5);
bool Force = __o_Force.Default(true);
int Direction = __o_Direction.Default(0);
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","shake",0x8bc7c6c9,"flixel.system.frontEnds.CameraFrontEnd.shake","flixel/system/frontEnds/CameraFrontEnd.hx",157,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Intensity,"Intensity")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Direction,"Direction")
{
		HX_STACK_LINE(157)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(157)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(157)
		while((true)){
			HX_STACK_LINE(157)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(157)
				break;
			}
			HX_STACK_LINE(157)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(157)
			++(_g);
			HX_STACK_LINE(159)
			camera->shake(Intensity,Duration,OnComplete,Force,Direction);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,shake,(void))

Void CameraFrontEnd_obj::lock( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","lock",0x4eace548,"flixel.system.frontEnds.CameraFrontEnd.lock","flixel/system/frontEnds/CameraFrontEnd.hx",176,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(176)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(176)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(176)
		while((true)){
			HX_STACK_LINE(176)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(176)
				break;
			}
			HX_STACK_LINE(176)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(176)
			++(_g);
			HX_STACK_LINE(178)
			if (((bool((bool((camera == null())) || bool(!(camera->exists)))) || bool(!(camera->visible))))){
				HX_STACK_LINE(180)
				continue;
			}
			HX_STACK_LINE(193)
			camera->clearDrawStack();
			HX_STACK_LINE(194)
			camera->canvas->get_graphics()->clear();
			HX_STACK_LINE(205)
			camera->fill((int(camera->bgColor) & int((int)16777215)),camera->useBgAlphaBlending,(Float(((int((int(camera->bgColor) >> int((int)24))) & int((int)255)))) / Float((int)255)),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,lock,(void))

Void CameraFrontEnd_obj::render( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","render",0xab0985f3,"flixel.system.frontEnds.CameraFrontEnd.render","flixel/system/frontEnds/CameraFrontEnd.hx",213,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(213)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(213)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(213)
		while((true)){
			HX_STACK_LINE(213)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(213)
				break;
			}
			HX_STACK_LINE(213)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(213)
			++(_g);
			HX_STACK_LINE(215)
			if (((bool((bool((camera != null())) && bool(camera->exists))) && bool(camera->visible)))){
				HX_STACK_LINE(217)
				camera->render();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,render,(void))

Void CameraFrontEnd_obj::unlock( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","unlock",0x0b6cbd61,"flixel.system.frontEnds.CameraFrontEnd.unlock","flixel/system/frontEnds/CameraFrontEnd.hx",228,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(228)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(228)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(228)
		while((true)){
			HX_STACK_LINE(228)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(228)
				break;
			}
			HX_STACK_LINE(228)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(228)
			++(_g);
			HX_STACK_LINE(230)
			if (((bool((bool((camera == null())) || bool(!(camera->exists)))) || bool(!(camera->visible))))){
				HX_STACK_LINE(232)
				continue;
			}
			HX_STACK_LINE(235)
			camera->drawFX();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,unlock,(void))

Void CameraFrontEnd_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","update",0x2ce5a0a6,"flixel.system.frontEnds.CameraFrontEnd.update","flixel/system/frontEnds/CameraFrontEnd.hx",253,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(253)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(253)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(253)
		while((true)){
			HX_STACK_LINE(253)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(253)
				break;
			}
			HX_STACK_LINE(253)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(253)
			++(_g);
			HX_STACK_LINE(255)
			if (((bool((camera != null())) && bool(camera->exists)))){
				HX_STACK_LINE(257)
				if ((camera->active)){
					HX_STACK_LINE(259)
					camera->update();
				}
				HX_STACK_LINE(262)
				camera->flashSprite->set_x((camera->x + camera->_flashOffset->x));
				HX_STACK_LINE(263)
				camera->flashSprite->set_y((camera->y + camera->_flashOffset->y));
				HX_STACK_LINE(264)
				camera->flashSprite->set_visible(camera->visible);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,update,(void))

int CameraFrontEnd_obj::get_bgColor( ){
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","get_bgColor",0x99072db8,"flixel.system.frontEnds.CameraFrontEnd.get_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",271,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_LINE(271)
	if (((::flixel::FlxG_obj::camera == null()))){
		HX_STACK_LINE(271)
		return (int)-16777216;
	}
	else{
		HX_STACK_LINE(271)
		return ::flixel::FlxG_obj::camera->bgColor;
	}
	HX_STACK_LINE(271)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,get_bgColor,return )

int CameraFrontEnd_obj::set_bgColor( int Color){
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","set_bgColor",0xa37434c4,"flixel.system.frontEnds.CameraFrontEnd.set_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",275,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(276)
	{
		HX_STACK_LINE(276)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(276)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(276)
		while((true)){
			HX_STACK_LINE(276)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(276)
				break;
			}
			HX_STACK_LINE(276)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(276)
			++(_g);
			HX_STACK_LINE(278)
			camera->bgColor = Color;
		}
	}
	HX_STACK_LINE(281)
	return Color;
}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,set_bgColor,return )


CameraFrontEnd_obj::CameraFrontEnd_obj()
{
}

void CameraFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CameraFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_MARK_MEMBER_NAME(_cameraRect,"_cameraRect");
	HX_MARK_END_CLASS();
}

void CameraFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_VISIT_MEMBER_NAME(_cameraRect,"_cameraRect");
}

Dynamic CameraFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		if (HX_FIELD_EQ(inName,"fade") ) { return fade_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return get_bgColor(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { return _cameraRect; }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return get_bgColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return set_bgColor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { return useBufferLocking; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"add_flixel_FlxCamera") ) { return add_flixel_FlxCamera_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CameraFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return set_bgColor(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { _cameraRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { useBufferLocking=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CameraFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("list"));
	outFields->push(HX_CSTRING("bgColor"));
	outFields->push(HX_CSTRING("useBufferLocking"));
	outFields->push(HX_CSTRING("_cameraRect"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CameraFrontEnd_obj,list),HX_CSTRING("list")},
	{hx::fsBool,(int)offsetof(CameraFrontEnd_obj,useBufferLocking),HX_CSTRING("useBufferLocking")},
	{hx::fsObject /*::flash::geom::Rectangle*/ ,(int)offsetof(CameraFrontEnd_obj,_cameraRect),HX_CSTRING("_cameraRect")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("add_flixel_FlxCamera"),
	HX_CSTRING("list"),
	HX_CSTRING("useBufferLocking"),
	HX_CSTRING("_cameraRect"),
	HX_CSTRING("remove"),
	HX_CSTRING("reset"),
	HX_CSTRING("flash"),
	HX_CSTRING("fade"),
	HX_CSTRING("shake"),
	HX_CSTRING("lock"),
	HX_CSTRING("render"),
	HX_CSTRING("unlock"),
	HX_CSTRING("update"),
	HX_CSTRING("get_bgColor"),
	HX_CSTRING("set_bgColor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CameraFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CameraFrontEnd_obj::__mClass,"__mClass");
};

#endif

Class CameraFrontEnd_obj::__mClass;

void CameraFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.CameraFrontEnd"), hx::TCanCast< CameraFrontEnd_obj> ,sStaticFields,sMemberFields,
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

void CameraFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
