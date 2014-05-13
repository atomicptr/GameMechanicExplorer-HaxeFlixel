#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace flixel{
namespace system{
namespace layer{
namespace frames{

Void FlxSpriteFrames_obj::__construct(::String name)
{
HX_STACK_FRAME("flixel.system.layer.frames.FlxSpriteFrames","new",0x5124a771,"flixel.system.layer.frames.FlxSpriteFrames.new","flixel/system/layer/frames/FlxSpriteFrames.hx",12,0xd69cfd1f)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
{
	HX_STACK_LINE(13)
	this->name = name;
	HX_STACK_LINE(14)
	this->frames = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(15)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(15)
	this->framesHash = _g;
}
;
	return null();
}

//FlxSpriteFrames_obj::~FlxSpriteFrames_obj() { }

Dynamic FlxSpriteFrames_obj::__CreateEmpty() { return  new FlxSpriteFrames_obj; }
hx::ObjectPtr< FlxSpriteFrames_obj > FlxSpriteFrames_obj::__new(::String name)
{  hx::ObjectPtr< FlxSpriteFrames_obj > result = new FlxSpriteFrames_obj();
	result->__construct(name);
	return result;}

Dynamic FlxSpriteFrames_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSpriteFrames_obj > result = new FlxSpriteFrames_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *FlxSpriteFrames_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void FlxSpriteFrames_obj::addFrame( ::flixel::system::layer::frames::FlxFrame frame){
{
		HX_STACK_FRAME("flixel.system.layer.frames.FlxSpriteFrames","addFrame",0xc3b5899b,"flixel.system.layer.frames.FlxSpriteFrames.addFrame","flixel/system/layer/frames/FlxSpriteFrames.hx",19,0xd69cfd1f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_LINE(20)
		this->frames->push(frame);
		HX_STACK_LINE(21)
		this->framesHash->set(frame->name,frame);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteFrames_obj,addFrame,(void))

Void FlxSpriteFrames_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.layer.frames.FlxSpriteFrames","destroy",0x0dde608b,"flixel.system.layer.frames.FlxSpriteFrames.destroy","flixel/system/layer/frames/FlxSpriteFrames.hx",25,0xd69cfd1f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		this->frames = null();
		HX_STACK_LINE(27)
		this->framesHash = null();
		HX_STACK_LINE(28)
		this->name = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSpriteFrames_obj,destroy,(void))


FlxSpriteFrames_obj::FlxSpriteFrames_obj()
{
}

void FlxSpriteFrames_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSpriteFrames);
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(framesHash,"framesHash");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void FlxSpriteFrames_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(framesHash,"framesHash");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic FlxSpriteFrames_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addFrame") ) { return addFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesHash") ) { return framesHash; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSpriteFrames_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesHash") ) { framesHash=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSpriteFrames_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("framesHash"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxSpriteFrames_obj,frames),HX_CSTRING("frames")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxSpriteFrames_obj,framesHash),HX_CSTRING("framesHash")},
	{hx::fsString,(int)offsetof(FlxSpriteFrames_obj,name),HX_CSTRING("name")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("frames"),
	HX_CSTRING("framesHash"),
	HX_CSTRING("name"),
	HX_CSTRING("addFrame"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSpriteFrames_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSpriteFrames_obj::__mClass,"__mClass");
};

#endif

Class FlxSpriteFrames_obj::__mClass;

void FlxSpriteFrames_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.layer.frames.FlxSpriteFrames"), hx::TCanCast< FlxSpriteFrames_obj> ,sStaticFields,sMemberFields,
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

void FlxSpriteFrames_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace layer
} // end namespace frames
