#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxRect
#include <flixel/util/FlxPool_flixel_util_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxVelocity
#include <flixel/util/FlxVelocity.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{

Void FlxObject_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{
HX_STACK_FRAME("flixel.FlxObject","new",0x2aa4ec91,"flixel.FlxObject.new","flixel/FlxObject.hx",22,0xf0fe0d80)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(__o_Height,"Height")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
{
	HX_STACK_LINE(448)
	this->collisonXDrag = true;
	HX_STACK_LINE(443)
	this->allowCollisions = (int)4369;
	HX_STACK_LINE(438)
	this->wasTouching = (int)0;
	HX_STACK_LINE(433)
	this->touching = (int)0;
	HX_STACK_LINE(428)
	this->health = (int)1;
	HX_STACK_LINE(424)
	this->maxAngular = (int)10000;
	HX_STACK_LINE(420)
	this->angularDrag = (int)0;
	HX_STACK_LINE(416)
	this->angularAcceleration = (int)0;
	HX_STACK_LINE(412)
	this->angularVelocity = (int)0;
	HX_STACK_LINE(408)
	this->elasticity = (int)0;
	HX_STACK_LINE(404)
	this->mass = (int)1;
	HX_STACK_LINE(365)
	this->immovable = false;
	HX_STACK_LINE(361)
	this->moves = true;
	HX_STACK_LINE(356)
	this->angle = (int)0;
	HX_STACK_LINE(351)
	this->pixelPerfectRender = true;
	HX_STACK_LINE(326)
	this->y = (int)0;
	HX_STACK_LINE(322)
	this->x = (int)0;
	HX_STACK_LINE(476)
	super::__construct();
	HX_STACK_LINE(478)
	this->set_x(X);
	HX_STACK_LINE(479)
	this->set_y(Y);
	HX_STACK_LINE(480)
	this->set_width(Width);
	HX_STACK_LINE(481)
	this->set_height(Height);
	HX_STACK_LINE(483)
	this->initVars();
}
;
	return null();
}

//FlxObject_obj::~FlxObject_obj() { }

Dynamic FlxObject_obj::__CreateEmpty() { return  new FlxObject_obj; }
hx::ObjectPtr< FlxObject_obj > FlxObject_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{  hx::ObjectPtr< FlxObject_obj > result = new FlxObject_obj();
	result->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return result;}

Dynamic FlxObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxObject_obj > result = new FlxObject_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void FlxObject_obj::initVars( ){
{
		HX_STACK_FRAME("flixel.FlxObject","initVars",0xb8a66d0b,"flixel.FlxObject.initVars","flixel/FlxObject.hx",490,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(491)
		this->collisionType = (int)1;
		HX_STACK_LINE(492)
		::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(492)
		{
			HX_STACK_LINE(492)
			::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(this->x,this->y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(492)
			point->_inPool = false;
			HX_STACK_LINE(492)
			_g = point;
		}
		HX_STACK_LINE(492)
		this->last = _g;
		HX_STACK_LINE(493)
		::flixel::util::FlxPoint _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(493)
		{
			HX_STACK_LINE(493)
			::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set((int)1,(int)1);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(493)
			point->_inPool = false;
			HX_STACK_LINE(493)
			_g1 = point;
		}
		HX_STACK_LINE(493)
		this->scrollFactor = _g1;
		HX_STACK_LINE(494)
		::flixel::util::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(494)
		{
			HX_STACK_LINE(494)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(494)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(494)
			::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(494)
			point->_inPool = false;
			HX_STACK_LINE(494)
			_g2 = point;
		}
		HX_STACK_LINE(494)
		this->_point = _g2;
		HX_STACK_LINE(496)
		{
			HX_STACK_LINE(496)
			::flixel::util::FlxPoint _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(496)
			{
				HX_STACK_LINE(496)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(496)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(496)
				::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(496)
				point->_inPool = false;
				HX_STACK_LINE(496)
				_g3 = point;
			}
			HX_STACK_LINE(496)
			this->velocity = _g3;
			HX_STACK_LINE(496)
			::flixel::util::FlxPoint _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(496)
			{
				HX_STACK_LINE(496)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(496)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(496)
				::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(496)
				point->_inPool = false;
				HX_STACK_LINE(496)
				_g4 = point;
			}
			HX_STACK_LINE(496)
			this->acceleration = _g4;
			HX_STACK_LINE(496)
			::flixel::util::FlxPoint _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(496)
			{
				HX_STACK_LINE(496)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(496)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(496)
				::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(496)
				point->_inPool = false;
				HX_STACK_LINE(496)
				_g5 = point;
			}
			HX_STACK_LINE(496)
			this->drag = _g5;
			HX_STACK_LINE(496)
			::flixel::util::FlxPoint _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(496)
			{
				HX_STACK_LINE(496)
				::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set((int)10000,(int)10000);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(496)
				point->_inPool = false;
				HX_STACK_LINE(496)
				_g6 = point;
			}
			HX_STACK_LINE(496)
			this->maxVelocity = _g6;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initVars,(void))

Void FlxObject_obj::initMotionVars( ){
{
		HX_STACK_FRAME("flixel.FlxObject","initMotionVars",0xb01943a1,"flixel.FlxObject.initMotionVars","flixel/FlxObject.hx",503,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(504)
		::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(504)
		{
			HX_STACK_LINE(504)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(504)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(504)
			::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(504)
			point->_inPool = false;
			HX_STACK_LINE(504)
			_g = point;
		}
		HX_STACK_LINE(504)
		this->velocity = _g;
		HX_STACK_LINE(505)
		::flixel::util::FlxPoint _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(505)
		{
			HX_STACK_LINE(505)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(505)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(505)
			::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(505)
			point->_inPool = false;
			HX_STACK_LINE(505)
			_g1 = point;
		}
		HX_STACK_LINE(505)
		this->acceleration = _g1;
		HX_STACK_LINE(506)
		::flixel::util::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(506)
		{
			HX_STACK_LINE(506)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(506)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(506)
			::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(506)
			point->_inPool = false;
			HX_STACK_LINE(506)
			_g2 = point;
		}
		HX_STACK_LINE(506)
		this->drag = _g2;
		HX_STACK_LINE(507)
		::flixel::util::FlxPoint _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(507)
		{
			HX_STACK_LINE(507)
			::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set((int)10000,(int)10000);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(507)
			point->_inPool = false;
			HX_STACK_LINE(507)
			_g3 = point;
		}
		HX_STACK_LINE(507)
		this->maxVelocity = _g3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initMotionVars,(void))

Void FlxObject_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxObject","destroy",0xba37b5ab,"flixel.FlxObject.destroy","flixel/FlxObject.hx",515,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(516)
		this->super::destroy();
		HX_STACK_LINE(518)
		::flixel::util::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->velocity);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(518)
		this->velocity = _g;
		HX_STACK_LINE(519)
		::flixel::util::FlxPoint _g1 = ::flixel::util::FlxDestroyUtil_obj::put(this->acceleration);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(519)
		this->acceleration = _g1;
		HX_STACK_LINE(520)
		::flixel::util::FlxPoint _g2 = ::flixel::util::FlxDestroyUtil_obj::put(this->drag);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(520)
		this->drag = _g2;
		HX_STACK_LINE(521)
		::flixel::util::FlxPoint _g3 = ::flixel::util::FlxDestroyUtil_obj::put(this->maxVelocity);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(521)
		this->maxVelocity = _g3;
		HX_STACK_LINE(522)
		::flixel::util::FlxPoint _g4 = ::flixel::util::FlxDestroyUtil_obj::put(this->scrollFactor);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(522)
		this->scrollFactor = _g4;
		HX_STACK_LINE(523)
		::flixel::util::FlxPoint _g5 = ::flixel::util::FlxDestroyUtil_obj::put(this->last);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(523)
		this->last = _g5;
		HX_STACK_LINE(524)
		::flixel::util::FlxPoint _g6 = ::flixel::util::FlxDestroyUtil_obj::put(this->_point);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(524)
		this->_point = _g6;
		HX_STACK_LINE(525)
		this->_cameras = null();
	}
return null();
}


Void FlxObject_obj::update( ){
{
		HX_STACK_FRAME("flixel.FlxObject","update",0x87b15e78,"flixel.FlxObject.update","flixel/FlxObject.hx",533,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(539)
		this->last->set_x(this->x);
		HX_STACK_LINE(540)
		this->last->set_y(this->y);
		HX_STACK_LINE(542)
		if ((this->moves)){
			HX_STACK_LINE(544)
			Float dt = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(dt,"dt");
			HX_STACK_LINE(544)
			Float _g = ::flixel::util::FlxVelocity_obj::computeVelocity(this->angularVelocity,this->angularAcceleration,this->angularDrag,this->maxAngular);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(544)
			Float _g1 = (_g - this->angularVelocity);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(544)
			Float velocityDelta = (0.5 * _g1);		HX_STACK_VAR(velocityDelta,"velocityDelta");
			HX_STACK_LINE(544)
			hx::AddEq(this->angularVelocity,velocityDelta);
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				::flixel::FlxObject _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(544)
				_g2->set_angle((_g2->angle + (this->angularVelocity * dt)));
			}
			HX_STACK_LINE(544)
			hx::AddEq(this->angularVelocity,velocityDelta);
			HX_STACK_LINE(544)
			Float _g2 = ::flixel::util::FlxVelocity_obj::computeVelocity(this->velocity->x,this->acceleration->x,this->drag->x,this->maxVelocity->x);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(544)
			Float _g3 = (_g2 - this->velocity->x);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(544)
			Float _g4 = (0.5 * _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(544)
			velocityDelta = _g4;
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				::flixel::util::FlxPoint _g5 = this->velocity;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(544)
				_g5->set_x((_g5->x + velocityDelta));
			}
			HX_STACK_LINE(544)
			Float delta = (this->velocity->x * dt);		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				::flixel::util::FlxPoint _g5 = this->velocity;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(544)
				_g5->set_x((_g5->x + velocityDelta));
			}
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				::flixel::FlxObject _g5 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(544)
				_g5->set_x((_g5->x + delta));
			}
			HX_STACK_LINE(544)
			Float _g5 = ::flixel::util::FlxVelocity_obj::computeVelocity(this->velocity->y,this->acceleration->y,this->drag->y,this->maxVelocity->y);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(544)
			Float _g6 = (_g5 - this->velocity->y);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(544)
			Float _g7 = (0.5 * _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(544)
			velocityDelta = _g7;
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				::flixel::util::FlxPoint _g8 = this->velocity;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(544)
				_g8->set_y((_g8->y + velocityDelta));
			}
			HX_STACK_LINE(544)
			delta = (this->velocity->y * dt);
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				::flixel::util::FlxPoint _g8 = this->velocity;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(544)
				_g8->set_y((_g8->y + velocityDelta));
			}
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				::flixel::FlxObject _g8 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(544)
				_g8->set_y((_g8->y + delta));
			}
		}
		HX_STACK_LINE(547)
		this->wasTouching = this->touching;
		HX_STACK_LINE(548)
		this->touching = (int)0;
	}
