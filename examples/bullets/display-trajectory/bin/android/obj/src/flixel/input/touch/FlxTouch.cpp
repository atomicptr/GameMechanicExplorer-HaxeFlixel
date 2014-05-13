#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace input{
namespace touch{

Void FlxTouch_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_PointID)
{
HX_STACK_FRAME("flixel.input.touch.FlxTouch","new",0xa47319c4,"flixel.input.touch.FlxTouch.new","flixel/input/touch/FlxTouch.hx",19,0x7bf286c9)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_PointID,"PointID")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int PointID = __o_PointID.Default(0);
{
	HX_STACK_LINE(37)
	this->_last = (int)0;
	HX_STACK_LINE(36)
	this->_current = (int)0;
	HX_STACK_LINE(23)
	this->screenY = (int)0;
	HX_STACK_LINE(22)
	this->screenX = (int)0;
	HX_STACK_LINE(165)
	super::__construct(null(),null());
	HX_STACK_LINE(166)
	::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(166)
	{
		HX_STACK_LINE(166)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(166)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(166)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(166)
		point->_inPool = false;
		HX_STACK_LINE(166)
		_g = point;
	}
	HX_STACK_LINE(166)
	this->_point = _g;
	HX_STACK_LINE(167)
	::flixel::util::FlxPoint _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(167)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(167)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(167)
		point->_inPool = false;
		HX_STACK_LINE(167)
		_g1 = point;
	}
	HX_STACK_LINE(167)
	this->_globalScreenPosition = _g1;
	HX_STACK_LINE(168)
	::flixel::util::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(168)
	{
		HX_STACK_LINE(168)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(168)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(168)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(168)
		point->_inPool = false;
		HX_STACK_LINE(168)
		_g2 = point;
	}
	HX_STACK_LINE(168)
	this->_justPressedPosition = _g2;
	HX_STACK_LINE(170)
	::flash::geom::Point _g3 = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(170)
	this->_flashPoint = _g3;
	HX_STACK_LINE(171)
	this->updatePosition(X,Y);
	HX_STACK_LINE(172)
	this->touchPointID = PointID;
}
;
	return null();
}

//FlxTouch_obj::~FlxTouch_obj() { }

Dynamic FlxTouch_obj::__CreateEmpty() { return  new FlxTouch_obj; }
hx::ObjectPtr< FlxTouch_obj > FlxTouch_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_PointID)
{  hx::ObjectPtr< FlxTouch_obj > result = new FlxTouch_obj();
	result->__construct(__o_X,__o_Y,__o_PointID);
	return result;}

Dynamic FlxTouch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTouch_obj > result = new FlxTouch_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *FlxTouch_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void FlxTouch_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouch","destroy",0x988ff85e,"flixel.input.touch.FlxTouch.destroy","flixel/input/touch/FlxTouch.hx",49,0x7bf286c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		::flixel::util::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->_point);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		this->_point = _g;
		HX_STACK_LINE(51)
		::flixel::util::FlxPoint _g1 = ::flixel::util::FlxDestroyUtil_obj::put(this->_globalScreenPosition);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(51)
		this->_globalScreenPosition = _g1;
		HX_STACK_LINE(52)
		::flixel::util::FlxPoint _g2 = ::flixel::util::FlxDestroyUtil_obj::put(this->_justPressedPosition);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(52)
		this->_justPressedPosition = _g2;
		HX_STACK_LINE(54)
		this->_point = null();
		HX_STACK_LINE(55)
		this->_globalScreenPosition = null();
		HX_STACK_LINE(56)
		this->_flashPoint = null();
		HX_STACK_LINE(57)
		this->_justPressedPosition = null();
		HX_STACK_LINE(59)
		this->super::destroy();
	}
return null();
}


::flixel::util::FlxPoint FlxTouch_obj::getWorldPosition( ::flixel::FlxCamera Camera,::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","getWorldPosition",0x5306e6c1,"flixel.input.touch.FlxTouch.getWorldPosition","flixel/input/touch/FlxTouch.hx",71,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(72)
	if (((Camera == null()))){
		HX_STACK_LINE(74)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(76)
	if (((point == null()))){
		HX_STACK_LINE(78)
		::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(78)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(78)
			::flixel::util::FlxPoint point1 = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(78)
			point1->_inPool = false;
			HX_STACK_LINE(78)
			_g = point1;
		}
		HX_STACK_LINE(78)
		point = _g;
	}
	HX_STACK_LINE(80)
	this->getScreenPosition(Camera,this->_point);
	HX_STACK_LINE(81)
	point->set_x((this->_point->x + Camera->scroll->x));
	HX_STACK_LINE(82)
	point->set_y((this->_point->y + Camera->scroll->y));
	HX_STACK_LINE(83)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTouch_obj,getWorldPosition,return )

