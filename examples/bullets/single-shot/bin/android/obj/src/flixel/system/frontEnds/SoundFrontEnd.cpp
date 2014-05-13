#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void SoundFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","new",0x71610699,"flixel.system.frontEnds.SoundFrontEnd.new","flixel/system/frontEnds/SoundFrontEnd.hx",14,0x9ba4fb18)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(61)
	this->volume = (int)1;
	HX_STACK_LINE(52)
	this->soundTrayEnabled = true;
	HX_STACK_LINE(23)
	this->muted = false;
	HX_STACK_LINE(257)
	this->volumeUpKeys = Array_obj< ::String >::__new().Add(HX_CSTRING("PLUS")).Add(HX_CSTRING("NUMPADPLUS"));
	HX_STACK_LINE(258)
	this->volumeDownKeys = Array_obj< ::String >::__new().Add(HX_CSTRING("MINUS")).Add(HX_CSTRING("NUMPADMINUS"));
	HX_STACK_LINE(259)
	this->muteKeys = Array_obj< ::String >::__new().Add(HX_CSTRING("ZERO")).Add(HX_CSTRING("NUMPADZERO"));
	HX_STACK_LINE(262)
	::flixel::group::FlxTypedGroup _g = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(262)
	this->list = _g;
	HX_STACK_LINE(263)
	::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(263)
	this->_soundCache = _g1;
}
;
	return null();
}

//SoundFrontEnd_obj::~SoundFrontEnd_obj() { }

Dynamic SoundFrontEnd_obj::__CreateEmpty() { return  new SoundFrontEnd_obj; }
hx::ObjectPtr< SoundFrontEnd_obj > SoundFrontEnd_obj::__new()
{  hx::ObjectPtr< SoundFrontEnd_obj > result = new SoundFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic SoundFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundFrontEnd_obj > result = new SoundFrontEnd_obj();
	result->__construct();
	return result;}

