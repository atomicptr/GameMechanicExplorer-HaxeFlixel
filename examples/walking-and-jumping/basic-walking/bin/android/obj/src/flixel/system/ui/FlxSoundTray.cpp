#include <hxcpp.h>

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
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_media_Sound
#include <flash/media/Sound.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_text_TextFormatAlign
#include <flash/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#include <flixel/system/ui/FlxSoundTray.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace system{
namespace ui{

Void FlxSoundTray_obj::__construct()
{
HX_STACK_FRAME("flixel.system.ui.FlxSoundTray","new",0x221b6352,"flixel.system.ui.FlxSoundTray.new","flixel/system/ui/FlxSoundTray.hx",22,0x04618f9d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(42)
	this->_defaultScale = 2.0;
	HX_STACK_LINE(40)
	this->_width = (int)80;
	HX_STACK_LINE(49)
	super::__construct();
	HX_STACK_LINE(51)
	this->set_visible(false);
	HX_STACK_LINE(52)
	this->set_scaleX(this->_defaultScale);
	HX_STACK_LINE(53)
	this->set_scaleY(this->_defaultScale);
	HX_STACK_LINE(54)
	::flash::display::BitmapData _g = ::flash::display::BitmapData_obj::__new(this->_width,(int)30,true,(int)2130706432,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(54)
	::flash::display::Bitmap tmp = ::flash::display::Bitmap_obj::__new(_g,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	this->screenCenter();
	HX_STACK_LINE(56)
	this->addChild(tmp);
	HX_STACK_LINE(58)
	::flash::text::TextField text = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(text,"text");
	HX_STACK_LINE(59)
	Float _g1 = tmp->get_width();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(59)
	text->set_width(_g1);
	HX_STACK_LINE(60)
	Float _g2 = tmp->get_height();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(60)
	text->set_height(_g2);
	HX_STACK_LINE(61)
	text->set_multiline(true);
	HX_STACK_LINE(62)
	text->set_wordWrap(true);
	HX_STACK_LINE(63)
	text->set_selectable(false);
	HX_STACK_LINE(72)
	::flash::text::TextFormat dtf = ::flash::text::TextFormat_obj::__new(::flixel::system::FlxAssets_obj::FONT_DEFAULT,(int)8,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(dtf,"dtf");
	HX_STACK_LINE(73)
	dtf->align = ::flash::text::TextFormatAlign_obj::CENTER;
	HX_STACK_LINE(74)
	text->set_defaultTextFormat(dtf);
	HX_STACK_LINE(75)
	this->addChild(text);
	HX_STACK_LINE(76)
	text->set_text(HX_CSTRING("VOLUME"));
	HX_STACK_LINE(77)
	text->set_y((int)16);
	HX_STACK_LINE(79)
	int bx = (int)10;		HX_STACK_VAR(bx,"bx");
	HX_STACK_LINE(80)
	int by = (int)14;		HX_STACK_VAR(by,"by");
	HX_STACK_LINE(81)
	Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(81)
	this->_bars = _g3;
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(83)
		while((true)){
			HX_STACK_LINE(83)
			if ((!(((_g4 < (int)10))))){
				HX_STACK_LINE(83)
				break;
			}
			HX_STACK_LINE(83)
			int i = (_g4)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(85)
			::flash::display::BitmapData _g41 = ::flash::display::BitmapData_obj::__new((int)4,(i + (int)1),false,(int)-1,null());		HX_STACK_VAR(_g41,"_g41");
			HX_STACK_LINE(85)
			::flash::display::Bitmap _g5 = ::flash::display::Bitmap_obj::__new(_g41,null(),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(85)
			tmp = _g5;
			HX_STACK_LINE(86)
			tmp->set_x(bx);
			HX_STACK_LINE(87)
			tmp->set_y(by);
			HX_STACK_LINE(88)
			this->addChild(tmp);
			HX_STACK_LINE(89)
			this->_bars->push(tmp);
			HX_STACK_LINE(90)
			hx::AddEq(bx,(int)6);
			HX_STACK_LINE(91)
			(by)--;
		}
	}
	HX_STACK_LINE(94)
	Float _g6 = -(this->get_height());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(94)
	this->set_y(_g6);
	HX_STACK_LINE(95)
	this->set_visible(false);
}
;
	return null();
}

//FlxSoundTray_obj::~FlxSoundTray_obj() { }

Dynamic FlxSoundTray_obj::__CreateEmpty() { return  new FlxSoundTray_obj; }
hx::ObjectPtr< FlxSoundTray_obj > FlxSoundTray_obj::__new()
{  hx::ObjectPtr< FlxSoundTray_obj > result = new FlxSoundTray_obj();
	result->__construct();
	return result;}

Dynamic FlxSoundTray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSoundTray_obj > result = new FlxSoundTray_obj();
	result->__construct();
	return result;}

Void FlxSoundTray_obj::update( Float MS){
{
		HX_STACK_FRAME("flixel.system.ui.FlxSoundTray","update",0x9cbad657,"flixel.system.ui.FlxSoundTray.update","flixel/system/ui/FlxSoundTray.hx",104,0x04618f9d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(MS,"MS")
		HX_STACK_LINE(104)
		if (((this->_timer > (int)0))){
			HX_STACK_LINE(106)
			hx::SubEq(this->_timer,(Float(MS) / Float((int)1000)));
		}
		else{
			HX_STACK_LINE(108)
			Float _g = this->get_y();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(108)
			Float _g1 = -(this->get_height());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(108)
			if (((_g > _g1))){
				HX_STACK_LINE(110)
				{
					HX_STACK_LINE(110)
					::flixel::system::ui::FlxSoundTray _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(110)
					Float _g21 = _g2->get_y();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(110)
					Float _g3 = (_g21 - (((Float(MS) / Float((int)1000)) * ::flixel::FlxG_obj::height) * (int)2));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(110)
					_g2->set_y(_g3);
				}
				HX_STACK_LINE(112)
				Float _g4 = this->get_y();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(112)
				Float _g5 = -(this->get_height());		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(112)
				if (((_g4 <= _g5))){
					HX_STACK_LINE(114)
					this->set_visible(false);
					HX_STACK_LINE(115)
					this->active = false;
					HX_STACK_LINE(118)
					::flixel::FlxG_obj::save->data->__FieldRef(HX_CSTRING("mute")) = ::flixel::FlxG_obj::sound->muted;
					HX_STACK_LINE(119)
					::flixel::FlxG_obj::save->data->__FieldRef(HX_CSTRING("volume")) = ::flixel::FlxG_obj::sound->volume;
					HX_STACK_LINE(120)
					::flixel::FlxG_obj::save->flush(null(),null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSoundTray_obj,update,(void))

Void FlxSoundTray_obj::show( hx::Null< bool >  __o_Silent){
bool Silent = __o_Silent.Default(false);
	HX_STACK_FRAME("flixel.system.ui.FlxSoundTray","show",0xb92bd5cb,"flixel.system.ui.FlxSoundTray.show","flixel/system/ui/FlxSoundTray.hx",131,0x04618f9d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Silent,"Silent")
{
		HX_STACK_LINE(132)
		if ((!(Silent))){
			HX_STACK_LINE(134)
			::flash::media::Sound _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				::String extension = HX_CSTRING("");		HX_STACK_VAR(extension,"extension");
				HX_STACK_LINE(134)
				extension = HX_CSTRING(".ogg");
				HX_STACK_LINE(134)
				_g = ::openfl::Assets_obj::getSound((HX_CSTRING("assets/sounds/beep") + extension),null());
			}
			HX_STACK_LINE(134)
			::flixel::FlxG_obj::sound->load(_g,null(),null(),null(),null(),null(),null())->play(null());
		}
		HX_STACK_LINE(137)
		this->_timer = (int)1;
		HX_STACK_LINE(138)
		this->set_y((int)0);
		HX_STACK_LINE(139)
		this->set_visible(true);
		HX_STACK_LINE(140)
		this->active = true;
		HX_STACK_LINE(141)
		int globalVolume = ::Math_obj::round((::flixel::FlxG_obj::sound->volume * (int)10));		HX_STACK_VAR(globalVolume,"globalVolume");
		HX_STACK_LINE(143)
		if ((::flixel::FlxG_obj::sound->muted)){
			HX_STACK_LINE(145)
			globalVolume = (int)0;
		}
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(148)
			int _g = this->_bars->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(148)
			while((true)){
				HX_STACK_LINE(148)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(148)
					break;
				}
				HX_STACK_LINE(148)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(150)
				if (((i < globalVolume))){
					HX_STACK_LINE(152)
					this->_bars->__get(i).StaticCast< ::flash::display::Bitmap >()->set_alpha((int)1);
				}
				else{
					HX_STACK_LINE(156)
					this->_bars->__get(i).StaticCast< ::flash::display::Bitmap >()->set_alpha(0.5);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSoundTray_obj,show,(void))

Void FlxSoundTray_obj::screenCenter( ){
{
		HX_STACK_FRAME("flixel.system.ui.FlxSoundTray","screenCenter",0x0f14ad2f,"flixel.system.ui.FlxSoundTray.screenCenter","flixel/system/ui/FlxSoundTray.hx",162,0x04618f9d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(163)
		Float _g = ::flixel::FlxG_obj::game->get_scaleX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(163)
		Float _g1 = (Float(this->_defaultScale) / Float(_g));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(163)
		this->set_scaleX(_g1);
		HX_STACK_LINE(164)
		Float _g2 = ::flixel::FlxG_obj::game->get_scaleY();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(164)
		Float _g3 = (Float(this->_defaultScale) / Float(_g2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(164)
		this->set_scaleY(_g3);
		HX_STACK_LINE(166)
		int _g4 = ::flash::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(166)
		Float _g5 = (_g4 - (this->_width * this->_defaultScale));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(166)
		Float _g6 = (0.5 * _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(166)
		Float _g7 = ::flixel::FlxG_obj::game->get_x();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(166)
		Float _g8 = (_g6 - _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(166)
		Float _g9 = ::flixel::FlxG_obj::game->get_scaleX();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(166)
		Float _g10 = (Float(_g8) / Float(_g9));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(166)
		this->set_x(_g10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSoundTray_obj,screenCenter,(void))


FlxSoundTray_obj::FlxSoundTray_obj()
{
}

void FlxSoundTray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSoundTray);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_bars,"_bars");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_defaultScale,"_defaultScale");
	::flash::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSoundTray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_bars,"_bars");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_defaultScale,"_defaultScale");
	::flash::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSoundTray_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_bars") ) { return _bars; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenCenter") ) { return screenCenter_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_defaultScale") ) { return _defaultScale; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSoundTray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_bars") ) { _bars=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_defaultScale") ) { _defaultScale=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSoundTray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("_timer"));
	outFields->push(HX_CSTRING("_bars"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_defaultScale"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxSoundTray_obj,active),HX_CSTRING("active")},
	{hx::fsFloat,(int)offsetof(FlxSoundTray_obj,_timer),HX_CSTRING("_timer")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxSoundTray_obj,_bars),HX_CSTRING("_bars")},
	{hx::fsInt,(int)offsetof(FlxSoundTray_obj,_width),HX_CSTRING("_width")},
	{hx::fsFloat,(int)offsetof(FlxSoundTray_obj,_defaultScale),HX_CSTRING("_defaultScale")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("active"),
	HX_CSTRING("_timer"),
	HX_CSTRING("_bars"),
	HX_CSTRING("_width"),
	HX_CSTRING("_defaultScale"),
	HX_CSTRING("update"),
	HX_CSTRING("show"),
	HX_CSTRING("screenCenter"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSoundTray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSoundTray_obj::__mClass,"__mClass");
};

#endif

Class FlxSoundTray_obj::__mClass;

void FlxSoundTray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.ui.FlxSoundTray"), hx::TCanCast< FlxSoundTray_obj> ,sStaticFields,sMemberFields,
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

void FlxSoundTray_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace ui