::flixel::util::FlxPoint FlxTouch_obj::getScreenPosition( ::flixel::FlxCamera Camera,::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","getScreenPosition",0x13c003cf,"flixel.input.touch.FlxTouch.getScreenPosition","flixel/input/touch/FlxTouch.hx",95,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(96)
	if (((Camera == null()))){
		HX_STACK_LINE(98)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(100)
	if (((point == null()))){
		HX_STACK_LINE(102)
		::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(102)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(102)
			::flixel::util::FlxPoint point1 = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(102)
			point1->_inPool = false;
			HX_STACK_LINE(102)
			_g = point1;
		}
		HX_STACK_LINE(102)
		point = _g;
	}
	HX_STACK_LINE(104)
	point->set_x((Float(((this->_globalScreenPosition->x - Camera->x))) / Float(Camera->zoom)));
	HX_STACK_LINE(105)
	point->set_y((Float(((this->_globalScreenPosition->y - Camera->y))) / Float(Camera->zoom)));
	HX_STACK_LINE(106)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTouch_obj,getScreenPosition,return )

bool FlxTouch_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","overlaps",0x59b2ff28,"flixel.input.touch.FlxTouch.overlaps","flixel/input/touch/FlxTouch.hx",119,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(120)
	if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::flixel::group::FlxTypedGroup >()))){
		HX_STACK_LINE(122)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(123)
		bool results = false;		HX_STACK_VAR(results,"results");
		HX_STACK_LINE(124)
		::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(125)
		::flixel::group::FlxTypedGroup grp = ObjectOrGroup;		HX_STACK_VAR(grp,"grp");
		HX_STACK_LINE(126)
		Array< ::Dynamic > members = grp->members;		HX_STACK_VAR(members,"members");
		HX_STACK_LINE(127)
		while((true)){
			HX_STACK_LINE(127)
			if ((!(((i < grp->length))))){
				HX_STACK_LINE(127)
				break;
			}
			HX_STACK_LINE(129)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(129)
			::flixel::FlxBasic _g1 = members->__get(_g).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(129)
			basic = _g1;
			HX_STACK_LINE(130)
			if (((  (((bool((basic != null())) && bool(basic->exists)))) ? bool(this->overlaps(basic,Camera)) : bool(false) ))){
				HX_STACK_LINE(132)
				results = true;
				HX_STACK_LINE(133)
				break;
			}
		}
		HX_STACK_LINE(136)
		return results;
	}
	HX_STACK_LINE(138)
	return (hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup))->overlapsPoint(hx::ObjectPtr<OBJ_>(this),true,Camera);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTouch_obj,overlaps,return )

Void FlxTouch_obj::reset( Float X,Float Y,int PointID){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouch","reset",0x4857b433,"flixel.input.touch.FlxTouch.reset","flixel/input/touch/FlxTouch.hx",145,0x7bf286c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_ARG(PointID,"PointID")
		HX_STACK_LINE(146)
		this->updatePosition(X,Y);
		HX_STACK_LINE(147)
		this->touchPointID = PointID;
		HX_STACK_LINE(148)
		this->_current = (int)0;
		HX_STACK_LINE(149)
		this->_last = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTouch_obj,reset,(void))

Void FlxTouch_obj::deactivate( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouch","deactivate",0xa401c750,"flixel.input.touch.FlxTouch.deactivate","flixel/input/touch/FlxTouch.hx",153,0x7bf286c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(154)
		this->_current = (int)0;
		HX_STACK_LINE(155)
		this->_last = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,deactivate,(void))

