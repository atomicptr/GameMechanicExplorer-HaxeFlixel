#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace group{

Void FlxTypedGroup_obj::__construct(hx::Null< int >  __o_MaxSize)
{
HX_STACK_FRAME("flixel.group.FlxTypedGroup","new",0x9772c4d8,"flixel.group.FlxTypedGroup.new","flixel/group/FlxTypedGroup.hx",14,0x8fe2385a)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_MaxSize,"MaxSize")
int MaxSize = __o_MaxSize.Default(0);
{
	HX_STACK_LINE(32)
	this->_marker = (int)0;
	HX_STACK_LINE(28)
	this->length = (int)0;
	HX_STACK_LINE(39)
	super::__construct();
	HX_STACK_LINE(41)
	this->members = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(43)
	Float _g = ::Math_obj::abs(MaxSize);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(43)
	int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(43)
	this->set_maxSize(_g1);
	HX_STACK_LINE(45)
	this->collisionType = (int)2;
}
;
	return null();
}

//FlxTypedGroup_obj::~FlxTypedGroup_obj() { }

Dynamic FlxTypedGroup_obj::__CreateEmpty() { return  new FlxTypedGroup_obj; }
hx::ObjectPtr< FlxTypedGroup_obj > FlxTypedGroup_obj::__new(hx::Null< int >  __o_MaxSize)
{  hx::ObjectPtr< FlxTypedGroup_obj > result = new FlxTypedGroup_obj();
	result->__construct(__o_MaxSize);
	return result;}

Dynamic FlxTypedGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedGroup_obj > result = new FlxTypedGroup_obj();
	result->__construct(inArgs[0]);
	return result;}

Void FlxTypedGroup_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","destroy",0x8044bd72,"flixel.group.FlxTypedGroup.destroy","flixel/group/FlxTypedGroup.hx",55,0x8fe2385a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		this->super::destroy();
		HX_STACK_LINE(58)
		if (((this->members != null()))){
			HX_STACK_LINE(60)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(61)
			::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(63)
			while((true)){
				HX_STACK_LINE(63)
				if ((!(((i < this->length))))){
					HX_STACK_LINE(63)
					break;
				}
				HX_STACK_LINE(65)
				int _g = (i)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(65)
				Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(65)
				basic = _g1;
				HX_STACK_LINE(67)
				if (((basic != null()))){
					HX_STACK_LINE(68)
					basic->destroy();
				}
			}
			HX_STACK_LINE(71)
			this->members = null();
		}
	}
return null();
}


Void FlxTypedGroup_obj::update( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","update",0x4e08ac91,"flixel.group.FlxTypedGroup.update","flixel/group/FlxTypedGroup.hx",79,0x8fe2385a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(81)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(83)
		while((true)){
			HX_STACK_LINE(83)
			if ((!(((i < this->length))))){
				HX_STACK_LINE(83)
				break;
			}
			HX_STACK_LINE(85)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(85)
			Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(85)
			basic = _g1;
			HX_STACK_LINE(87)
			if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->active)))){
				HX_STACK_LINE(89)
				basic->update();
			}
		}
	}
return null();
}


Void FlxTypedGroup_obj::draw( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","draw",0xe667208c,"flixel.group.FlxTypedGroup.draw","flixel/group/FlxTypedGroup.hx",98,0x8fe2385a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(99)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(100)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(102)
		while((true)){
			HX_STACK_LINE(102)
			if ((!(((i < this->length))))){
				HX_STACK_LINE(102)
				break;
			}
			HX_STACK_LINE(104)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(104)
			Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(104)
			basic = _g1;
			HX_STACK_LINE(106)
			if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->visible)))){
				HX_STACK_LINE(108)
				basic->draw();
			}
		}
	}
return null();
}


