#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_replay_CodeValuePair
#include <flixel/system/replay/CodeValuePair.h>
#endif
#ifndef INCLUDED_flixel_system_replay_FrameRecord
#include <flixel/system/replay/FrameRecord.h>
#endif
#ifndef INCLUDED_flixel_system_replay_MouseRecord
#include <flixel/system/replay/MouseRecord.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace system{
namespace replay{

Void FrameRecord_obj::__construct()
{
HX_STACK_FRAME("flixel.system.replay.FrameRecord","new",0xf4a8b736,"flixel.system.replay.FrameRecord.new","flixel/system/replay/FrameRecord.hx",25,0xc059da9b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(26)
	this->frame = (int)0;
	HX_STACK_LINE(27)
	this->keys = null();
	HX_STACK_LINE(28)
	this->mouse = null();
}
;
	return null();
}

//FrameRecord_obj::~FrameRecord_obj() { }

Dynamic FrameRecord_obj::__CreateEmpty() { return  new FrameRecord_obj; }
hx::ObjectPtr< FrameRecord_obj > FrameRecord_obj::__new()
{  hx::ObjectPtr< FrameRecord_obj > result = new FrameRecord_obj();
	result->__construct();
	return result;}

Dynamic FrameRecord_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FrameRecord_obj > result = new FrameRecord_obj();
	result->__construct();
	return result;}