Void FlxTouch_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouch","update",0x82f33325,"flixel.input.touch.FlxTouch.update","flixel/input/touch/FlxTouch.hx",179,0x7bf286c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(180)
		if (((bool((this->_last == (int)-1)) && bool((this->_current == (int)-1))))){
			HX_STACK_LINE(182)
			this->_current = (int)0;
		}
		else{
			HX_STACK_LINE(184)
			if (((bool((this->_last == (int)2)) && bool((this->_current == (int)2))))){
				HX_STACK_LINE(186)
				this->_current = (int)1;
			}
		}
		HX_STACK_LINE(188)
		this->_last = this->_current;
		HX_STACK_LINE(190)
		if (((this->_current == (int)2))){
			HX_STACK_LINE(192)
			this->_justPressedPosition->set(this->screenX,this->screenY);
			HX_STACK_LINE(193)
			this->_justPressedTimeInTicks = ::flixel::FlxG_obj::game->ticks;
		}
		else{
			HX_STACK_LINE(195)
			if (((this->_current == (int)-1))){
				HX_STACK_LINE(197)
				::flixel::util::FlxPoint _g = this->getScreenPosition(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(197)
				::flixel::input::FlxSwipe _g1 = ::flixel::input::FlxSwipe_obj::__new(this->touchPointID,this->_justPressedPosition,_g,this->_justPressedTimeInTicks);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(197)
				::flixel::FlxG_obj::swipes->push(_g1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,update,(void))

Void FlxTouch_obj::updateCursor( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouch","updateCursor",0xf7f29fdb,"flixel.input.touch.FlxTouch.updateCursor","flixel/input/touch/FlxTouch.hx",205,0x7bf286c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(208)
		::flixel::FlxCamera camera = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(209)
		int _g = ::Math_obj::floor((Float(((this->_globalScreenPosition->x - camera->x))) / Float(camera->zoom)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(209)
		this->screenX = _g;
		HX_STACK_LINE(210)
		int _g1 = ::Math_obj::floor((Float(((this->_globalScreenPosition->y - camera->y))) / Float(camera->zoom)));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(210)
		this->screenY = _g1;
		HX_STACK_LINE(211)
		this->set_x((this->screenX + camera->scroll->x));
		HX_STACK_LINE(212)
		this->set_y((this->screenY + camera->scroll->y));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,updateCursor,(void))

Void FlxTouch_obj::updatePosition( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouch","updatePosition",0x676ebcee,"flixel.input.touch.FlxTouch.updatePosition","flixel/input/touch/FlxTouch.hx",222,0x7bf286c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(223)
		this->_flashPoint->x = X;
		HX_STACK_LINE(224)
		this->_flashPoint->y = Y;
		HX_STACK_LINE(225)
		::flash::geom::Point _g = ::flixel::FlxG_obj::game->globalToLocal(this->_flashPoint);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(225)
		this->_flashPoint = _g;
		HX_STACK_LINE(227)
		this->_globalScreenPosition->set_x(this->_flashPoint->x);
		HX_STACK_LINE(228)
		this->_globalScreenPosition->set_y(this->_flashPoint->y);
		HX_STACK_LINE(229)
		this->updateCursor();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTouch_obj,updatePosition,(void))

bool FlxTouch_obj::get_pressed( ){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","get_pressed",0x583e801d,"flixel.input.touch.FlxTouch.get_pressed","flixel/input/touch/FlxTouch.hx",232,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(232)
	return (this->_current > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_pressed,return )

bool FlxTouch_obj::get_justPressed( ){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","get_justPressed",0xad2294d1,"flixel.input.touch.FlxTouch.get_justPressed","flixel/input/touch/FlxTouch.hx",233,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(233)
	return (this->_current == (int)2);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_justPressed,return )

bool FlxTouch_obj::get_justReleased( ){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","get_justReleased",0xd7f5afae,"flixel.input.touch.FlxTouch.get_justReleased","flixel/input/touch/FlxTouch.hx",234,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(234)
	return (this->_current == (int)-1);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_justReleased,return )

bool FlxTouch_obj::get_isActive( ){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","get_isActive",0xdd0ffb75,"flixel.input.touch.FlxTouch.get_isActive","flixel/input/touch/FlxTouch.hx",235,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(235)
	return (this->_current != (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_isActive,return )


FlxTouch_obj::FlxTouch_obj()
{
}

void FlxTouch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTouch);
	HX_MARK_MEMBER_NAME(screenX,"screenX");
	HX_MARK_MEMBER_NAME(screenY,"screenY");
	HX_MARK_MEMBER_NAME(touchPointID,"touchPointID");
	HX_MARK_MEMBER_NAME(_current,"_current");
	HX_MARK_MEMBER_NAME(_last,"_last");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_globalScreenPosition,"_globalScreenPosition");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_justPressedPosition,"_justPressedPosition");
	HX_MARK_MEMBER_NAME(_justPressedTimeInTicks,"_justPressedTimeInTicks");
	HX_MARK_END_CLASS();
}

void FlxTouch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(screenX,"screenX");
	HX_VISIT_MEMBER_NAME(screenY,"screenY");
	HX_VISIT_MEMBER_NAME(touchPointID,"touchPointID");
	HX_VISIT_MEMBER_NAME(_current,"_current");
	HX_VISIT_MEMBER_NAME(_last,"_last");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_globalScreenPosition,"_globalScreenPosition");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_justPressedPosition,"_justPressedPosition");
	HX_VISIT_MEMBER_NAME(_justPressedTimeInTicks,"_justPressedTimeInTicks");
}

Dynamic FlxTouch_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_last") ) { return _last; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { return screenX; }
		if (HX_FIELD_EQ(inName,"screenY") ) { return screenY; }
		if (HX_FIELD_EQ(inName,"pressed") ) { return get_pressed(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isActive") ) { return get_isActive(); }
		if (HX_FIELD_EQ(inName,"_current") ) { return _current; }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return get_justPressed(); }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return get_pressed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { return touchPointID; }
		if (HX_FIELD_EQ(inName,"justReleased") ) { return get_justReleased(); }
		if (HX_FIELD_EQ(inName,"updateCursor") ) { return updateCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_isActive") ) { return get_isActive_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updatePosition") ) { return updatePosition_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return get_justPressed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getWorldPosition") ) { return getWorldPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return get_justReleased_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return getScreenPosition_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_justPressedPosition") ) { return _justPressedPosition; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_globalScreenPosition") ) { return _globalScreenPosition; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_justPressedTimeInTicks") ) { return _justPressedTimeInTicks; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTouch_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_last") ) { _last=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { screenX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenY") ) { screenY=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { _current=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { touchPointID=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_justPressedPosition") ) { _justPressedPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_globalScreenPosition") ) { _globalScreenPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_justPressedTimeInTicks") ) { _justPressedTimeInTicks=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTouch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("screenX"));
	outFields->push(HX_CSTRING("screenY"));
	outFields->push(HX_CSTRING("touchPointID"));
	outFields->push(HX_CSTRING("pressed"));
	outFields->push(HX_CSTRING("justPressed"));
	outFields->push(HX_CSTRING("justReleased"));
	outFields->push(HX_CSTRING("isActive"));
	outFields->push(HX_CSTRING("_current"));
	outFields->push(HX_CSTRING("_last"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_globalScreenPosition"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_justPressedPosition"));
	outFields->push(HX_CSTRING("_justPressedTimeInTicks"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxTouch_obj,screenX),HX_CSTRING("screenX")},
	{hx::fsInt,(int)offsetof(FlxTouch_obj,screenY),HX_CSTRING("screenY")},
	{hx::fsInt,(int)offsetof(FlxTouch_obj,touchPointID),HX_CSTRING("touchPointID")},
	{hx::fsInt,(int)offsetof(FlxTouch_obj,_current),HX_CSTRING("_current")},
	{hx::fsInt,(int)offsetof(FlxTouch_obj,_last),HX_CSTRING("_last")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxTouch_obj,_point),HX_CSTRING("_point")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxTouch_obj,_globalScreenPosition),HX_CSTRING("_globalScreenPosition")},
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(FlxTouch_obj,_flashPoint),HX_CSTRING("_flashPoint")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxTouch_obj,_justPressedPosition),HX_CSTRING("_justPressedPosition")},
	{hx::fsFloat,(int)offsetof(FlxTouch_obj,_justPressedTimeInTicks),HX_CSTRING("_justPressedTimeInTicks")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("screenX"),
	HX_CSTRING("screenY"),
	HX_CSTRING("touchPointID"),
	HX_CSTRING("_current"),
	HX_CSTRING("_last"),
	HX_CSTRING("_point"),
	HX_CSTRING("_globalScreenPosition"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_justPressedPosition"),
	HX_CSTRING("_justPressedTimeInTicks"),
	HX_CSTRING("destroy"),
	HX_CSTRING("getWorldPosition"),
	HX_CSTRING("getScreenPosition"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("reset"),
	HX_CSTRING("deactivate"),
	HX_CSTRING("update"),
	HX_CSTRING("updateCursor"),
	HX_CSTRING("updatePosition"),
	HX_CSTRING("get_pressed"),
	HX_CSTRING("get_justPressed"),
	HX_CSTRING("get_justReleased"),
	HX_CSTRING("get_isActive"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTouch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTouch_obj::__mClass,"__mClass");
};

#endif

Class FlxTouch_obj::__mClass;

void FlxTouch_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.touch.FlxTouch"), hx::TCanCast< FlxTouch_obj> ,sStaticFields,sMemberFields,
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

void FlxTouch_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
} // end namespace touch
