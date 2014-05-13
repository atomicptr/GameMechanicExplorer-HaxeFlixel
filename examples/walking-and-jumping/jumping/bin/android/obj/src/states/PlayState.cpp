#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace states{

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("states.PlayState","new",0x0e695aa3,"states.PlayState.new","states/PlayState.hx",16,0x36e487ae)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(26)
	this->JUMP_SPEED = (int)-600;
	HX_STACK_LINE(25)
	this->GRAVITY = (int)980;
	HX_STACK_LINE(24)
	this->DRAG = (int)400;
	HX_STACK_LINE(23)
	this->ACCELERATION = (int)600;
	HX_STACK_LINE(22)
	this->MAX_SPEED = (int)250;
	HX_STACK_LINE(16)
	super::__construct(MaxSize);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("states.PlayState","create",0x0cd56899,"states.PlayState.create","states/PlayState.hx",29,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		this->super::create();
		HX_STACK_LINE(32)
		::flixel::FlxG_obj::mouse->set_visible(false);
		HX_STACK_LINE(35)
		::flixel::FlxG_obj::cameras->set_bgColor((int)-12285748);
		HX_STACK_LINE(38)
		::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		this->player = _g;
		HX_STACK_LINE(39)
		this->player->loadGraphic(HX_CSTRING("assets/player.png"),null(),null(),null(),null(),null());
		HX_STACK_LINE(41)
		this->player->set_x((Float(::flixel::FlxG_obj::width) / Float((int)2)));
		HX_STACK_LINE(42)
		this->player->set_y((::flixel::FlxG_obj::height - (int)64));
		HX_STACK_LINE(45)
		this->player->maxVelocity->set_x(this->MAX_SPEED);
		HX_STACK_LINE(46)
		this->player->maxVelocity->set_y((this->MAX_SPEED * (int)10));
		HX_STACK_LINE(49)
		this->player->drag->set_x(this->DRAG);
		HX_STACK_LINE(52)
		this->player->acceleration->set_y(this->GRAVITY);
		HX_STACK_LINE(55)
		::flixel::group::FlxGroup _g1 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(55)
		this->ground = _g1;
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(57)
			int _g2 = ::Std_obj::_int((Float(::flixel::FlxG_obj::width) / Float((int)32)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(57)
			while((true)){
				HX_STACK_LINE(57)
				if ((!(((_g11 < _g2))))){
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(57)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(58)
				int x = (i * (int)32);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(61)
				::flixel::FlxSprite groundBlock = ::flixel::FlxSprite_obj::__new(x,(::flixel::FlxG_obj::height - (int)32),null());		HX_STACK_VAR(groundBlock,"groundBlock");
				HX_STACK_LINE(62)
				groundBlock->loadGraphic(HX_CSTRING("assets/ground.png"),null(),null(),null(),null(),null());
				HX_STACK_LINE(65)
				groundBlock->set_immovable(true);
				HX_STACK_LINE(68)
				this->ground->add(groundBlock);
			}
		}
		HX_STACK_LINE(72)
		::flixel::group::FlxGroup heightMarkers = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(heightMarkers,"heightMarkers");
		HX_STACK_LINE(74)
		int y = (::flixel::FlxG_obj::height - (int)32);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(76)
		while((true)){
			HX_STACK_LINE(76)
			if ((!(((y >= (int)64))))){
				HX_STACK_LINE(76)
				break;
			}
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(78)
				int _g2 = ::Std_obj::_int((Float(::flixel::FlxG_obj::width) / Float((int)32)));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(78)
				while((true)){
					HX_STACK_LINE(78)
					if ((!(((_g11 < _g2))))){
						HX_STACK_LINE(78)
						break;
					}
					HX_STACK_LINE(78)
					int i = (_g11)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(79)
					int x = (i * (int)32);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(81)
					::flixel::FlxSprite marker = ::flixel::FlxSprite_obj::__new(x,y,null());		HX_STACK_VAR(marker,"marker");
					HX_STACK_LINE(83)
					marker->loadGraphic(HX_CSTRING("assets/heightmarker.png"),null(),null(),null(),null(),null());
					HX_STACK_LINE(85)
					heightMarkers->add(marker);
				}
			}
			HX_STACK_LINE(88)
			hx::SubEq(y,(int)32);
		}
		HX_STACK_LINE(92)
		this->add(this->ground);
		HX_STACK_LINE(93)
		this->add(this->player);
		HX_STACK_LINE(94)
		this->add(heightMarkers);
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("states.PlayState","destroy",0x410194bd,"states.PlayState.destroy","states/PlayState.hx",98,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("states.PlayState","update",0x17cb87a6,"states.PlayState.update","states/PlayState.hx",102,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(103)
		if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("LEFT")),(int)1))){
			HX_STACK_LINE(105)
			this->player->acceleration->set_x(-(this->ACCELERATION));
		}
		else{
			HX_STACK_LINE(106)
			if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("RIGHT")),(int)1))){
				HX_STACK_LINE(108)
				this->player->acceleration->set_x(this->ACCELERATION);
			}
			else{
				HX_STACK_LINE(110)
				this->player->acceleration->set_x((int)0);
			}
		}
		HX_STACK_LINE(113)
		if (((  (((((int(this->player->touching) & int((int)4096))) > (int)0))) ? bool(::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("UP")),(int)1)) : bool(false) ))){
			HX_STACK_LINE(115)
			this->player->velocity->set_y(this->JUMP_SPEED);
		}
		HX_STACK_LINE(118)
		this->super::update();
		HX_STACK_LINE(121)
		::flixel::FlxG_obj::overlap(this->player,this->ground,null(),::flixel::FlxObject_obj::separate_dyn());
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(ground,"ground");
	HX_MARK_MEMBER_NAME(MAX_SPEED,"MAX_SPEED");
	HX_MARK_MEMBER_NAME(ACCELERATION,"ACCELERATION");
	HX_MARK_MEMBER_NAME(DRAG,"DRAG");
	HX_MARK_MEMBER_NAME(GRAVITY,"GRAVITY");
	HX_MARK_MEMBER_NAME(JUMP_SPEED,"JUMP_SPEED");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(ground,"ground");
	HX_VISIT_MEMBER_NAME(MAX_SPEED,"MAX_SPEED");
	HX_VISIT_MEMBER_NAME(ACCELERATION,"ACCELERATION");
	HX_VISIT_MEMBER_NAME(DRAG,"DRAG");
	HX_VISIT_MEMBER_NAME(GRAVITY,"GRAVITY");
	HX_VISIT_MEMBER_NAME(JUMP_SPEED,"JUMP_SPEED");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"DRAG") ) { return DRAG; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"ground") ) { return ground; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"GRAVITY") ) { return GRAVITY; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MAX_SPEED") ) { return MAX_SPEED; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"JUMP_SPEED") ) { return JUMP_SPEED; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ACCELERATION") ) { return ACCELERATION; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"DRAG") ) { DRAG=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ground") ) { ground=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"GRAVITY") ) { GRAVITY=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MAX_SPEED") ) { MAX_SPEED=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"JUMP_SPEED") ) { JUMP_SPEED=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ACCELERATION") ) { ACCELERATION=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("player"));
	outFields->push(HX_CSTRING("ground"));
	outFields->push(HX_CSTRING("MAX_SPEED"));
	outFields->push(HX_CSTRING("ACCELERATION"));
	outFields->push(HX_CSTRING("DRAG"));
	outFields->push(HX_CSTRING("GRAVITY"));
	outFields->push(HX_CSTRING("JUMP_SPEED"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,player),HX_CSTRING("player")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(PlayState_obj,ground),HX_CSTRING("ground")},
	{hx::fsInt,(int)offsetof(PlayState_obj,MAX_SPEED),HX_CSTRING("MAX_SPEED")},
	{hx::fsInt,(int)offsetof(PlayState_obj,ACCELERATION),HX_CSTRING("ACCELERATION")},
	{hx::fsInt,(int)offsetof(PlayState_obj,DRAG),HX_CSTRING("DRAG")},
	{hx::fsInt,(int)offsetof(PlayState_obj,GRAVITY),HX_CSTRING("GRAVITY")},
	{hx::fsInt,(int)offsetof(PlayState_obj,JUMP_SPEED),HX_CSTRING("JUMP_SPEED")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("player"),
	HX_CSTRING("ground"),
	HX_CSTRING("MAX_SPEED"),
	HX_CSTRING("ACCELERATION"),
	HX_CSTRING("DRAG"),
	HX_CSTRING("GRAVITY"),
	HX_CSTRING("JUMP_SPEED"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("states.PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
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

void PlayState_obj::__boot()
{
}

} // end namespace states