::flixel::system::replay::FrameRecord FrameRecord_obj::create( Float Frame,Array< ::Dynamic > Keys,::flixel::system::replay::MouseRecord Mouse){
	HX_STACK_FRAME("flixel.system.replay.FrameRecord","create",0x88c1e9e6,"flixel.system.replay.FrameRecord.create","flixel/system/replay/FrameRecord.hx",39,0xc059da9b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_ARG(Keys,"Keys")
	HX_STACK_ARG(Mouse,"Mouse")
	HX_STACK_LINE(40)
	int _g = ::Math_obj::floor(Frame);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(40)
	this->frame = _g;
	HX_STACK_LINE(41)
	this->keys = Keys;
	HX_STACK_LINE(42)
	this->mouse = Mouse;
	HX_STACK_LINE(44)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(FrameRecord_obj,create,return )

Void FrameRecord_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.replay.FrameRecord","destroy",0x340636d0,"flixel.system.replay.FrameRecord.destroy","flixel/system/replay/FrameRecord.hx",51,0xc059da9b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		this->keys = null();
		HX_STACK_LINE(53)
		this->mouse = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FrameRecord_obj,destroy,(void))

::String FrameRecord_obj::save( ){
	HX_STACK_FRAME("flixel.system.replay.FrameRecord","save",0x22429fa7,"flixel.system.replay.FrameRecord.save","flixel/system/replay/FrameRecord.hx",61,0xc059da9b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	::String output = (this->frame + HX_CSTRING("k"));		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(64)
	if (((this->keys != null()))){
		HX_STACK_LINE(66)
		::flixel::system::replay::CodeValuePair object;		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(67)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(68)
		int l = this->keys->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(69)
		while((true)){
			HX_STACK_LINE(69)
			if ((!(((i < l))))){
				HX_STACK_LINE(69)
				break;
			}
			HX_STACK_LINE(71)
			if (((i > (int)0))){
				HX_STACK_LINE(73)
				hx::AddEq(output,HX_CSTRING(","));
			}
			HX_STACK_LINE(75)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(75)
			::flixel::system::replay::CodeValuePair _g1 = this->keys->__get(_g).StaticCast< ::flixel::system::replay::CodeValuePair >();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(75)
			object = _g1;
			HX_STACK_LINE(76)
			hx::AddEq(output,((object->code + HX_CSTRING(":")) + object->value));
		}
	}
	HX_STACK_LINE(80)
	hx::AddEq(output,HX_CSTRING("m"));
	HX_STACK_LINE(81)
	if (((this->mouse != null()))){
		HX_STACK_LINE(83)
		hx::AddEq(output,((((((this->mouse->x + HX_CSTRING(",")) + this->mouse->y) + HX_CSTRING(",")) + this->mouse->button) + HX_CSTRING(",")) + this->mouse->wheel));
	}
	HX_STACK_LINE(86)
	return output;
}


HX_DEFINE_DYNAMIC_FUNC0(FrameRecord_obj,save,return )

::flixel::system::replay::FrameRecord FrameRecord_obj::load( ::String Data){
	HX_STACK_FRAME("flixel.system.replay.FrameRecord","load",0x1dacae90,"flixel.system.replay.FrameRecord.load","flixel/system/replay/FrameRecord.hx",94,0xc059da9b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_LINE(95)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(96)
	int l;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(99)
	Array< ::String > array = Data.split(HX_CSTRING("k"));		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(100)
	Dynamic _g = ::Std_obj::parseInt(array->__get((int)0));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(100)
	this->frame = _g;
	HX_STACK_LINE(103)
	Array< ::String > _g1 = array->__get((int)1).split(HX_CSTRING("m"));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(103)
	array = _g1;
	HX_STACK_LINE(104)
	::String keyData = array->__get((int)0);		HX_STACK_VAR(keyData,"keyData");
	HX_STACK_LINE(105)
	::String mouseData = array->__get((int)1);		HX_STACK_VAR(mouseData,"mouseData");
	HX_STACK_LINE(108)
	if (((keyData.length > (int)0))){
		HX_STACK_LINE(111)
		Array< ::String > _g2 = keyData.split(HX_CSTRING(","));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(111)
		array = _g2;
		HX_STACK_LINE(114)
		Array< ::String > keyPair;		HX_STACK_VAR(keyPair,"keyPair");
		HX_STACK_LINE(115)
		i = (int)0;
		HX_STACK_LINE(116)
		l = array->length;
		HX_STACK_LINE(117)
		while((true)){
			HX_STACK_LINE(117)
			if ((!(((i < l))))){
				HX_STACK_LINE(117)
				break;
			}
			HX_STACK_LINE(119)
			int _g3 = (i)++;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(119)
			Array< ::String > _g4 = array->__get(_g3).split(HX_CSTRING(":"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(119)
			keyPair = _g4;
			HX_STACK_LINE(120)
			if (((keyPair->length == (int)2))){
				HX_STACK_LINE(122)
				if (((this->keys == null()))){
					HX_STACK_LINE(124)
					Array< ::Dynamic > _g5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(124)
					this->keys = _g5;
				}
				HX_STACK_LINE(126)
				Dynamic _g6 = ::Std_obj::parseInt(keyPair->__get((int)0));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(126)
				Dynamic _g7 = ::Std_obj::parseInt(keyPair->__get((int)1));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(126)
				::flixel::system::replay::CodeValuePair _g8 = ::flixel::system::replay::CodeValuePair_obj::__new(_g6,_g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(126)
				this->keys->push(_g8);
			}
		}
	}
	HX_STACK_LINE(132)
	if (((mouseData.length > (int)0))){
		HX_STACK_LINE(134)
		Array< ::String > _g9 = mouseData.split(HX_CSTRING(","));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(134)
		array = _g9;
		HX_STACK_LINE(135)
		if (((array->length >= (int)4))){
			HX_STACK_LINE(137)
			Dynamic _g10 = ::Std_obj::parseInt(array->__get((int)0));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(137)
			Dynamic _g11 = ::Std_obj::parseInt(array->__get((int)1));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(137)
			Dynamic _g12 = ::Std_obj::parseInt(array->__get((int)2));		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(137)
			Dynamic _g13 = ::Std_obj::parseInt(array->__get((int)3));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(137)
			::flixel::system::replay::MouseRecord _g14 = ::flixel::system::replay::MouseRecord_obj::__new(_g10,_g11,_g12,_g13);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(137)
			this->mouse = _g14;
		}
	}
	HX_STACK_LINE(141)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FrameRecord_obj,load,return )


FrameRecord_obj::FrameRecord_obj()
{
}

void FrameRecord_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FrameRecord);
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(keys,"keys");
	HX_MARK_MEMBER_NAME(mouse,"mouse");
	HX_MARK_END_CLASS();
}

void FrameRecord_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(keys,"keys");
	HX_VISIT_MEMBER_NAME(mouse,"mouse");
}

Dynamic FrameRecord_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return keys; }
		if (HX_FIELD_EQ(inName,"save") ) { return save_dyn(); }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		if (HX_FIELD_EQ(inName,"mouse") ) { return mouse; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FrameRecord_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouse") ) { mouse=inValue.Cast< ::flixel::system::replay::MouseRecord >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FrameRecord_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("frame"));
	outFields->push(HX_CSTRING("keys"));
	outFields->push(HX_CSTRING("mouse"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FrameRecord_obj,frame),HX_CSTRING("frame")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FrameRecord_obj,keys),HX_CSTRING("keys")},
	{hx::fsObject /*::flixel::system::replay::MouseRecord*/ ,(int)offsetof(FrameRecord_obj,mouse),HX_CSTRING("mouse")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("frame"),
	HX_CSTRING("keys"),
	HX_CSTRING("mouse"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("save"),
	HX_CSTRING("load"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FrameRecord_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FrameRecord_obj::__mClass,"__mClass");
};

#endif

Class FrameRecord_obj::__mClass;

void FrameRecord_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.replay.FrameRecord"), hx::TCanCast< FrameRecord_obj> ,sStaticFields,sMemberFields,
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

void FrameRecord_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace replay