return null();
}


Void FlxObject_obj::updateMotion( ){
{
		HX_STACK_FRAME("flixel.FlxObject","updateMotion",0x420d82ce,"flixel.FlxObject.updateMotion","flixel/FlxObject.hx",556,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(557)
		Float dt = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(dt,"dt");
		HX_STACK_LINE(559)
		Float _g = ::flixel::util::FlxVelocity_obj::computeVelocity(this->angularVelocity,this->angularAcceleration,this->angularDrag,this->maxAngular);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(559)
		Float _g1 = (_g - this->angularVelocity);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(559)
		Float velocityDelta = (0.5 * _g1);		HX_STACK_VAR(velocityDelta,"velocityDelta");
		HX_STACK_LINE(560)
		hx::AddEq(this->angularVelocity,velocityDelta);
		HX_STACK_LINE(561)
		{
			HX_STACK_LINE(561)
			::flixel::FlxObject _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(561)
			_g2->set_angle((_g2->angle + (this->angularVelocity * dt)));
		}
		HX_STACK_LINE(562)
		hx::AddEq(this->angularVelocity,velocityDelta);
		HX_STACK_LINE(564)
		Float _g2 = ::flixel::util::FlxVelocity_obj::computeVelocity(this->velocity->x,this->acceleration->x,this->drag->x,this->maxVelocity->x);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(564)
		Float _g3 = (_g2 - this->velocity->x);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(564)
		Float _g4 = (0.5 * _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(564)
		velocityDelta = _g4;
		HX_STACK_LINE(565)
		{
			HX_STACK_LINE(565)
			::flixel::util::FlxPoint _g5 = this->velocity;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(565)
			_g5->set_x((_g5->x + velocityDelta));
		}
		HX_STACK_LINE(566)
		Float delta = (this->velocity->x * dt);		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(567)
		{
			HX_STACK_LINE(567)
			::flixel::util::FlxPoint _g5 = this->velocity;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(567)
			_g5->set_x((_g5->x + velocityDelta));
		}
		HX_STACK_LINE(568)
		{
			HX_STACK_LINE(568)
			::flixel::FlxObject _g5 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(568)
			_g5->set_x((_g5->x + delta));
		}
		HX_STACK_LINE(570)
		Float _g5 = ::flixel::util::FlxVelocity_obj::computeVelocity(this->velocity->y,this->acceleration->y,this->drag->y,this->maxVelocity->y);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(570)
		Float _g6 = (_g5 - this->velocity->y);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(570)
		Float _g7 = (0.5 * _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(570)
		velocityDelta = _g7;
		HX_STACK_LINE(571)
		{
			HX_STACK_LINE(571)
			::flixel::util::FlxPoint _g8 = this->velocity;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(571)
			_g8->set_y((_g8->y + velocityDelta));
		}
		HX_STACK_LINE(572)
		delta = (this->velocity->y * dt);
		HX_STACK_LINE(573)
		{
			HX_STACK_LINE(573)
			::flixel::util::FlxPoint _g8 = this->velocity;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(573)
			_g8->set_y((_g8->y + velocityDelta));
		}
		HX_STACK_LINE(574)
		{
			HX_STACK_LINE(574)
			::flixel::FlxObject _g8 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(574)
			_g8->set_y((_g8->y + delta));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,updateMotion,(void))

Void FlxObject_obj::draw( ){
{
		HX_STACK_FRAME("flixel.FlxObject","draw",0x1f17bab3,"flixel.FlxObject.draw","flixel/FlxObject.hx",581,0xf0fe0d80)
		HX_STACK_THIS(this)
	}
return null();
}


bool FlxObject_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.FlxObject","overlaps",0xaad0e53b,"flixel.FlxObject.overlaps","flixel/FlxObject.hx",599,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(600)
		::flixel::group::FlxTypedGroup group;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(600)
		{
			HX_STACK_LINE(600)
			::flixel::group::FlxTypedGroup group1 = null();		HX_STACK_VAR(group1,"group1");
			HX_STACK_LINE(600)
			if (((bool((ObjectOrGroup->collisionType == (int)4)) || bool((ObjectOrGroup->collisionType == (int)2))))){
				HX_STACK_LINE(600)
				if (((ObjectOrGroup->collisionType == (int)2))){
					HX_STACK_LINE(600)
					group1 = ObjectOrGroup;
				}
				else{
					HX_STACK_LINE(600)
					if (((ObjectOrGroup->collisionType == (int)4))){
						HX_STACK_LINE(600)
						group1 = (hx::TCast< flixel::group::FlxSpriteGroup >::cast(ObjectOrGroup))->group;
					}
				}
			}
			HX_STACK_LINE(600)
			group = group1;
		}
		HX_STACK_LINE(601)
		if (((group != null()))){
			HX_STACK_LINE(603)
			Dynamic Callback = this->overlapsCallback_dyn();		HX_STACK_VAR(Callback,"Callback");
			HX_STACK_LINE(603)
			bool result = false;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(603)
			if (((group != null()))){
				HX_STACK_LINE(603)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(603)
				int l = group->length;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(603)
				::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
				HX_STACK_LINE(603)
				while((true)){
					HX_STACK_LINE(603)
					if ((!(((i < l))))){
						HX_STACK_LINE(603)
						break;
					}
					HX_STACK_LINE(603)
					int _g = (i)++;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(603)
					::flixel::FlxBasic _g1 = group->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(603)
					basic = _g1;
					HX_STACK_LINE(603)
					if (((  (((basic != null()))) ? bool(Callback(basic,(int)0,(int)0,InScreenSpace,Camera).Cast< bool >()) : bool(false) ))){
						HX_STACK_LINE(603)
						result = true;
						HX_STACK_LINE(603)
						break;
					}
				}
			}
			HX_STACK_LINE(603)
			return result;
		}
		HX_STACK_LINE(606)
		if (((ObjectOrGroup->collisionType == (int)3))){
			HX_STACK_LINE(610)
			return (hx::TCast< flixel::tile::FlxTilemap >::cast(ObjectOrGroup))->overlaps(hx::ObjectPtr<OBJ_>(this),InScreenSpace,Camera);
		}
		HX_STACK_LINE(613)
		::flixel::FlxObject object;		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(613)
		object = hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup);
		HX_STACK_LINE(614)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(616)
			Float _g2 = object->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(616)
			Float _g3 = (object->x + _g2);		HX_STACK_VAR(_g3,"_g3");
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this,::flixel::FlxObject &object){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",616,0xf0fe0d80)
					{
						HX_STACK_LINE(616)
						Float _g4 = __this->get_width();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(616)
						Float _g5 = (__this->x + _g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(616)
						return (object->x < _g5);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this,::flixel::FlxObject &object){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",617,0xf0fe0d80)
					{
						HX_STACK_LINE(617)
						Float _g6 = object->get_height();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(617)
						Float _g7 = (object->y + _g6);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(617)
						return (_g7 > __this->y);
					}
					return null();
				}
			};
			HX_STACK_LINE(616)
			if (((  (((  (((_g3 > this->x))) ? bool(_Function_2_1::Block(this,object)) : bool(false) ))) ? bool(_Function_2_2::Block(this,object)) : bool(false) ))){
				HX_STACK_LINE(617)
				Float _g8 = this->get_height();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(617)
				Float _g9 = (this->y + _g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(617)
				return (object->y < _g9);
			}
			else{
				HX_STACK_LINE(616)
				return false;
			}
		}
		HX_STACK_LINE(620)
		if (((Camera == null()))){
			HX_STACK_LINE(622)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(624)
		::flixel::util::FlxPoint objectScreenPos = object->getScreenXY(null(),Camera);		HX_STACK_VAR(objectScreenPos,"objectScreenPos");
		HX_STACK_LINE(625)
		this->getScreenXY(this->_point,Camera);
		HX_STACK_LINE(626)
		Float _g10 = object->get_width();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(626)
		Float _g11 = (objectScreenPos->x + _g10);		HX_STACK_VAR(_g11,"_g11");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this,::flixel::util::FlxPoint &objectScreenPos){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",626,0xf0fe0d80)
				{
					HX_STACK_LINE(626)
					Float _g12 = __this->get_width();		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(626)
					Float _g13 = (__this->_point->x + _g12);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(626)
					return (objectScreenPos->x < _g13);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this,::flixel::FlxObject &object,::flixel::util::FlxPoint &objectScreenPos){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",627,0xf0fe0d80)
				{
					HX_STACK_LINE(627)
					Float _g14 = object->get_height();		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(627)
					Float _g15 = (objectScreenPos->y + _g14);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(627)
					return (_g15 > __this->_point->y);
				}
				return null();
			}
		};
		HX_STACK_LINE(626)
		if (((  (((  (((_g11 > this->_point->x))) ? bool(_Function_1_1::Block(this,objectScreenPos)) : bool(false) ))) ? bool(_Function_1_2::Block(this,object,objectScreenPos)) : bool(false) ))){
			HX_STACK_LINE(627)
			Float _g16 = this->get_height();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(627)
			Float _g17 = (this->_point->y + _g16);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(627)
			return (objectScreenPos->y < _g17);
		}
		else{
			HX_STACK_LINE(626)
			return false;
		}
		HX_STACK_LINE(626)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlaps,return )

bool FlxObject_obj::overlapsCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","overlapsCallback",0xe4196e20,"flixel.FlxObject.overlapsCallback","flixel/FlxObject.hx",632,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(632)
	return this->overlaps(ObjectOrGroup,InScreenSpace,Camera);
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsCallback,return )

bool FlxObject_obj::overlapsAt( Float X,Float Y,::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.FlxObject","overlapsAt",0xacc1230e,"flixel.FlxObject.overlapsAt","flixel/FlxObject.hx",647,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(648)
		::flixel::group::FlxTypedGroup group;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(648)
		{
			HX_STACK_LINE(648)
			::flixel::group::FlxTypedGroup group1 = null();		HX_STACK_VAR(group1,"group1");
			HX_STACK_LINE(648)
			if (((bool((ObjectOrGroup->collisionType == (int)4)) || bool((ObjectOrGroup->collisionType == (int)2))))){
				HX_STACK_LINE(648)
				if (((ObjectOrGroup->collisionType == (int)2))){
					HX_STACK_LINE(648)
					group1 = ObjectOrGroup;
				}
				else{
					HX_STACK_LINE(648)
					if (((ObjectOrGroup->collisionType == (int)4))){
						HX_STACK_LINE(648)
						group1 = (hx::TCast< flixel::group::FlxSpriteGroup >::cast(ObjectOrGroup))->group;
					}
				}
			}
			HX_STACK_LINE(648)
			group = group1;
		}
		HX_STACK_LINE(649)
		if (((group != null()))){
			HX_STACK_LINE(651)
			Dynamic Callback = this->overlapsAtCallback_dyn();		HX_STACK_VAR(Callback,"Callback");
			HX_STACK_LINE(651)
			bool result = false;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(651)
			if (((group != null()))){
				HX_STACK_LINE(651)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(651)
				int l = group->length;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(651)
				::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
				HX_STACK_LINE(651)
				while((true)){
					HX_STACK_LINE(651)
					if ((!(((i < l))))){
						HX_STACK_LINE(651)
						break;
					}
					HX_STACK_LINE(651)
					int _g = (i)++;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(651)
					::flixel::FlxBasic _g1 = group->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(651)
					basic = _g1;
					HX_STACK_LINE(651)
					if (((  (((basic != null()))) ? bool(Callback(basic,X,Y,InScreenSpace,Camera).Cast< bool >()) : bool(false) ))){
						HX_STACK_LINE(651)
						result = true;
						HX_STACK_LINE(651)
						break;
					}
				}
			}
			HX_STACK_LINE(651)
			return result;
		}
		HX_STACK_LINE(654)
		if (((ObjectOrGroup->collisionType == (int)3))){
			HX_STACK_LINE(660)
			::flixel::tile::FlxTilemap tilemap;		HX_STACK_VAR(tilemap,"tilemap");
			HX_STACK_LINE(660)
			tilemap = hx::TCast< flixel::tile::FlxTilemap >::cast(ObjectOrGroup);
			HX_STACK_LINE(661)
			return tilemap->overlapsAt((tilemap->x - ((X - this->x))),(tilemap->y - ((Y - this->y))),hx::ObjectPtr<OBJ_>(this),InScreenSpace,Camera);
		}
		HX_STACK_LINE(664)
		::flixel::FlxObject object;		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(664)
		object = hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup);
		HX_STACK_LINE(665)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(667)
			Float _g2 = object->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(667)
			Float _g3 = (object->x + _g2);		HX_STACK_VAR(_g3,"_g3");
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this,::flixel::FlxObject &object,Float &X){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",667,0xf0fe0d80)
					{
						HX_STACK_LINE(667)
						Float _g4 = __this->get_width();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(667)
						Float _g5 = (X + _g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(667)
						return (object->x < _g5);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( Float &Y,::flixel::FlxObject &object){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",668,0xf0fe0d80)
					{
						HX_STACK_LINE(668)
						Float _g6 = object->get_height();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(668)
						Float _g7 = (object->y + _g6);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(668)
						return (_g7 > Y);
					}
					return null();
				}
			};
			HX_STACK_LINE(667)
			if (((  (((  (((_g3 > X))) ? bool(_Function_2_1::Block(this,object,X)) : bool(false) ))) ? bool(_Function_2_2::Block(Y,object)) : bool(false) ))){
				HX_STACK_LINE(668)
				Float _g8 = this->get_height();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(668)
				Float _g9 = (Y + _g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(668)
				return (object->y < _g9);
			}
			else{
				HX_STACK_LINE(667)
				return false;
			}
		}
		HX_STACK_LINE(671)
		if (((Camera == null()))){
			HX_STACK_LINE(673)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(675)
		::flixel::util::FlxPoint objectScreenPos = object->getScreenXY(null(),Camera);		HX_STACK_VAR(objectScreenPos,"objectScreenPos");
		HX_STACK_LINE(676)
		this->getScreenXY(this->_point,Camera);
		HX_STACK_LINE(677)
		Float _g10 = object->get_width();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(677)
		Float _g11 = (objectScreenPos->x + _g10);		HX_STACK_VAR(_g11,"_g11");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this,::flixel::util::FlxPoint &objectScreenPos){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",677,0xf0fe0d80)
				{
					HX_STACK_LINE(677)
					Float _g12 = __this->get_width();		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(677)
					Float _g13 = (__this->_point->x + _g12);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(677)
					return (objectScreenPos->x < _g13);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this,::flixel::FlxObject &object,::flixel::util::FlxPoint &objectScreenPos){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",678,0xf0fe0d80)
				{
					HX_STACK_LINE(678)
					Float _g14 = object->get_height();		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(678)
					Float _g15 = (objectScreenPos->y + _g14);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(678)
					return (_g15 > __this->_point->y);
				}
				return null();
			}
		};
		HX_STACK_LINE(677)
		if (((  (((  (((_g11 > this->_point->x))) ? bool(_Function_1_1::Block(this,objectScreenPos)) : bool(false) ))) ? bool(_Function_1_2::Block(this,object,objectScreenPos)) : bool(false) ))){
			HX_STACK_LINE(678)
			Float _g16 = this->get_height();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(678)
			Float _g17 = (this->_point->y + _g16);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(678)
			return (objectScreenPos->y < _g17);
		}
		else{
			HX_STACK_LINE(677)
			return false;
		}
		HX_STACK_LINE(677)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAt,return )

bool FlxObject_obj::overlapsAtCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","overlapsAtCallback",0xb90836f3,"flixel.FlxObject.overlapsAtCallback","flixel/FlxObject.hx",683,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(683)
	return this->overlapsAt(X,Y,ObjectOrGroup,InScreenSpace,Camera);
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAtCallback,return )

bool FlxObject_obj::overlapsPoint( ::flixel::util::FlxPoint point,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.FlxObject","overlapsPoint",0xcd9c6915,"flixel.FlxObject.overlapsPoint","flixel/FlxObject.hx",695,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(696)
		if ((!(InScreenSpace))){
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this,::flixel::util::FlxPoint &point){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",698,0xf0fe0d80)
					{
						HX_STACK_LINE(698)
						Float _g = __this->get_width();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(698)
						Float _g1 = (__this->x + _g);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(698)
						return (point->x < _g1);
					}
					return null();
				}
			};
			HX_STACK_LINE(698)
			if (((  (((  (((point->x > this->x))) ? bool(_Function_2_1::Block(this,point)) : bool(false) ))) ? bool((point->y > this->y)) : bool(false) ))){
				HX_STACK_LINE(698)
				Float _g2 = this->get_height();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(698)
				Float _g3 = (this->y + _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(698)
				return (point->y < _g3);
			}
			else{
				HX_STACK_LINE(698)
				return false;
			}
		}
		HX_STACK_LINE(701)
		if (((Camera == null()))){
			HX_STACK_LINE(703)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(705)
		Float X = (point->x - Camera->scroll->x);		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(706)
		Float Y = (point->y - Camera->scroll->y);		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(707)
		this->getScreenXY(this->_point,Camera);
		HX_STACK_LINE(708)
		if ((point->_weak)){
			HX_STACK_LINE(708)
			::flixel::util::FlxPoint_obj::_pool->put(point);
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this,Float &X){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",709,0xf0fe0d80)
				{
					HX_STACK_LINE(709)
					Float _g4 = __this->get_width();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(709)
					Float _g5 = (__this->_point->x + _g4);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(709)
					return (X < _g5);
				}
				return null();
			}
		};
		HX_STACK_LINE(709)
		if (((  (((  (((X > this->_point->x))) ? bool(_Function_1_1::Block(this,X)) : bool(false) ))) ? bool((Y > this->_point->y)) : bool(false) ))){
			HX_STACK_LINE(709)
			Float _g6 = this->get_height();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(709)
			Float _g7 = (this->_point->y + _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(709)
			return (Y < _g7);
		}
		else{
			HX_STACK_LINE(709)
			return false;
		}
		HX_STACK_LINE(709)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlapsPoint,return )

bool FlxObject_obj::inWorldBounds( ){
	HX_STACK_FRAME("flixel.FlxObject","inWorldBounds",0x89d0e9f3,"flixel.FlxObject.inWorldBounds","flixel/FlxObject.hx",718,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(719)
	Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(719)
	Float _g1 = (this->x + _g);		HX_STACK_VAR(_g1,"_g1");
	struct _Function_1_1{
		inline static Float Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",719,0xf0fe0d80)
			{
				HX_STACK_LINE(719)
				::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(719)
				return (_this->x + _this->width);
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",719,0xf0fe0d80)
			{
				HX_STACK_LINE(719)
				Float _g2 = __this->get_height();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(719)
				Float _g3 = (__this->y + _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(719)
				return (_g3 > ::flixel::FlxG_obj::worldBounds->y);
			}
			return null();
		}
	};
	HX_STACK_LINE(719)
	if (((  (((  (((_g1 > ::flixel::FlxG_obj::worldBounds->x))) ? bool((this->x < _Function_1_1::Block())) : bool(false) ))) ? bool(_Function_1_2::Block(this)) : bool(false) ))){
		struct _Function_2_1{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",719,0xf0fe0d80)
				{
					HX_STACK_LINE(719)
					::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(719)
					return (_this->y + _this->height);
				}
				return null();
			}
		};
		HX_STACK_LINE(719)
		return (this->y < _Function_2_1::Block());
	}
	else{
		HX_STACK_LINE(719)
		return false;
	}
	HX_STACK_LINE(719)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,inWorldBounds,return )

::flixel::util::FlxPoint FlxObject_obj::getScreenXY( ::flixel::util::FlxPoint point,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","getScreenXY",0x16aa3354,"flixel.FlxObject.getScreenXY","flixel/FlxObject.hx",730,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(731)
	if (((point == null()))){
		HX_STACK_LINE(733)
		::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(733)
		{
			HX_STACK_LINE(733)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(733)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(733)
			::flixel::util::FlxPoint point1 = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(733)
			point1->_inPool = false;
			HX_STACK_LINE(733)
			_g = point1;
		}
		HX_STACK_LINE(733)
		point = _g;
	}
	HX_STACK_LINE(735)
	if (((Camera == null()))){
		HX_STACK_LINE(737)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(739)
	return point->set((this->x - (Camera->scroll->x * this->scrollFactor->x)),(this->y - (Camera->scroll->y * this->scrollFactor->y)));
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,getScreenXY,return )

::flixel::util::FlxPoint FlxObject_obj::getMidpoint( ::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.FlxObject","getMidpoint",0x7bfe0daf,"flixel.FlxObject.getMidpoint","flixel/FlxObject.hx",749,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(750)
	if (((point == null()))){
		HX_STACK_LINE(752)
		::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(752)
		{
			HX_STACK_LINE(752)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(752)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(752)
			::flixel::util::FlxPoint point1 = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(752)
			point1->_inPool = false;
			HX_STACK_LINE(752)
			_g = point1;
		}
		HX_STACK_LINE(752)
		point = _g;
	}
	HX_STACK_LINE(754)
	Float _g1 = this->get_width();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(754)
	Float _g2 = (_g1 * 0.5);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(754)
	Float _g3 = (this->x + _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(754)
	Float _g4 = this->get_height();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(754)
	Float _g5 = (_g4 * 0.5);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(754)
	Float _g6 = (this->y + _g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(754)
	return point->set(_g3,_g6);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getMidpoint,return )

Void FlxObject_obj::reset( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.FlxObject","reset",0x1cbd9440,"flixel.FlxObject.reset","flixel/FlxObject.hx",765,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(766)
		this->revive();
		HX_STACK_LINE(767)
		this->touching = (int)0;
		HX_STACK_LINE(768)
		this->wasTouching = (int)0;
		HX_STACK_LINE(769)
		this->setPosition(X,Y);
		HX_STACK_LINE(770)
		this->last->set(this->x,this->y);
		HX_STACK_LINE(771)
		this->velocity->set(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,reset,(void))

bool FlxObject_obj::isOnScreen( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","isOnScreen",0x4aab7fe4,"flixel.FlxObject.isOnScreen","flixel/FlxObject.hx",781,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(782)
	if (((Camera == null()))){
		HX_STACK_LINE(784)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(786)
	this->getScreenXY(this->_point,Camera);
	HX_STACK_LINE(787)
	Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(787)
	Float _g1 = (this->_point->x + _g);		HX_STACK_VAR(_g1,"_g1");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",787,0xf0fe0d80)
			{
				HX_STACK_LINE(787)
				Float _g2 = __this->get_height();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(787)
				Float _g3 = (__this->_point->y + _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(787)
				return (_g3 > (int)0);
			}
			return null();
		}
	};
	HX_STACK_LINE(787)
	if (((  (((  (((_g1 > (int)0))) ? bool((this->_point->x < Camera->width)) : bool(false) ))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
		HX_STACK_LINE(787)
		return (this->_point->y < Camera->height);
	}
	else{
		HX_STACK_LINE(787)
		return false;
	}
	HX_STACK_LINE(787)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isOnScreen,return )

bool FlxObject_obj::isTouching( int Direction){
	HX_STACK_FRAME("flixel.FlxObject","isTouching",0x23c6647c,"flixel.FlxObject.isTouching","flixel/FlxObject.hx",799,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Direction,"Direction")
	HX_STACK_LINE(799)
	return (((int(this->touching) & int(Direction))) > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isTouching,return )

bool FlxObject_obj::justTouched( int Direction){
	HX_STACK_FRAME("flixel.FlxObject","justTouched",0xbcba8e43,"flixel.FlxObject.justTouched","flixel/FlxObject.hx",811,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Direction,"Direction")
	HX_STACK_LINE(811)
	return (bool((((int(this->touching) & int(Direction))) > (int)0)) && bool((((int(this->wasTouching) & int(Direction))) <= (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,justTouched,return )

Void FlxObject_obj::hurt( Float Damage){
{
		HX_STACK_FRAME("flixel.FlxObject","hurt",0x21beeabe,"flixel.FlxObject.hurt","flixel/FlxObject.hx",821,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Damage,"Damage")
		HX_STACK_LINE(822)
		this->health = (this->health - Damage);
		HX_STACK_LINE(823)
		if (((this->health <= (int)0))){
			HX_STACK_LINE(825)
			this->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,hurt,(void))

Void FlxObject_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.FlxObject","setPosition",0x265d9f9c,"flixel.FlxObject.setPosition","flixel/FlxObject.hx",837,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(838)
		this->set_x(X);
		HX_STACK_LINE(839)
		this->set_y(Y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setPosition,(void))

Void FlxObject_obj::setSize( Float Width,Float Height){
{
		HX_STACK_FRAME("flixel.FlxObject","setSize",0xa7896a34,"flixel.FlxObject.setSize","flixel/FlxObject.hx",849,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(850)
		this->set_width(Width);
		HX_STACK_LINE(851)
		this->set_height(Height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setSize,(void))

::String FlxObject_obj::toString( ){
	HX_STACK_FRAME("flixel.FlxObject","toString",0x9e14e2db,"flixel.FlxObject.toString","flixel/FlxObject.hx",945,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(947)
	::flixel::util::LabelValuePair _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(947)
	{
		HX_STACK_LINE(947)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(947)
		_this->label = HX_CSTRING("x");
		HX_STACK_LINE(947)
		_this->value = this->x;
		HX_STACK_LINE(947)
		_g = _this;
	}
	HX_STACK_LINE(948)
	::flixel::util::LabelValuePair _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(948)
	{
		HX_STACK_LINE(948)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(948)
		_this->label = HX_CSTRING("y");
		HX_STACK_LINE(948)
		_this->value = this->y;
		HX_STACK_LINE(948)
		_g1 = _this;
	}
	HX_STACK_LINE(949)
	::flixel::util::LabelValuePair _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(949)
	{
		HX_STACK_LINE(949)
		Dynamic value = this->get_width();		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(949)
		{
			HX_STACK_LINE(949)
			::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(949)
			_this->label = HX_CSTRING("w");
			HX_STACK_LINE(949)
			_this->value = value;
			HX_STACK_LINE(949)
			_g2 = _this;
		}
	}
	HX_STACK_LINE(950)
	::flixel::util::LabelValuePair _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(950)
	{
		HX_STACK_LINE(950)
		Dynamic value = this->get_height();		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(950)
		{
			HX_STACK_LINE(950)
			::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(950)
			_this->label = HX_CSTRING("h");
			HX_STACK_LINE(950)
			_this->value = value;
			HX_STACK_LINE(950)
			_g3 = _this;
		}
	}
	HX_STACK_LINE(951)
	::flixel::util::LabelValuePair _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(951)
	{
		HX_STACK_LINE(951)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(951)
		_this->label = HX_CSTRING("visible");
		HX_STACK_LINE(951)
		_this->value = this->visible;
		HX_STACK_LINE(951)
		_g4 = _this;
	}
	HX_STACK_LINE(952)
	::flixel::util::LabelValuePair _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(952)
	{
		HX_STACK_LINE(952)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(952)
		_this->label = HX_CSTRING("velocity");
		HX_STACK_LINE(952)
		_this->value = this->velocity;
		HX_STACK_LINE(952)
		_g5 = _this;
	}
	HX_STACK_LINE(946)
	Array< ::Dynamic > _g6 = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2).Add(_g3).Add(_g4).Add(_g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(946)
	return ::flixel::util::FlxStringUtil_obj::getDebugString(_g6);
}


Float FlxObject_obj::set_x( Float NewX){
	HX_STACK_FRAME("flixel.FlxObject","set_x",0xb024e5cc,"flixel.FlxObject.set_x","flixel/FlxObject.hx",957,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewX,"NewX")
	HX_STACK_LINE(957)
	return this->x = NewX;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_x,return )

Float FlxObject_obj::set_y( Float NewY){
	HX_STACK_FRAME("flixel.FlxObject","set_y",0xb024e5cd,"flixel.FlxObject.set_y","flixel/FlxObject.hx",962,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewY,"NewY")
	HX_STACK_LINE(962)
	return this->y = NewY;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_y,return )

Float FlxObject_obj::set_width( Float Width){
	HX_STACK_FRAME("flixel.FlxObject","set_width",0x7d06d55a,"flixel.FlxObject.set_width","flixel/FlxObject.hx",966,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_LINE(975)
	this->width = Width;
	HX_STACK_LINE(980)
	return Width;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_width,return )

Float FlxObject_obj::set_height( Float Height){
	HX_STACK_FRAME("flixel.FlxObject","set_height",0x9f435213,"flixel.FlxObject.set_height","flixel/FlxObject.hx",984,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Height,"Height")
	HX_STACK_LINE(993)
	this->height = Height;
	HX_STACK_LINE(998)
	return Height;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_height,return )

Float FlxObject_obj::get_width( ){
	HX_STACK_FRAME("flixel.FlxObject","get_width",0x99b5e94e,"flixel.FlxObject.get_width","flixel/FlxObject.hx",1003,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1003)
	return this->width;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_width,return )

Float FlxObject_obj::get_height( ){
	HX_STACK_FRAME("flixel.FlxObject","get_height",0x9bc5b39f,"flixel.FlxObject.get_height","flixel/FlxObject.hx",1008,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1008)
	return this->height;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_height,return )

bool FlxObject_obj::get_solid( ){
	HX_STACK_FRAME("flixel.FlxObject","get_solid",0x5018e773,"flixel.FlxObject.get_solid","flixel/FlxObject.hx",1013,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1013)
	return (((int(this->allowCollisions) & int((int)4369))) > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_solid,return )

bool FlxObject_obj::set_solid( bool Solid){
	HX_STACK_FRAME("flixel.FlxObject","set_solid",0x3369d37f,"flixel.FlxObject.set_solid","flixel/FlxObject.hx",1017,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Solid,"Solid")
	HX_STACK_LINE(1018)
	if ((Solid)){
		HX_STACK_LINE(1020)
		this->allowCollisions = (int)4369;
	}
	else{
		HX_STACK_LINE(1024)
		this->allowCollisions = (int)0;
	}
	HX_STACK_LINE(1026)
	return Solid;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_solid,return )

Float FlxObject_obj::set_angle( Float Value){
	HX_STACK_FRAME("flixel.FlxObject","set_angle",0xd5866327,"flixel.FlxObject.set_angle","flixel/FlxObject.hx",1031,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1031)
	return this->angle = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_angle,return )

bool FlxObject_obj::set_moves( bool Value){
	HX_STACK_FRAME("flixel.FlxObject","set_moves",0xbf09eb96,"flixel.FlxObject.set_moves","flixel/FlxObject.hx",1036,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1036)
	return this->moves = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_moves,return )

bool FlxObject_obj::set_immovable( bool Value){
	HX_STACK_FRAME("flixel.FlxObject","set_immovable",0xc5b8805e,"flixel.FlxObject.set_immovable","flixel/FlxObject.hx",1041,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1041)
	return this->immovable = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_immovable,return )

::flixel::FlxCamera FlxObject_obj::get_camera( ){
	HX_STACK_FRAME("flixel.FlxObject","get_camera",0x5105f25d,"flixel.FlxObject.get_camera","flixel/FlxObject.hx",1046,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1046)
	if (((bool((this->_cameras == null())) || bool((this->_cameras->length == (int)0))))){
		HX_STACK_LINE(1046)
		return ::flixel::FlxCamera_obj::defaultCameras->__get((int)0).StaticCast< ::flixel::FlxCamera >();
	}
	else{
		HX_STACK_LINE(1046)
		return this->_cameras->__get((int)0).StaticCast< ::flixel::FlxCamera >();
	}
	HX_STACK_LINE(1046)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_camera,return )

::flixel::FlxCamera FlxObject_obj::set_camera( ::flixel::FlxCamera Value){
	HX_STACK_FRAME("flixel.FlxObject","set_camera",0x548390d1,"flixel.FlxObject.set_camera","flixel/FlxObject.hx",1050,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1051)
	if (((this->_cameras == null()))){
		HX_STACK_LINE(1052)
		this->_cameras = Array_obj< ::Dynamic >::__new().Add(Value);
	}
	else{
		HX_STACK_LINE(1054)
		this->_cameras[(int)0] = Value;
	}
	HX_STACK_LINE(1055)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_camera,return )

Array< ::Dynamic > FlxObject_obj::get_cameras( ){
	HX_STACK_FRAME("flixel.FlxObject","get_cameras",0x942e1f76,"flixel.FlxObject.get_cameras","flixel/FlxObject.hx",1060,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1060)
	if (((this->_cameras == null()))){
		HX_STACK_LINE(1060)
		return ::flixel::FlxCamera_obj::defaultCameras;
	}
	else{
		HX_STACK_LINE(1060)
		return this->_cameras;
	}
	HX_STACK_LINE(1060)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_cameras,return )

Array< ::Dynamic > FlxObject_obj::set_cameras( Array< ::Dynamic > Value){
	HX_STACK_FRAME("flixel.FlxObject","set_cameras",0x9e9b2682,"flixel.FlxObject.set_cameras","flixel/FlxObject.hx",1065,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1065)
	return this->_cameras = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_cameras,return )

bool FlxObject_obj::set_pixelPerfectRender( bool Value){
	HX_STACK_FRAME("flixel.FlxObject","set_pixelPerfectRender",0x84233609,"flixel.FlxObject.set_pixelPerfectRender","flixel/FlxObject.hx",1070,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1070)
	return this->pixelPerfectRender = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_pixelPerfectRender,return )

Float FlxObject_obj::SEPARATE_BIAS;

int FlxObject_obj::LEFT;

int FlxObject_obj::RIGHT;

int FlxObject_obj::UP;

int FlxObject_obj::DOWN;

int FlxObject_obj::NONE;

int FlxObject_obj::CEILING;

int FlxObject_obj::FLOOR;

int FlxObject_obj::WALL;

int FlxObject_obj::ANY;

::flixel::util::FlxRect FlxObject_obj::_firstSeparateFlxRect;

::flixel::util::FlxRect FlxObject_obj::_secondSeparateFlxRect;

bool FlxObject_obj::separate( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","separate",0x6cc23192,"flixel.FlxObject.separate","flixel/FlxObject.hx",77,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(78)
	bool separatedX = ::flixel::FlxObject_obj::separateX(Object1,Object2);		HX_STACK_VAR(separatedX,"separatedX");
	HX_STACK_LINE(79)
	bool separatedY = ::flixel::FlxObject_obj::separateY(Object1,Object2);		HX_STACK_VAR(separatedY,"separatedY");
	HX_STACK_LINE(80)
	return (bool(separatedX) || bool(separatedY));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separate,return )

bool FlxObject_obj::separateX( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","separateX",0xbd292e86,"flixel.FlxObject.separateX","flixel/FlxObject.hx",91,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(93)
	bool obj1immovable = Object1->immovable;		HX_STACK_VAR(obj1immovable,"obj1immovable");
	HX_STACK_LINE(94)
	bool obj2immovable = Object2->immovable;		HX_STACK_VAR(obj2immovable,"obj2immovable");
	HX_STACK_LINE(95)
	if (((bool(obj1immovable) && bool(obj2immovable)))){
		HX_STACK_LINE(97)
		return false;
	}
	HX_STACK_LINE(101)
	if (((Object1->collisionType == (int)3))){
		HX_STACK_LINE(103)
		return (hx::TCast< flixel::tile::FlxTilemap >::cast(Object1))->overlapsWithCallback(Object2,::flixel::FlxObject_obj::separateX_dyn(),null(),null());
	}
	HX_STACK_LINE(105)
	if (((Object2->collisionType == (int)3))){
		HX_STACK_LINE(107)
		return (hx::TCast< flixel::tile::FlxTilemap >::cast(Object2))->overlapsWithCallback(Object1,::flixel::FlxObject_obj::separateX_dyn(),true,null());
	}
	HX_STACK_LINE(111)
	Float overlap = (int)0;		HX_STACK_VAR(overlap,"overlap");
	HX_STACK_LINE(112)
	Float obj1delta = (Object1->x - Object1->last->x);		HX_STACK_VAR(obj1delta,"obj1delta");
	HX_STACK_LINE(113)
	Float obj2delta = (Object2->x - Object2->last->x);		HX_STACK_VAR(obj2delta,"obj2delta");
	HX_STACK_LINE(115)
	if (((obj1delta != obj2delta))){
		HX_STACK_LINE(118)
		Float obj1deltaAbs;		HX_STACK_VAR(obj1deltaAbs,"obj1deltaAbs");
		HX_STACK_LINE(118)
		if (((obj1delta > (int)0))){
			HX_STACK_LINE(118)
			obj1deltaAbs = obj1delta;
		}
		else{
			HX_STACK_LINE(118)
			obj1deltaAbs = -(obj1delta);
		}
		HX_STACK_LINE(119)
		Float obj2deltaAbs;		HX_STACK_VAR(obj2deltaAbs,"obj2deltaAbs");
		HX_STACK_LINE(119)
		if (((obj2delta > (int)0))){
			HX_STACK_LINE(119)
			obj2deltaAbs = obj2delta;
		}
		else{
			HX_STACK_LINE(119)
			obj2deltaAbs = -(obj2delta);
		}
		HX_STACK_LINE(121)
		::flixel::util::FlxRect obj1rect;		HX_STACK_VAR(obj1rect,"obj1rect");
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			::flixel::util::FlxRect _this = ::flixel::FlxObject_obj::_firstSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(121)
			Float _g = Object1->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(121)
			Float Width = (_g + obj1deltaAbs);		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(121)
			Float Height = Object1->get_height();		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(121)
			_this->x = (Object1->x - ((  (((obj1delta > (int)0))) ? Float(obj1delta) : Float((int)0) )));
			HX_STACK_LINE(121)
			_this->y = Object1->last->y;
			HX_STACK_LINE(121)
			_this->width = Width;
			HX_STACK_LINE(121)
			_this->height = Height;
			HX_STACK_LINE(121)
			obj1rect = _this;
		}
		HX_STACK_LINE(122)
		::flixel::util::FlxRect obj2rect;		HX_STACK_VAR(obj2rect,"obj2rect");
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			::flixel::util::FlxRect _this = ::flixel::FlxObject_obj::_secondSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(122)
			Float _g1 = Object2->get_width();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(122)
			Float Width = (_g1 + obj2deltaAbs);		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(122)
			Float Height = Object2->get_height();		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(122)
			_this->x = (Object2->x - ((  (((obj2delta > (int)0))) ? Float(obj2delta) : Float((int)0) )));
			HX_STACK_LINE(122)
			_this->y = Object2->last->y;
			HX_STACK_LINE(122)
			_this->width = Width;
			HX_STACK_LINE(122)
			_this->height = Height;
			HX_STACK_LINE(122)
			obj2rect = _this;
		}
		HX_STACK_LINE(124)
		if (((bool((bool((bool(((obj1rect->x + obj1rect->width) > obj2rect->x)) && bool((obj1rect->x < (obj2rect->x + obj2rect->width))))) && bool(((obj1rect->y + obj1rect->height) > obj2rect->y)))) && bool((obj1rect->y < (obj2rect->y + obj2rect->height)))))){
			HX_STACK_LINE(126)
			Float maxOverlap = ((obj1deltaAbs + obj2deltaAbs) + ::flixel::FlxObject_obj::SEPARATE_BIAS);		HX_STACK_VAR(maxOverlap,"maxOverlap");
			HX_STACK_LINE(129)
			if (((obj1delta > obj2delta))){
				HX_STACK_LINE(131)
				Float _g2 = Object1->get_width();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(131)
				Float _g3 = (Object1->x + _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(131)
				Float _g4 = (_g3 - Object2->x);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(131)
				overlap = _g4;
				HX_STACK_LINE(132)
				if (((bool((bool((overlap > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)16))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)1))) == (int)0))))){
					HX_STACK_LINE(134)
					overlap = (int)0;
				}
				else{
					HX_STACK_LINE(138)
					hx::OrEq(Object1->touching,(int)16);
					HX_STACK_LINE(139)
					hx::OrEq(Object2->touching,(int)1);
				}
			}
			else{
				HX_STACK_LINE(142)
				if (((obj1delta < obj2delta))){
					HX_STACK_LINE(144)
					Float _g5 = Object2->get_width();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(144)
					Float _g6 = (Object1->x - _g5);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(144)
					Float _g7 = (_g6 - Object2->x);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(144)
					overlap = _g7;
					HX_STACK_LINE(145)
					if (((bool((bool((-(overlap) > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)1))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)16))) == (int)0))))){
						HX_STACK_LINE(147)
						overlap = (int)0;
					}
					else{
						HX_STACK_LINE(151)
						hx::OrEq(Object1->touching,(int)1);
						HX_STACK_LINE(152)
						hx::OrEq(Object2->touching,(int)16);
					}
				}
			}
		}
	}
	HX_STACK_LINE(159)
	if (((overlap != (int)0))){
		HX_STACK_LINE(161)
		Float obj1v = Object1->velocity->x;		HX_STACK_VAR(obj1v,"obj1v");
		HX_STACK_LINE(162)
		Float obj2v = Object2->velocity->x;		HX_STACK_VAR(obj2v,"obj2v");
		HX_STACK_LINE(164)
		if (((bool(!(obj1immovable)) && bool(!(obj2immovable))))){
			HX_STACK_LINE(166)
			hx::MultEq(overlap,0.5);
			HX_STACK_LINE(167)
			Object1->set_x((Object1->x - overlap));
			HX_STACK_LINE(168)
			{
				HX_STACK_LINE(168)
				::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(168)
				_g->set_x((_g->x + overlap));
			}
			HX_STACK_LINE(170)
			Float _g8 = ::Math_obj::sqrt((Float(((obj2v * obj2v) * Object2->mass)) / Float(Object1->mass)));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(170)
			Float obj1velocity;		HX_STACK_VAR(obj1velocity,"obj1velocity");
			HX_STACK_LINE(170)
			obj1velocity = (_g8 * ((  (((obj2v > (int)0))) ? int((int)1) : int((int)-1) )));
			HX_STACK_LINE(171)
			Float _g9 = ::Math_obj::sqrt((Float(((obj1v * obj1v) * Object1->mass)) / Float(Object2->mass)));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(171)
			Float obj2velocity;		HX_STACK_VAR(obj2velocity,"obj2velocity");
			HX_STACK_LINE(171)
			obj2velocity = (_g9 * ((  (((obj1v > (int)0))) ? int((int)1) : int((int)-1) )));
			HX_STACK_LINE(172)
			Float average = (((obj1velocity + obj2velocity)) * 0.5);		HX_STACK_VAR(average,"average");
			HX_STACK_LINE(173)
			hx::SubEq(obj1velocity,average);
			HX_STACK_LINE(174)
			hx::SubEq(obj2velocity,average);
			HX_STACK_LINE(175)
			Object1->velocity->set_x((average + (obj1velocity * Object1->elasticity)));
			HX_STACK_LINE(176)
			Object2->velocity->set_x((average + (obj2velocity * Object2->elasticity)));
		}
		else{
			HX_STACK_LINE(178)
			if ((!(obj1immovable))){
				HX_STACK_LINE(180)
				Object1->set_x((Object1->x - overlap));
				HX_STACK_LINE(181)
				Object1->velocity->set_x((obj2v - (obj1v * Object1->elasticity)));
			}
			else{
				HX_STACK_LINE(183)
				if ((!(obj2immovable))){
					HX_STACK_LINE(185)
					{
						HX_STACK_LINE(185)
						::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(185)
						_g->set_x((_g->x + overlap));
					}
					HX_STACK_LINE(186)
					Object2->velocity->set_x((obj1v - (obj2v * Object2->elasticity)));
				}
			}
		}
		HX_STACK_LINE(188)
		return true;
	}
	else{
		HX_STACK_LINE(192)
		return false;
	}
	HX_STACK_LINE(159)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateX,return )

bool FlxObject_obj::separateY( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","separateY",0xbd292e87,"flixel.FlxObject.separateY","flixel/FlxObject.hx",204,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(206)
	bool obj1immovable = Object1->immovable;		HX_STACK_VAR(obj1immovable,"obj1immovable");
	HX_STACK_LINE(207)
	bool obj2immovable = Object2->immovable;		HX_STACK_VAR(obj2immovable,"obj2immovable");
	HX_STACK_LINE(208)
	if (((bool(obj1immovable) && bool(obj2immovable)))){
		HX_STACK_LINE(210)
		return false;
	}
	HX_STACK_LINE(214)
	if (((Object1->collisionType == (int)3))){
		HX_STACK_LINE(216)
		return (hx::TCast< flixel::tile::FlxTilemap >::cast(Object1))->overlapsWithCallback(Object2,::flixel::FlxObject_obj::separateY_dyn(),null(),null());
	}
	HX_STACK_LINE(218)
	if (((Object2->collisionType == (int)3))){
		HX_STACK_LINE(220)
		return (hx::TCast< flixel::tile::FlxTilemap >::cast(Object2))->overlapsWithCallback(Object1,::flixel::FlxObject_obj::separateY_dyn(),true,null());
	}
	HX_STACK_LINE(224)
	Float overlap = (int)0;		HX_STACK_VAR(overlap,"overlap");
	HX_STACK_LINE(225)
	Float obj1delta = (Object1->y - Object1->last->y);		HX_STACK_VAR(obj1delta,"obj1delta");
	HX_STACK_LINE(226)
	Float obj2delta = (Object2->y - Object2->last->y);		HX_STACK_VAR(obj2delta,"obj2delta");
	HX_STACK_LINE(228)
	if (((obj1delta != obj2delta))){
		HX_STACK_LINE(231)
		Float obj1deltaAbs;		HX_STACK_VAR(obj1deltaAbs,"obj1deltaAbs");
		HX_STACK_LINE(231)
		if (((obj1delta > (int)0))){
			HX_STACK_LINE(231)
			obj1deltaAbs = obj1delta;
		}
		else{
			HX_STACK_LINE(231)
			obj1deltaAbs = -(obj1delta);
		}
		HX_STACK_LINE(232)
		Float obj2deltaAbs;		HX_STACK_VAR(obj2deltaAbs,"obj2deltaAbs");
		HX_STACK_LINE(232)
		if (((obj2delta > (int)0))){
			HX_STACK_LINE(232)
			obj2deltaAbs = obj2delta;
		}
		else{
			HX_STACK_LINE(232)
			obj2deltaAbs = -(obj2delta);
		}
		HX_STACK_LINE(234)
		::flixel::util::FlxRect obj1rect;		HX_STACK_VAR(obj1rect,"obj1rect");
		HX_STACK_LINE(234)
		{
			HX_STACK_LINE(234)
			::flixel::util::FlxRect _this = ::flixel::FlxObject_obj::_firstSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(234)
			Float Width = Object1->get_width();		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(234)
			Float _g = Object1->get_height();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(234)
			Float Height = (_g + obj1deltaAbs);		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(234)
			_this->x = Object1->x;
			HX_STACK_LINE(234)
			_this->y = (Object1->y - ((  (((obj1delta > (int)0))) ? Float(obj1delta) : Float((int)0) )));
			HX_STACK_LINE(234)
			_this->width = Width;
			HX_STACK_LINE(234)
			_this->height = Height;
			HX_STACK_LINE(234)
			obj1rect = _this;
		}
		HX_STACK_LINE(235)
		::flixel::util::FlxRect obj2rect;		HX_STACK_VAR(obj2rect,"obj2rect");
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			::flixel::util::FlxRect _this = ::flixel::FlxObject_obj::_secondSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(235)
			Float Width = Object2->get_width();		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(235)
			Float _g1 = Object2->get_height();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(235)
			Float Height = (_g1 + obj2deltaAbs);		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(235)
			_this->x = Object2->x;
			HX_STACK_LINE(235)
			_this->y = (Object2->y - ((  (((obj2delta > (int)0))) ? Float(obj2delta) : Float((int)0) )));
			HX_STACK_LINE(235)
			_this->width = Width;
			HX_STACK_LINE(235)
			_this->height = Height;
			HX_STACK_LINE(235)
			obj2rect = _this;
		}
		HX_STACK_LINE(237)
		if (((bool((bool((bool(((obj1rect->x + obj1rect->width) > obj2rect->x)) && bool((obj1rect->x < (obj2rect->x + obj2rect->width))))) && bool(((obj1rect->y + obj1rect->height) > obj2rect->y)))) && bool((obj1rect->y < (obj2rect->y + obj2rect->height)))))){
			HX_STACK_LINE(239)
			Float maxOverlap = ((obj1deltaAbs + obj2deltaAbs) + ::flixel::FlxObject_obj::SEPARATE_BIAS);		HX_STACK_VAR(maxOverlap,"maxOverlap");
			HX_STACK_LINE(242)
			if (((obj1delta > obj2delta))){
				HX_STACK_LINE(244)
				Float _g2 = Object1->get_height();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(244)
				Float _g3 = (Object1->y + _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(244)
				Float _g4 = (_g3 - Object2->y);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(244)
				overlap = _g4;
				HX_STACK_LINE(245)
				if (((bool((bool((overlap > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)4096))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)256))) == (int)0))))){
					HX_STACK_LINE(247)
					overlap = (int)0;
				}
				else{
					HX_STACK_LINE(251)
					hx::OrEq(Object1->touching,(int)4096);
					HX_STACK_LINE(252)
					hx::OrEq(Object2->touching,(int)256);
				}
			}
			else{
				HX_STACK_LINE(255)
				if (((obj1delta < obj2delta))){
					HX_STACK_LINE(257)
					Float _g5 = Object2->get_height();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(257)
					Float _g6 = (Object1->y - _g5);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(257)
					Float _g7 = (_g6 - Object2->y);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(257)
					overlap = _g7;
					HX_STACK_LINE(258)
					if (((bool((bool((-(overlap) > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)256))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)4096))) == (int)0))))){
						HX_STACK_LINE(260)
						overlap = (int)0;
					}
					else{
						HX_STACK_LINE(264)
						hx::OrEq(Object1->touching,(int)256);
						HX_STACK_LINE(265)
						hx::OrEq(Object2->touching,(int)4096);
					}
				}
			}
		}
	}
	HX_STACK_LINE(272)
	if (((overlap != (int)0))){
		HX_STACK_LINE(274)
		Float obj1v = Object1->velocity->y;		HX_STACK_VAR(obj1v,"obj1v");
		HX_STACK_LINE(275)
		Float obj2v = Object2->velocity->y;		HX_STACK_VAR(obj2v,"obj2v");
		HX_STACK_LINE(277)
		if (((bool(!(obj1immovable)) && bool(!(obj2immovable))))){
			HX_STACK_LINE(279)
			hx::MultEq(overlap,0.5);
			HX_STACK_LINE(280)
			Object1->set_y((Object1->y - overlap));
			HX_STACK_LINE(281)
			{
				HX_STACK_LINE(281)
				::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(281)
				_g->set_y((_g->y + overlap));
			}
			HX_STACK_LINE(283)
			Float _g8 = ::Math_obj::sqrt((Float(((obj2v * obj2v) * Object2->mass)) / Float(Object1->mass)));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(283)
			Float obj1velocity;		HX_STACK_VAR(obj1velocity,"obj1velocity");
			HX_STACK_LINE(283)
			obj1velocity = (_g8 * ((  (((obj2v > (int)0))) ? int((int)1) : int((int)-1) )));
			HX_STACK_LINE(284)
			Float _g9 = ::Math_obj::sqrt((Float(((obj1v * obj1v) * Object1->mass)) / Float(Object2->mass)));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(284)
			Float obj2velocity;		HX_STACK_VAR(obj2velocity,"obj2velocity");
			HX_STACK_LINE(284)
			obj2velocity = (_g9 * ((  (((obj1v > (int)0))) ? int((int)1) : int((int)-1) )));
			HX_STACK_LINE(285)
			Float average = (((obj1velocity + obj2velocity)) * 0.5);		HX_STACK_VAR(average,"average");
			HX_STACK_LINE(286)
			hx::SubEq(obj1velocity,average);
			HX_STACK_LINE(287)
			hx::SubEq(obj2velocity,average);
			HX_STACK_LINE(288)
			Object1->velocity->set_y((average + (obj1velocity * Object1->elasticity)));
			HX_STACK_LINE(289)
			Object2->velocity->set_y((average + (obj2velocity * Object2->elasticity)));
		}
		else{
			HX_STACK_LINE(291)
			if ((!(obj1immovable))){
				HX_STACK_LINE(293)
				Object1->set_y((Object1->y - overlap));
				HX_STACK_LINE(294)
				Object1->velocity->set_y((obj2v - (obj1v * Object1->elasticity)));
				HX_STACK_LINE(296)
				if (((bool((bool((bool(Object1->collisonXDrag) && bool(Object2->active))) && bool(Object2->moves))) && bool((obj1delta > obj2delta))))){
					HX_STACK_LINE(298)
					::flixel::FlxObject _g = Object1;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(298)
					_g->set_x((_g->x + ((Object2->x - Object2->last->x))));
				}
			}
			else{
				HX_STACK_LINE(301)
				if ((!(obj2immovable))){
					HX_STACK_LINE(303)
					{
						HX_STACK_LINE(303)
						::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(303)
						_g->set_y((_g->y + overlap));
					}
					HX_STACK_LINE(304)
					Object2->velocity->set_y((obj1v - (obj2v * Object2->elasticity)));
					HX_STACK_LINE(306)
					if (((bool((bool((bool(Object2->collisonXDrag) && bool(Object1->active))) && bool(Object1->moves))) && bool((obj1delta < obj2delta))))){
						HX_STACK_LINE(308)
						::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(308)
						_g->set_x((_g->x + ((Object1->x - Object1->last->x))));
					}
				}
			}
		}
		HX_STACK_LINE(311)
		return true;
	}
	else{
		HX_STACK_LINE(315)
		return false;
	}
	HX_STACK_LINE(272)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateY,return )


FlxObject_obj::FlxObject_obj()
{
}

void FlxObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxObject);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(moves,"moves");
	HX_MARK_MEMBER_NAME(immovable,"immovable");
	HX_MARK_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(drag,"drag");
	HX_MARK_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_MARK_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_MARK_MEMBER_NAME(angularDrag,"angularDrag");
	HX_MARK_MEMBER_NAME(maxAngular,"maxAngular");
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(touching,"touching");
	HX_MARK_MEMBER_NAME(wasTouching,"wasTouching");
	HX_MARK_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_MARK_MEMBER_NAME(collisonXDrag,"collisonXDrag");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_cameras,"_cameras");
	HX_MARK_END_CLASS();
}

void FlxObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(moves,"moves");
	HX_VISIT_MEMBER_NAME(immovable,"immovable");
	HX_VISIT_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(drag,"drag");
	HX_VISIT_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(mass,"mass");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_VISIT_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_VISIT_MEMBER_NAME(angularDrag,"angularDrag");
	HX_VISIT_MEMBER_NAME(maxAngular,"maxAngular");
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(touching,"touching");
	HX_VISIT_MEMBER_NAME(wasTouching,"wasTouching");
	HX_VISIT_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_VISIT_MEMBER_NAME(collisonXDrag,"collisonXDrag");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_cameras,"_cameras");
}

Dynamic FlxObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { return drag; }
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		if (HX_FIELD_EQ(inName,"mass") ) { return mass; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"hurt") ) { return hurt_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"moves") ) { return moves; }
		if (HX_FIELD_EQ(inName,"solid") ) { return get_solid(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"camera") ) { return get_camera(); }
		if (HX_FIELD_EQ(inName,"health") ) { return health; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cameras") ) { return get_cameras(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"separate") ) { return separate_dyn(); }
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		if (HX_FIELD_EQ(inName,"touching") ) { return touching; }
		if (HX_FIELD_EQ(inName,"_cameras") ) { return _cameras; }
		if (HX_FIELD_EQ(inName,"initVars") ) { return initVars_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"separateX") ) { return separateX_dyn(); }
		if (HX_FIELD_EQ(inName,"separateY") ) { return separateY_dyn(); }
		if (HX_FIELD_EQ(inName,"immovable") ) { return immovable; }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_solid") ) { return get_solid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_solid") ) { return set_solid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_moves") ) { return set_moves_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { return elasticity; }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { return maxAngular; }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return overlapsAt_dyn(); }
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return isOnScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"isTouching") ) { return isTouching_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_camera") ) { return get_camera_dyn(); }
		if (HX_FIELD_EQ(inName,"set_camera") ) { return set_camera_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { return maxVelocity; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { return angularDrag; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { return wasTouching; }
		if (HX_FIELD_EQ(inName,"getScreenXY") ) { return getScreenXY_dyn(); }
		if (HX_FIELD_EQ(inName,"getMidpoint") ) { return getMidpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"justTouched") ) { return justTouched_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cameras") ) { return get_cameras_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cameras") ) { return set_cameras_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { return scrollFactor; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { return acceleration; }
		if (HX_FIELD_EQ(inName,"updateMotion") ) { return updateMotion_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { return SEPARATE_BIAS; }
		if (HX_FIELD_EQ(inName,"collisonXDrag") ) { return collisonXDrag; }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"inWorldBounds") ) { return inWorldBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set_immovable") ) { return set_immovable_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initMotionVars") ) { return initMotionVars_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { return angularVelocity; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { return allowCollisions; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"overlapsCallback") ) { return overlapsCallback_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return pixelPerfectRender; }
		if (HX_FIELD_EQ(inName,"overlapsAtCallback") ) { return overlapsAtCallback_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { return angularAcceleration; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { return _firstSeparateFlxRect; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { return _secondSeparateFlxRect; }
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return set_pixelPerfectRender_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { drag=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp) return set_width(inValue);width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp) return set_angle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moves") ) { if (inCallProp) return set_moves(inValue);moves=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"solid") ) { return set_solid(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp) return set_height(inValue);height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { return set_camera(inValue); }
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cameras") ) { return set_cameras(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touching") ) { touching=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cameras") ) { _cameras=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { if (inCallProp) return set_immovable(inValue);immovable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { maxAngular=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { maxVelocity=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { angularDrag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { wasTouching=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { scrollFactor=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { SEPARATE_BIAS=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"collisonXDrag") ) { collisonXDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { angularVelocity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { allowCollisions=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { if (inCallProp) return set_pixelPerfectRender(inValue);pixelPerfectRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { angularAcceleration=inValue.Cast< Float >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { _firstSeparateFlxRect=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { _secondSeparateFlxRect=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("camera"));
	outFields->push(HX_CSTRING("cameras"));
	outFields->push(HX_CSTRING("pixelPerfectRender"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("moves"));
	outFields->push(HX_CSTRING("immovable"));
	outFields->push(HX_CSTRING("solid"));
	outFields->push(HX_CSTRING("scrollFactor"));
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("acceleration"));
	outFields->push(HX_CSTRING("drag"));
	outFields->push(HX_CSTRING("maxVelocity"));
	outFields->push(HX_CSTRING("last"));
	outFields->push(HX_CSTRING("mass"));
	outFields->push(HX_CSTRING("elasticity"));
	outFields->push(HX_CSTRING("angularVelocity"));
	outFields->push(HX_CSTRING("angularAcceleration"));
	outFields->push(HX_CSTRING("angularDrag"));
	outFields->push(HX_CSTRING("maxAngular"));
	outFields->push(HX_CSTRING("health"));
	outFields->push(HX_CSTRING("touching"));
	outFields->push(HX_CSTRING("wasTouching"));
	outFields->push(HX_CSTRING("allowCollisions"));
	outFields->push(HX_CSTRING("collisonXDrag"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_cameras"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SEPARATE_BIAS"),
	HX_CSTRING("LEFT"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("UP"),
	HX_CSTRING("DOWN"),
	HX_CSTRING("NONE"),
	HX_CSTRING("CEILING"),
	HX_CSTRING("FLOOR"),
	HX_CSTRING("WALL"),
	HX_CSTRING("ANY"),
	HX_CSTRING("_firstSeparateFlxRect"),
	HX_CSTRING("_secondSeparateFlxRect"),
	HX_CSTRING("separate"),
	HX_CSTRING("separateX"),
	HX_CSTRING("separateY"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxObject_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,height),HX_CSTRING("height")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,pixelPerfectRender),HX_CSTRING("pixelPerfectRender")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angle),HX_CSTRING("angle")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,moves),HX_CSTRING("moves")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,immovable),HX_CSTRING("immovable")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxObject_obj,scrollFactor),HX_CSTRING("scrollFactor")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxObject_obj,velocity),HX_CSTRING("velocity")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxObject_obj,acceleration),HX_CSTRING("acceleration")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxObject_obj,drag),HX_CSTRING("drag")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxObject_obj,maxVelocity),HX_CSTRING("maxVelocity")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxObject_obj,last),HX_CSTRING("last")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,mass),HX_CSTRING("mass")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,elasticity),HX_CSTRING("elasticity")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angularVelocity),HX_CSTRING("angularVelocity")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angularAcceleration),HX_CSTRING("angularAcceleration")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angularDrag),HX_CSTRING("angularDrag")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,maxAngular),HX_CSTRING("maxAngular")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,health),HX_CSTRING("health")},
	{hx::fsInt,(int)offsetof(FlxObject_obj,touching),HX_CSTRING("touching")},
	{hx::fsInt,(int)offsetof(FlxObject_obj,wasTouching),HX_CSTRING("wasTouching")},
	{hx::fsInt,(int)offsetof(FlxObject_obj,allowCollisions),HX_CSTRING("allowCollisions")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,collisonXDrag),HX_CSTRING("collisonXDrag")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxObject_obj,_point),HX_CSTRING("_point")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxObject_obj,_cameras),HX_CSTRING("_cameras")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("pixelPerfectRender"),
	HX_CSTRING("angle"),
	HX_CSTRING("moves"),
	HX_CSTRING("immovable"),
	HX_CSTRING("scrollFactor"),
	HX_CSTRING("velocity"),
	HX_CSTRING("acceleration"),
	HX_CSTRING("drag"),
	HX_CSTRING("maxVelocity"),
	HX_CSTRING("last"),
	HX_CSTRING("mass"),
	HX_CSTRING("elasticity"),
	HX_CSTRING("angularVelocity"),
	HX_CSTRING("angularAcceleration"),
	HX_CSTRING("angularDrag"),
	HX_CSTRING("maxAngular"),
	HX_CSTRING("health"),
	HX_CSTRING("touching"),
	HX_CSTRING("wasTouching"),
	HX_CSTRING("allowCollisions"),
	HX_CSTRING("collisonXDrag"),
	HX_CSTRING("_point"),
	HX_CSTRING("_cameras"),
	HX_CSTRING("initVars"),
	HX_CSTRING("initMotionVars"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("updateMotion"),
	HX_CSTRING("draw"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("overlapsCallback"),
	HX_CSTRING("overlapsAt"),
	HX_CSTRING("overlapsAtCallback"),
	HX_CSTRING("overlapsPoint"),
	HX_CSTRING("inWorldBounds"),
	HX_CSTRING("getScreenXY"),
	HX_CSTRING("getMidpoint"),
	HX_CSTRING("reset"),
	HX_CSTRING("isOnScreen"),
	HX_CSTRING("isTouching"),
	HX_CSTRING("justTouched"),
	HX_CSTRING("hurt"),
	HX_CSTRING("setPosition"),
	HX_CSTRING("setSize"),
	HX_CSTRING("toString"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_y"),
	HX_CSTRING("set_width"),
	HX_CSTRING("set_height"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("get_solid"),
	HX_CSTRING("set_solid"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("set_moves"),
	HX_CSTRING("set_immovable"),
	HX_CSTRING("get_camera"),
	HX_CSTRING("set_camera"),
	HX_CSTRING("get_cameras"),
	HX_CSTRING("set_cameras"),
	HX_CSTRING("set_pixelPerfectRender"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_MARK_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_MARK_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_MARK_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_MARK_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_MARK_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

#endif

Class FlxObject_obj::__mClass;

void FlxObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxObject"), hx::TCanCast< FlxObject_obj> ,sStaticFields,sMemberFields,
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

void FlxObject_obj::__boot()
{
	SEPARATE_BIAS= (int)4;
	LEFT= (int)1;
	RIGHT= (int)16;
	UP= (int)256;
	DOWN= (int)4096;
	NONE= (int)0;
	CEILING= (int)256;
	FLOOR= (int)4096;
	WALL= (int)17;
	ANY= (int)4369;
struct _Function_0_1{
	inline static ::flixel::util::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",66,0xf0fe0d80)
		{
			HX_STACK_LINE(66)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(66)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(66)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(66)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(66)
			::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(66)
			{
				HX_STACK_LINE(66)
				::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(66)
				_this->x = X;
				HX_STACK_LINE(66)
				_this->y = Y;
				HX_STACK_LINE(66)
				_this->width = Width;
				HX_STACK_LINE(66)
				_this->height = Height;
				HX_STACK_LINE(66)
				rect = _this;
			}
			HX_STACK_LINE(66)
			rect->_inPool = false;
			HX_STACK_LINE(66)
			return rect;
		}
		return null();
	}
};
	_firstSeparateFlxRect= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::flixel::util::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",67,0xf0fe0d80)
		{
			HX_STACK_LINE(67)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(67)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(67)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(67)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(67)
			::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(67)
				_this->x = X;
				HX_STACK_LINE(67)
				_this->y = Y;
				HX_STACK_LINE(67)
				_this->width = Width;
				HX_STACK_LINE(67)
				_this->height = Height;
				HX_STACK_LINE(67)
				rect = _this;
			}
			HX_STACK_LINE(67)
			rect->_inPool = false;
			HX_STACK_LINE(67)
			return rect;
		}
		return null();
	}
};
	_secondSeparateFlxRect= _Function_0_2::Block();
}

} // end namespace flixel
