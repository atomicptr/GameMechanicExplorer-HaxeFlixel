#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_replay_CodeValuePair
#include <flixel/system/replay/CodeValuePair.h>
#endif
#ifndef INCLUDED_flixel_system_replay_FlxReplay
#include <flixel/system/replay/FlxReplay.h>
#endif
#ifndef INCLUDED_flixel_system_replay_FrameRecord
#include <flixel/system/replay/FrameRecord.h>
#endif
#ifndef INCLUDED_flixel_system_replay_MouseRecord
#include <flixel/system/replay/MouseRecord.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace system{
namespace replay{

Void FlxReplay_obj::__construct()
{
HX_STACK_FRAME("flixel.system.replay.FlxReplay","new",0x4c74c9d1,"flixel.system.replay.FlxReplay.new","flixel/system/replay/FlxReplay.hx",52,0xb378fa20)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(53)
	this->seed = (int)0;
	HX_STACK_LINE(54)
	this->frame = (int)0;
	HX_STACK_LINE(55)
	this->frameCount = (int)0;
	HX_STACK_LINE(56)
	this->finished = false;
	HX_STACK_LINE(57)
	this->_frames = null();
	HX_STACK_LINE(58)
	this->_capacity = (int)0;
	HX_STACK_LINE(59)
	this->_marker = (int)0;
}
;
	return null();
}

//FlxReplay_obj::~FlxReplay_obj() { }

Dynamic FlxReplay_obj::__CreateEmpty() { return  new FlxReplay_obj; }
hx::ObjectPtr< FlxReplay_obj > FlxReplay_obj::__new()
{  hx::ObjectPtr< FlxReplay_obj > result = new FlxReplay_obj();
	result->__construct();
	return result;}

Dynamic FlxReplay_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxReplay_obj > result = new FlxReplay_obj();
	result->__construct();
	return result;}

Void FlxReplay_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.replay.FlxReplay","destroy",0xd75f32eb,"flixel.system.replay.FlxReplay.destroy","flixel/system/replay/FlxReplay.hx",66,0xb378fa20)
		HX_STACK_THIS(this)
		HX_STACK_LINE(67)
		if (((this->_frames == null()))){
			HX_STACK_LINE(69)
			return null();
		}
		HX_STACK_LINE(71)
		int i = (this->frameCount - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(72)
		while((true)){
			HX_STACK_LINE(72)
			if ((!(((i >= (int)0))))){
				HX_STACK_LINE(72)
				break;
			}
			HX_STACK_LINE(74)
			int _g = (i)--;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(74)
			this->_frames->__get(_g).StaticCast< ::flixel::system::replay::FrameRecord >()->destroy();
		}
		HX_STACK_LINE(76)
		this->_frames = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxReplay_obj,destroy,(void))

Void FlxReplay_obj::create( int Seed){
{
		HX_STACK_FRAME("flixel.system.replay.FlxReplay","create",0x64c12a2b,"flixel.system.replay.FlxReplay.create","flixel/system/replay/FlxReplay.hx",85,0xb378fa20)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Seed,"Seed")
		HX_STACK_LINE(86)
		this->destroy();
		HX_STACK_LINE(87)
		this->init();
		HX_STACK_LINE(88)
		this->seed = Seed;
		HX_STACK_LINE(89)
		this->rewind();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxReplay_obj,create,(void))

