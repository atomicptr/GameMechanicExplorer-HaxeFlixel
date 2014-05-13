#include <hxcpp.h>

#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataPool
#include <flixel/util/FlxBitmapDataPool.h>
#endif
#ifndef INCLUDED_flixel_util__FlxBitmapDataPool_FlxBitmapDataPoolNode
#include <flixel/util/_FlxBitmapDataPool/FlxBitmapDataPoolNode.h>
#endif
namespace flixel{
namespace util{

Void FlxBitmapDataPool_obj::__construct()
{
	return null();
}

//FlxBitmapDataPool_obj::~FlxBitmapDataPool_obj() { }

Dynamic FlxBitmapDataPool_obj::__CreateEmpty() { return  new FlxBitmapDataPool_obj; }
hx::ObjectPtr< FlxBitmapDataPool_obj > FlxBitmapDataPool_obj::__new()
{  hx::ObjectPtr< FlxBitmapDataPool_obj > result = new FlxBitmapDataPool_obj();
	result->__construct();
	return result;}

Dynamic FlxBitmapDataPool_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBitmapDataPool_obj > result = new FlxBitmapDataPool_obj();
	result->__construct();
	return result;}

int FlxBitmapDataPool_obj::maxLength;

int FlxBitmapDataPool_obj::length;

::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode FlxBitmapDataPool_obj::_head;

::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode FlxBitmapDataPool_obj::_tail;

::flash::geom::Rectangle FlxBitmapDataPool_obj::_rect;

::flash::display::BitmapData FlxBitmapDataPool_obj::get( int w,int h,hx::Null< bool >  __o_transparent,Dynamic fillColor,Dynamic __o_exactSize){
bool transparent = __o_transparent.Default(true);
Dynamic exactSize = __o_exactSize.Default(false);
	HX_STACK_FRAME("flixel.util.FlxBitmapDataPool","get",0x62a51335,"flixel.util.FlxBitmapDataPool.get","flixel/util/FlxBitmapDataPool.hx",41,0x992b0db1)
	HX_STACK_ARG(w,"w")
	HX_STACK_ARG(h,"h")
	HX_STACK_ARG(transparent,"transparent")
	HX_STACK_ARG(fillColor,"fillColor")
	HX_STACK_ARG(exactSize,"exactSize")
{
		HX_STACK_LINE(42)
		::flash::display::BitmapData res = null();		HX_STACK_VAR(res,"res");
		HX_STACK_LINE(45)
		::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode node = ::flixel::util::FlxBitmapDataPool_obj::_head;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(46)
		while((true)){
			HX_STACK_LINE(46)
			if ((!(((node != null()))))){
				HX_STACK_LINE(46)
				break;
			}
			HX_STACK_LINE(48)
			::flash::display::BitmapData bmd = node->bmd;		HX_STACK_VAR(bmd,"bmd");
			HX_STACK_LINE(49)
			bool _g = bmd->get_transparent();		HX_STACK_VAR(_g,"_g");
			struct _Function_2_1{
				inline static bool Block( ::flash::display::BitmapData &bmd,int &w){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxBitmapDataPool.hx",49,0x992b0db1)
					{
						HX_STACK_LINE(49)
						int _g1 = bmd->get_width();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(49)
						return (_g1 >= w);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( ::flash::display::BitmapData &bmd,int &h){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxBitmapDataPool.hx",49,0x992b0db1)
					{
						HX_STACK_LINE(49)
						int _g2 = bmd->get_height();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(49)
						return (_g2 >= h);
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static bool Block( Dynamic &exactSize,::flash::display::BitmapData &bmd,int &w,int &h){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxBitmapDataPool.hx",50,0x992b0db1)
					{
						struct _Function_3_1{
							inline static bool Block( Dynamic &exactSize,::flash::display::BitmapData &bmd,int &w,int &h){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxBitmapDataPool.hx",50,0x992b0db1)
								{
									struct _Function_4_1{
										inline static bool Block( ::flash::display::BitmapData &bmd,int &w){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxBitmapDataPool.hx",50,0x992b0db1)
											{
												HX_STACK_LINE(50)
												int _g3 = bmd->get_width();		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(50)
												return (_g3 == w);
											}
											return null();
										}
									};
									struct _Function_4_2{
										inline static bool Block( ::flash::display::BitmapData &bmd,int &h){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxBitmapDataPool.hx",50,0x992b0db1)
											{
												HX_STACK_LINE(50)
												int _g4 = bmd->get_height();		HX_STACK_VAR(_g4,"_g4");
												HX_STACK_LINE(50)
												return (_g4 == h);
											}
											return null();
										}
									};
									HX_STACK_LINE(50)
									return (  (((  ((exactSize)) ? bool(_Function_4_1::Block(bmd,w)) : bool(false) ))) ? bool(_Function_4_2::Block(bmd,h)) : bool(false) );
								}
								return null();
							}
						};
						HX_STACK_LINE(50)
						return (  ((!((!(exactSize))))) ? bool(_Function_3_1::Block(exactSize,bmd,w,h)) : bool(true) );
					}
					return null();
				}
			};
			HX_STACK_LINE(49)
			if (((  (((  (((  (((_g == transparent))) ? bool(_Function_2_1::Block(bmd,w)) : bool(false) ))) ? bool(_Function_2_2::Block(bmd,h)) : bool(false) ))) ? bool(_Function_2_3::Block(exactSize,bmd,w,h)) : bool(false) ))){
				HX_STACK_LINE(52)
				res = bmd;
				HX_STACK_LINE(55)
				if (((node->prev != null()))){
					HX_STACK_LINE(55)
					node->prev->next = node->next;
				}
				HX_STACK_LINE(56)
				if (((node->next != null()))){
					HX_STACK_LINE(56)
					node->next->prev = node->prev;
				}
				HX_STACK_LINE(57)
				if (((node == ::flixel::util::FlxBitmapDataPool_obj::_head))){
					HX_STACK_LINE(57)
					::flixel::util::FlxBitmapDataPool_obj::_head = node->next;
				}
				HX_STACK_LINE(58)
				if (((node == ::flixel::util::FlxBitmapDataPool_obj::_tail))){
					HX_STACK_LINE(58)
					::flixel::util::FlxBitmapDataPool_obj::_tail = node->prev;
				}
				HX_STACK_LINE(59)
				node = null();
				HX_STACK_LINE(60)
				(::flixel::util::FlxBitmapDataPool_obj::length)--;
				HX_STACK_LINE(61)
				break;
			}
			HX_STACK_LINE(63)
			node = node->next;
		}
		HX_STACK_LINE(66)
		if (((res != null()))){
			HX_STACK_LINE(68)
			if (((fillColor != null()))){
				HX_STACK_LINE(70)
				::flixel::util::FlxBitmapDataPool_obj::_rect->x = (int)0;
				HX_STACK_LINE(71)
				::flixel::util::FlxBitmapDataPool_obj::_rect->y = (int)0;
				HX_STACK_LINE(72)
				::flixel::util::FlxBitmapDataPool_obj::_rect->width = w;
				HX_STACK_LINE(73)
				::flixel::util::FlxBitmapDataPool_obj::_rect->height = h;
				HX_STACK_LINE(74)
				res->fillRect(::flixel::util::FlxBitmapDataPool_obj::_rect,fillColor);
			}
		}
		else{
			HX_STACK_LINE(79)
			::flash::display::BitmapData _g5 = ::flash::display::BitmapData_obj::__new(w,h,transparent,(  (((fillColor != null()))) ? int(fillColor) : int((int)-1) ),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(79)
			res = _g5;
		}
		HX_STACK_LINE(82)
		return res;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxBitmapDataPool_obj,get,return )

Void FlxBitmapDataPool_obj::put( ::flash::display::BitmapData bmd){
{
		HX_STACK_FRAME("flixel.util.FlxBitmapDataPool","put",0x62abf56e,"flixel.util.FlxBitmapDataPool.put","flixel/util/FlxBitmapDataPool.hx",89,0x992b0db1)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(90)
		if (((::flixel::util::FlxBitmapDataPool_obj::length >= ::flixel::util::FlxBitmapDataPool_obj::maxLength))){
			HX_STACK_LINE(92)
			::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode last = ::flixel::util::FlxBitmapDataPool_obj::_tail;		HX_STACK_VAR(last,"last");
			HX_STACK_LINE(93)
			last->bmd->dispose();
			HX_STACK_LINE(94)
			if (((last->prev != null()))){
				HX_STACK_LINE(96)
				last->prev->next = null();
				HX_STACK_LINE(97)
				::flixel::util::FlxBitmapDataPool_obj::_tail = last->prev;
			}
			HX_STACK_LINE(99)
			last = null();
			HX_STACK_LINE(100)
			(::flixel::util::FlxBitmapDataPool_obj::length)--;
		}
		HX_STACK_LINE(103)
		::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode node = ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode_obj::__new(bmd,null(),null());		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(104)
		node->next = ::flixel::util::FlxBitmapDataPool_obj::_head;
		HX_STACK_LINE(105)
		if (((::flixel::util::FlxBitmapDataPool_obj::_head == null()))){
			HX_STACK_LINE(107)
			::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode _g = ::flixel::util::FlxBitmapDataPool_obj::_tail = node;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(107)
			::flixel::util::FlxBitmapDataPool_obj::_head = _g;
		}
		else{
			HX_STACK_LINE(111)
			::flixel::util::FlxBitmapDataPool_obj::_head = node;
			HX_STACK_LINE(112)
			node->next->prev = node;
		}
		HX_STACK_LINE(114)
		(::flixel::util::FlxBitmapDataPool_obj::length)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapDataPool_obj,put,(void))

Void FlxBitmapDataPool_obj::clear( ){
{
		HX_STACK_FRAME("flixel.util.FlxBitmapDataPool","clear",0xdb7329ec,"flixel.util.FlxBitmapDataPool.clear","flixel/util/FlxBitmapDataPool.hx",121,0x992b0db1)
		HX_STACK_LINE(122)
		::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode node = ::flixel::util::FlxBitmapDataPool_obj::_head;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(123)
		while((true)){
			HX_STACK_LINE(123)
			if ((!(((node != null()))))){
				HX_STACK_LINE(123)
				break;
			}
			HX_STACK_LINE(125)
			::flash::display::BitmapData bmd = node->bmd;		HX_STACK_VAR(bmd,"bmd");
			HX_STACK_LINE(126)
			bmd->dispose();
			HX_STACK_LINE(127)
			bmd = null();
			HX_STACK_LINE(128)
			node = node->next;
		}
		HX_STACK_LINE(130)
		::flixel::util::FlxBitmapDataPool_obj::length = (int)0;
		HX_STACK_LINE(131)
		::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode _g = ::flixel::util::FlxBitmapDataPool_obj::_tail = null();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(131)
		::flixel::util::FlxBitmapDataPool_obj::_head = _g;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapDataPool_obj,clear,(void))

int FlxBitmapDataPool_obj::set_maxLength( int value){
	HX_STACK_FRAME("flixel.util.FlxBitmapDataPool","set_maxLength",0xa2220bec,"flixel.util.FlxBitmapDataPool.set_maxLength","flixel/util/FlxBitmapDataPool.hx",135,0x992b0db1)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(136)
	if (((::flixel::util::FlxBitmapDataPool_obj::maxLength != value))){
		HX_STACK_LINE(138)
		::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode node = ::flixel::util::FlxBitmapDataPool_obj::_tail;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(139)
		while((true)){
			HX_STACK_LINE(139)
			if ((!(((bool((node != null())) && bool((::flixel::util::FlxBitmapDataPool_obj::length > value))))))){
				HX_STACK_LINE(139)
				break;
			}
			HX_STACK_LINE(141)
			::flash::display::BitmapData bmd = node->bmd;		HX_STACK_VAR(bmd,"bmd");
			HX_STACK_LINE(142)
			bmd->dispose();
			HX_STACK_LINE(143)
			bmd = null();
			HX_STACK_LINE(144)
			node = node->prev;
			HX_STACK_LINE(145)
			(::flixel::util::FlxBitmapDataPool_obj::length)--;
		}
	}
	HX_STACK_LINE(148)
	return ::flixel::util::FlxBitmapDataPool_obj::maxLength = value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapDataPool_obj,set_maxLength,return )


FlxBitmapDataPool_obj::FlxBitmapDataPool_obj()
{
}

Dynamic FlxBitmapDataPool_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_head") ) { return _head; }
		if (HX_FIELD_EQ(inName,"_tail") ) { return _tail; }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxLength") ) { return maxLength; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_maxLength") ) { return set_maxLength_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBitmapDataPool_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_head") ) { _head=inValue.Cast< ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tail") ) { _tail=inValue.Cast< ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxLength") ) { if (inCallProp) return set_maxLength(inValue);maxLength=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBitmapDataPool_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("maxLength"),
	HX_CSTRING("length"),
	HX_CSTRING("_head"),
	HX_CSTRING("_tail"),
	HX_CSTRING("_rect"),
	HX_CSTRING("get"),
	HX_CSTRING("put"),
	HX_CSTRING("clear"),
	HX_CSTRING("set_maxLength"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBitmapDataPool_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxBitmapDataPool_obj::maxLength,"maxLength");
	HX_MARK_MEMBER_NAME(FlxBitmapDataPool_obj::length,"length");
	HX_MARK_MEMBER_NAME(FlxBitmapDataPool_obj::_head,"_head");
	HX_MARK_MEMBER_NAME(FlxBitmapDataPool_obj::_tail,"_tail");
	HX_MARK_MEMBER_NAME(FlxBitmapDataPool_obj::_rect,"_rect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBitmapDataPool_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxBitmapDataPool_obj::maxLength,"maxLength");
	HX_VISIT_MEMBER_NAME(FlxBitmapDataPool_obj::length,"length");
	HX_VISIT_MEMBER_NAME(FlxBitmapDataPool_obj::_head,"_head");
	HX_VISIT_MEMBER_NAME(FlxBitmapDataPool_obj::_tail,"_tail");
	HX_VISIT_MEMBER_NAME(FlxBitmapDataPool_obj::_rect,"_rect");
};

#endif

Class FlxBitmapDataPool_obj::__mClass;

void FlxBitmapDataPool_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxBitmapDataPool"), hx::TCanCast< FlxBitmapDataPool_obj> ,sStaticFields,sMemberFields,
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

void FlxBitmapDataPool_obj::__boot()
{
	maxLength= (int)8;
	length= (int)0;
	_head= null();
	_tail= null();
	_rect= ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
}

} // end namespace flixel
} // end namespace util
