#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
#ifndef INCLUDED_flixel_plugin_PathManager
#include <flixel/plugin/PathManager.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
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
namespace util{

Void FlxPath_obj::__construct(::flixel::FlxObject Object,Array< ::Dynamic > Nodes,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_Mode,hx::Null< bool >  __o_AutoRotate)
{
HX_STACK_FRAME("flixel.util.FlxPath","new",0x6e30af6f,"flixel.util.FlxPath.new","flixel/util/FlxPath.hx",19,0x22aae741)
HX_STACK_THIS(this)
HX_STACK_ARG(Object,"Object")
HX_STACK_ARG(Nodes,"Nodes")
HX_STACK_ARG(__o_Speed,"Speed")
HX_STACK_ARG(__o_Mode,"Mode")
HX_STACK_ARG(__o_AutoRotate,"AutoRotate")
Float Speed = __o_Speed.Default(100);
int Mode = __o_Mode.Default(0);
bool AutoRotate = __o_AutoRotate.Default(false);
{
	HX_STACK_LINE(127)
	this->_inManager = false;
	HX_STACK_LINE(125)
	this->_autoRotate = false;
	HX_STACK_LINE(121)
	this->_inc = (int)1;
	HX_STACK_LINE(113)
	this->_nodeIndex = (int)0;
	HX_STACK_LINE(108)
	this->finished = false;
	HX_STACK_LINE(86)
	this->active = true;
	HX_STACK_LINE(81)
	this->autoCenter = true;
	HX_STACK_LINE(77)
	this->angle = (int)0;
	HX_STACK_LINE(73)
	this->speed = (int)0;
	HX_STACK_LINE(134)
	if (((Object != null()))){
		HX_STACK_LINE(136)
		this->start(Object,Nodes,Speed,Mode,AutoRotate);
	}
}
;
	return null();
}

//FlxPath_obj::~FlxPath_obj() { }

Dynamic FlxPath_obj::__CreateEmpty() { return  new FlxPath_obj; }
hx::ObjectPtr< FlxPath_obj > FlxPath_obj::__new(::flixel::FlxObject Object,Array< ::Dynamic > Nodes,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_Mode,hx::Null< bool >  __o_AutoRotate)
{  hx::ObjectPtr< FlxPath_obj > result = new FlxPath_obj();
	result->__construct(Object,Nodes,__o_Speed,__o_Mode,__o_AutoRotate);
	return result;}

Dynamic FlxPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPath_obj > result = new FlxPath_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

hx::Object *FlxPath_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

::flixel::util::FlxPath FlxPath_obj::reset( ){
	HX_STACK_FRAME("flixel.util.FlxPath","reset",0x2ce64a9e,"flixel.util.FlxPath.reset","flixel/util/FlxPath.hx",141,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(148)
	this->autoCenter = true;
	HX_STACK_LINE(149)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,reset,return )

::flixel::util::FlxPath FlxPath_obj::start( ::flixel::FlxObject Object,Array< ::Dynamic > Nodes,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_Mode,hx::Null< bool >  __o_AutoRotate){
Float Speed = __o_Speed.Default(100);
int Mode = __o_Mode.Default(0);
bool AutoRotate = __o_AutoRotate.Default(false);
	HX_STACK_FRAME("flixel.util.FlxPath","start",0xca297531,"flixel.util.FlxPath.start","flixel/util/FlxPath.hx",153,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Nodes,"Nodes")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(Mode,"Mode")
	HX_STACK_ARG(AutoRotate,"AutoRotate")
{
		HX_STACK_LINE(154)
		this->object = Object;
		HX_STACK_LINE(155)
		this->nodes = Nodes;
		HX_STACK_LINE(156)
		Float _g = ::Math_obj::abs(Speed);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(156)
		this->speed = _g;
		HX_STACK_LINE(157)
		this->_mode = Mode;
		HX_STACK_LINE(158)
		this->_autoRotate = AutoRotate;
		HX_STACK_LINE(159)
		this->restart();
		HX_STACK_LINE(160)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxPath_obj,start,return )

::flixel::util::FlxPath FlxPath_obj::restart( ){
	HX_STACK_FRAME("flixel.util.FlxPath","restart",0xf4e0da5e,"flixel.util.FlxPath.restart","flixel/util/FlxPath.hx",164,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	if (((bool((::flixel::util::FlxPath_obj::manager != null())) && bool(!(this->_inManager))))){
		HX_STACK_LINE(167)
		::flixel::util::FlxPath_obj::manager->add(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(168)
		this->_inManager = true;
	}
	HX_STACK_LINE(171)
	this->finished = false;
	HX_STACK_LINE(172)
	this->active = true;
	HX_STACK_LINE(173)
	if (((this->nodes->length <= (int)0))){
		HX_STACK_LINE(175)
		this->active = false;
	}
	HX_STACK_LINE(179)
	if (((bool((this->_mode == (int)1)) || bool((this->_mode == (int)256))))){
		HX_STACK_LINE(181)
		this->_nodeIndex = (this->nodes->length - (int)1);
		HX_STACK_LINE(182)
		this->_inc = (int)-1;
	}
	else{
		HX_STACK_LINE(186)
		this->_nodeIndex = (int)0;
		HX_STACK_LINE(187)
		this->_inc = (int)1;
	}
	HX_STACK_LINE(190)
	this->object->set_immovable(true);
	HX_STACK_LINE(191)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,restart,return )

Void FlxPath_obj::setNode( int NodeIndex){
{
		HX_STACK_FRAME("flixel.util.FlxPath","setNode",0x98c95d53,"flixel.util.FlxPath.setNode","flixel/util/FlxPath.hx",200,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(NodeIndex,"NodeIndex")
		HX_STACK_LINE(201)
		if (((NodeIndex < (int)0))){
			HX_STACK_LINE(202)
			NodeIndex = (int)0;
		}
		else{
			HX_STACK_LINE(203)
			if (((NodeIndex > (this->nodes->length - (int)1)))){
				HX_STACK_LINE(204)
				NodeIndex = (this->nodes->length - (int)1);
			}
		}
		HX_STACK_LINE(206)
		this->_nodeIndex = NodeIndex;
		HX_STACK_LINE(207)
		this->advancePath(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,setNode,(void))

Void FlxPath_obj::update( ){
{
		HX_STACK_FRAME("flixel.util.FlxPath","update",0x9b283a5a,"flixel.util.FlxPath.update","flixel/util/FlxPath.hx",217,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(219)
		::flixel::util::FlxPath_obj::_point->set_x(this->object->x);
		HX_STACK_LINE(220)
		::flixel::util::FlxPath_obj::_point->set_y(this->object->y);
		HX_STACK_LINE(221)
		if ((this->autoCenter)){
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				::flixel::util::FlxPoint _g = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(223)
				Float _g1 = this->object->get_width();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(223)
				Float _g11 = (_g1 * 0.5);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(223)
				Float _g2 = (_g->x + _g11);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(223)
				_g->set_x(_g2);
			}
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				::flixel::util::FlxPoint _g = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(224)
				Float _g3 = this->object->get_height();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(224)
				Float _g4 = (_g3 * 0.5);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(224)
				Float _g5 = (_g->y + _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(224)
				_g->set_y(_g5);
			}
		}
		HX_STACK_LINE(226)
		::flixel::util::FlxPoint node = this->nodes->__get(this->_nodeIndex).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(227)
		Float deltaX = (node->x - ::flixel::util::FlxPath_obj::_point->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(228)
		Float deltaY = (node->y - ::flixel::util::FlxPath_obj::_point->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(230)
		bool horizontalOnly = (((int(this->_mode) & int((int)65536))) > (int)0);		HX_STACK_VAR(horizontalOnly,"horizontalOnly");
		HX_STACK_LINE(231)
		bool verticalOnly = (((int(this->_mode) & int((int)1048576))) > (int)0);		HX_STACK_VAR(verticalOnly,"verticalOnly");
		HX_STACK_LINE(233)
		if ((horizontalOnly)){
			HX_STACK_LINE(235)
			if (((((  (((deltaX > (int)0))) ? Float(deltaX) : Float(-(deltaX)) )) < (this->speed * ::flixel::FlxG_obj::elapsed)))){
				HX_STACK_LINE(237)
				::flixel::util::FlxPoint _g6 = this->advancePath(null());		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(237)
				node = _g6;
			}
		}
		else{
			HX_STACK_LINE(240)
			if ((verticalOnly)){
				HX_STACK_LINE(242)
				if (((((  (((deltaY > (int)0))) ? Float(deltaY) : Float(-(deltaY)) )) < (this->speed * ::flixel::FlxG_obj::elapsed)))){
					HX_STACK_LINE(244)
					::flixel::util::FlxPoint _g7 = this->advancePath(null());		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(244)
					node = _g7;
				}
			}
			else{
				HX_STACK_LINE(249)
				Float _g8 = ::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY)));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(249)
				if (((_g8 < (this->speed * ::flixel::FlxG_obj::elapsed)))){
					HX_STACK_LINE(251)
					::flixel::util::FlxPoint _g9 = this->advancePath(null());		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(251)
					node = _g9;
				}
			}
		}
		HX_STACK_LINE(256)
		if (((this->speed != (int)0))){
			HX_STACK_LINE(259)
			::flixel::util::FlxPath_obj::_point->set_x(this->object->x);
			HX_STACK_LINE(260)
			::flixel::util::FlxPath_obj::_point->set_y(this->object->y);
			HX_STACK_LINE(262)
			if ((this->autoCenter)){
				HX_STACK_LINE(264)
				{
					HX_STACK_LINE(264)
					::flixel::util::FlxPoint _g = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(264)
					Float _g10 = this->object->get_width();		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(264)
					Float _g11 = (_g10 * 0.5);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(264)
					Float _g12 = (_g->x + _g11);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(264)
					_g->set_x(_g12);
				}
				HX_STACK_LINE(265)
				{
					HX_STACK_LINE(265)
					::flixel::util::FlxPoint _g = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(265)
					Float _g13 = this->object->get_height();		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(265)
					Float _g14 = (_g13 * 0.5);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(265)
					Float _g15 = (_g->y + _g14);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(265)
					_g->set_y(_g15);
				}
			}
			HX_STACK_LINE(268)
			if (((bool(horizontalOnly) || bool((::flixel::util::FlxPath_obj::_point->y == node->y))))){
				HX_STACK_LINE(270)
				this->object->velocity->set_x((  (((::flixel::util::FlxPath_obj::_point->x < node->x))) ? Float(this->speed) : Float(-(this->speed)) ));
				HX_STACK_LINE(271)
				if (((this->object->velocity->x < (int)0))){
					HX_STACK_LINE(273)
					this->angle = (int)-90;
				}
				else{
					HX_STACK_LINE(277)
					this->angle = (int)90;
				}
				HX_STACK_LINE(279)
				if ((!(horizontalOnly))){
					HX_STACK_LINE(281)
					this->object->velocity->set_y((int)0);
				}
			}
			else{
				HX_STACK_LINE(284)
				if (((bool(verticalOnly) || bool((::flixel::util::FlxPath_obj::_point->x == node->x))))){
					HX_STACK_LINE(286)
					this->object->velocity->set_y((  (((::flixel::util::FlxPath_obj::_point->y < node->y))) ? Float(this->speed) : Float(-(this->speed)) ));
					HX_STACK_LINE(287)
					if (((this->object->velocity->y < (int)0))){
						HX_STACK_LINE(289)
						this->angle = (int)0;
					}
					else{
						HX_STACK_LINE(293)
						this->angle = (int)180;
					}
					HX_STACK_LINE(295)
					if ((!(verticalOnly))){
						HX_STACK_LINE(297)
						this->object->velocity->set_x((int)0);
					}
				}
				else{
					HX_STACK_LINE(302)
					this->object->velocity->set_x((  (((::flixel::util::FlxPath_obj::_point->x < node->x))) ? Float(this->speed) : Float(-(this->speed)) ));
					HX_STACK_LINE(303)
					this->object->velocity->set_y((  (((::flixel::util::FlxPath_obj::_point->y < node->y))) ? Float(this->speed) : Float(-(this->speed)) ));
					HX_STACK_LINE(304)
					Float _g16;		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(304)
					{
						HX_STACK_LINE(304)
						::flixel::util::FlxPoint Point1 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(Point1,"Point1");
						HX_STACK_LINE(304)
						Float x = (node->x - Point1->x);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(304)
						Float y = (node->y - Point1->y);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(304)
						Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
						HX_STACK_LINE(304)
						if (((bool((x != (int)0)) || bool((y != (int)0))))){
							HX_STACK_LINE(304)
							Float c1 = (::Math_obj::PI * 0.25);		HX_STACK_VAR(c1,"c1");
							HX_STACK_LINE(304)
							Float c2 = ((int)3 * c1);		HX_STACK_VAR(c2,"c2");
							HX_STACK_LINE(304)
							Float ay;		HX_STACK_VAR(ay,"ay");
							HX_STACK_LINE(304)
							if (((y < (int)0))){
								HX_STACK_LINE(304)
								ay = -(y);
							}
							else{
								HX_STACK_LINE(304)
								ay = y;
							}
							HX_STACK_LINE(304)
							if (((x >= (int)0))){
								HX_STACK_LINE(304)
								angle = (c1 - (c1 * ((Float(((x - ay))) / Float(((x + ay)))))));
							}
							else{
								HX_STACK_LINE(304)
								angle = (c2 - (c1 * ((Float(((x + ay))) / Float(((ay - x)))))));
							}
							HX_STACK_LINE(304)
							angle = (((  (((y < (int)0))) ? Float(-(angle)) : Float(angle) )) * ((Float((int)180) / Float(::Math_obj::PI))));
							HX_STACK_LINE(304)
							if (((angle > (int)90))){
								HX_STACK_LINE(304)
								angle = (angle - (int)270);
							}
							else{
								HX_STACK_LINE(304)
								hx::AddEq(angle,(int)90);
							}
						}
						HX_STACK_LINE(304)
						if ((Point1->_weak)){
							HX_STACK_LINE(304)
							::flixel::util::FlxPoint_obj::_pool->put(Point1);
						}
						HX_STACK_LINE(304)
						if ((node->_weak)){
							HX_STACK_LINE(304)
							::flixel::util::FlxPoint_obj::_pool->put(node);
						}
						HX_STACK_LINE(304)
						_g16 = angle;
					}
					HX_STACK_LINE(304)
					this->angle = _g16;
					HX_STACK_LINE(305)
					{
						HX_STACK_LINE(305)
						::flixel::util::FlxPoint point = this->object->velocity;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(305)
						Float sin = (int)0;		HX_STACK_VAR(sin,"sin");
						HX_STACK_LINE(305)
						Float cos = (int)0;		HX_STACK_VAR(cos,"cos");
						HX_STACK_LINE(305)
						Float radians = (this->angle * -(((Float(::Math_obj::PI) / Float((int)180)))));		HX_STACK_VAR(radians,"radians");
						HX_STACK_LINE(305)
						while((true)){
							HX_STACK_LINE(305)
							if ((!(((radians < -(::Math_obj::PI)))))){
								HX_STACK_LINE(305)
								break;
							}
							HX_STACK_LINE(305)
							hx::AddEq(radians,(::Math_obj::PI * (int)2));
						}
						HX_STACK_LINE(305)
						while((true)){
							HX_STACK_LINE(305)
							if ((!(((radians > ::Math_obj::PI))))){
								HX_STACK_LINE(305)
								break;
							}
							HX_STACK_LINE(305)
							radians = (radians - (::Math_obj::PI * (int)2));
						}
						HX_STACK_LINE(305)
						if (((radians < (int)0))){
							HX_STACK_LINE(305)
							sin = ((1.27323954 * radians) + ((.405284735 * radians) * radians));
							HX_STACK_LINE(305)
							if (((sin < (int)0))){
								HX_STACK_LINE(305)
								sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
							}
							else{
								HX_STACK_LINE(305)
								sin = ((.225 * (((sin * sin) - sin))) + sin);
							}
						}
						else{
							HX_STACK_LINE(305)
							sin = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
							HX_STACK_LINE(305)
							if (((sin < (int)0))){
								HX_STACK_LINE(305)
								sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
							}
							else{
								HX_STACK_LINE(305)
								sin = ((.225 * (((sin * sin) - sin))) + sin);
							}
						}
						HX_STACK_LINE(305)
						hx::AddEq(radians,(Float(::Math_obj::PI) / Float((int)2)));
						HX_STACK_LINE(305)
						if (((radians > ::Math_obj::PI))){
							HX_STACK_LINE(305)
							radians = (radians - (::Math_obj::PI * (int)2));
						}
						HX_STACK_LINE(305)
						if (((radians < (int)0))){
							HX_STACK_LINE(305)
							cos = ((1.27323954 * radians) + ((0.405284735 * radians) * radians));
							HX_STACK_LINE(305)
							if (((cos < (int)0))){
								HX_STACK_LINE(305)
								cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
							}
							else{
								HX_STACK_LINE(305)
								cos = ((.225 * (((cos * cos) - cos))) + cos);
							}
						}
						else{
							HX_STACK_LINE(305)
							cos = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
							HX_STACK_LINE(305)
							if (((cos < (int)0))){
								HX_STACK_LINE(305)
								cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
							}
							else{
								HX_STACK_LINE(305)
								cos = ((.225 * (((cos * cos) - cos))) + cos);
							}
						}
						HX_STACK_LINE(305)
						Float dx = (int)0;		HX_STACK_VAR(dx,"dx");
						HX_STACK_LINE(305)
						Float dy = this->speed;		HX_STACK_VAR(dy,"dy");
						HX_STACK_LINE(305)
						if (((point == null()))){
							HX_STACK_LINE(305)
							::flixel::util::FlxPoint _g17;		HX_STACK_VAR(_g17,"_g17");
							HX_STACK_LINE(305)
							{
								HX_STACK_LINE(305)
								Float X = (int)0;		HX_STACK_VAR(X,"X");
								HX_STACK_LINE(305)
								Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
								HX_STACK_LINE(305)
								::flixel::util::FlxPoint point1 = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
								HX_STACK_LINE(305)
								point1->_inPool = false;
								HX_STACK_LINE(305)
								_g17 = point1;
							}
							HX_STACK_LINE(305)
							point = _g17;
						}
						HX_STACK_LINE(305)
						point->set_x(((cos * dx) - (sin * dy)));
						HX_STACK_LINE(305)
						point->set_y((((int)0 - (sin * dx)) - (cos * dy)));
						HX_STACK_LINE(305)
						point;
					}
				}
			}
			HX_STACK_LINE(309)
			if ((this->_autoRotate)){
				HX_STACK_LINE(311)
				this->object->angularVelocity = (int)0;
				HX_STACK_LINE(312)
				this->object->angularAcceleration = (int)0;
				HX_STACK_LINE(313)
				this->object->set_angle(this->angle);
			}
			HX_STACK_LINE(316)
			if ((this->finished)){
				HX_STACK_LINE(318)
				this->cancel();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,update,(void))

::flixel::util::FlxPoint FlxPath_obj::advancePath( hx::Null< bool >  __o_Snap){
bool Snap = __o_Snap.Default(true);
	HX_STACK_FRAME("flixel.util.FlxPath","advancePath",0xf96b8956,"flixel.util.FlxPath.advancePath","flixel/util/FlxPath.hx",329,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Snap,"Snap")
{
		HX_STACK_LINE(330)
		if ((Snap)){
			HX_STACK_LINE(332)
			::flixel::util::FlxPoint oldNode = this->nodes->__get(this->_nodeIndex).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(oldNode,"oldNode");
			HX_STACK_LINE(333)
			if (((oldNode != null()))){
				HX_STACK_LINE(335)
				if (((((int(this->_mode) & int((int)1048576))) == (int)0))){
					HX_STACK_LINE(337)
					this->object->set_x(oldNode->x);
					HX_STACK_LINE(338)
					if ((this->autoCenter)){
						HX_STACK_LINE(339)
						::flixel::FlxObject _g = this->object;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(339)
						Float _g1 = this->object->get_width();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(339)
						Float _g11 = (_g1 * 0.5);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(339)
						Float _g2 = (_g->x - _g11);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(339)
						_g->set_x(_g2);
					}
				}
				HX_STACK_LINE(341)
				if (((((int(this->_mode) & int((int)65536))) == (int)0))){
					HX_STACK_LINE(343)
					this->object->set_y(oldNode->y);
					HX_STACK_LINE(344)
					if ((this->autoCenter)){
						HX_STACK_LINE(345)
						::flixel::FlxObject _g = this->object;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(345)
						Float _g3 = this->object->get_height();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(345)
						Float _g4 = (_g3 * 0.5);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(345)
						Float _g5 = (_g->y - _g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(345)
						_g->set_y(_g5);
					}
				}
			}
		}
		HX_STACK_LINE(350)
		bool callComplete = false;		HX_STACK_VAR(callComplete,"callComplete");
		HX_STACK_LINE(351)
		hx::AddEq(this->_nodeIndex,this->_inc);
		HX_STACK_LINE(353)
		if (((((int(this->_mode) & int((int)1))) > (int)0))){
			HX_STACK_LINE(355)
			if (((this->_nodeIndex < (int)0))){
				HX_STACK_LINE(357)
				this->_nodeIndex = (int)0;
				HX_STACK_LINE(358)
				bool _g6 = callComplete = true;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(358)
				this->finished = _g6;
			}
		}
		else{
			HX_STACK_LINE(361)
			if (((((int(this->_mode) & int((int)16))) > (int)0))){
				HX_STACK_LINE(363)
				if (((this->_nodeIndex >= this->nodes->length))){
					HX_STACK_LINE(365)
					callComplete = true;
					HX_STACK_LINE(366)
					this->_nodeIndex = (int)0;
				}
			}
			else{
				HX_STACK_LINE(369)
				if (((((int(this->_mode) & int((int)256))) > (int)0))){
					HX_STACK_LINE(371)
					if (((this->_nodeIndex < (int)0))){
						HX_STACK_LINE(373)
						this->_nodeIndex = (this->nodes->length - (int)1);
						HX_STACK_LINE(374)
						callComplete = true;
						HX_STACK_LINE(375)
						if (((this->_nodeIndex < (int)0))){
							HX_STACK_LINE(377)
							this->_nodeIndex = (int)0;
						}
					}
				}
				else{
					HX_STACK_LINE(381)
					if (((((int(this->_mode) & int((int)4096))) > (int)0))){
						HX_STACK_LINE(383)
						if (((this->_inc > (int)0))){
							HX_STACK_LINE(385)
							if (((this->_nodeIndex >= this->nodes->length))){
								HX_STACK_LINE(387)
								this->_nodeIndex = (this->nodes->length - (int)2);
								HX_STACK_LINE(388)
								callComplete = true;
								HX_STACK_LINE(389)
								if (((this->_nodeIndex < (int)0))){
									HX_STACK_LINE(391)
									this->_nodeIndex = (int)0;
								}
								HX_STACK_LINE(393)
								this->_inc = -(this->_inc);
							}
						}
						else{
							HX_STACK_LINE(396)
							if (((this->_nodeIndex < (int)0))){
								HX_STACK_LINE(398)
								this->_nodeIndex = (int)1;
								HX_STACK_LINE(399)
								callComplete = true;
								HX_STACK_LINE(400)
								if (((this->_nodeIndex >= this->nodes->length))){
									HX_STACK_LINE(402)
									this->_nodeIndex = (this->nodes->length - (int)1);
								}
								HX_STACK_LINE(404)
								if (((this->_nodeIndex < (int)0))){
									HX_STACK_LINE(406)
									this->_nodeIndex = (int)0;
								}
								HX_STACK_LINE(408)
								this->_inc = -(this->_inc);
							}
						}
					}
					else{
						HX_STACK_LINE(413)
						if (((this->_nodeIndex >= this->nodes->length))){
							HX_STACK_LINE(415)
							this->_nodeIndex = (this->nodes->length - (int)1);
							HX_STACK_LINE(416)
							bool _g7 = callComplete = true;		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(416)
							this->finished = _g7;
						}
					}
				}
			}
		}
		HX_STACK_LINE(420)
		if (((bool(callComplete) && bool((this->onComplete_dyn() != null()))))){
			HX_STACK_LINE(422)
			this->onComplete(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(425)
		return this->nodes->__get(this->_nodeIndex).StaticCast< ::flixel::util::FlxPoint >();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,advancePath,return )

Void FlxPath_obj::cancel( ){
{
		HX_STACK_FRAME("flixel.util.FlxPath","cancel",0xcc56a1cb,"flixel.util.FlxPath.cancel","flixel/util/FlxPath.hx",432,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(433)
		this->finished = true;
		HX_STACK_LINE(435)
		if (((this->object != null()))){
			HX_STACK_LINE(437)
			this->object->velocity->set((int)0,(int)0);
		}
		HX_STACK_LINE(440)
		if (((bool((::flixel::util::FlxPath_obj::manager != null())) && bool(this->_inManager)))){
			HX_STACK_LINE(442)
			::flixel::util::FlxPath_obj::manager->remove(hx::ObjectPtr<OBJ_>(this),null());
			HX_STACK_LINE(443)
			this->_inManager = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,cancel,(void))

Void FlxPath_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.FlxPath","destroy",0xaec13f89,"flixel.util.FlxPath.destroy","flixel/util/FlxPath.hx",451,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(453)
		{
			HX_STACK_LINE(453)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(453)
			Array< ::Dynamic > _g1 = this->nodes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(453)
			while((true)){
				HX_STACK_LINE(453)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(453)
					break;
				}
				HX_STACK_LINE(453)
				::flixel::util::FlxPoint point = _g1->__get(_g).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(453)
				++(_g);
				HX_STACK_LINE(455)
				::flixel::util::FlxPoint _g2 = ::flixel::util::FlxDestroyUtil_obj::put(point);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(455)
				point = _g2;
			}
		}
		HX_STACK_LINE(457)
		this->nodes = null();
		HX_STACK_LINE(458)
		this->object = null();
		HX_STACK_LINE(459)
		this->onComplete = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,destroy,(void))

::flixel::util::FlxPath FlxPath_obj::add( Float X,Float Y){
	HX_STACK_FRAME("flixel.util.FlxPath","add",0x6e26d130,"flixel.util.FlxPath.add","flixel/util/FlxPath.hx",469,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(470)
	::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(470)
	{
		HX_STACK_LINE(470)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(470)
		point->_inPool = false;
		HX_STACK_LINE(470)
		_g = point;
	}
	HX_STACK_LINE(470)
	this->nodes->push(_g);
	HX_STACK_LINE(471)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPath_obj,add,return )

::flixel::util::FlxPath FlxPath_obj::addAt( Float X,Float Y,int Index){
	HX_STACK_FRAME("flixel.util.FlxPath","addAt",0x6261b643,"flixel.util.FlxPath.addAt","flixel/util/FlxPath.hx",482,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(483)
	if (((Index < (int)0))){
		HX_STACK_LINE(483)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(484)
	if (((Index > this->nodes->length))){
		HX_STACK_LINE(486)
		Index = this->nodes->length;
	}
	HX_STACK_LINE(488)
	::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(488)
	{
		HX_STACK_LINE(488)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(488)
		point->_inPool = false;
		HX_STACK_LINE(488)
		_g = point;
	}
	HX_STACK_LINE(488)
	this->nodes->insert(Index,_g);
	HX_STACK_LINE(489)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,addAt,return )

::flixel::util::FlxPath FlxPath_obj::addPoint( ::flixel::util::FlxPoint Node,hx::Null< bool >  __o_AsReference){
bool AsReference = __o_AsReference.Default(false);
	HX_STACK_FRAME("flixel.util.FlxPath","addPoint",0xa9620500,"flixel.util.FlxPath.addPoint","flixel/util/FlxPath.hx",501,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Node,"Node")
	HX_STACK_ARG(AsReference,"AsReference")
{
		HX_STACK_LINE(502)
		if ((AsReference)){
			HX_STACK_LINE(504)
			this->nodes->push(Node);
		}
		else{
			HX_STACK_LINE(508)
			::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(508)
			{
				HX_STACK_LINE(508)
				::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(Node->x,Node->y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(508)
				point->_inPool = false;
				HX_STACK_LINE(508)
				_g = point;
			}
			HX_STACK_LINE(508)
			this->nodes->push(_g);
		}
		HX_STACK_LINE(510)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPath_obj,addPoint,return )

::flixel::util::FlxPath FlxPath_obj::addPointAt( ::flixel::util::FlxPoint Node,int Index,hx::Null< bool >  __o_AsReference){
bool AsReference = __o_AsReference.Default(false);
	HX_STACK_FRAME("flixel.util.FlxPath","addPointAt",0x49ad7e13,"flixel.util.FlxPath.addPointAt","flixel/util/FlxPath.hx",523,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Node,"Node")
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(AsReference,"AsReference")
{
		HX_STACK_LINE(524)
		if (((Index < (int)0))){
			HX_STACK_LINE(524)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(525)
		if (((Index > this->nodes->length))){
			HX_STACK_LINE(527)
			Index = this->nodes->length;
		}
		HX_STACK_LINE(529)
		if ((AsReference)){
			HX_STACK_LINE(531)
			this->nodes->insert(Index,Node);
		}
		else{
			HX_STACK_LINE(535)
			::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(535)
			{
				HX_STACK_LINE(535)
				::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(Node->x,Node->y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(535)
				point->_inPool = false;
				HX_STACK_LINE(535)
				_g = point;
			}
			HX_STACK_LINE(535)
			this->nodes->insert(Index,_g);
		}
		HX_STACK_LINE(537)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,addPointAt,return )

::flixel::util::FlxPoint FlxPath_obj::remove( ::flixel::util::FlxPoint Node){
	HX_STACK_FRAME("flixel.util.FlxPath","remove",0x18ab5095,"flixel.util.FlxPath.remove","flixel/util/FlxPath.hx",548,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Node,"Node")
	HX_STACK_LINE(549)
	int index = this->nodes->indexOf(Node,null());		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(550)
	if (((index >= (int)0))){
		HX_STACK_LINE(552)
		Array< ::Dynamic > _g = this->nodes->splice(index,(int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(552)
		return _g->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();
	}
	else{
		HX_STACK_LINE(556)
		return null();
	}
	HX_STACK_LINE(550)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,remove,return )

::flixel::util::FlxPoint FlxPath_obj::removeAt( int Index){
	HX_STACK_FRAME("flixel.util.FlxPath","removeAt",0x169098e8,"flixel.util.FlxPath.removeAt","flixel/util/FlxPath.hx",567,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(568)
	if (((this->nodes->length <= (int)0))){
		HX_STACK_LINE(570)
		return null();
	}
	HX_STACK_LINE(572)
	if (((Index >= this->nodes->length))){
		HX_STACK_LINE(574)
		Index = (this->nodes->length - (int)1);
	}
	HX_STACK_LINE(576)
	Array< ::Dynamic > _g = this->nodes->splice(Index,(int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(576)
	return _g->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,removeAt,return )

::flixel::util::FlxPoint FlxPath_obj::head( ){
	HX_STACK_FRAME("flixel.util.FlxPath","head",0xf8717731,"flixel.util.FlxPath.head","flixel/util/FlxPath.hx",585,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(586)
	if (((this->nodes->length > (int)0))){
		HX_STACK_LINE(588)
		return this->nodes->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();
	}
	HX_STACK_LINE(590)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,head,return )

::flixel::util::FlxPoint FlxPath_obj::tail( ){
	HX_STACK_FRAME("flixel.util.FlxPath","tail",0x005d04a1,"flixel.util.FlxPath.tail","flixel/util/FlxPath.hx",599,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(600)
	if (((this->nodes->length > (int)0))){
		HX_STACK_LINE(602)
		return this->nodes->__get((this->nodes->length - (int)1)).StaticCast< ::flixel::util::FlxPoint >();
	}
	HX_STACK_LINE(604)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,tail,return )

::flixel::plugin::PathManager FlxPath_obj::manager;

int FlxPath_obj::FORWARD;

int FlxPath_obj::BACKWARD;

int FlxPath_obj::LOOP_FORWARD;

int FlxPath_obj::LOOP_BACKWARD;

int FlxPath_obj::YOYO;

int FlxPath_obj::HORIZONTAL_ONLY;

int FlxPath_obj::VERTICAL_ONLY;

::flixel::util::FlxPoint FlxPath_obj::_point;


FlxPath_obj::FlxPath_obj()
{
}

void FlxPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPath);
	HX_MARK_MEMBER_NAME(nodes,"nodes");
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(autoCenter,"autoCenter");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(_nodeIndex,"_nodeIndex");
	HX_MARK_MEMBER_NAME(_mode,"_mode");
	HX_MARK_MEMBER_NAME(_inc,"_inc");
	HX_MARK_MEMBER_NAME(_autoRotate,"_autoRotate");
	HX_MARK_MEMBER_NAME(_inManager,"_inManager");
	HX_MARK_END_CLASS();
}

void FlxPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nodes,"nodes");
	HX_VISIT_MEMBER_NAME(object,"object");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(autoCenter,"autoCenter");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(_nodeIndex,"_nodeIndex");
	HX_VISIT_MEMBER_NAME(_mode,"_mode");
	HX_VISIT_MEMBER_NAME(_inc,"_inc");
	HX_VISIT_MEMBER_NAME(_autoRotate,"_autoRotate");
	HX_VISIT_MEMBER_NAME(_inManager,"_inManager");
}

Dynamic FlxPath_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_inc") ) { return _inc; }
		if (HX_FIELD_EQ(inName,"head") ) { return head_dyn(); }
		if (HX_FIELD_EQ(inName,"tail") ) { return tail_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { return nodes; }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"_mode") ) { return _mode; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"addAt") ) { return addAt_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"object") ) { return object; }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"restart") ) { return restart_dyn(); }
		if (HX_FIELD_EQ(inName,"setNode") ) { return setNode_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return addPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAt") ) { return removeAt_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoCenter") ) { return autoCenter; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"_nodeIndex") ) { return _nodeIndex; }
		if (HX_FIELD_EQ(inName,"_inManager") ) { return _inManager; }
		if (HX_FIELD_EQ(inName,"addPointAt") ) { return addPointAt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_autoRotate") ) { return _autoRotate; }
		if (HX_FIELD_EQ(inName,"advancePath") ) { return advancePath_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_inc") ) { _inc=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { nodes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mode") ) { _mode=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::flixel::plugin::PathManager >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoCenter") ) { autoCenter=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_nodeIndex") ) { _nodeIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inManager") ) { _inManager=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_autoRotate") ) { _autoRotate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nodes"));
	outFields->push(HX_CSTRING("object"));
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("autoCenter"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("finished"));
	outFields->push(HX_CSTRING("_nodeIndex"));
	outFields->push(HX_CSTRING("_mode"));
	outFields->push(HX_CSTRING("_inc"));
	outFields->push(HX_CSTRING("_autoRotate"));
	outFields->push(HX_CSTRING("_inManager"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("manager"),
	HX_CSTRING("FORWARD"),
	HX_CSTRING("BACKWARD"),
	HX_CSTRING("LOOP_FORWARD"),
	HX_CSTRING("LOOP_BACKWARD"),
	HX_CSTRING("YOYO"),
	HX_CSTRING("HORIZONTAL_ONLY"),
	HX_CSTRING("VERTICAL_ONLY"),
	HX_CSTRING("_point"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxPath_obj,nodes),HX_CSTRING("nodes")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(FlxPath_obj,object),HX_CSTRING("object")},
	{hx::fsFloat,(int)offsetof(FlxPath_obj,speed),HX_CSTRING("speed")},
	{hx::fsFloat,(int)offsetof(FlxPath_obj,angle),HX_CSTRING("angle")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,autoCenter),HX_CSTRING("autoCenter")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,active),HX_CSTRING("active")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxPath_obj,onComplete),HX_CSTRING("onComplete")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,finished),HX_CSTRING("finished")},
	{hx::fsInt,(int)offsetof(FlxPath_obj,_nodeIndex),HX_CSTRING("_nodeIndex")},
	{hx::fsInt,(int)offsetof(FlxPath_obj,_mode),HX_CSTRING("_mode")},
	{hx::fsInt,(int)offsetof(FlxPath_obj,_inc),HX_CSTRING("_inc")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,_autoRotate),HX_CSTRING("_autoRotate")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,_inManager),HX_CSTRING("_inManager")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("nodes"),
	HX_CSTRING("object"),
	HX_CSTRING("speed"),
	HX_CSTRING("angle"),
	HX_CSTRING("autoCenter"),
	HX_CSTRING("active"),
	HX_CSTRING("onComplete"),
	HX_CSTRING("finished"),
	HX_CSTRING("_nodeIndex"),
	HX_CSTRING("_mode"),
	HX_CSTRING("_inc"),
	HX_CSTRING("_autoRotate"),
	HX_CSTRING("_inManager"),
	HX_CSTRING("reset"),
	HX_CSTRING("start"),
	HX_CSTRING("restart"),
	HX_CSTRING("setNode"),
	HX_CSTRING("update"),
	HX_CSTRING("advancePath"),
	HX_CSTRING("cancel"),
	HX_CSTRING("destroy"),
	HX_CSTRING("add"),
	HX_CSTRING("addAt"),
	HX_CSTRING("addPoint"),
	HX_CSTRING("addPointAt"),
	HX_CSTRING("remove"),
	HX_CSTRING("removeAt"),
	HX_CSTRING("head"),
	HX_CSTRING("tail"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPath_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxPath_obj::manager,"manager");
	HX_MARK_MEMBER_NAME(FlxPath_obj::FORWARD,"FORWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::BACKWARD,"BACKWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::LOOP_FORWARD,"LOOP_FORWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::LOOP_BACKWARD,"LOOP_BACKWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::YOYO,"YOYO");
	HX_MARK_MEMBER_NAME(FlxPath_obj::HORIZONTAL_ONLY,"HORIZONTAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxPath_obj::VERTICAL_ONLY,"VERTICAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxPath_obj::_point,"_point");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPath_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::manager,"manager");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::FORWARD,"FORWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::BACKWARD,"BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::LOOP_FORWARD,"LOOP_FORWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::LOOP_BACKWARD,"LOOP_BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::YOYO,"YOYO");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::HORIZONTAL_ONLY,"HORIZONTAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::VERTICAL_ONLY,"VERTICAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::_point,"_point");
};

#endif

Class FlxPath_obj::__mClass;

void FlxPath_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxPath"), hx::TCanCast< FlxPath_obj> ,sStaticFields,sMemberFields,
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

void FlxPath_obj::__boot()
{
	FORWARD= (int)0;
	BACKWARD= (int)1;
	LOOP_FORWARD= (int)16;
	LOOP_BACKWARD= (int)256;
	YOYO= (int)4096;
	HORIZONTAL_ONLY= (int)65536;
	VERTICAL_ONLY= (int)1048576;
struct _Function_0_1{
	inline static ::flixel::util::FlxPoint Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxPath.hx",54,0x22aae741)
		{
			HX_STACK_LINE(54)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(54)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(54)
			::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(54)
			point->_inPool = false;
			HX_STACK_LINE(54)
			return point;
		}
		return null();
	}
};
	_point= _Function_0_1::Block();
}

} // end namespace flixel
} // end namespace util
