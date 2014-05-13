#include <hxcpp.h>

#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
namespace flixel{
namespace group{

Void FlxTypedGroupIterator_obj::__construct(Dynamic GroupMembers,Dynamic filter)
{
HX_STACK_FRAME("flixel.group.FlxTypedGroupIterator","new",0xa7153fe6,"flixel.group.FlxTypedGroupIterator.new","flixel/group/FlxTypedGroupIterator.hx",18,0xfd37eb0c)
HX_STACK_THIS(this)
HX_STACK_ARG(GroupMembers,"GroupMembers")
HX_STACK_ARG(filter,"filter")
{
	HX_STACK_LINE(19)
	this->_groupMembers = GroupMembers;
	HX_STACK_LINE(20)
	this->_filter = filter;
	HX_STACK_LINE(21)
	this->_cursor = (int)0;
	HX_STACK_LINE(22)
	this->_length = this->_groupMembers->__Field(HX_CSTRING("length"),true);
}
;
	return null();
}

//FlxTypedGroupIterator_obj::~FlxTypedGroupIterator_obj() { }

Dynamic FlxTypedGroupIterator_obj::__CreateEmpty() { return  new FlxTypedGroupIterator_obj; }
hx::ObjectPtr< FlxTypedGroupIterator_obj > FlxTypedGroupIterator_obj::__new(Dynamic GroupMembers,Dynamic filter)
{  hx::ObjectPtr< FlxTypedGroupIterator_obj > result = new FlxTypedGroupIterator_obj();
	result->__construct(GroupMembers,filter);
	return result;}

Dynamic FlxTypedGroupIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedGroupIterator_obj > result = new FlxTypedGroupIterator_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Dynamic FlxTypedGroupIterator_obj::next( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroupIterator","next",0x8b82aaad,"flixel.group.FlxTypedGroupIterator.next","flixel/group/FlxTypedGroupIterator.hx",27,0xfd37eb0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	if ((this->hasNext())){
		HX_STACK_LINE(27)
		int _g = (this->_cursor)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		return this->_groupMembers->__GetItem(_g);
	}
	else{
		HX_STACK_LINE(27)
		return null();
	}
	HX_STACK_LINE(27)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroupIterator_obj,next,return )

bool FlxTypedGroupIterator_obj::hasNext( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroupIterator","hasNext",0x559d4ff3,"flixel.group.FlxTypedGroupIterator.hasNext","flixel/group/FlxTypedGroupIterator.hx",31,0xfd37eb0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	while((true)){
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::group::FlxTypedGroupIterator_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/group/FlxTypedGroupIterator.hx",32,0xfd37eb0c)
				{
					struct _Function_3_1{
						inline static bool Block( hx::ObjectPtr< ::flixel::group::FlxTypedGroupIterator_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/group/FlxTypedGroupIterator.hx",32,0xfd37eb0c)
							{
								HX_STACK_LINE(32)
								return (  (((__this->_filter != null()))) ? bool(!(__this->_filter(__this->_groupMembers->__GetItem(__this->_cursor)))) : bool(false) );
							}
							return null();
						}
					};
					HX_STACK_LINE(32)
					return (  ((!(((__this->_groupMembers->__GetItem(__this->_cursor) == null()))))) ? bool(_Function_3_1::Block(__this)) : bool(true) );
				}
				return null();
			}
		};
		HX_STACK_LINE(32)
		if ((!(((  (((this->_cursor < this->_length))) ? bool(_Function_2_1::Block(this)) : bool(false) ))))){
			HX_STACK_LINE(32)
			break;
		}
		HX_STACK_LINE(34)
		(this->_cursor)++;
	}
	HX_STACK_LINE(36)
	return (this->_cursor < this->_length);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroupIterator_obj,hasNext,return )


FlxTypedGroupIterator_obj::FlxTypedGroupIterator_obj()
{
}

void FlxTypedGroupIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedGroupIterator);
	HX_MARK_MEMBER_NAME(_groupMembers,"_groupMembers");
	HX_MARK_MEMBER_NAME(_filter,"_filter");
	HX_MARK_MEMBER_NAME(_cursor,"_cursor");
	HX_MARK_MEMBER_NAME(_length,"_length");
	HX_MARK_END_CLASS();
}

void FlxTypedGroupIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_groupMembers,"_groupMembers");
	HX_VISIT_MEMBER_NAME(_filter,"_filter");
	HX_VISIT_MEMBER_NAME(_cursor,"_cursor");
	HX_VISIT_MEMBER_NAME(_length,"_length");
}

Dynamic FlxTypedGroupIterator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_filter") ) { return _filter; }
		if (HX_FIELD_EQ(inName,"_cursor") ) { return _cursor; }
		if (HX_FIELD_EQ(inName,"_length") ) { return _length; }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_groupMembers") ) { return _groupMembers; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedGroupIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_filter") ) { _filter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cursor") ) { _cursor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_length") ) { _length=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_groupMembers") ) { _groupMembers=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedGroupIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_groupMembers"));
	outFields->push(HX_CSTRING("_cursor"));
	outFields->push(HX_CSTRING("_length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTypedGroupIterator_obj,_groupMembers),HX_CSTRING("_groupMembers")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTypedGroupIterator_obj,_filter),HX_CSTRING("_filter")},
	{hx::fsInt,(int)offsetof(FlxTypedGroupIterator_obj,_cursor),HX_CSTRING("_cursor")},
	{hx::fsInt,(int)offsetof(FlxTypedGroupIterator_obj,_length),HX_CSTRING("_length")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_groupMembers"),
	HX_CSTRING("_filter"),
	HX_CSTRING("_cursor"),
	HX_CSTRING("_length"),
	HX_CSTRING("next"),
	HX_CSTRING("hasNext"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedGroupIterator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedGroupIterator_obj::__mClass,"__mClass");
};

#endif

Class FlxTypedGroupIterator_obj::__mClass;

void FlxTypedGroupIterator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.group.FlxTypedGroupIterator"), hx::TCanCast< FlxTypedGroupIterator_obj> ,sStaticFields,sMemberFields,
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

void FlxTypedGroupIterator_obj::__boot()
{
}

} // end namespace flixel
} // end namespace group