Void FlxReplay_obj::load( ::String FileContents){
{
		HX_STACK_FRAME("flixel.system.replay.FlxReplay","load",0x9870e395,"flixel.system.replay.FlxReplay.load","flixel/system/replay/FlxReplay.hx",99,0xb378fa20)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FileContents,"FileContents")
		HX_STACK_LINE(100)
		this->init();
		HX_STACK_LINE(102)
		Array< ::String > lines = FileContents.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
		HX_STACK_LINE(104)
		Dynamic _g = ::Std_obj::parseInt(lines->__get((int)0));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(104)
		this->seed = _g;
		HX_STACK_LINE(106)
		::String line;		HX_STACK_VAR(line,"line");
		HX_STACK_LINE(107)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(108)
		int l = lines->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(109)
		while((true)){
			HX_STACK_LINE(109)
			if ((!(((i < l))))){
				HX_STACK_LINE(109)
				break;
			}
			HX_STACK_LINE(111)
			int _g1 = (i)++;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(111)
			::String _g2 = lines->__get(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(111)
			line = _g2;
			HX_STACK_LINE(112)
			if (((line.length > (int)3))){
				HX_STACK_LINE(114)
				int _g3 = (this->frameCount)++;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(114)
				this->_frames[_g3] = ::flixel::system::replay::FrameRecord_obj::__new()->load(line);
				HX_STACK_LINE(115)
				if (((this->frameCount >= this->_capacity))){
					HX_STACK_LINE(117)
					hx::MultEq(this->_capacity,(int)2);
					HX_STACK_LINE(118)
					::flixel::util::FlxArrayUtil_obj::setLength_flixel_system_replay_FrameRecord(this->_frames,this->_capacity);
				}
			}
		}
		HX_STACK_LINE(123)
		this->rewind();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxReplay_obj,load,(void))

::String FlxReplay_obj::save( ){
	HX_STACK_FRAME("flixel.system.replay.FlxReplay","save",0x9d06d4ac,"flixel.system.replay.FlxReplay.save","flixel/system/replay/FlxReplay.hx",132,0xb378fa20)
	HX_STACK_THIS(this)
	HX_STACK_LINE(133)
	if (((this->frameCount <= (int)0))){
		HX_STACK_LINE(135)
		return null();
	}
	HX_STACK_LINE(137)
	::String output = (this->seed + HX_CSTRING("\n"));		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(138)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(139)
	while((true)){
		HX_STACK_LINE(139)
		if ((!(((i < this->frameCount))))){
			HX_STACK_LINE(139)
			break;
		}
		HX_STACK_LINE(141)
		int _g = (i)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(141)
		::String _g1 = this->_frames->__get(_g).StaticCast< ::flixel::system::replay::FrameRecord >()->save();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(141)
		::String _g2 = (_g1 + HX_CSTRING("\n"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(141)
		hx::AddEq(output,_g2);
	}
	HX_STACK_LINE(143)
	return output;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxReplay_obj,save,return )

Void FlxReplay_obj::recordFrame( ){
{
		HX_STACK_FRAME("flixel.system.replay.FlxReplay","recordFrame",0x1269564d,"flixel.system.replay.FlxReplay.recordFrame","flixel/system/replay/FlxReplay.hx",150,0xb378fa20)
		HX_STACK_THIS(this)
		HX_STACK_LINE(151)
		bool continueFrame = true;		HX_STACK_VAR(continueFrame,"continueFrame");
		HX_STACK_LINE(154)
		Array< ::Dynamic > keysRecord = ::flixel::FlxG_obj::keys->record();		HX_STACK_VAR(keysRecord,"keysRecord");
		HX_STACK_LINE(155)
		if (((keysRecord == null()))){
			HX_STACK_LINE(155)
			continueFrame = false;
		}
		HX_STACK_LINE(159)
		::flixel::system::replay::MouseRecord mouseRecord = ::flixel::FlxG_obj::mouse->record();		HX_STACK_VAR(mouseRecord,"mouseRecord");
		HX_STACK_LINE(160)
		if (((mouseRecord == null()))){
			HX_STACK_LINE(160)
			continueFrame = false;
		}
		HX_STACK_LINE(163)
		if ((continueFrame)){
			HX_STACK_LINE(165)
			(this->frame)++;
			HX_STACK_LINE(166)
			return null();
		}
		HX_STACK_LINE(169)
		int _g = (this->frame)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		::flixel::system::replay::FrameRecord frameRecorded = ::flixel::system::replay::FrameRecord_obj::__new()->create(_g,null(),null());		HX_STACK_VAR(frameRecorded,"frameRecorded");
		HX_STACK_LINE(171)
		frameRecorded->mouse = mouseRecord;
		HX_STACK_LINE(174)
		frameRecorded->keys = keysRecord;
		HX_STACK_LINE(177)
		int _g1 = (this->frameCount)++;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(177)
		this->_frames[_g1] = frameRecorded;
		HX_STACK_LINE(179)
		if (((this->frameCount >= this->_capacity))){
			HX_STACK_LINE(181)
			hx::MultEq(this->_capacity,(int)2);
			HX_STACK_LINE(182)
			::flixel::util::FlxArrayUtil_obj::setLength_flixel_system_replay_FrameRecord(this->_frames,this->_capacity);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxReplay_obj,recordFrame,(void))

Void FlxReplay_obj::playNextFrame( ){
{
		HX_STACK_FRAME("flixel.system.replay.FlxReplay","playNextFrame",0x34ad7657,"flixel.system.replay.FlxReplay.playNextFrame","flixel/system/replay/FlxReplay.hx",190,0xb378fa20)
		HX_STACK_THIS(this)
		HX_STACK_LINE(191)
		::flixel::FlxG_obj::inputs->reset();
		HX_STACK_LINE(193)
		if (((this->_marker >= this->frameCount))){
			HX_STACK_LINE(195)
			this->finished = true;
			HX_STACK_LINE(196)
			return null();
		}
		HX_STACK_LINE(198)
		int _g = (this->frame)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(198)
		if (((this->_frames->__get(this->_marker).StaticCast< ::flixel::system::replay::FrameRecord >()->frame != _g))){
			HX_STACK_LINE(200)
			return null();
		}
		HX_STACK_LINE(203)
		int _g1 = (this->_marker)++;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(203)
		::flixel::system::replay::FrameRecord fr = this->_frames->__get(_g1).StaticCast< ::flixel::system::replay::FrameRecord >();		HX_STACK_VAR(fr,"fr");
		HX_STACK_LINE(206)
		if (((fr->keys != null()))){
			HX_STACK_LINE(208)
			::flixel::FlxG_obj::keys->playback(fr->keys);
		}
		HX_STACK_LINE(213)
		if (((fr->mouse != null()))){
			HX_STACK_LINE(215)
			::flixel::FlxG_obj::mouse->playback(fr->mouse);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxReplay_obj,playNextFrame,(void))

Void FlxReplay_obj::rewind( ){
{
		HX_STACK_FRAME("flixel.system.replay.FlxReplay","rewind",0xf3d1ed2a,"flixel.system.replay.FlxReplay.rewind","flixel/system/replay/FlxReplay.hx",224,0xb378fa20)
		HX_STACK_THIS(this)
		HX_STACK_LINE(225)
		this->_marker = (int)0;
		HX_STACK_LINE(226)
		this->frame = (int)0;
		HX_STACK_LINE(227)
		this->finished = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxReplay_obj,rewind,(void))

Void FlxReplay_obj::init( ){
{
		HX_STACK_FRAME("flixel.system.replay.FlxReplay","init",0x9674847f,"flixel.system.replay.FlxReplay.init","flixel/system/replay/FlxReplay.hx",234,0xb378fa20)
		HX_STACK_THIS(this)
		HX_STACK_LINE(235)
		this->_capacity = (int)100;
		HX_STACK_LINE(236)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(236)
		this->_frames = _g;
		HX_STACK_LINE(237)
		::flixel::util::FlxArrayUtil_obj::setLength_flixel_system_replay_FrameRecord(this->_frames,this->_capacity);
		HX_STACK_LINE(238)
		this->frameCount = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxReplay_obj,init,(void))


FlxReplay_obj::FlxReplay_obj()
{
}

void FlxReplay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxReplay);
	HX_MARK_MEMBER_NAME(seed,"seed");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(frameCount,"frameCount");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(_frames,"_frames");
	HX_MARK_MEMBER_NAME(_capacity,"_capacity");
	HX_MARK_MEMBER_NAME(_marker,"_marker");
	HX_MARK_END_CLASS();
}

void FlxReplay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(seed,"seed");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(frameCount,"frameCount");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(_frames,"_frames");
	HX_VISIT_MEMBER_NAME(_capacity,"_capacity");
	HX_VISIT_MEMBER_NAME(_marker,"_marker");
}

Dynamic FlxReplay_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"seed") ) { return seed; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"save") ) { return save_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"rewind") ) { return rewind_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_frames") ) { return _frames; }
		if (HX_FIELD_EQ(inName,"_marker") ) { return _marker; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_capacity") ) { return _capacity; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameCount") ) { return frameCount; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"recordFrame") ) { return recordFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"playNextFrame") ) { return playNextFrame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxReplay_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"seed") ) { seed=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_frames") ) { _frames=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_marker") ) { _marker=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_capacity") ) { _capacity=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameCount") ) { frameCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxReplay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("seed"));
	outFields->push(HX_CSTRING("frame"));
	outFields->push(HX_CSTRING("frameCount"));
	outFields->push(HX_CSTRING("finished"));
	outFields->push(HX_CSTRING("_frames"));
	outFields->push(HX_CSTRING("_capacity"));
	outFields->push(HX_CSTRING("_marker"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxReplay_obj,seed),HX_CSTRING("seed")},
	{hx::fsInt,(int)offsetof(FlxReplay_obj,frame),HX_CSTRING("frame")},
	{hx::fsInt,(int)offsetof(FlxReplay_obj,frameCount),HX_CSTRING("frameCount")},
	{hx::fsBool,(int)offsetof(FlxReplay_obj,finished),HX_CSTRING("finished")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxReplay_obj,_frames),HX_CSTRING("_frames")},
	{hx::fsInt,(int)offsetof(FlxReplay_obj,_capacity),HX_CSTRING("_capacity")},
	{hx::fsInt,(int)offsetof(FlxReplay_obj,_marker),HX_CSTRING("_marker")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("seed"),
	HX_CSTRING("frame"),
	HX_CSTRING("frameCount"),
	HX_CSTRING("finished"),
	HX_CSTRING("_frames"),
	HX_CSTRING("_capacity"),
	HX_CSTRING("_marker"),
	HX_CSTRING("destroy"),
	HX_CSTRING("create"),
	HX_CSTRING("load"),
	HX_CSTRING("save"),
	HX_CSTRING("recordFrame"),
	HX_CSTRING("playNextFrame"),
	HX_CSTRING("rewind"),
	HX_CSTRING("init"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxReplay_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxReplay_obj::__mClass,"__mClass");
};

#endif

Class FlxReplay_obj::__mClass;

void FlxReplay_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.replay.FlxReplay"), hx::TCanCast< FlxReplay_obj> ,sStaticFields,sMemberFields,
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

void FlxReplay_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace replay
