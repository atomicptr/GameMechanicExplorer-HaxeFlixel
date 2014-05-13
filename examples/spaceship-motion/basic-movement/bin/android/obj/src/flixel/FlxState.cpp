#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
namespace flixel{

Void FlxState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("flixel.FlxState","new",0x7e613e23,"flixel.FlxState.new","flixel/FlxState.hx",9,0xdf96844c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(46)
	this->_requestSubStateReset = false;
	HX_STACK_LINE(26)
	this->destroySubStates = true;
	HX_STACK_LINE(21)
	this->persistentDraw = true;
	HX_STACK_LINE(15)
	this->persistentUpdate = false;
	HX_STACK_LINE(9)
	super::__construct(MaxSize);
}
;
	return null();
}

//FlxState_obj::~FlxState_obj() { }

Dynamic FlxState_obj::__CreateEmpty() { return  new FlxState_obj; }
hx::ObjectPtr< FlxState_obj > FlxState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< FlxState_obj > result = new FlxState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic FlxState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxState_obj > result = new FlxState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void FlxState_obj::create( ){
{
		HX_STACK_FRAME("flixel.FlxState","create",0x1148b519,"flixel.FlxState.create","flixel/FlxState.hx",52,0xdf96844c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,create,(void))

Void FlxState_obj::draw( ){
{
		HX_STACK_FRAME("flixel.FlxState","draw",0x1022c8e1,"flixel.FlxState.draw","flixel/FlxState.hx",55,0xdf96844c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		if (((bool(this->persistentDraw) || bool((this->subState == null()))))){
			HX_STACK_LINE(58)
			this->super::draw();
		}
		HX_STACK_LINE(61)
		if (((this->subState != null()))){
			HX_STACK_LINE(63)
			this->subState->draw();
		}
	}
return null();
}


Void FlxState_obj::openSubState( ::flixel::FlxSubState SubState){
{
		HX_STACK_FRAME("flixel.FlxState","openSubState",0x3d5ea838,"flixel.FlxState.openSubState","flixel/FlxState.hx",68,0xdf96844c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(SubState,"SubState")
		HX_STACK_LINE(69)
		this->_requestSubStateReset = true;
		HX_STACK_LINE(70)
		this->_requestedSubState = SubState;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,openSubState,(void))

Void FlxState_obj::closeSubState( ){
{
		HX_STACK_FRAME("flixel.FlxState","closeSubState",0x519577cc,"flixel.FlxState.closeSubState","flixel/FlxState.hx",77,0xdf96844c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(78)
		this->_requestSubStateReset = true;
		HX_STACK_LINE(79)
		this->_requestedSubState = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,closeSubState,(void))

Void FlxState_obj::resetSubState( ){
{
		HX_STACK_FRAME("flixel.FlxState","resetSubState",0x772d18e3,"flixel.FlxState.resetSubState","flixel/FlxState.hx",86,0xdf96844c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		if (((this->subState != null()))){
			HX_STACK_LINE(90)
			if (((this->subState->closeCallback != null()))){
				HX_STACK_LINE(92)
				this->subState->closeCallback();
			}
			HX_STACK_LINE(94)
			if ((this->destroySubStates)){
				HX_STACK_LINE(96)
				this->subState->destroy();
			}
		}
		HX_STACK_LINE(101)
		this->subState = this->_requestedSubState;
		HX_STACK_LINE(103)
		if (((this->subState != null()))){
			HX_STACK_LINE(106)
			if ((!(this->persistentUpdate))){
				HX_STACK_LINE(108)
				::flixel::FlxG_obj::inputs->reset();
			}
			HX_STACK_LINE(111)
			if ((!(this->subState->_created))){
				HX_STACK_LINE(113)
				this->subState->_created = true;
				HX_STACK_LINE(114)
				this->subState->_parentState = hx::ObjectPtr<OBJ_>(this);
				HX_STACK_LINE(115)
				this->subState->create();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,resetSubState,(void))

Void FlxState_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxState","destroy",0x2171383d,"flixel.FlxState.destroy","flixel/FlxState.hx",121,0xdf96844c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(122)
		if (((this->subState != null()))){
			HX_STACK_LINE(124)
			this->subState->destroy();
			HX_STACK_LINE(125)
			this->subState = null();
		}
		HX_STACK_LINE(127)
		this->super::destroy();
	}
return null();
}


Void FlxState_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.FlxState","onFocusLost",0x8c2b4d80,"flixel.FlxState.onFocusLost","flixel/FlxState.hx",134,0xdf96844c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,onFocusLost,(void))

Void FlxState_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.FlxState","onFocus",0x97b2097c,"flixel.FlxState.onFocus","flixel/FlxState.hx",140,0xdf96844c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,onFocus,(void))

Void FlxState_obj::onResize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.FlxState","onResize",0x38e71fd0,"flixel.FlxState.onResize","flixel/FlxState.hx",148,0xdf96844c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxState_obj,onResize,(void))

Void FlxState_obj::tryUpdate( ){
{
		HX_STACK_FRAME("flixel.FlxState","tryUpdate",0xc75023a7,"flixel.FlxState.tryUpdate","flixel/FlxState.hx",152,0xdf96844c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(153)
		if (((bool(this->persistentUpdate) || bool((this->subState == null()))))){
			HX_STACK_LINE(155)
			this->update();
		}
		HX_STACK_LINE(158)
		if ((this->_requestSubStateReset)){
			HX_STACK_LINE(160)
			this->resetSubState();
			HX_STACK_LINE(161)
			this->_requestSubStateReset = false;
		}
		else{
			HX_STACK_LINE(163)
			if (((this->subState != null()))){
				HX_STACK_LINE(165)
				this->subState->tryUpdate();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,tryUpdate,(void))

int FlxState_obj::get_bgColor( ){
	HX_STACK_FRAME("flixel.FlxState","get_bgColor",0xc8234a38,"flixel.FlxState.get_bgColor","flixel/FlxState.hx",171,0xdf96844c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(171)
	return ::flixel::FlxG_obj::cameras->get_bgColor();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,get_bgColor,return )

int FlxState_obj::set_bgColor( int Value){
	HX_STACK_FRAME("flixel.FlxState","set_bgColor",0xd2905144,"flixel.FlxState.set_bgColor","flixel/FlxState.hx",176,0xdf96844c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(176)
	return ::flixel::FlxG_obj::cameras->set_bgColor(Value);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,set_bgColor,return )


FlxState_obj::FlxState_obj()
{
}

void FlxState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxState);
	HX_MARK_MEMBER_NAME(persistentUpdate,"persistentUpdate");
	HX_MARK_MEMBER_NAME(persistentDraw,"persistentDraw");
	HX_MARK_MEMBER_NAME(destroySubStates,"destroySubStates");
	HX_MARK_MEMBER_NAME(subState,"subState");
	HX_MARK_MEMBER_NAME(_requestedSubState,"_requestedSubState");
	HX_MARK_MEMBER_NAME(_requestSubStateReset,"_requestSubStateReset");
	::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(persistentUpdate,"persistentUpdate");
	HX_VISIT_MEMBER_NAME(persistentDraw,"persistentDraw");
	HX_VISIT_MEMBER_NAME(destroySubStates,"destroySubStates");
	HX_VISIT_MEMBER_NAME(subState,"subState");
	HX_VISIT_MEMBER_NAME(_requestedSubState,"_requestedSubState");
	HX_VISIT_MEMBER_NAME(_requestSubStateReset,"_requestSubStateReset");
	::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return get_bgColor(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subState") ) { return subState; }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tryUpdate") ) { return tryUpdate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return get_bgColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return set_bgColor_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"openSubState") ) { return openSubState_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return closeSubState_dyn(); }
		if (HX_FIELD_EQ(inName,"resetSubState") ) { return resetSubState_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"persistentDraw") ) { return persistentDraw; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"persistentUpdate") ) { return persistentUpdate; }
		if (HX_FIELD_EQ(inName,"destroySubStates") ) { return destroySubStates; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_requestedSubState") ) { return _requestedSubState; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_requestSubStateReset") ) { return _requestSubStateReset; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return set_bgColor(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subState") ) { subState=inValue.Cast< ::flixel::FlxSubState >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"persistentDraw") ) { persistentDraw=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"persistentUpdate") ) { persistentUpdate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"destroySubStates") ) { destroySubStates=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_requestedSubState") ) { _requestedSubState=inValue.Cast< ::flixel::FlxSubState >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_requestSubStateReset") ) { _requestSubStateReset=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("persistentUpdate"));
	outFields->push(HX_CSTRING("persistentDraw"));
	outFields->push(HX_CSTRING("destroySubStates"));
	outFields->push(HX_CSTRING("bgColor"));
	outFields->push(HX_CSTRING("subState"));
	outFields->push(HX_CSTRING("_requestedSubState"));
	outFields->push(HX_CSTRING("_requestSubStateReset"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxState_obj,persistentUpdate),HX_CSTRING("persistentUpdate")},
	{hx::fsBool,(int)offsetof(FlxState_obj,persistentDraw),HX_CSTRING("persistentDraw")},
	{hx::fsBool,(int)offsetof(FlxState_obj,destroySubStates),HX_CSTRING("destroySubStates")},
	{hx::fsObject /*::flixel::FlxSubState*/ ,(int)offsetof(FlxState_obj,subState),HX_CSTRING("subState")},
	{hx::fsObject /*::flixel::FlxSubState*/ ,(int)offsetof(FlxState_obj,_requestedSubState),HX_CSTRING("_requestedSubState")},
	{hx::fsBool,(int)offsetof(FlxState_obj,_requestSubStateReset),HX_CSTRING("_requestSubStateReset")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("persistentUpdate"),
	HX_CSTRING("persistentDraw"),
	HX_CSTRING("destroySubStates"),
	HX_CSTRING("subState"),
	HX_CSTRING("_requestedSubState"),
	HX_CSTRING("_requestSubStateReset"),
	HX_CSTRING("create"),
	HX_CSTRING("draw"),
	HX_CSTRING("openSubState"),
	HX_CSTRING("closeSubState"),
	HX_CSTRING("resetSubState"),
	HX_CSTRING("destroy"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("onResize"),
	HX_CSTRING("tryUpdate"),
	HX_CSTRING("get_bgColor"),
	HX_CSTRING("set_bgColor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxState_obj::__mClass,"__mClass");
};

#endif

Class FlxState_obj::__mClass;

void FlxState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxState"), hx::TCanCast< FlxState_obj> ,sStaticFields,sMemberFields,
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

void FlxState_obj::__boot()
{
}

} // end namespace flixel
