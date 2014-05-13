#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
namespace flixel{
namespace util{

Void FlxPool_flixel_util_FlxPoint_obj::__construct(::Class classObj)
{
HX_STACK_FRAME("flixel.util.FlxPool_flixel_util_FlxPoint","new",0xced4e5f5,"flixel.util.FlxPool_flixel_util_FlxPoint.new","flixel/util/FlxPool.hx",18,0xdd4de86a)
HX_STACK_THIS(this)
HX_STACK_ARG(classObj,"classObj")
{
	HX_STACK_LINE(19)
	this->_pool = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(20)
	this->_class = classObj;
}
;
	return null();
}

//FlxPool_flixel_util_FlxPoint_obj::~FlxPool_flixel_util_FlxPoint_obj() { }

Dynamic FlxPool_flixel_util_FlxPoint_obj::__CreateEmpty() { return  new FlxPool_flixel_util_FlxPoint_obj; }
hx::ObjectPtr< FlxPool_flixel_util_FlxPoint_obj > FlxPool_flixel_util_FlxPoint_obj::__new(::Class classObj)
{  hx::ObjectPtr< FlxPool_flixel_util_FlxPoint_obj > result = new FlxPool_flixel_util_FlxPoint_obj();
	result->__construct(classObj);
	return result;}

Dynamic FlxPool_flixel_util_FlxPoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPool_flixel_util_FlxPoint_obj > result = new FlxPool_flixel_util_FlxPoint_obj();
	result->__construct(inArgs[0]);
	return result;}

::flixel::util::FlxPoint FlxPool_flixel_util_FlxPoint_obj::get( ){
	HX_STACK_FRAME("flixel.util.FlxPool_flixel_util_FlxPoint","get",0xcecf962b,"flixel.util.FlxPool_flixel_util_FlxPoint.get","flixel/util/FlxPool.hx",24,0xdd4de86a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	::flixel::util::FlxPoint obj = this->_pool->pop().StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(obj,"obj");
	HX_STACK_LINE(26)
	if (((obj == null()))){
		HX_STACK_LINE(28)
		::flixel::util::FlxPoint _g = ::Type_obj::createInstance(this->_class,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(28)
		obj = _g;
	}
	HX_STACK_LINE(30)
	return obj;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_flixel_util_FlxPoint_obj,get,return )

Void FlxPool_flixel_util_FlxPoint_obj::put( ::flixel::util::FlxPoint obj){
{
		HX_STACK_FRAME("flixel.util.FlxPool_flixel_util_FlxPoint","put",0xced67864,"flixel.util.FlxPool_flixel_util_FlxPoint.put","flixel/util/FlxPool.hx",36,0xdd4de86a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::util::FlxPool_flixel_util_FlxPoint_obj > __this,::flixel::util::FlxPoint &obj){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxPool.hx",36,0xdd4de86a)
				{
					HX_STACK_LINE(36)
					int _g = __this->_pool->indexOf(obj,null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(36)
					return (_g < (int)0);
				}
				return null();
			}
		};
		HX_STACK_LINE(36)
		if (((  (((obj != null()))) ? bool(_Function_1_1::Block(this,obj)) : bool(false) ))){
			HX_STACK_LINE(38)
			obj->destroy();
			HX_STACK_LINE(39)
			this->_pool->push(obj);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_flixel_util_FlxPoint_obj,put,(void))

Void FlxPool_flixel_util_FlxPoint_obj::putUnsafe( ::flixel::util::FlxPoint obj){
{
		HX_STACK_FRAME("flixel.util.FlxPool_flixel_util_FlxPoint","putUnsafe",0x8019d3aa,"flixel.util.FlxPool_flixel_util_FlxPoint.putUnsafe","flixel/util/FlxPool.hx",45,0xdd4de86a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(45)
		if (((obj != null()))){
			HX_STACK_LINE(47)
			obj->destroy();
			HX_STACK_LINE(48)
			this->_pool->push(obj);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_flixel_util_FlxPoint_obj,putUnsafe,(void))

Void FlxPool_flixel_util_FlxPoint_obj::preAllocate( int numObjects){
{
		HX_STACK_FRAME("flixel.util.FlxPool_flixel_util_FlxPoint","preAllocate",0xf1f37c95,"flixel.util.FlxPool_flixel_util_FlxPoint.preAllocate","flixel/util/FlxPool.hx",54,0xdd4de86a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(numObjects,"numObjects")
		HX_STACK_LINE(54)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(54)
		while((true)){
			HX_STACK_LINE(54)
			if ((!(((_g < numObjects))))){
				HX_STACK_LINE(54)
				break;
			}
			HX_STACK_LINE(54)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(56)
			::flixel::util::FlxPoint _g1 = ::Type_obj::createInstance(this->_class,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(56)
			this->_pool->push(_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_flixel_util_FlxPoint_obj,preAllocate,(void))

Array< ::Dynamic > FlxPool_flixel_util_FlxPoint_obj::clear( ){
	HX_STACK_FRAME("flixel.util.FlxPool_flixel_util_FlxPoint","clear",0x897cd662,"flixel.util.FlxPool_flixel_util_FlxPoint.clear","flixel/util/FlxPool.hx",61,0xdd4de86a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	Array< ::Dynamic > oldPool = this->_pool;		HX_STACK_VAR(oldPool,"oldPool");
	HX_STACK_LINE(63)
	this->_pool = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(64)
	return oldPool;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_flixel_util_FlxPoint_obj,clear,return )

int FlxPool_flixel_util_FlxPoint_obj::get_length( ){
	HX_STACK_FRAME("flixel.util.FlxPool_flixel_util_FlxPoint","get_length",0x70e6fbba,"flixel.util.FlxPool_flixel_util_FlxPoint.get_length","flixel/util/FlxPool.hx",69,0xdd4de86a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(69)
	return this->_pool->length;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_flixel_util_FlxPoint_obj,get_length,return )


FlxPool_flixel_util_FlxPoint_obj::FlxPool_flixel_util_FlxPoint_obj()
{
}

void FlxPool_flixel_util_FlxPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPool_flixel_util_FlxPoint);
	HX_MARK_MEMBER_NAME(_pool,"_pool");
	HX_MARK_MEMBER_NAME(_class,"_class");
	HX_MARK_END_CLASS();
}

void FlxPool_flixel_util_FlxPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pool,"_pool");
	HX_VISIT_MEMBER_NAME(_class,"_class");
}

Dynamic FlxPool_flixel_util_FlxPoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { return _pool; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_class") ) { return _class; }
		if (HX_FIELD_EQ(inName,"length") ) { return get_length(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"putUnsafe") ) { return putUnsafe_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"preAllocate") ) { return preAllocate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPool_flixel_util_FlxPoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_class") ) { _class=inValue.Cast< ::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPool_flixel_util_FlxPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_pool"));
	outFields->push(HX_CSTRING("_class"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxPool_flixel_util_FlxPoint_obj,_pool),HX_CSTRING("_pool")},
	{hx::fsObject /*::Class*/ ,(int)offsetof(FlxPool_flixel_util_FlxPoint_obj,_class),HX_CSTRING("_class")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_pool"),
	HX_CSTRING("_class"),
	HX_CSTRING("get"),
	HX_CSTRING("put"),
	HX_CSTRING("putUnsafe"),
	HX_CSTRING("preAllocate"),
	HX_CSTRING("clear"),
	HX_CSTRING("get_length"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPool_flixel_util_FlxPoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPool_flixel_util_FlxPoint_obj::__mClass,"__mClass");
};

#endif

Class FlxPool_flixel_util_FlxPoint_obj::__mClass;

void FlxPool_flixel_util_FlxPoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxPool_flixel_util_FlxPoint"), hx::TCanCast< FlxPool_flixel_util_FlxPoint_obj> ,sStaticFields,sMemberFields,
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

void FlxPool_flixel_util_FlxPoint_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
