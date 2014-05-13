#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
#ifndef INCLUDED_flixel_plugin_PathManager
#include <flixel/plugin/PathManager.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
namespace flixel{
namespace plugin{

Void PathManager_obj::__construct()
{
HX_STACK_FRAME("flixel.plugin.PathManager","new",0xc86d5031,"flixel.plugin.PathManager.new","flixel/plugin/PathManager.hx",8,0xf3716a7f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	this->_paths = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(14)
	super::__construct();
}
;
	return null();
}

//PathManager_obj::~PathManager_obj() { }

Dynamic PathManager_obj::__CreateEmpty() { return  new PathManager_obj; }
hx::ObjectPtr< PathManager_obj > PathManager_obj::__new()
{  hx::ObjectPtr< PathManager_obj > result = new PathManager_obj();
	result->__construct();
	return result;}

Dynamic PathManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PathManager_obj > result = new PathManager_obj();
	result->__construct();
	return result;}

Void PathManager_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.plugin.PathManager","destroy",0xa78a694b,"flixel.plugin.PathManager.destroy","flixel/plugin/PathManager.hx",24,0xf3716a7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		::flixel::util::FlxArrayUtil_obj::clearArray_flixel_util_FlxPath(this->_paths,null());
		HX_STACK_LINE(26)
		this->_paths = null();
		HX_STACK_LINE(28)
		this->super::destroy();
	}
return null();
}


Void PathManager_obj::update( ){
{
		HX_STACK_FRAME("flixel.plugin.PathManager","update",0x90cafed8,"flixel.plugin.PathManager.update","flixel/plugin/PathManager.hx",33,0xf3716a7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		Array< ::Dynamic > _g1 = this->_paths;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(33)
		while((true)){
			HX_STACK_LINE(33)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(33)
				break;
			}
			HX_STACK_LINE(33)
			::flixel::util::FlxPath path = _g1->__get(_g).StaticCast< ::flixel::util::FlxPath >();		HX_STACK_VAR(path,"path");
			HX_STACK_LINE(33)
			++(_g);
			HX_STACK_LINE(35)
			if ((path->active)){
				HX_STACK_LINE(37)
				path->update();
			}
		}
	}
return null();
}


Void PathManager_obj::add( ::flixel::util::FlxPath Path){
{
		HX_STACK_FRAME("flixel.plugin.PathManager","add",0xc86371f2,"flixel.plugin.PathManager.add","flixel/plugin/PathManager.hx",71,0xf3716a7f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Path,"Path")
		HX_STACK_LINE(71)
		this->_paths->push(Path);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PathManager_obj,add,(void))

Void PathManager_obj::remove( ::flixel::util::FlxPath Path,hx::Null< bool >  __o_ReturnInPool){
bool ReturnInPool = __o_ReturnInPool.Default(true);
	HX_STACK_FRAME("flixel.plugin.PathManager","remove",0x0e4e1513,"flixel.plugin.PathManager.remove","flixel/plugin/PathManager.hx",82,0xf3716a7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Path,"Path")
	HX_STACK_ARG(ReturnInPool,"ReturnInPool")
{
		HX_STACK_LINE(82)
		Array< ::Dynamic > array = this->_paths;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(82)
		int index = array->indexOf(Path,null());		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(82)
		if (((index != (int)-1))){
			HX_STACK_LINE(82)
			array[index] = array->__get((array->length - (int)1)).StaticCast< ::flixel::util::FlxPath >();
			HX_STACK_LINE(82)
			array->pop().StaticCast< ::flixel::util::FlxPath >();
			HX_STACK_LINE(82)
			array;
		}
		else{
			HX_STACK_LINE(82)
			array;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PathManager_obj,remove,(void))

Void PathManager_obj::clear( ){
{
		HX_STACK_FRAME("flixel.plugin.PathManager","clear",0x69b1479e,"flixel.plugin.PathManager.clear","flixel/plugin/PathManager.hx",90,0xf3716a7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		::flixel::util::FlxArrayUtil_obj::clearArray_flixel_util_FlxPath(this->_paths,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PathManager_obj,clear,(void))

Void PathManager_obj::onStateSwitch( ){
{
		HX_STACK_FRAME("flixel.plugin.PathManager","onStateSwitch",0x71108317,"flixel.plugin.PathManager.onStateSwitch","flixel/plugin/PathManager.hx",95,0xf3716a7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(95)
		::flixel::util::FlxArrayUtil_obj::clearArray_flixel_util_FlxPath(this->_paths,null());
	}
return null();
}



PathManager_obj::PathManager_obj()
{
}

void PathManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PathManager);
	HX_MARK_MEMBER_NAME(_paths,"_paths");
	HX_MARK_END_CLASS();
}

void PathManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_paths,"_paths");
}

Dynamic PathManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_paths") ) { return _paths; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { return onStateSwitch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PathManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_paths") ) { _paths=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PathManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_paths"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PathManager_obj,_paths),HX_CSTRING("_paths")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_paths"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("clear"),
	HX_CSTRING("onStateSwitch"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PathManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PathManager_obj::__mClass,"__mClass");
};

#endif

Class PathManager_obj::__mClass;

void PathManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.plugin.PathManager"), hx::TCanCast< PathManager_obj> ,sStaticFields,sMemberFields,
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

void PathManager_obj::__boot()
{
}

} // end namespace flixel
} // end namespace plugin
