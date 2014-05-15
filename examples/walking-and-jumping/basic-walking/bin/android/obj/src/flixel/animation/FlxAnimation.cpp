#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
namespace flixel{
namespace animation{

Void FlxAnimation_obj::__construct(::flixel::animation::FlxAnimationController Parent,::String Name,Array< int > Frames,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped)
{
HX_STACK_FRAME("flixel.animation.FlxAnimation","new",0x9bc5ffc0,"flixel.animation.FlxAnimation.new","flixel/animation/FlxAnimation.hx",9,0x660bc6ae)
HX_STACK_THIS(this)
HX_STACK_ARG(Parent,"Parent")
HX_STACK_ARG(Name,"Name")
HX_STACK_ARG(Frames,"Frames")
HX_STACK_ARG(__o_FrameRate,"FrameRate")
HX_STACK_ARG(__o_Looped,"Looped")
int FrameRate = __o_FrameRate.Default(0);
bool Looped = __o_Looped.Default(true);
{
	HX_STACK_LINE(57)
	this->_frameTimer = (int)0;
	HX_STACK_LINE(45)
	this->looped = true;
	HX_STACK_LINE(40)
	this->paused = true;
	HX_STACK_LINE(35)
	this->finished = true;
	HX_STACK_LINE(30)
	this->delay = (int)0;
	HX_STACK_LINE(20)
	this->curFrame = (int)0;
	HX_STACK_LINE(67)
	super::__construct(Parent,Name);
	HX_STACK_LINE(69)
	this->set_frameRate(FrameRate);
	HX_STACK_LINE(70)
	this->_frames = Frames;
	HX_STACK_LINE(71)
	this->looped = Looped;
}
;
	return null();
}

//FlxAnimation_obj::~FlxAnimation_obj() { }

Dynamic FlxAnimation_obj::__CreateEmpty() { return  new FlxAnimation_obj; }
hx::ObjectPtr< FlxAnimation_obj > FlxAnimation_obj::__new(::flixel::animation::FlxAnimationController Parent,::String Name,Array< int > Frames,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped)
{  hx::ObjectPtr< FlxAnimation_obj > result = new FlxAnimation_obj();
	result->__construct(Parent,Name,Frames,__o_FrameRate,__o_Looped);
	return result;}

Dynamic FlxAnimation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAnimation_obj > result = new FlxAnimation_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void FlxAnimation_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","destroy",0x7cb38c5a,"flixel.animation.FlxAnimation.destroy","flixel/animation/FlxAnimation.hx",78,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		this->_frames = null();
		HX_STACK_LINE(80)
		this->name = null();
		HX_STACK_LINE(81)
		this->super::destroy();
	}
return null();
}


