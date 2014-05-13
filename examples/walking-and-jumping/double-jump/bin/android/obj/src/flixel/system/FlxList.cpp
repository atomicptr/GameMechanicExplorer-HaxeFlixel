#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxList
#include <flixel/system/FlxList.h>
#endif
namespace flixel{
namespace system{

Void FlxList_obj::__construct()
{
HX_STACK_FRAME("flixel.system.FlxList","new",0x30fa5d95,"flixel.system.FlxList.new","flixel/system/FlxList.hx",11,0x6c72859b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(63)
	this->exists = true;
}
;
	return null();
}

//FlxList_obj::~FlxList_obj() { }

Dynamic FlxList_obj::__CreateEmpty() { return  new FlxList_obj; }
hx::ObjectPtr< FlxList_obj > FlxList_obj::__new()
{  hx::ObjectPtr< FlxList_obj > result = new FlxList_obj();
	result->__construct();
	return result;}

Dynamic FlxList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxList_obj > result = new FlxList_obj();
	result->__construct();
	return result;}

hx::Object *FlxList_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void FlxList_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.FlxList","destroy",0xa433f8af,"flixel.system.FlxList.destroy","flixel/system/FlxList.hx",74,0x6c72859b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(76)
		if ((!(this->exists))){
			HX_STACK_LINE(77)
			return null();
		}
		HX_STACK_LINE(79)
		this->object = null();
		HX_STACK_LINE(80)
		if (((this->next != null()))){
			HX_STACK_LINE(82)
			this->next->destroy();
		}
		HX_STACK_LINE(84)
		this->exists = false;
		HX_STACK_LINE(87)
		this->next = ::flixel::system::FlxList_obj::_cachedListsHead;
		HX_STACK_LINE(88)
		::flixel::system::FlxList_obj::_cachedListsHead = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(89)
		(::flixel::system::FlxList_obj::_NUM_CACHED_FLX_LIST)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxList_obj,destroy,(void))

int FlxList_obj::_NUM_CACHED_FLX_LIST;

::flixel::system::FlxList FlxList_obj::_cachedListsHead;

::flixel::system::FlxList FlxList_obj::recycle( ){
	HX_STACK_FRAME("flixel.system.FlxList","recycle",0xb739dbc8,"flixel.system.FlxList.recycle","flixel/system/FlxList.hx",24,0x6c72859b)
	HX_STACK_LINE(24)
	if (((::flixel::system::FlxList_obj::_cachedListsHead != null()))){
		HX_STACK_LINE(26)
		::flixel::system::FlxList cachedList = ::flixel::system::FlxList_obj::_cachedListsHead;		HX_STACK_VAR(cachedList,"cachedList");
		HX_STACK_LINE(27)
		::flixel::system::FlxList_obj::_cachedListsHead = ::flixel::system::FlxList_obj::_cachedListsHead->next;
		HX_STACK_LINE(28)
		(::flixel::system::FlxList_obj::_NUM_CACHED_FLX_LIST)--;
		HX_STACK_LINE(30)
		cachedList->exists = true;
		HX_STACK_LINE(31)
		cachedList->next = null();
		HX_STACK_LINE(32)
		return cachedList;
	}
	else{
		HX_STACK_LINE(35)
		return ::flixel::system::FlxList_obj::__new();
	}
	HX_STACK_LINE(24)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxList_obj,recycle,return )

Void FlxList_obj::clearCache( ){
{
		HX_STACK_FRAME("flixel.system.FlxList","clearCache",0x86858ce0,"flixel.system.FlxList.clearCache","flixel/system/FlxList.hx",42,0x6c72859b)
		HX_STACK_LINE(44)
		while((true)){
			HX_STACK_LINE(44)
			if ((!(((::flixel::system::FlxList_obj::_cachedListsHead != null()))))){
				HX_STACK_LINE(44)
				break;
			}
			HX_STACK_LINE(46)
			::flixel::system::FlxList node = ::flixel::system::FlxList_obj::_cachedListsHead;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(47)
			::flixel::system::FlxList_obj::_cachedListsHead = ::flixel::system::FlxList_obj::_cachedListsHead->next;
			HX_STACK_LINE(48)
			node->object = null();
			HX_STACK_LINE(49)
			node->next = null();
		}
		HX_STACK_LINE(51)
		::flixel::system::FlxList_obj::_NUM_CACHED_FLX_LIST = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxList_obj,clearCache,(void))


FlxList_obj::FlxList_obj()
{
}

void FlxList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxList);
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(exists,"exists");
	HX_MARK_END_CLASS();
}

void FlxList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(object,"object");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(exists,"exists");
}

Dynamic FlxList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { return object; }
		if (HX_FIELD_EQ(inName,"exists") ) { return exists; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { return clearCache_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedListsHead") ) { return _cachedListsHead; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_FLX_LIST") ) { return _NUM_CACHED_FLX_LIST; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::flixel::system::FlxList >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exists") ) { exists=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedListsHead") ) { _cachedListsHead=inValue.Cast< ::flixel::system::FlxList >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_FLX_LIST") ) { _NUM_CACHED_FLX_LIST=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("object"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("exists"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_NUM_CACHED_FLX_LIST"),
	HX_CSTRING("_cachedListsHead"),
	HX_CSTRING("recycle"),
	HX_CSTRING("clearCache"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(FlxList_obj,object),HX_CSTRING("object")},
	{hx::fsObject /*::flixel::system::FlxList*/ ,(int)offsetof(FlxList_obj,next),HX_CSTRING("next")},
	{hx::fsBool,(int)offsetof(FlxList_obj,exists),HX_CSTRING("exists")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("object"),
	HX_CSTRING("next"),
	HX_CSTRING("exists"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxList_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxList_obj::_NUM_CACHED_FLX_LIST,"_NUM_CACHED_FLX_LIST");
	HX_MARK_MEMBER_NAME(FlxList_obj::_cachedListsHead,"_cachedListsHead");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxList_obj::_NUM_CACHED_FLX_LIST,"_NUM_CACHED_FLX_LIST");
	HX_VISIT_MEMBER_NAME(FlxList_obj::_cachedListsHead,"_cachedListsHead");
};

#endif

Class FlxList_obj::__mClass;

void FlxList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.FlxList"), hx::TCanCast< FlxList_obj> ,sStaticFields,sMemberFields,
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

void FlxList_obj::__boot()
{
	_NUM_CACHED_FLX_LIST= (int)0;
}

} // end namespace flixel
} // end namespace system
