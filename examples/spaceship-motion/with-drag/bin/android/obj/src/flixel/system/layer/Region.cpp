#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
namespace flixel{
namespace system{
namespace layer{

Void Region_obj::__construct(hx::Null< int >  __o_startX,hx::Null< int >  __o_startY,hx::Null< int >  __o_tileWidth,hx::Null< int >  __o_tileHeight,hx::Null< int >  __o_spacingX,hx::Null< int >  __o_spacingY,hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{
HX_STACK_FRAME("flixel.system.layer.Region","new",0x38fbf7d0,"flixel.system.layer.Region.new","flixel/system/layer/Region.hx",20,0xdb295b5f)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_startX,"startX")
HX_STACK_ARG(__o_startY,"startY")
HX_STACK_ARG(__o_tileWidth,"tileWidth")
HX_STACK_ARG(__o_tileHeight,"tileHeight")
HX_STACK_ARG(__o_spacingX,"spacingX")
HX_STACK_ARG(__o_spacingY,"spacingY")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
int startX = __o_startX.Default(0);
int startY = __o_startY.Default(0);
int tileWidth = __o_tileWidth.Default(0);
int tileHeight = __o_tileHeight.Default(0);
int spacingX = __o_spacingX.Default(0);
int spacingY = __o_spacingY.Default(0);
int width = __o_width.Default(0);
int height = __o_height.Default(0);
{
	HX_STACK_LINE(21)
	this->startX = startX;
	HX_STACK_LINE(22)
	this->startY = startY;
	HX_STACK_LINE(24)
	this->tileWidth = tileWidth;
	HX_STACK_LINE(25)
	this->tileHeight = tileHeight;
	HX_STACK_LINE(27)
	this->spacingX = spacingX;
	HX_STACK_LINE(28)
	this->spacingY = spacingY;
	HX_STACK_LINE(30)
	this->width = width;
	HX_STACK_LINE(31)
	this->height = height;
}
;
	return null();
}

//Region_obj::~Region_obj() { }

Dynamic Region_obj::__CreateEmpty() { return  new Region_obj; }
hx::ObjectPtr< Region_obj > Region_obj::__new(hx::Null< int >  __o_startX,hx::Null< int >  __o_startY,hx::Null< int >  __o_tileWidth,hx::Null< int >  __o_tileHeight,hx::Null< int >  __o_spacingX,hx::Null< int >  __o_spacingY,hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{  hx::ObjectPtr< Region_obj > result = new Region_obj();
	result->__construct(__o_startX,__o_startY,__o_tileWidth,__o_tileHeight,__o_spacingX,__o_spacingY,__o_width,__o_height);
	return result;}

Dynamic Region_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Region_obj > result = new Region_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

int Region_obj::get_numTiles( ){
	HX_STACK_FRAME("flixel.system.layer.Region","get_numTiles",0x6d8e2ff8,"flixel.system.layer.Region.get_numTiles","flixel/system/layer/Region.hx",37,0xdb295b5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	int _g = this->get_numRows();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(38)
	int _g1 = this->get_numCols();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(38)
	return (_g * _g1);
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,get_numTiles,return )

int Region_obj::get_numRows( ){
	HX_STACK_FRAME("flixel.system.layer.Region","get_numRows",0x566f1206,"flixel.system.layer.Region.get_numRows","flixel/system/layer/Region.hx",44,0xdb295b5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	int num = (int)1;		HX_STACK_VAR(num,"num");
	HX_STACK_LINE(47)
	if (((this->tileHeight != (int)0))){
		HX_STACK_LINE(49)
		int _g = ::Std_obj::_int((Float(((this->height + this->spacingY))) / Float(((this->tileHeight + this->spacingY)))));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(49)
		num = _g;
	}
	HX_STACK_LINE(52)
	return num;
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,get_numRows,return )

int Region_obj::get_numCols( ){
	HX_STACK_FRAME("flixel.system.layer.Region","get_numCols",0x4c84d520,"flixel.system.layer.Region.get_numCols","flixel/system/layer/Region.hx",58,0xdb295b5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	int num = (int)1;		HX_STACK_VAR(num,"num");
	HX_STACK_LINE(61)
	if (((this->tileWidth != (int)0))){
		HX_STACK_LINE(63)
		int _g = ::Std_obj::_int((Float(((this->width + this->spacingX))) / Float(((this->tileWidth + this->spacingX)))));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		num = _g;
	}
	HX_STACK_LINE(66)
	return num;
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,get_numCols,return )

::flixel::system::layer::Region Region_obj::clone( ){
	HX_STACK_FRAME("flixel.system.layer.Region","clone",0x18f7f6cd,"flixel.system.layer.Region.clone","flixel/system/layer/Region.hx",71,0xdb295b5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	return ::flixel::system::layer::Region_obj::__new(this->startX,this->startY,this->tileWidth,this->tileHeight,this->spacingX,this->spacingY,this->width,this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,clone,return )


Region_obj::Region_obj()
{
}

Dynamic Region_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"startX") ) { return startX; }
		if (HX_FIELD_EQ(inName,"startY") ) { return startY; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numRows") ) { return inCallProp ? get_numRows() : numRows; }
		if (HX_FIELD_EQ(inName,"numCols") ) { return inCallProp ? get_numCols() : numCols; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"spacingX") ) { return spacingX; }
		if (HX_FIELD_EQ(inName,"spacingY") ) { return spacingY; }
		if (HX_FIELD_EQ(inName,"numTiles") ) { return inCallProp ? get_numTiles() : numTiles; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return tileWidth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return tileHeight; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_numRows") ) { return get_numRows_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numCols") ) { return get_numCols_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_numTiles") ) { return get_numTiles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Region_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"startX") ) { startX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startY") ) { startY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numRows") ) { numRows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numCols") ) { numCols=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"spacingX") ) { spacingX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spacingY") ) { spacingY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numTiles") ) { numTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Region_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("startX"));
	outFields->push(HX_CSTRING("startY"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("tileWidth"));
	outFields->push(HX_CSTRING("tileHeight"));
	outFields->push(HX_CSTRING("spacingX"));
	outFields->push(HX_CSTRING("spacingY"));
	outFields->push(HX_CSTRING("numTiles"));
	outFields->push(HX_CSTRING("numRows"));
	outFields->push(HX_CSTRING("numCols"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Region_obj,startX),HX_CSTRING("startX")},
	{hx::fsInt,(int)offsetof(Region_obj,startY),HX_CSTRING("startY")},
	{hx::fsInt,(int)offsetof(Region_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(Region_obj,height),HX_CSTRING("height")},
	{hx::fsInt,(int)offsetof(Region_obj,tileWidth),HX_CSTRING("tileWidth")},
	{hx::fsInt,(int)offsetof(Region_obj,tileHeight),HX_CSTRING("tileHeight")},
	{hx::fsInt,(int)offsetof(Region_obj,spacingX),HX_CSTRING("spacingX")},
	{hx::fsInt,(int)offsetof(Region_obj,spacingY),HX_CSTRING("spacingY")},
	{hx::fsInt,(int)offsetof(Region_obj,numTiles),HX_CSTRING("numTiles")},
	{hx::fsInt,(int)offsetof(Region_obj,numRows),HX_CSTRING("numRows")},
	{hx::fsInt,(int)offsetof(Region_obj,numCols),HX_CSTRING("numCols")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("startX"),
	HX_CSTRING("startY"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("tileWidth"),
	HX_CSTRING("tileHeight"),
	HX_CSTRING("spacingX"),
	HX_CSTRING("spacingY"),
	HX_CSTRING("numTiles"),
	HX_CSTRING("get_numTiles"),
	HX_CSTRING("numRows"),
	HX_CSTRING("get_numRows"),
	HX_CSTRING("numCols"),
	HX_CSTRING("get_numCols"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Region_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Region_obj::__mClass,"__mClass");
};

#endif

Class Region_obj::__mClass;

void Region_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.layer.Region"), hx::TCanCast< Region_obj> ,sStaticFields,sMemberFields,
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

void Region_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace layer