Void FlxAnimation_obj::play( hx::Null< bool >  __o_Force,hx::Null< int >  __o_Frame){
bool Force = __o_Force.Default(false);
int Frame = __o_Frame.Default(0);
	HX_STACK_FRAME("flixel.animation.FlxAnimation","play",0xb2d17294,"flixel.animation.FlxAnimation.play","flixel/animation/FlxAnimation.hx",85,0x660bc6ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Frame,"Frame")
{
		HX_STACK_LINE(86)
		if (((bool(!(Force)) && bool(((bool(this->looped) || bool(!(this->finished)))))))){
			HX_STACK_LINE(88)
			this->paused = false;
			HX_STACK_LINE(89)
			this->finished = false;
			HX_STACK_LINE(90)
			this->set_curFrame(this->curFrame);
			HX_STACK_LINE(91)
			return null();
		}
		HX_STACK_LINE(94)
		this->paused = false;
		HX_STACK_LINE(95)
		this->_frameTimer = (int)0;
		HX_STACK_LINE(97)
		if (((bool((this->delay <= (int)0)) || bool((Frame == (this->_frames->length - (int)1)))))){
			HX_STACK_LINE(99)
			this->finished = true;
		}
		else{
			HX_STACK_LINE(103)
			this->finished = false;
		}
		HX_STACK_LINE(106)
		if (((Frame < (int)0))){
			HX_STACK_LINE(108)
			int _g = ::flixel::util::FlxRandom_obj::intRanged((int)0,(this->_frames->length - (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(108)
			this->set_curFrame(_g);
		}
		else{
			HX_STACK_LINE(110)
			if (((this->_frames->length > Frame))){
				HX_STACK_LINE(112)
				this->set_curFrame(Frame);
			}
			else{
				HX_STACK_LINE(116)
				this->set_curFrame((int)0);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimation_obj,play,(void))

Void FlxAnimation_obj::restart( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","restart",0xc2d3272f,"flixel.animation.FlxAnimation.restart","flixel/animation/FlxAnimation.hx",122,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(122)
		this->play(true,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,restart,(void))

Void FlxAnimation_obj::stop( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","stop",0xb4d334a2,"flixel.animation.FlxAnimation.stop","flixel/animation/FlxAnimation.hx",126,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(127)
		this->finished = true;
		HX_STACK_LINE(128)
		this->paused = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,stop,(void))

Void FlxAnimation_obj::update( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","update",0x6f4f32a9,"flixel.animation.FlxAnimation.update","flixel/animation/FlxAnimation.hx",133,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		if (((bool((bool((this->delay > (int)0)) && bool(((bool(this->looped) || bool(!(this->finished))))))) && bool(!(this->paused))))){
			HX_STACK_LINE(135)
			hx::AddEq(this->_frameTimer,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(136)
			while((true)){
				HX_STACK_LINE(136)
				if ((!(((this->_frameTimer > this->delay))))){
					HX_STACK_LINE(136)
					break;
				}
				HX_STACK_LINE(138)
				this->_frameTimer = (this->_frameTimer - this->delay);
				HX_STACK_LINE(139)
				if (((bool(this->looped) && bool((this->curFrame == (this->_frames->length - (int)1)))))){
					HX_STACK_LINE(141)
					this->set_curFrame((int)0);
				}
				else{
					HX_STACK_LINE(145)
					::flixel::animation::FlxAnimation _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(145)
					int _g1 = _g->curFrame;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(145)
					_g->set_curFrame((_g1 + (int)1));
					HX_STACK_LINE(145)
					_g1;
				}
			}
		}
	}
return null();
}


::flixel::animation::FlxBaseAnimation FlxAnimation_obj::clone( ::flixel::animation::FlxAnimationController Parent){
	HX_STACK_FRAME("flixel.animation.FlxAnimation","clone",0x4847dabd,"flixel.animation.FlxAnimation.clone","flixel/animation/FlxAnimation.hx",153,0x660bc6ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Parent,"Parent")
	HX_STACK_LINE(153)
	return ::flixel::animation::FlxAnimation_obj::__new(Parent,this->name,this->_frames,this->frameRate,this->looped);
}


int FlxAnimation_obj::set_frameRate( int value){
	HX_STACK_FRAME("flixel.animation.FlxAnimation","set_frameRate",0x8699eef0,"flixel.animation.FlxAnimation.set_frameRate","flixel/animation/FlxAnimation.hx",157,0x660bc6ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(158)
	this->delay = (int)0;
	HX_STACK_LINE(159)
	this->frameRate = value;
	HX_STACK_LINE(160)
	if (((value > (int)0))){
		HX_STACK_LINE(162)
		this->delay = (Float(1.0) / Float(value));
	}
	HX_STACK_LINE(164)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimation_obj,set_frameRate,return )

int FlxAnimation_obj::set_curFrame( int Frame){
	HX_STACK_FRAME("flixel.animation.FlxAnimation","set_curFrame",0x46812eaa,"flixel.animation.FlxAnimation.set_curFrame","flixel/animation/FlxAnimation.hx",168,0x660bc6ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_LINE(169)
	if (((Frame >= (int)0))){
		HX_STACK_LINE(171)
		if (((bool(!(this->looped)) && bool((Frame >= this->_frames->length))))){
			HX_STACK_LINE(173)
			this->finished = true;
			HX_STACK_LINE(174)
			this->curFrame = (this->_frames->length - (int)1);
		}
		else{
			HX_STACK_LINE(178)
			this->curFrame = Frame;
		}
	}
	else{
		HX_STACK_LINE(183)
		int _g = ::flixel::util::FlxRandom_obj::intRanged((int)0,(this->_frames->length - (int)1),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(183)
		this->curFrame = _g;
	}
	HX_STACK_LINE(186)
	this->set_curIndex(this->_frames->__get(this->curFrame));
	HX_STACK_LINE(187)
	return Frame;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimation_obj,set_curFrame,return )

int FlxAnimation_obj::get_numFrames( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimation","get_numFrames",0x65f5f5c3,"flixel.animation.FlxAnimation.get_numFrames","flixel/animation/FlxAnimation.hx",192,0x660bc6ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	return this->_frames->length;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,get_numFrames,return )


FlxAnimation_obj::FlxAnimation_obj()
{
}

void FlxAnimation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAnimation);
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(curFrame,"curFrame");
	HX_MARK_MEMBER_NAME(numFrames,"numFrames");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(looped,"looped");
	HX_MARK_MEMBER_NAME(_frames,"_frames");
	HX_MARK_MEMBER_NAME(_frameTimer,"_frameTimer");
	::flixel::animation::FlxBaseAnimation_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxAnimation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(curFrame,"curFrame");
	HX_VISIT_MEMBER_NAME(numFrames,"numFrames");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(looped,"looped");
	HX_VISIT_MEMBER_NAME(_frames,"_frames");
	HX_VISIT_MEMBER_NAME(_frameTimer,"_frameTimer");
	::flixel::animation::FlxBaseAnimation_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxAnimation_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return delay; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"looped") ) { return looped; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_frames") ) { return _frames; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"restart") ) { return restart_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curFrame") ) { return curFrame; }
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		if (HX_FIELD_EQ(inName,"numFrames") ) { return inCallProp ? get_numFrames() : numFrames; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { return _frameTimer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_curFrame") ) { return set_curFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return set_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numFrames") ) { return get_numFrames_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAnimation_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"looped") ) { looped=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_frames") ) { _frames=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curFrame") ) { if (inCallProp) return set_curFrame(inValue);curFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp) return set_frameRate(inValue);frameRate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numFrames") ) { numFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { _frameTimer=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAnimation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("frameRate"));
	outFields->push(HX_CSTRING("curFrame"));
	outFields->push(HX_CSTRING("numFrames"));
	outFields->push(HX_CSTRING("delay"));
	outFields->push(HX_CSTRING("finished"));
	outFields->push(HX_CSTRING("paused"));
	outFields->push(HX_CSTRING("looped"));
	outFields->push(HX_CSTRING("_frames"));
	outFields->push(HX_CSTRING("_frameTimer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxAnimation_obj,frameRate),HX_CSTRING("frameRate")},
	{hx::fsInt,(int)offsetof(FlxAnimation_obj,curFrame),HX_CSTRING("curFrame")},
	{hx::fsInt,(int)offsetof(FlxAnimation_obj,numFrames),HX_CSTRING("numFrames")},
	{hx::fsFloat,(int)offsetof(FlxAnimation_obj,delay),HX_CSTRING("delay")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,finished),HX_CSTRING("finished")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,paused),HX_CSTRING("paused")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,looped),HX_CSTRING("looped")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxAnimation_obj,_frames),HX_CSTRING("_frames")},
	{hx::fsFloat,(int)offsetof(FlxAnimation_obj,_frameTimer),HX_CSTRING("_frameTimer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("frameRate"),
	HX_CSTRING("curFrame"),
	HX_CSTRING("numFrames"),
	HX_CSTRING("delay"),
	HX_CSTRING("finished"),
	HX_CSTRING("paused"),
	HX_CSTRING("looped"),
	HX_CSTRING("_frames"),
	HX_CSTRING("_frameTimer"),
	HX_CSTRING("destroy"),
	HX_CSTRING("play"),
	HX_CSTRING("restart"),
	HX_CSTRING("stop"),
	HX_CSTRING("update"),
	HX_CSTRING("clone"),
	HX_CSTRING("set_frameRate"),
	HX_CSTRING("set_curFrame"),
	HX_CSTRING("get_numFrames"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAnimation_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAnimation_obj::__mClass,"__mClass");
};

#endif

Class FlxAnimation_obj::__mClass;

void FlxAnimation_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.animation.FlxAnimation"), hx::TCanCast< FlxAnimation_obj> ,sStaticFields,sMemberFields,
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

void FlxAnimation_obj::__boot()
{
}

} // end namespace flixel
} // end namespace animation
