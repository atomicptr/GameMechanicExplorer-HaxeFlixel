#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxRotatedFrame
#include <flixel/system/layer/frames/FlxRotatedFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FrameType
#include <flixel/system/layer/frames/FrameType.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace system{
namespace layer{
namespace frames{

Void FlxRotatedFrame_obj::__construct(::flixel::system::layer::TileSheetData tileSheet)
{
HX_STACK_FRAME("flixel.system.layer.frames.FlxRotatedFrame","new",0x9022602a,"flixel.system.layer.frames.FlxRotatedFrame.new","flixel/system/layer/frames/FlxRotatedFrame.hx",10,0x68b07e86)
HX_STACK_THIS(this)
HX_STACK_ARG(tileSheet,"tileSheet")
{
	HX_STACK_LINE(11)
	super::__construct(tileSheet);
	HX_STACK_LINE(13)
	this->type = ::flixel::system::layer::frames::FrameType_obj::ROTATED;
}
;
	return null();
}

//FlxRotatedFrame_obj::~FlxRotatedFrame_obj() { }

Dynamic FlxRotatedFrame_obj::__CreateEmpty() { return  new FlxRotatedFrame_obj; }
hx::ObjectPtr< FlxRotatedFrame_obj > FlxRotatedFrame_obj::__new(::flixel::system::layer::TileSheetData tileSheet)
{  hx::ObjectPtr< FlxRotatedFrame_obj > result = new FlxRotatedFrame_obj();
	result->__construct(tileSheet);
	return result;}

Dynamic FlxRotatedFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxRotatedFrame_obj > result = new FlxRotatedFrame_obj();
	result->__construct(inArgs[0]);
	return result;}

::flash::display::BitmapData FlxRotatedFrame_obj::paintOnBitmap( ::flash::display::BitmapData bmd){
	HX_STACK_FRAME("flixel.system.layer.frames.FlxRotatedFrame","paintOnBitmap",0xb37f3876,"flixel.system.layer.frames.FlxRotatedFrame.paintOnBitmap","flixel/system/layer/frames/FlxRotatedFrame.hx",17,0x68b07e86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmd,"bmd")
	HX_STACK_LINE(18)
	::flash::display::BitmapData result = null();		HX_STACK_VAR(result,"result");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::system::layer::frames::FlxRotatedFrame_obj > __this,::flash::display::BitmapData &bmd){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/layer/frames/FlxRotatedFrame.hx",20,0x68b07e86)
			{
				HX_STACK_LINE(20)
				int _g = bmd->get_width();		HX_STACK_VAR(_g,"_g");
				struct _Function_2_1{
					inline static bool Block( hx::ObjectPtr< ::flixel::system::layer::frames::FlxRotatedFrame_obj > __this,::flash::display::BitmapData &bmd){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/layer/frames/FlxRotatedFrame.hx",20,0x68b07e86)
						{
							HX_STACK_LINE(20)
							int _g1 = bmd->get_height();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(20)
							return (_g1 == __this->sourceSize->y);
						}
						return null();
					}
				};
				HX_STACK_LINE(20)
				return (  (((_g == __this->sourceSize->x))) ? bool(_Function_2_1::Block(__this,bmd)) : bool(false) );
			}
			return null();
		}
	};
	HX_STACK_LINE(20)
	if (((  (((bmd != null()))) ? bool(_Function_1_1::Block(this,bmd)) : bool(false) ))){
		HX_STACK_LINE(22)
		result = bmd;
	}
	else{
		HX_STACK_LINE(24)
		if (((bmd != null()))){
			HX_STACK_LINE(26)
			bmd->dispose();
		}
	}
	HX_STACK_LINE(29)
	if (((result == null()))){
		HX_STACK_LINE(31)
		int _g2 = ::Std_obj::_int(this->sourceSize->x);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		int _g3 = ::Std_obj::_int(this->sourceSize->y);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		::flash::display::BitmapData _g4 = ::flash::display::BitmapData_obj::__new(_g2,_g3,true,(int)0,null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(31)
		result = _g4;
	}
	HX_STACK_LINE(34)
	int _g5 = ::Std_obj::_int(this->frame->width);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(34)
	int _g6 = ::Std_obj::_int(this->frame->height);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(34)
	::flash::display::BitmapData temp = ::flash::display::BitmapData_obj::__new(_g5,_g6,true,(int)0,null());		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(35)
	Float _g7 = ::flixel::system::layer::frames::FlxFrame_obj::POINT->y = (int)0;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(35)
	::flixel::system::layer::frames::FlxFrame_obj::POINT->x = _g7;
	HX_STACK_LINE(36)
	temp->copyPixels(this->_tileSheet->bitmap,this->frame,::flixel::system::layer::frames::FlxFrame_obj::POINT,null(),null(),null());
	HX_STACK_LINE(38)
	::flixel::system::layer::frames::FlxFrame_obj::MATRIX->identity();
	HX_STACK_LINE(39)
	::flixel::system::layer::frames::FlxFrame_obj::MATRIX->translate((-0.5 * this->frame->width),(-0.5 * this->frame->height));
	HX_STACK_LINE(40)
	::flixel::system::layer::frames::FlxFrame_obj::MATRIX->rotate((-90. * ((Float(::Math_obj::PI) / Float((int)180)))));
	HX_STACK_LINE(41)
	::flixel::system::layer::frames::FlxFrame_obj::MATRIX->translate((this->offset->x + (0.5 * this->frame->height)),(this->offset->y + (0.5 * this->frame->width)));
	HX_STACK_LINE(43)
	int _g8 = ::Std_obj::_int(this->sourceSize->x);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(43)
	int _g9 = ::Std_obj::_int(this->sourceSize->y);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(43)
	::flash::display::BitmapData _g10 = ::flash::display::BitmapData_obj::__new(_g8,_g9,true,(int)0,null());		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(43)
	result = _g10;
	HX_STACK_LINE(44)
	result->draw(temp,::flixel::system::layer::frames::FlxFrame_obj::MATRIX,null(),null(),null(),null());
	HX_STACK_LINE(45)
	temp->dispose();
	HX_STACK_LINE(47)
	return result;
}



FlxRotatedFrame_obj::FlxRotatedFrame_obj()
{
}

Dynamic FlxRotatedFrame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"paintOnBitmap") ) { return paintOnBitmap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxRotatedFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxRotatedFrame_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("paintOnBitmap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRotatedFrame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRotatedFrame_obj::__mClass,"__mClass");
};

#endif

Class FlxRotatedFrame_obj::__mClass;

void FlxRotatedFrame_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.layer.frames.FlxRotatedFrame"), hx::TCanCast< FlxRotatedFrame_obj> ,sStaticFields,sMemberFields,
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

void FlxRotatedFrame_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace layer
} // end namespace frames
