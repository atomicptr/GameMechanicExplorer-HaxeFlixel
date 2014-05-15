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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_FlxBGSprite
#include <flixel/system/FlxBGSprite.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
namespace flixel{
namespace system{

Void FlxBGSprite_obj::__construct()
{
HX_STACK_FRAME("flixel.system.FlxBGSprite","new",0x62e2bd41,"flixel.system.FlxBGSprite.new","flixel/system/FlxBGSprite.hx",18,0xa9844f6f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(20)
	::String _g = ::flixel::FlxG_obj::bitmap->getUniqueKey(HX_CSTRING("bg_graphic_"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(20)
	this->makeGraphic((int)1,(int)1,(int)0,true,_g);
	HX_STACK_LINE(21)
	this->scrollFactor->set(null(),null());
}
;
	return null();
}

//FlxBGSprite_obj::~FlxBGSprite_obj() { }

Dynamic FlxBGSprite_obj::__CreateEmpty() { return  new FlxBGSprite_obj; }
hx::ObjectPtr< FlxBGSprite_obj > FlxBGSprite_obj::__new()
{  hx::ObjectPtr< FlxBGSprite_obj > result = new FlxBGSprite_obj();
	result->__construct();
	return result;}

Dynamic FlxBGSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBGSprite_obj > result = new FlxBGSprite_obj();
	result->__construct();
	return result;}

Void FlxBGSprite_obj::draw( ){
{
		HX_STACK_FRAME("flixel.system.FlxBGSprite","draw",0x1cf08403,"flixel.system.FlxBGSprite.draw","flixel/system/FlxBGSprite.hx",28,0xa9844f6f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		::flixel::system::layer::DrawStackItem drawItem;		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(30)
		Array< Float > currDrawData;		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(31)
		int currIndex;		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(33)
			Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(33)
			while((true)){
				HX_STACK_LINE(33)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(33)
					break;
				}
				HX_STACK_LINE(33)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(33)
				++(_g);
				HX_STACK_LINE(35)
				if (((bool(!(camera->visible)) || bool(!(camera->exists))))){
					HX_STACK_LINE(37)
					continue;
				}
				HX_STACK_LINE(40)
				::flixel::system::layer::DrawStackItem _g2 = camera->getDrawStackItem(this->cachedGraphics,this->isColored,this->_blendInt,null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(40)
				drawItem = _g2;
				HX_STACK_LINE(41)
				currDrawData = drawItem->drawData;
				HX_STACK_LINE(42)
				currIndex = drawItem->position;
				HX_STACK_LINE(44)
				this->_point->set_x((camera->width * 0.5));
				HX_STACK_LINE(45)
				this->_point->set_y((camera->height * 0.5));
				HX_STACK_LINE(47)
				Float csx = camera->width;		HX_STACK_VAR(csx,"csx");
				HX_STACK_LINE(48)
				Float ssy = (int)0;		HX_STACK_VAR(ssy,"ssy");
				HX_STACK_LINE(49)
				Float ssx = (int)0;		HX_STACK_VAR(ssx,"ssx");
				HX_STACK_LINE(50)
				Float csy = camera->height;		HX_STACK_VAR(csy,"csy");
				HX_STACK_LINE(52)
				int _g11 = (currIndex)++;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(52)
				currDrawData[_g11] = this->_point->x;
				HX_STACK_LINE(53)
				int _g21 = (currIndex)++;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(53)
				currDrawData[_g21] = this->_point->y;
				HX_STACK_LINE(55)
				int _g3 = (currIndex)++;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(55)
				currDrawData[_g3] = this->frame->tileID;
				HX_STACK_LINE(57)
				int _g4 = (currIndex)++;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(57)
				currDrawData[_g4] = csx;
				HX_STACK_LINE(58)
				int _g5 = (currIndex)++;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(58)
				currDrawData[_g5] = ssx;
				HX_STACK_LINE(59)
				int _g6 = (currIndex)++;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(59)
				currDrawData[_g6] = -(ssy);
				HX_STACK_LINE(60)
				int _g7 = (currIndex)++;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(60)
				currDrawData[_g7] = csy;
				HX_STACK_LINE(62)
				if ((this->isColored)){
					HX_STACK_LINE(64)
					int _g8 = (currIndex)++;		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(64)
					currDrawData[_g8] = this->_red;
					HX_STACK_LINE(65)
					int _g9 = (currIndex)++;		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(65)
					currDrawData[_g9] = this->_green;
					HX_STACK_LINE(66)
					int _g10 = (currIndex)++;		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(66)
					currDrawData[_g10] = this->_blue;
				}
				HX_STACK_LINE(68)
				int _g111 = (currIndex)++;		HX_STACK_VAR(_g111,"_g111");
				HX_STACK_LINE(68)
				currDrawData[_g111] = this->alpha;
				HX_STACK_LINE(69)
				drawItem->position = currIndex;
			}
		}
	}
return null();
}



FlxBGSprite_obj::FlxBGSprite_obj()
{
}

Dynamic FlxBGSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBGSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBGSprite_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBGSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBGSprite_obj::__mClass,"__mClass");
};

#endif

Class FlxBGSprite_obj::__mClass;

void FlxBGSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.FlxBGSprite"), hx::TCanCast< FlxBGSprite_obj> ,sStaticFields,sMemberFields,
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

void FlxBGSprite_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