Void SoundFrontEnd_obj::playMusic( Dynamic Music,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","playMusic",0x3360250a,"flixel.system.frontEnds.SoundFrontEnd.playMusic","flixel/system/frontEnds/SoundFrontEnd.hx",73,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Music,"Music")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
{
		HX_STACK_LINE(74)
		if (((this->music == null()))){
			HX_STACK_LINE(76)
			::flixel::system::FlxSound _g = ::flixel::system::FlxSound_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(76)
			this->music = _g;
		}
		else{
			HX_STACK_LINE(78)
			if ((this->music->active)){
				HX_STACK_LINE(80)
				::flixel::system::FlxSound _this = this->music;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(80)
				_this->cleanup(_this->autoDestroy,true,true);
				HX_STACK_LINE(80)
				_this;
			}
		}
		HX_STACK_LINE(83)
		this->music->loadEmbedded(Music,Looped,null(),null());
		HX_STACK_LINE(84)
		this->music->set_volume(Volume);
		HX_STACK_LINE(85)
		this->music->persist = true;
		HX_STACK_LINE(86)
		this->music->play(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SoundFrontEnd_obj,playMusic,(void))

::flixel::system::FlxSound SoundFrontEnd_obj::load( Dynamic EmbeddedSound,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,hx::Null< bool >  __o_AutoPlay,::String URL,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(false);
bool AutoPlay = __o_AutoPlay.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","load",0xc239d5cd,"flixel.system.frontEnds.SoundFrontEnd.load","flixel/system/frontEnds/SoundFrontEnd.hx",101,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(AutoPlay,"AutoPlay")
	HX_STACK_ARG(URL,"URL")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(102)
		if (((bool((EmbeddedSound == null())) && bool((URL == null()))))){
			HX_STACK_LINE(105)
			return null();
		}
		HX_STACK_LINE(108)
		::flixel::system::FlxSound sound = this->list->recycle(hx::ClassOf< ::flixel::system::FlxSound >(),null(),null(),null());		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(110)
		if (((EmbeddedSound != null()))){
			HX_STACK_LINE(112)
			sound->loadEmbedded(EmbeddedSound,Looped,AutoDestroy,OnComplete);
		}
		else{
			HX_STACK_LINE(116)
			sound->loadStream(URL,Looped,AutoDestroy,OnComplete);
		}
		HX_STACK_LINE(119)
		sound->set_volume(Volume);
		HX_STACK_LINE(121)
		if ((AutoPlay)){
			HX_STACK_LINE(123)
			sound->play(null());
		}
		HX_STACK_LINE(126)
		return sound;
	}
}


HX_DEFINE_DYNAMIC_FUNC7(SoundFrontEnd_obj,load,return )

::flash::media::Sound SoundFrontEnd_obj::cache( ::String EmbeddedSound){
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","cache",0xf88690bb,"flixel.system.frontEnds.SoundFrontEnd.cache","flixel/system/frontEnds/SoundFrontEnd.hx",138,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
	HX_STACK_LINE(138)
	if ((this->_soundCache->exists(EmbeddedSound))){
		HX_STACK_LINE(140)
		return this->_soundCache->get(EmbeddedSound);
	}
	else{
		HX_STACK_LINE(144)
		::flash::media::Sound sound = ::openfl::Assets_obj::getSound(EmbeddedSound,null());		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(145)
		this->_soundCache->set(EmbeddedSound,sound);
		HX_STACK_LINE(147)
		return sound;
	}
	HX_STACK_LINE(138)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,cache,return )

::flixel::system::FlxSound SoundFrontEnd_obj::play( ::String EmbeddedSound,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","play",0xc4dc699b,"flixel.system.frontEnds.SoundFrontEnd.play","flixel/system/frontEnds/SoundFrontEnd.hx",161,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(162)
		::flash::media::Sound sound = null();		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(164)
		if ((this->_soundCache->exists(EmbeddedSound))){
			HX_STACK_LINE(166)
			::flash::media::Sound _g = this->_soundCache->get(EmbeddedSound);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(166)
			sound = _g;
		}
		else{
			HX_STACK_LINE(170)
			::flash::media::Sound _g1 = ::openfl::Assets_obj::getSound(EmbeddedSound,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(170)
			sound = _g1;
			HX_STACK_LINE(171)
			this->_soundCache->set(EmbeddedSound,sound);
		}
		HX_STACK_LINE(173)
		::flixel::system::FlxSound flixelSound = this->list->recycle(hx::ClassOf< ::flixel::system::FlxSound >(),null(),null(),null())->__Field(HX_CSTRING("loadEmbedded"),true)(sound,Looped,AutoDestroy,OnComplete);		HX_STACK_VAR(flixelSound,"flixelSound");
		HX_STACK_LINE(174)
		flixelSound->set_volume(Volume);
		HX_STACK_LINE(175)
		return flixelSound->play(null());
	}
}


HX_DEFINE_DYNAMIC_FUNC5(SoundFrontEnd_obj,play,return )

::flixel::system::FlxSound SoundFrontEnd_obj::stream( ::String URL,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","stream",0xdd72c7e7,"flixel.system.frontEnds.SoundFrontEnd.stream","flixel/system/frontEnds/SoundFrontEnd.hx",190,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(URL,"URL")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(190)
		return this->load(null(),Volume,Looped,AutoDestroy,true,URL,OnComplete);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(SoundFrontEnd_obj,stream,return )

Void SoundFrontEnd_obj::pause( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","pause",0x74c9cd6f,"flixel.system.frontEnds.SoundFrontEnd.pause","flixel/system/frontEnds/SoundFrontEnd.hx",197,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(198)
		if (((bool((bool((this->music != null())) && bool(this->music->exists))) && bool(this->music->active)))){
			HX_STACK_LINE(200)
			this->music->pause();
		}
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(203)
			Array< ::Dynamic > _g1 = this->list->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(203)
			while((true)){
				HX_STACK_LINE(203)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(203)
					break;
				}
				HX_STACK_LINE(203)
				::flixel::system::FlxSound sound = _g1->__get(_g).StaticCast< ::flixel::system::FlxSound >();		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(203)
				++(_g);
				HX_STACK_LINE(205)
				if (((bool((bool((sound != null())) && bool(sound->exists))) && bool(sound->active)))){
					HX_STACK_LINE(207)
					sound->pause();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,pause,(void))

Void SoundFrontEnd_obj::resume( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","resume",0xd4ca1d14,"flixel.system.frontEnds.SoundFrontEnd.resume","flixel/system/frontEnds/SoundFrontEnd.hx",216,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(217)
		if (((bool((this->music != null())) && bool(this->music->exists)))){
			HX_STACK_LINE(219)
			this->music->resume();
		}
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(222)
			Array< ::Dynamic > _g1 = this->list->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(222)
			while((true)){
				HX_STACK_LINE(222)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(222)
					break;
				}
				HX_STACK_LINE(222)
				::flixel::system::FlxSound sound = _g1->__get(_g).StaticCast< ::flixel::system::FlxSound >();		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(222)
				++(_g);
				HX_STACK_LINE(224)
				if (((bool((sound != null())) && bool(sound->exists)))){
					HX_STACK_LINE(226)
					sound->resume();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,resume,(void))

Void SoundFrontEnd_obj::destroy( hx::Null< bool >  __o_ForceDestroy){
bool ForceDestroy = __o_ForceDestroy.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","destroy",0x153d73b3,"flixel.system.frontEnds.SoundFrontEnd.destroy","flixel/system/frontEnds/SoundFrontEnd.hx",237,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ForceDestroy,"ForceDestroy")
{
		HX_STACK_LINE(238)
		if (((bool((this->music != null())) && bool(((bool(ForceDestroy) || bool(!(this->music->persist)))))))){
			HX_STACK_LINE(240)
			this->music->destroy();
			HX_STACK_LINE(241)
			this->music = null();
		}
		HX_STACK_LINE(244)
		{
			HX_STACK_LINE(244)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(244)
			Array< ::Dynamic > _g1 = this->list->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(244)
			while((true)){
				HX_STACK_LINE(244)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(244)
					break;
				}
				HX_STACK_LINE(244)
				::flixel::system::FlxSound sound = _g1->__get(_g).StaticCast< ::flixel::system::FlxSound >();		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(244)
				++(_g);
				HX_STACK_LINE(246)
				if (((bool((sound != null())) && bool(((bool(ForceDestroy) || bool(!(sound->persist)))))))){
					HX_STACK_LINE(248)
					sound->destroy();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,destroy,(void))

Void SoundFrontEnd_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","update",0x534b3970,"flixel.system.frontEnds.SoundFrontEnd.update","flixel/system/frontEnds/SoundFrontEnd.hx",270,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(271)
		if (((bool((this->music != null())) && bool(this->music->active)))){
			HX_STACK_LINE(273)
			this->music->update();
		}
		HX_STACK_LINE(276)
		if (((bool((this->list != null())) && bool(this->list->active)))){
			HX_STACK_LINE(278)
			this->list->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,update,(void))

Void SoundFrontEnd_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","onFocusLost",0xeb797bf6,"flixel.system.frontEnds.SoundFrontEnd.onFocusLost","flixel/system/frontEnds/SoundFrontEnd.hx",283,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(284)
		if (((this->music != null()))){
			HX_STACK_LINE(286)
			this->music->onFocusLost();
		}
		HX_STACK_LINE(289)
		{
			HX_STACK_LINE(289)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(289)
			Array< ::Dynamic > _g1 = this->list->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(289)
			while((true)){
				HX_STACK_LINE(289)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(289)
					break;
				}
				HX_STACK_LINE(289)
				::flixel::system::FlxSound sound = _g1->__get(_g).StaticCast< ::flixel::system::FlxSound >();		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(289)
				++(_g);
				HX_STACK_LINE(291)
				if (((sound != null()))){
					HX_STACK_LINE(293)
					sound->onFocusLost();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,onFocusLost,(void))

Void SoundFrontEnd_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","onFocus",0x8b7e44f2,"flixel.system.frontEnds.SoundFrontEnd.onFocus","flixel/system/frontEnds/SoundFrontEnd.hx",299,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(300)
		if (((this->music != null()))){
			HX_STACK_LINE(302)
			this->music->onFocus();
		}
		HX_STACK_LINE(305)
		{
			HX_STACK_LINE(305)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(305)
			Array< ::Dynamic > _g1 = this->list->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(305)
			while((true)){
				HX_STACK_LINE(305)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(305)
					break;
				}
				HX_STACK_LINE(305)
				::flixel::system::FlxSound sound = _g1->__get(_g).StaticCast< ::flixel::system::FlxSound >();		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(305)
				++(_g);
				HX_STACK_LINE(307)
				if (((sound != null()))){
					HX_STACK_LINE(309)
					sound->onFocus();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,onFocus,(void))

Void SoundFrontEnd_obj::loadSavedPrefs( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","loadSavedPrefs",0xc70de056,"flixel.system.frontEnds.SoundFrontEnd.loadSavedPrefs","flixel/system/frontEnds/SoundFrontEnd.hx",318,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(319)
		if (((::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("volume"),true) != null()))){
			HX_STACK_LINE(321)
			this->set_volume(::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("volume"),true));
		}
		else{
			HX_STACK_LINE(325)
			this->set_volume(0.5);
		}
		HX_STACK_LINE(328)
		if (((::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("mute"),true) != null()))){
			HX_STACK_LINE(330)
			this->muted = ::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("mute"),true);
		}
		else{
			HX_STACK_LINE(334)
			this->muted = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,loadSavedPrefs,(void))

Float SoundFrontEnd_obj::set_volume( Float Volume){
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","set_volume",0x2e392afe,"flixel.system.frontEnds.SoundFrontEnd.set_volume","flixel/system/frontEnds/SoundFrontEnd.hx",339,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_LINE(340)
	{
		HX_STACK_LINE(340)
		Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(340)
		if (((Volume < (int)0))){
			HX_STACK_LINE(340)
			lowerBound = (int)0;
		}
		else{
			HX_STACK_LINE(340)
			lowerBound = Volume;
		}
		HX_STACK_LINE(340)
		if (((lowerBound > (int)1))){
			HX_STACK_LINE(340)
			Volume = (int)1;
		}
		else{
			HX_STACK_LINE(340)
			Volume = lowerBound;
		}
	}
	HX_STACK_LINE(342)
	if (((this->volumeHandler_dyn() != null()))){
		HX_STACK_LINE(344)
		Float param;		HX_STACK_VAR(param,"param");
		HX_STACK_LINE(344)
		if ((this->muted)){
			HX_STACK_LINE(344)
			param = (int)0;
		}
		else{
			HX_STACK_LINE(344)
			param = Volume;
		}
		HX_STACK_LINE(345)
		this->volumeHandler(param);
	}
	HX_STACK_LINE(347)
	return this->volume = Volume;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,set_volume,return )


SoundFrontEnd_obj::SoundFrontEnd_obj()
{
}

void SoundFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundFrontEnd);
	HX_MARK_MEMBER_NAME(music,"music");
	HX_MARK_MEMBER_NAME(muted,"muted");
	HX_MARK_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_MARK_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_MARK_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_MARK_MEMBER_NAME(muteKeys,"muteKeys");
	HX_MARK_MEMBER_NAME(soundTrayEnabled,"soundTrayEnabled");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_MEMBER_NAME(_soundCache,"_soundCache");
	HX_MARK_END_CLASS();
}

void SoundFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(music,"music");
	HX_VISIT_MEMBER_NAME(muted,"muted");
	HX_VISIT_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_VISIT_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_VISIT_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_VISIT_MEMBER_NAME(muteKeys,"muteKeys");
	HX_VISIT_MEMBER_NAME(soundTrayEnabled,"soundTrayEnabled");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(volume,"volume");
	HX_VISIT_MEMBER_NAME(_soundCache,"_soundCache");
}

Dynamic SoundFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { return music; }
		if (HX_FIELD_EQ(inName,"muted") ) { return muted; }
		if (HX_FIELD_EQ(inName,"cache") ) { return cache_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return volume; }
		if (HX_FIELD_EQ(inName,"stream") ) { return stream_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { return muteKeys; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playMusic") ) { return playMusic_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_soundCache") ) { return _soundCache; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { return volumeUpKeys; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { return volumeHandler; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { return volumeDownKeys; }
		if (HX_FIELD_EQ(inName,"loadSavedPrefs") ) { return loadSavedPrefs_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundTrayEnabled") ) { return soundTrayEnabled; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"muted") ) { muted=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp) return set_volume(inValue);volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { muteKeys=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_soundCache") ) { _soundCache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { volumeUpKeys=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { volumeHandler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { volumeDownKeys=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundTrayEnabled") ) { soundTrayEnabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("music"));
	outFields->push(HX_CSTRING("muted"));
	outFields->push(HX_CSTRING("volumeUpKeys"));
	outFields->push(HX_CSTRING("volumeDownKeys"));
	outFields->push(HX_CSTRING("muteKeys"));
	outFields->push(HX_CSTRING("soundTrayEnabled"));
	outFields->push(HX_CSTRING("list"));
	outFields->push(HX_CSTRING("volume"));
	outFields->push(HX_CSTRING("_soundCache"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(SoundFrontEnd_obj,music),HX_CSTRING("music")},
	{hx::fsBool,(int)offsetof(SoundFrontEnd_obj,muted),HX_CSTRING("muted")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SoundFrontEnd_obj,volumeHandler),HX_CSTRING("volumeHandler")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(SoundFrontEnd_obj,volumeUpKeys),HX_CSTRING("volumeUpKeys")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(SoundFrontEnd_obj,volumeDownKeys),HX_CSTRING("volumeDownKeys")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(SoundFrontEnd_obj,muteKeys),HX_CSTRING("muteKeys")},
	{hx::fsBool,(int)offsetof(SoundFrontEnd_obj,soundTrayEnabled),HX_CSTRING("soundTrayEnabled")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(SoundFrontEnd_obj,list),HX_CSTRING("list")},
	{hx::fsFloat,(int)offsetof(SoundFrontEnd_obj,volume),HX_CSTRING("volume")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(SoundFrontEnd_obj,_soundCache),HX_CSTRING("_soundCache")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("music"),
	HX_CSTRING("muted"),
	HX_CSTRING("volumeHandler"),
	HX_CSTRING("volumeUpKeys"),
	HX_CSTRING("volumeDownKeys"),
	HX_CSTRING("muteKeys"),
	HX_CSTRING("soundTrayEnabled"),
	HX_CSTRING("list"),
	HX_CSTRING("volume"),
	HX_CSTRING("_soundCache"),
	HX_CSTRING("playMusic"),
	HX_CSTRING("load"),
	HX_CSTRING("cache"),
	HX_CSTRING("play"),
	HX_CSTRING("stream"),
	HX_CSTRING("pause"),
	HX_CSTRING("resume"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("loadSavedPrefs"),
	HX_CSTRING("set_volume"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundFrontEnd_obj::__mClass,"__mClass");
};

#endif

Class SoundFrontEnd_obj::__mClass;

void SoundFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.SoundFrontEnd"), hx::TCanCast< SoundFrontEnd_obj> ,sStaticFields,sMemberFields,
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

void SoundFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