Dynamic FlxTypedGroup_obj::add( Dynamic Object){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","add",0x9768e699,"flixel.group.FlxTypedGroup.add","flixel/group/FlxTypedGroup.hx",125,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(126)
	if (((Object == null()))){
		HX_STACK_LINE(129)
		return null();
	}
	HX_STACK_LINE(133)
	int _g = this->members->__Field(HX_CSTRING("indexOf"),true)(Object,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(133)
	if (((_g >= (int)0))){
		HX_STACK_LINE(135)
		return Object;
	}
	HX_STACK_LINE(139)
	int index = this->getFirstNull();		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(140)
	if (((index != (int)-1))){
		HX_STACK_LINE(142)
		hx::IndexRef((this->members).mPtr,index) = Object;
		HX_STACK_LINE(144)
		if (((index >= this->length))){
			HX_STACK_LINE(146)
			this->length = (index + (int)1);
		}
		HX_STACK_LINE(149)
		return Object;
	}
	HX_STACK_LINE(153)
	if (((bool((this->maxSize > (int)0)) && bool((this->length >= this->maxSize))))){
		HX_STACK_LINE(155)
		return Object;
	}
	HX_STACK_LINE(159)
	this->members->__Field(HX_CSTRING("push"),true)(Object);
	HX_STACK_LINE(160)
	(this->length)++;
	HX_STACK_LINE(162)
	return Object;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,add,return )

Dynamic FlxTypedGroup_obj::recycle( ::Class ObjectClass,Dynamic ContructorArgs,hx::Null< bool >  __o_Force,hx::Null< bool >  __o_Revive){
bool Force = __o_Force.Default(false);
bool Revive = __o_Revive.Default(true);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","recycle",0x934aa08b,"flixel.group.FlxTypedGroup.recycle","flixel/group/FlxTypedGroup.hx",187,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(ContructorArgs,"ContructorArgs")
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Revive,"Revive")
{
		HX_STACK_LINE(188)
		if (((ContructorArgs == null()))){
			HX_STACK_LINE(190)
			ContructorArgs = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(193)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(196)
		if (((this->maxSize > (int)0))){
			HX_STACK_LINE(199)
			if (((this->length < this->maxSize))){
				HX_STACK_LINE(201)
				if (((ObjectClass == null()))){
					HX_STACK_LINE(203)
					return null();
				}
				HX_STACK_LINE(206)
				Dynamic _g = ::Type_obj::createInstance(ObjectClass,ContructorArgs);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(206)
				return this->add(_g);
			}
			else{
				HX_STACK_LINE(211)
				int _g1 = (this->_marker)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(211)
				Dynamic _g2 = this->members->__GetItem(_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(211)
				basic = _g2;
				HX_STACK_LINE(213)
				if (((this->_marker >= this->maxSize))){
					HX_STACK_LINE(215)
					this->_marker = (int)0;
				}
				HX_STACK_LINE(218)
				if ((Revive)){
					HX_STACK_LINE(220)
					basic->revive();
				}
				HX_STACK_LINE(223)
				return basic;
			}
		}
		else{
			HX_STACK_LINE(229)
			Dynamic _g3 = this->getFirstAvailable(ObjectClass,Force);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(229)
			basic = _g3;
			HX_STACK_LINE(231)
			if (((basic != null()))){
				HX_STACK_LINE(233)
				if ((Revive)){
					HX_STACK_LINE(235)
					basic->revive();
				}
				HX_STACK_LINE(237)
				return basic;
			}
			HX_STACK_LINE(239)
			if (((ObjectClass == null()))){
				HX_STACK_LINE(241)
				return null();
			}
			HX_STACK_LINE(244)
			Dynamic _g4 = ::Type_obj::createInstance(ObjectClass,ContructorArgs);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(244)
			return this->add(_g4);
		}
		HX_STACK_LINE(196)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedGroup_obj,recycle,return )

Dynamic FlxTypedGroup_obj::remove( Dynamic Object,hx::Null< bool >  __o_Splice){
bool Splice = __o_Splice.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","remove",0xcb8bc2cc,"flixel.group.FlxTypedGroup.remove","flixel/group/FlxTypedGroup.hx",256,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Splice,"Splice")
{
		HX_STACK_LINE(257)
		if (((this->members == null()))){
			HX_STACK_LINE(258)
			return null();
		}
		HX_STACK_LINE(260)
		int index = this->members->__Field(HX_CSTRING("indexOf"),true)(Object,null());		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(262)
		if (((index < (int)0))){
			HX_STACK_LINE(263)
			return null();
		}
		HX_STACK_LINE(265)
		if ((Splice)){
			HX_STACK_LINE(266)
			this->members->__Field(HX_CSTRING("splice"),true)(index,(int)1);
		}
		else{
			HX_STACK_LINE(268)
			hx::IndexRef((this->members).mPtr,index) = null();
		}
		HX_STACK_LINE(270)
		return Object;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,remove,return )

Dynamic FlxTypedGroup_obj::replace( Dynamic OldObject,Dynamic NewObject){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","replace",0x06e6d8ac,"flixel.group.FlxTypedGroup.replace","flixel/group/FlxTypedGroup.hx",282,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(OldObject,"OldObject")
	HX_STACK_ARG(NewObject,"NewObject")
	HX_STACK_LINE(283)
	int index = this->members->__Field(HX_CSTRING("indexOf"),true)(OldObject,null());		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(285)
	if (((index < (int)0))){
		HX_STACK_LINE(286)
		return null();
	}
	HX_STACK_LINE(288)
	hx::IndexRef((this->members).mPtr,index) = NewObject;
	HX_STACK_LINE(290)
	return NewObject;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,replace,return )

Void FlxTypedGroup_obj::sort( Dynamic Function,hx::Null< int >  __o_Order){
int Order = __o_Order.Default(-1);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","sort",0xf04f1be6,"flixel.group.FlxTypedGroup.sort","flixel/group/FlxTypedGroup.hx",301,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Order,"Order")
{
		HX_STACK_LINE(302)
		Dynamic _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(302)
		{
			HX_STACK_LINE(302)
			Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(Function));		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(302)
			Array< int > a1 = Array_obj< int >::__new().Add(Order);		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< int >,a1,Dynamic,f)
			int run(Dynamic a2,Dynamic a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/group/FlxTypedGroup.hx",302,0x8fe2385a)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(302)
					return f->__GetItem((int)0)(a1->__get((int)0),a2,a3).Cast< int >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(302)
			_g =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(302)
		this->members->__Field(HX_CSTRING("sort"),true)(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,sort,(void))

Void FlxTypedGroup_obj::setAll( ::String VariableName,Dynamic Value,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(true);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","setAll",0x3664ad27,"flixel.group.FlxTypedGroup.setAll","flixel/group/FlxTypedGroup.hx",313,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(VariableName,"VariableName")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(314)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(315)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(317)
		while((true)){
			HX_STACK_LINE(317)
			if ((!(((i < this->length))))){
				HX_STACK_LINE(317)
				break;
			}
			HX_STACK_LINE(319)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(319)
			Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(319)
			basic = _g1;
			HX_STACK_LINE(321)
			if (((basic != null()))){
				HX_STACK_LINE(323)
				if (((bool(Recurse) && bool((basic->collisionType == (int)2))))){
					HX_STACK_LINE(325)
					basic->__Field(HX_CSTRING("setAll"),true)(VariableName,Value,Recurse);
				}
				else{
					HX_STACK_LINE(329)
					if (((basic != null()))){
						HX_STACK_LINE(329)
						basic->__SetField(VariableName,Value,true);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedGroup_obj,setAll,(void))

Void FlxTypedGroup_obj::callAll( ::String FunctionName,Dynamic Args,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(true);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","callAll",0xb004df9b,"flixel.group.FlxTypedGroup.callAll","flixel/group/FlxTypedGroup.hx",343,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FunctionName,"FunctionName")
	HX_STACK_ARG(Args,"Args")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(344)
		if (((Args == null()))){
			HX_STACK_LINE(345)
			Args = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(347)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(348)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(350)
		while((true)){
			HX_STACK_LINE(350)
			if ((!(((i < this->length))))){
				HX_STACK_LINE(350)
				break;
			}
			HX_STACK_LINE(352)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(352)
			Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(352)
			basic = _g1;
			HX_STACK_LINE(354)
			if (((basic != null()))){
				HX_STACK_LINE(356)
				if (((bool(Recurse) && bool((basic->collisionType == (int)2))))){
					HX_STACK_LINE(358)
					(hx::TCast< flixel::group::FlxTypedGroup >::cast(basic))->callAll(FunctionName,Args,Recurse);
				}
				else{
					HX_STACK_LINE(362)
					Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(362)
					_g2 = (  (((basic == null()))) ? Dynamic(null()) : Dynamic(basic->__Field(FunctionName,true)) );
					HX_STACK_LINE(362)
					::Reflect_obj::callMethod(basic,_g2,Args);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedGroup_obj,callAll,(void))

Dynamic FlxTypedGroup_obj::getFirstAvailable( ::Class ObjectClass,hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstAvailable",0x3f88c127,"flixel.group.FlxTypedGroup.getFirstAvailable","flixel/group/FlxTypedGroup.hx",377,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(378)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(379)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(381)
		while((true)){
			HX_STACK_LINE(381)
			if ((!(((i < this->length))))){
				HX_STACK_LINE(381)
				break;
			}
			HX_STACK_LINE(383)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(383)
			Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(383)
			basic = _g1;
			struct _Function_2_1{
				inline static bool Block( ::flixel::FlxBasic &basic,::Class &ObjectClass){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/group/FlxTypedGroup.hx",385,0x8fe2385a)
					{
						HX_STACK_LINE(385)
						return (  ((!(((ObjectClass == null()))))) ? bool(::Std_obj::is(basic,ObjectClass)) : bool(true) );
					}
					return null();
				}
			};
			HX_STACK_LINE(385)
			if (((  (((bool((basic != null())) && bool(!(basic->exists))))) ? bool(_Function_2_1::Block(basic,ObjectClass)) : bool(false) ))){
				struct _Function_3_1{
					inline static bool Block( ::flixel::FlxBasic &basic,::Class &ObjectClass){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/group/FlxTypedGroup.hx",387,0x8fe2385a)
						{
							HX_STACK_LINE(387)
							::Class _g2 = ::Type_obj::getClass(basic);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(387)
							::String _g3 = ::Type_obj::getClassName(_g2);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(387)
							::String _g4 = ::Type_obj::getClassName(ObjectClass);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(387)
							return (_g3 != _g4);
						}
						return null();
					}
				};
				HX_STACK_LINE(387)
				if (((  ((Force)) ? bool(_Function_3_1::Block(basic,ObjectClass)) : bool(false) ))){
					HX_STACK_LINE(389)
					continue;
				}
				HX_STACK_LINE(391)
				return this->members->__GetItem((i - (int)1));
			}
		}
		HX_STACK_LINE(395)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getFirstAvailable,return )

int FlxTypedGroup_obj::getFirstNull( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstNull",0xc17e73e9,"flixel.group.FlxTypedGroup.getFirstNull","flixel/group/FlxTypedGroup.hx",405,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(406)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(408)
	while((true)){
		HX_STACK_LINE(408)
		if ((!(((i < this->length))))){
			HX_STACK_LINE(408)
			break;
		}
		HX_STACK_LINE(410)
		if (((this->members->__GetItem(i) == null()))){
			HX_STACK_LINE(412)
			return i;
		}
		HX_STACK_LINE(414)
		(i)++;
	}
	HX_STACK_LINE(417)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstNull,return )

Dynamic FlxTypedGroup_obj::getFirstExisting( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstExisting",0x314444ed,"flixel.group.FlxTypedGroup.getFirstExisting","flixel/group/FlxTypedGroup.hx",427,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(428)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(429)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(431)
	while((true)){
		HX_STACK_LINE(431)
		if ((!(((i < this->length))))){
			HX_STACK_LINE(431)
			break;
		}
		HX_STACK_LINE(433)
		int _g = (i)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(433)
		Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(433)
		basic = _g1;
		HX_STACK_LINE(435)
		if (((bool((basic != null())) && bool(basic->exists)))){
			HX_STACK_LINE(437)
			return basic;
		}
	}
	HX_STACK_LINE(441)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstExisting,return )

Dynamic FlxTypedGroup_obj::getFirstAlive( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstAlive",0x0afc442b,"flixel.group.FlxTypedGroup.getFirstAlive","flixel/group/FlxTypedGroup.hx",451,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(452)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(453)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(455)
	while((true)){
		HX_STACK_LINE(455)
		if ((!(((i < this->length))))){
			HX_STACK_LINE(455)
			break;
		}
		HX_STACK_LINE(457)
		int _g = (i)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(457)
		Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(457)
		basic = _g1;
		HX_STACK_LINE(459)
		if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->alive)))){
			HX_STACK_LINE(461)
			return basic;
		}
	}
	HX_STACK_LINE(465)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstAlive,return )

Dynamic FlxTypedGroup_obj::getFirstDead( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstDead",0xbad62406,"flixel.group.FlxTypedGroup.getFirstDead","flixel/group/FlxTypedGroup.hx",475,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(476)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(477)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(479)
	while((true)){
		HX_STACK_LINE(479)
		if ((!(((i < this->length))))){
			HX_STACK_LINE(479)
			break;
		}
		HX_STACK_LINE(481)
		int _g = (i)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(481)
		Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(481)
		basic = _g1;
		HX_STACK_LINE(483)
		if (((bool((basic != null())) && bool(!(basic->alive))))){
			HX_STACK_LINE(485)
			return basic;
		}
	}
	HX_STACK_LINE(489)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstDead,return )

int FlxTypedGroup_obj::countLiving( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","countLiving",0x0ee705d0,"flixel.group.FlxTypedGroup.countLiving","flixel/group/FlxTypedGroup.hx",498,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(499)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(500)
	int count = (int)-1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(501)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(503)
	while((true)){
		HX_STACK_LINE(503)
		if ((!(((i < this->length))))){
			HX_STACK_LINE(503)
			break;
		}
		HX_STACK_LINE(505)
		int _g = (i)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(505)
		Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(505)
		basic = _g1;
		HX_STACK_LINE(507)
		if (((basic != null()))){
			HX_STACK_LINE(509)
			if (((count < (int)0))){
				HX_STACK_LINE(511)
				count = (int)0;
			}
			HX_STACK_LINE(513)
			if (((bool(basic->exists) && bool(basic->alive)))){
				HX_STACK_LINE(515)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(520)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countLiving,return )

int FlxTypedGroup_obj::countDead( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","countDead",0x0964718b,"flixel.group.FlxTypedGroup.countDead","flixel/group/FlxTypedGroup.hx",529,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(530)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(531)
	int count = (int)-1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(532)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(534)
	while((true)){
		HX_STACK_LINE(534)
		if ((!(((i < this->length))))){
			HX_STACK_LINE(534)
			break;
		}
		HX_STACK_LINE(536)
		int _g = (i)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(536)
		Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(536)
		basic = _g1;
		HX_STACK_LINE(538)
		if (((basic != null()))){
			HX_STACK_LINE(540)
			if (((count < (int)0))){
				HX_STACK_LINE(542)
				count = (int)0;
			}
			HX_STACK_LINE(544)
			if ((!(basic->alive))){
				HX_STACK_LINE(546)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(551)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countDead,return )

Dynamic FlxTypedGroup_obj::getRandom( hx::Null< int >  __o_StartIndex,hx::Null< int >  __o_Length){
int StartIndex = __o_StartIndex.Default(0);
int Length = __o_Length.Default(0);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getRandom",0xe8c349b1,"flixel.group.FlxTypedGroup.getRandom","flixel/group/FlxTypedGroup.hx",562,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(Length,"Length")
{
		HX_STACK_LINE(563)
		if (((StartIndex < (int)0))){
			HX_STACK_LINE(565)
			StartIndex = (int)0;
		}
		HX_STACK_LINE(567)
		if (((Length <= (int)0))){
			HX_STACK_LINE(569)
			Length = this->length;
		}
		HX_STACK_LINE(572)
		return ::flixel::util::FlxRandom_obj::getObject_getRandom_T(this->members,StartIndex,Length);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getRandom,return )

Void FlxTypedGroup_obj::clear( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","clear",0x1c7a7405,"flixel.group.FlxTypedGroup.clear","flixel/group/FlxTypedGroup.hx",580,0x8fe2385a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(581)
		this->length = (int)0;
		HX_STACK_LINE(582)
		::flixel::util::FlxArrayUtil_obj::clearArray_flixel_group_FlxTypedGroup_T(this->members,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,clear,(void))

Void FlxTypedGroup_obj::kill( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","kill",0xeb00d426,"flixel.group.FlxTypedGroup.kill","flixel/group/FlxTypedGroup.hx",590,0x8fe2385a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(591)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(592)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(594)
		while((true)){
			HX_STACK_LINE(594)
			if ((!(((i < this->length))))){
				HX_STACK_LINE(594)
				break;
			}
			HX_STACK_LINE(596)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(596)
			Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(596)
			basic = _g1;
			HX_STACK_LINE(598)
			if (((bool((basic != null())) && bool(basic->exists)))){
				HX_STACK_LINE(600)
				basic->kill();
			}
		}
		HX_STACK_LINE(604)
		this->super::kill();
	}
return null();
}


::flixel::group::FlxTypedGroupIterator FlxTypedGroup_obj::iterator( Dynamic filter){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","iterator",0x7e9a2276,"flixel.group.FlxTypedGroup.iterator","flixel/group/FlxTypedGroup.hx",614,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(614)
	return ::flixel::group::FlxTypedGroupIterator_obj::__new(this->members,filter);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,iterator,return )

Void FlxTypedGroup_obj::forEach( Dynamic Function){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEach",0x207cba22,"flixel.group.FlxTypedGroup.forEach","flixel/group/FlxTypedGroup.hx",623,0x8fe2385a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_LINE(624)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(625)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(627)
		while((true)){
			HX_STACK_LINE(627)
			if ((!(((i < this->length))))){
				HX_STACK_LINE(627)
				break;
			}
			HX_STACK_LINE(629)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(629)
			Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(629)
			basic = _g1;
			HX_STACK_LINE(631)
			if (((basic != null()))){
				HX_STACK_LINE(632)
				Function(basic).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,forEach,(void))

Void FlxTypedGroup_obj::forEachAlive( Dynamic Function){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEachAlive",0x4c021e4b,"flixel.group.FlxTypedGroup.forEachAlive","flixel/group/FlxTypedGroup.hx",642,0x8fe2385a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_LINE(643)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(644)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(646)
		while((true)){
			HX_STACK_LINE(646)
			if ((!(((i < this->length))))){
				HX_STACK_LINE(646)
				break;
			}
			HX_STACK_LINE(648)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(648)
			Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(648)
			basic = _g1;
			HX_STACK_LINE(650)
			if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->alive)))){
				HX_STACK_LINE(651)
				Function(basic).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,forEachAlive,(void))

Void FlxTypedGroup_obj::forEachDead( Dynamic Function){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEachDead",0x5740ede6,"flixel.group.FlxTypedGroup.forEachDead","flixel/group/FlxTypedGroup.hx",661,0x8fe2385a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_LINE(662)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(663)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(665)
		while((true)){
			HX_STACK_LINE(665)
			if ((!(((i < this->length))))){
				HX_STACK_LINE(665)
				break;
			}
			HX_STACK_LINE(667)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(667)
			Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(667)
			basic = _g1;
			HX_STACK_LINE(669)
			if (((bool((basic != null())) && bool(!(basic->alive))))){
				HX_STACK_LINE(670)
				Function(basic).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,forEachDead,(void))

Void FlxTypedGroup_obj::forEachExists( Dynamic Function){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEachExists",0xb812919e,"flixel.group.FlxTypedGroup.forEachExists","flixel/group/FlxTypedGroup.hx",680,0x8fe2385a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_LINE(681)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(682)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(684)
		while((true)){
			HX_STACK_LINE(684)
			if ((!(((i < this->length))))){
				HX_STACK_LINE(684)
				break;
			}
			HX_STACK_LINE(686)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(686)
			Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(686)
			basic = _g1;
			HX_STACK_LINE(688)
			if (((bool((basic != null())) && bool(basic->exists)))){
				HX_STACK_LINE(689)
				Function(basic).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,forEachExists,(void))

Void FlxTypedGroup_obj::forEachOfType( ::Class ObjectClass,Dynamic Function){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEachOfType",0x4c90cb33,"flixel.group.FlxTypedGroup.forEachOfType","flixel/group/FlxTypedGroup.hx",700,0x8fe2385a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ObjectClass,"ObjectClass")
		HX_STACK_ARG(Function,"Function")
		HX_STACK_LINE(701)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(702)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(704)
		while((true)){
			HX_STACK_LINE(704)
			if ((!(((i < this->length))))){
				HX_STACK_LINE(704)
				break;
			}
			HX_STACK_LINE(706)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(706)
			Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(706)
			basic = _g1;
			HX_STACK_LINE(708)
			if (((  (((basic != null()))) ? bool(::Std_obj::is(basic,ObjectClass)) : bool(false) ))){
				HX_STACK_LINE(709)
				Function(basic).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachOfType,(void))

int FlxTypedGroup_obj::set_maxSize( int Size){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","set_maxSize",0x3b478d20,"flixel.group.FlxTypedGroup.set_maxSize","flixel/group/FlxTypedGroup.hx",714,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Size,"Size")
	HX_STACK_LINE(715)
	Float _g = ::Math_obj::abs(Size);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(715)
	int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(715)
	this->maxSize = _g1;
	HX_STACK_LINE(717)
	if (((this->_marker >= this->maxSize))){
		HX_STACK_LINE(719)
		this->_marker = (int)0;
	}
	HX_STACK_LINE(721)
	if (((bool((bool((this->maxSize == (int)0)) || bool((this->members == null())))) || bool((this->maxSize >= this->length))))){
		HX_STACK_LINE(723)
		return this->maxSize;
	}
	HX_STACK_LINE(727)
	int i = this->maxSize;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(728)
	int l = this->length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(729)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(731)
	while((true)){
		HX_STACK_LINE(731)
		if ((!(((i < l))))){
			HX_STACK_LINE(731)
			break;
		}
		HX_STACK_LINE(733)
		int _g2 = (i)++;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(733)
		Dynamic _g3 = this->members->__GetItem(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(733)
		basic = _g3;
		HX_STACK_LINE(735)
		if (((basic != null()))){
			HX_STACK_LINE(736)
			basic->destroy();
		}
	}
	HX_STACK_LINE(739)
	::flixel::util::FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T(this->members,this->maxSize);
	HX_STACK_LINE(740)
	this->length = this->members->__Field(HX_CSTRING("length"),true);
	HX_STACK_LINE(742)
	return this->maxSize;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,set_maxSize,return )


FlxTypedGroup_obj::FlxTypedGroup_obj()
{
}

void FlxTypedGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedGroup);
	HX_MARK_MEMBER_NAME(members,"members");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(_marker,"_marker");
	HX_MARK_END_CLASS();
}

void FlxTypedGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(members,"members");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(_marker,"_marker");
}

Dynamic FlxTypedGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"setAll") ) { return setAll_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { return members; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return maxSize; }
		if (HX_FIELD_EQ(inName,"_marker") ) { return _marker; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"replace") ) { return replace_dyn(); }
		if (HX_FIELD_EQ(inName,"callAll") ) { return callAll_dyn(); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return forEach_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"countDead") ) { return countDead_dyn(); }
		if (HX_FIELD_EQ(inName,"getRandom") ) { return getRandom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"countLiving") ) { return countLiving_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachDead") ) { return forEachDead_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxSize") ) { return set_maxSize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFirstNull") ) { return getFirstNull_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstDead") ) { return getFirstDead_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachAlive") ) { return forEachAlive_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFirstAlive") ) { return getFirstAlive_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachExists") ) { return forEachExists_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachOfType") ) { return forEachOfType_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getFirstExisting") ) { return getFirstExisting_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFirstAvailable") ) { return getFirstAvailable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { members=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp) return set_maxSize(inValue);maxSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_marker") ) { _marker=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("members"));
	outFields->push(HX_CSTRING("maxSize"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("_marker"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTypedGroup_obj,members),HX_CSTRING("members")},
	{hx::fsInt,(int)offsetof(FlxTypedGroup_obj,maxSize),HX_CSTRING("maxSize")},
	{hx::fsInt,(int)offsetof(FlxTypedGroup_obj,length),HX_CSTRING("length")},
	{hx::fsInt,(int)offsetof(FlxTypedGroup_obj,_marker),HX_CSTRING("_marker")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("members"),
	HX_CSTRING("maxSize"),
	HX_CSTRING("length"),
	HX_CSTRING("_marker"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("draw"),
	HX_CSTRING("add"),
	HX_CSTRING("recycle"),
	HX_CSTRING("remove"),
	HX_CSTRING("replace"),
	HX_CSTRING("sort"),
	HX_CSTRING("setAll"),
	HX_CSTRING("callAll"),
	HX_CSTRING("getFirstAvailable"),
	HX_CSTRING("getFirstNull"),
	HX_CSTRING("getFirstExisting"),
	HX_CSTRING("getFirstAlive"),
	HX_CSTRING("getFirstDead"),
	HX_CSTRING("countLiving"),
	HX_CSTRING("countDead"),
	HX_CSTRING("getRandom"),
	HX_CSTRING("clear"),
	HX_CSTRING("kill"),
	HX_CSTRING("iterator"),
	HX_CSTRING("forEach"),
	HX_CSTRING("forEachAlive"),
	HX_CSTRING("forEachDead"),
	HX_CSTRING("forEachExists"),
	HX_CSTRING("forEachOfType"),
	HX_CSTRING("set_maxSize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedGroup_obj::__mClass,"__mClass");
};

#endif

Class FlxTypedGroup_obj::__mClass;

void FlxTypedGroup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.group.FlxTypedGroup"), hx::TCanCast< FlxTypedGroup_obj> ,sStaticFields,sMemberFields,
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

void FlxTypedGroup_obj::__boot()
{
}

} // end namespace flixel
} // end namespace group
