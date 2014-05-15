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
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
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
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTileblock
#include <flixel/tile/FlxTileblock.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataPool
#include <flixel/util/FlxBitmapDataPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace flixel{
namespace util{

Void FlxCollision_obj::__construct()
{
	return null();
}

//FlxCollision_obj::~FlxCollision_obj() { }

Dynamic FlxCollision_obj::__CreateEmpty() { return  new FlxCollision_obj; }
hx::ObjectPtr< FlxCollision_obj > FlxCollision_obj::__new()
{  hx::ObjectPtr< FlxCollision_obj > result = new FlxCollision_obj();
	result->__construct();
	return result;}

Dynamic FlxCollision_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCollision_obj > result = new FlxCollision_obj();
	result->__construct();
	return result;}

int FlxCollision_obj::CAMERA_WALL_OUTSIDE;

int FlxCollision_obj::CAMERA_WALL_INSIDE;

::flash::geom::Point FlxCollision_obj::pointA;

::flash::geom::Point FlxCollision_obj::pointB;

::flash::geom::Point FlxCollision_obj::centerA;

::flash::geom::Point FlxCollision_obj::centerB;

::flash::geom::Matrix FlxCollision_obj::matrixA;

::flash::geom::Matrix FlxCollision_obj::matrixB;

::flash::geom::Matrix FlxCollision_obj::testMatrix;

::flash::geom::Rectangle FlxCollision_obj::boundsA;

::flash::geom::Rectangle FlxCollision_obj::boundsB;

bool FlxCollision_obj::pixelPerfectCheck( ::flixel::FlxSprite Contact,::flixel::FlxSprite Target,hx::Null< int >  __o_AlphaTolerance,::flixel::FlxCamera Camera){
int AlphaTolerance = __o_AlphaTolerance.Default(1);
	HX_STACK_FRAME("flixel.util.FlxCollision","pixelPerfectCheck",0xcaf595cd,"flixel.util.FlxCollision.pixelPerfectCheck","flixel/util/FlxCollision.hx",46,0x8c8a7b84)
	HX_STACK_ARG(Contact,"Contact")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(49)
		bool considerRotation = (bool((Contact->angle != (int)0)) || bool((Target->angle != (int)0)));		HX_STACK_VAR(considerRotation,"considerRotation");
		HX_STACK_LINE(51)
		if (((Camera != null()))){
			HX_STACK_LINE(51)
			Camera = Camera;
		}
		else{
			HX_STACK_LINE(51)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(53)
		int _g = ::Std_obj::_int((Camera->scroll->x * Contact->scrollFactor->x));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(53)
		Float _g1 = (Contact->x - _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(53)
		Float _g2 = (_g1 - Contact->offset->x);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(53)
		::flixel::util::FlxCollision_obj::pointA->x = _g2;
		HX_STACK_LINE(54)
		int _g3 = ::Std_obj::_int((Camera->scroll->y * Contact->scrollFactor->y));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(54)
		Float _g4 = (Contact->y - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(54)
		Float _g5 = (_g4 - Contact->offset->y);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(54)
		::flixel::util::FlxCollision_obj::pointA->y = _g5;
		HX_STACK_LINE(56)
		int _g6 = ::Std_obj::_int((Camera->scroll->x * Target->scrollFactor->x));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(56)
		Float _g7 = (Target->x - _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(56)
		Float _g8 = (_g7 - Target->offset->x);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(56)
		::flixel::util::FlxCollision_obj::pointB->x = _g8;
		HX_STACK_LINE(57)
		int _g9 = ::Std_obj::_int((Camera->scroll->y * Target->scrollFactor->y));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(57)
		Float _g10 = (Target->y - _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(57)
		Float _g11 = (_g10 - Target->offset->y);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(57)
		::flixel::util::FlxCollision_obj::pointB->y = _g11;
		HX_STACK_LINE(59)
		if ((considerRotation)){
			HX_STACK_LINE(62)
			::flixel::util::FlxCollision_obj::centerA->setTo(Contact->origin->x,Contact->origin->y);
			HX_STACK_LINE(63)
			::flixel::util::FlxCollision_obj::centerB->setTo(Target->origin->x,Target->origin->y);
			HX_STACK_LINE(66)
			Float _g12 = ::flixel::util::FlxCollision_obj::centerA->get_length();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(66)
			Float _g13 = ((::flixel::util::FlxCollision_obj::pointA->x + ::flixel::util::FlxCollision_obj::centerA->x) - _g12);		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(66)
			::flixel::util::FlxCollision_obj::boundsA->x = _g13;
			HX_STACK_LINE(67)
			Float _g14 = ::flixel::util::FlxCollision_obj::centerA->get_length();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(67)
			Float _g15 = ((::flixel::util::FlxCollision_obj::pointA->y + ::flixel::util::FlxCollision_obj::centerA->y) - _g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(67)
			::flixel::util::FlxCollision_obj::boundsA->y = _g15;
			HX_STACK_LINE(68)
			Float _g16 = ::flixel::util::FlxCollision_obj::centerA->get_length();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(68)
			Float _g17 = (_g16 * (int)2);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(68)
			::flixel::util::FlxCollision_obj::boundsA->width = _g17;
			HX_STACK_LINE(69)
			::flixel::util::FlxCollision_obj::boundsA->height = ::flixel::util::FlxCollision_obj::boundsA->width;
			HX_STACK_LINE(71)
			Float _g18 = ::flixel::util::FlxCollision_obj::centerB->get_length();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(71)
			Float _g19 = ((::flixel::util::FlxCollision_obj::pointB->x + ::flixel::util::FlxCollision_obj::centerB->x) - _g18);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(71)
			::flixel::util::FlxCollision_obj::boundsB->x = _g19;
			HX_STACK_LINE(72)
			Float _g20 = ::flixel::util::FlxCollision_obj::centerB->get_length();		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(72)
			Float _g21 = ((::flixel::util::FlxCollision_obj::pointB->y + ::flixel::util::FlxCollision_obj::centerB->y) - _g20);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(72)
			::flixel::util::FlxCollision_obj::boundsB->y = _g21;
			HX_STACK_LINE(73)
			Float _g22 = ::flixel::util::FlxCollision_obj::centerB->get_length();		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(73)
			Float _g23 = (_g22 * (int)2);		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(73)
			::flixel::util::FlxCollision_obj::boundsB->width = _g23;
			HX_STACK_LINE(74)
			::flixel::util::FlxCollision_obj::boundsB->height = ::flixel::util::FlxCollision_obj::boundsB->width;
		}
		else{
			HX_STACK_LINE(78)
			::flixel::util::FlxCollision_obj::boundsA->x = ::flixel::util::FlxCollision_obj::pointA->x;
			HX_STACK_LINE(79)
			::flixel::util::FlxCollision_obj::boundsA->y = ::flixel::util::FlxCollision_obj::pointA->y;
			HX_STACK_LINE(80)
			::flixel::util::FlxCollision_obj::boundsA->width = Contact->frameWidth;
			HX_STACK_LINE(81)
			::flixel::util::FlxCollision_obj::boundsA->height = Contact->frameHeight;
			HX_STACK_LINE(83)
			::flixel::util::FlxCollision_obj::boundsB->x = ::flixel::util::FlxCollision_obj::pointB->x;
			HX_STACK_LINE(84)
			::flixel::util::FlxCollision_obj::boundsB->y = ::flixel::util::FlxCollision_obj::pointB->y;
			HX_STACK_LINE(85)
			::flixel::util::FlxCollision_obj::boundsB->width = Target->frameWidth;
			HX_STACK_LINE(86)
			::flixel::util::FlxCollision_obj::boundsB->height = Target->frameHeight;
		}
		HX_STACK_LINE(89)
		::flash::geom::Rectangle intersect = ::flixel::util::FlxCollision_obj::boundsA->intersection(::flixel::util::FlxCollision_obj::boundsB);		HX_STACK_VAR(intersect,"intersect");
		HX_STACK_LINE(91)
		if (((  ((!(((  ((!(intersect->isEmpty()))) ? bool((intersect->width < (int)1)) : bool(true) ))))) ? bool((intersect->height < (int)1)) : bool(true) ))){
			HX_STACK_LINE(93)
			return false;
		}
		HX_STACK_LINE(97)
		::flixel::util::FlxCollision_obj::matrixA->identity();
		HX_STACK_LINE(98)
		::flixel::util::FlxCollision_obj::matrixA->translate(-(((intersect->x - ::flixel::util::FlxCollision_obj::boundsA->x))),-(((intersect->y - ::flixel::util::FlxCollision_obj::boundsA->y))));
		HX_STACK_LINE(100)
		::flixel::util::FlxCollision_obj::matrixB->identity();
		HX_STACK_LINE(101)
		::flixel::util::FlxCollision_obj::matrixB->translate(-(((intersect->x - ::flixel::util::FlxCollision_obj::boundsB->x))),-(((intersect->y - ::flixel::util::FlxCollision_obj::boundsB->y))));
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			bool Force = false;		HX_STACK_VAR(Force,"Force");
			HX_STACK_LINE(104)
			Contact->calcFrame(true);
		}
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			bool Force = false;		HX_STACK_VAR(Force,"Force");
			HX_STACK_LINE(105)
			Target->calcFrame(true);
		}
		HX_STACK_LINE(108)
		::flash::display::BitmapData testA = Contact->framePixels;		HX_STACK_VAR(testA,"testA");
		HX_STACK_LINE(109)
		::flash::display::BitmapData testB = Target->framePixels;		HX_STACK_VAR(testB,"testB");
		HX_STACK_LINE(111)
		int overlapWidth = ::Std_obj::_int(intersect->width);		HX_STACK_VAR(overlapWidth,"overlapWidth");
		HX_STACK_LINE(112)
		int overlapHeight = ::Std_obj::_int(intersect->height);		HX_STACK_VAR(overlapHeight,"overlapHeight");
		HX_STACK_LINE(115)
		if ((considerRotation)){
			HX_STACK_LINE(117)
			::flixel::util::FlxCollision_obj::testMatrix->identity();
			HX_STACK_LINE(120)
			::flixel::util::FlxCollision_obj::testMatrix->translate(-(Contact->origin->x),-(Contact->origin->y));
			HX_STACK_LINE(123)
			::flixel::util::FlxCollision_obj::testMatrix->rotate((Contact->angle * ((Float(::Math_obj::PI) / Float((int)180)))));
			HX_STACK_LINE(126)
			::flixel::util::FlxCollision_obj::testMatrix->translate((Float(::flixel::util::FlxCollision_obj::boundsA->width) / Float((int)2)),(Float(::flixel::util::FlxCollision_obj::boundsA->height) / Float((int)2)));
			HX_STACK_LINE(129)
			int _g24 = ::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsA->width);		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(129)
			int _g25 = ::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsA->height);		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(129)
			::flash::display::BitmapData testA2 = ::flixel::util::FlxBitmapDataPool_obj::get(_g24,_g25,true,(int)0,false);		HX_STACK_VAR(testA2,"testA2");
			HX_STACK_LINE(132)
			testA2->draw(testA,::flixel::util::FlxCollision_obj::testMatrix,null(),null(),null(),false);
			HX_STACK_LINE(133)
			testA = testA2;
			HX_STACK_LINE(136)
			::flixel::util::FlxCollision_obj::testMatrix->identity();
			HX_STACK_LINE(137)
			::flixel::util::FlxCollision_obj::testMatrix->translate(-(Target->origin->x),-(Target->origin->y));
			HX_STACK_LINE(138)
			::flixel::util::FlxCollision_obj::testMatrix->rotate((Target->angle * ((Float(::Math_obj::PI) / Float((int)180)))));
			HX_STACK_LINE(139)
			::flixel::util::FlxCollision_obj::testMatrix->translate((Float(::flixel::util::FlxCollision_obj::boundsB->width) / Float((int)2)),(Float(::flixel::util::FlxCollision_obj::boundsB->height) / Float((int)2)));
			HX_STACK_LINE(141)
			int _g26 = ::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsB->width);		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(141)
			int _g27 = ::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsB->height);		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(141)
			::flash::display::BitmapData testB2 = ::flixel::util::FlxBitmapDataPool_obj::get(_g26,_g27,true,(int)0,false);		HX_STACK_VAR(testB2,"testB2");
			HX_STACK_LINE(142)
			testB2->draw(testB,::flixel::util::FlxCollision_obj::testMatrix,null(),null(),null(),false);
			HX_STACK_LINE(143)
			testB = testB2;
		}
		HX_STACK_LINE(146)
		int _g28 = ::Std_obj::_int(-(::flixel::util::FlxCollision_obj::matrixA->tx));		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(146)
		::flixel::util::FlxCollision_obj::boundsA->x = _g28;
		HX_STACK_LINE(147)
		int _g29 = ::Std_obj::_int(-(::flixel::util::FlxCollision_obj::matrixA->ty));		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(147)
		::flixel::util::FlxCollision_obj::boundsA->y = _g29;
		HX_STACK_LINE(148)
		::flixel::util::FlxCollision_obj::boundsA->width = overlapWidth;
		HX_STACK_LINE(149)
		::flixel::util::FlxCollision_obj::boundsA->height = overlapHeight;
		HX_STACK_LINE(151)
		int _g30 = ::Std_obj::_int(-(::flixel::util::FlxCollision_obj::matrixB->tx));		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(151)
		::flixel::util::FlxCollision_obj::boundsB->x = _g30;
		HX_STACK_LINE(152)
		int _g31 = ::Std_obj::_int(-(::flixel::util::FlxCollision_obj::matrixB->ty));		HX_STACK_VAR(_g31,"_g31");
		HX_STACK_LINE(152)
		::flixel::util::FlxCollision_obj::boundsB->y = _g31;
		HX_STACK_LINE(153)
		::flixel::util::FlxCollision_obj::boundsB->width = overlapWidth;
		HX_STACK_LINE(154)
		::flixel::util::FlxCollision_obj::boundsB->height = overlapHeight;
		HX_STACK_LINE(156)
		::flash::utils::ByteArray pixelsA = testA->getPixels(::flixel::util::FlxCollision_obj::boundsA);		HX_STACK_VAR(pixelsA,"pixelsA");
		HX_STACK_LINE(157)
		::flash::utils::ByteArray pixelsB = testB->getPixels(::flixel::util::FlxCollision_obj::boundsB);		HX_STACK_VAR(pixelsB,"pixelsB");
		HX_STACK_LINE(159)
		bool hit = false;		HX_STACK_VAR(hit,"hit");
		HX_STACK_LINE(162)
		int alphaA = (int)0;		HX_STACK_VAR(alphaA,"alphaA");
		HX_STACK_LINE(163)
		int alphaB = (int)0;		HX_STACK_VAR(alphaB,"alphaB");
		HX_STACK_LINE(164)
		int overlapPixels = (overlapWidth * overlapHeight);		HX_STACK_VAR(overlapPixels,"overlapPixels");
		HX_STACK_LINE(165)
		int alphaIdx = (int)0;		HX_STACK_VAR(alphaIdx,"alphaIdx");
		HX_STACK_LINE(168)
		{
			HX_STACK_LINE(168)
			int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(168)
			int _g13 = ::Math_obj::ceil((Float(overlapPixels) / Float((int)2)));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(168)
			while((true)){
				HX_STACK_LINE(168)
				if ((!(((_g12 < _g13))))){
					HX_STACK_LINE(168)
					break;
				}
				HX_STACK_LINE(168)
				int i = (_g12)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(170)
				alphaIdx = (int(i) << int((int)3));
				HX_STACK_LINE(171)
				alphaA = pixelsA->__get(alphaIdx);
				HX_STACK_LINE(172)
				alphaB = pixelsB->__get(alphaIdx);
				HX_STACK_LINE(173)
				if (((bool((alphaA >= AlphaTolerance)) && bool((alphaB >= AlphaTolerance))))){
					HX_STACK_LINE(175)
					hit = true;
					HX_STACK_LINE(176)
					break;
				}
			}
		}
		HX_STACK_LINE(180)
		if ((!(hit))){
			HX_STACK_LINE(182)
			int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(182)
			int _g13 = (int(overlapPixels) >> int((int)1));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(182)
			while((true)){
				HX_STACK_LINE(182)
				if ((!(((_g12 < _g13))))){
					HX_STACK_LINE(182)
					break;
				}
				HX_STACK_LINE(182)
				int i = (_g12)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(184)
				alphaIdx = (((int(i) << int((int)3))) + (int)4);
				HX_STACK_LINE(185)
				alphaA = pixelsA->__get(alphaIdx);
				HX_STACK_LINE(186)
				alphaB = pixelsB->__get(alphaIdx);
				HX_STACK_LINE(187)
				if (((bool((alphaA >= AlphaTolerance)) && bool((alphaB >= AlphaTolerance))))){
					HX_STACK_LINE(189)
					hit = true;
					HX_STACK_LINE(190)
					break;
				}
			}
		}
		HX_STACK_LINE(195)
		if ((considerRotation)){
			HX_STACK_LINE(197)
			::flixel::util::FlxBitmapDataPool_obj::put(testA);
			HX_STACK_LINE(198)
			::flixel::util::FlxBitmapDataPool_obj::put(testB);
		}
		HX_STACK_LINE(201)
		return hit;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectCheck,return )

bool FlxCollision_obj::pixelPerfectPointCheck( int PointX,int PointY,::flixel::FlxSprite Target,hx::Null< int >  __o_AlphaTolerance){
int AlphaTolerance = __o_AlphaTolerance.Default(1);
	HX_STACK_FRAME("flixel.util.FlxCollision","pixelPerfectPointCheck",0x29896333,"flixel.util.FlxCollision.pixelPerfectPointCheck","flixel/util/FlxCollision.hx",217,0x8c8a7b84)
	HX_STACK_ARG(PointX,"PointX")
	HX_STACK_ARG(PointY,"PointY")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance")
{
		HX_STACK_LINE(219)
		int _g = ::Math_obj::floor(Target->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(219)
		int _g1 = ::Math_obj::floor(Target->y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(219)
		Float _g2 = Target->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(219)
		int _g3 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(219)
		Float _g4 = Target->get_height();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(219)
		int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(219)
		bool _g6 = ::flixel::util::FlxMath_obj::pointInCoordinates(PointX,PointY,_g,_g1,_g3,_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(219)
		if (((_g6 == false))){
			HX_STACK_LINE(221)
			return false;
		}
		HX_STACK_LINE(228)
		::flash::display::BitmapData test;		HX_STACK_VAR(test,"test");
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			::flash::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
			HX_STACK_LINE(228)
			if (((Target->frame != null()))){
				HX_STACK_LINE(228)
				if (((bool(Target->flipX) && bool(Target->flipY)))){
					HX_STACK_LINE(228)
					::flash::display::BitmapData _g7 = Target->frame->getHVReversedBitmap();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(228)
					frameBmd = _g7;
				}
				else{
					HX_STACK_LINE(228)
					if ((Target->flipX)){
						HX_STACK_LINE(228)
						::flash::display::BitmapData _g8 = Target->frame->getHReversedBitmap();		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(228)
						frameBmd = _g8;
					}
					else{
						HX_STACK_LINE(228)
						if ((Target->flipY)){
							HX_STACK_LINE(228)
							::flash::display::BitmapData _g9 = Target->frame->getVReversedBitmap();		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(228)
							frameBmd = _g9;
						}
						else{
							HX_STACK_LINE(228)
							::flash::display::BitmapData _g10 = Target->frame->getBitmap();		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(228)
							frameBmd = _g10;
						}
					}
				}
			}
			HX_STACK_LINE(228)
			test = frameBmd;
		}
		HX_STACK_LINE(231)
		int pixelAlpha = (int)0;		HX_STACK_VAR(pixelAlpha,"pixelAlpha");
		HX_STACK_LINE(232)
		int _g13;		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			int _g11 = ::Math_obj::floor((PointX - Target->x));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(232)
			int _g12 = ::Math_obj::floor((PointY - Target->y));		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(232)
			int Color = test->getPixel32(_g11,_g12);		HX_STACK_VAR(Color,"Color");
			HX_STACK_LINE(232)
			_g13 = (int((int(Color) >> int((int)24))) & int((int)255));
		}
		HX_STACK_LINE(232)
		pixelAlpha = _g13;
		HX_STACK_LINE(235)
		int _g14 = ::Std_obj::_int((pixelAlpha * Target->alpha));		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(235)
		pixelAlpha = _g14;
		HX_STACK_LINE(239)
		if (((pixelAlpha >= AlphaTolerance))){
			HX_STACK_LINE(241)
			return true;
		}
		else{
			HX_STACK_LINE(245)
			return false;
		}
		HX_STACK_LINE(239)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectPointCheck,return )

::flixel::group::FlxGroup FlxCollision_obj::createCameraWall( ::flixel::FlxCamera Camera,int Placement,int Thickness,hx::Null< bool >  __o_AdjustWorldBounds){
bool AdjustWorldBounds = __o_AdjustWorldBounds.Default(false);
	HX_STACK_FRAME("flixel.util.FlxCollision","createCameraWall",0x3ca8e03f,"flixel.util.FlxCollision.createCameraWall","flixel/util/FlxCollision.hx",259,0x8c8a7b84)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(Placement,"Placement")
	HX_STACK_ARG(Thickness,"Thickness")
	HX_STACK_ARG(AdjustWorldBounds,"AdjustWorldBounds")
{
		HX_STACK_LINE(260)
		::flixel::tile::FlxTileblock left = null();		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(261)
		::flixel::tile::FlxTileblock right = null();		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(262)
		::flixel::tile::FlxTileblock top = null();		HX_STACK_VAR(top,"top");
		HX_STACK_LINE(263)
		::flixel::tile::FlxTileblock bottom = null();		HX_STACK_VAR(bottom,"bottom");
		HX_STACK_LINE(265)
		switch( (int)(Placement)){
			case (int)0: {
				HX_STACK_LINE(268)
				int _g = ::Math_obj::floor((Camera->x - Thickness));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(268)
				int _g1 = ::Math_obj::floor((Camera->y + Thickness));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(268)
				::flixel::tile::FlxTileblock _g2 = ::flixel::tile::FlxTileblock_obj::__new(_g,_g1,Thickness,(Camera->height - (Thickness * (int)2)));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(268)
				left = _g2;
				HX_STACK_LINE(269)
				int _g3 = ::Math_obj::floor((Camera->x + Camera->width));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(269)
				int _g4 = ::Math_obj::floor((Camera->y + Thickness));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(269)
				::flixel::tile::FlxTileblock _g5 = ::flixel::tile::FlxTileblock_obj::__new(_g3,_g4,Thickness,(Camera->height - (Thickness * (int)2)));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(269)
				right = _g5;
				HX_STACK_LINE(270)
				int _g6 = ::Math_obj::floor((Camera->x - Thickness));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(270)
				int _g7 = ::Math_obj::floor((Camera->y - Thickness));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(270)
				::flixel::tile::FlxTileblock _g8 = ::flixel::tile::FlxTileblock_obj::__new(_g6,_g7,(Camera->width + (Thickness * (int)2)),Thickness);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(270)
				top = _g8;
				HX_STACK_LINE(271)
				int _g9 = ::Math_obj::floor((Camera->x - Thickness));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(271)
				::flixel::tile::FlxTileblock _g10 = ::flixel::tile::FlxTileblock_obj::__new(_g9,Camera->height,(Camera->width + (Thickness * (int)2)),Thickness);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(271)
				bottom = _g10;
				HX_STACK_LINE(273)
				if ((AdjustWorldBounds)){
					HX_STACK_LINE(275)
					::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(275)
					_this->x = (Camera->x - Thickness);
					HX_STACK_LINE(275)
					_this->y = (Camera->y - Thickness);
					HX_STACK_LINE(275)
					_this->width = (Camera->width + (Thickness * (int)2));
					HX_STACK_LINE(275)
					_this->height = (Camera->height + (Thickness * (int)2));
					HX_STACK_LINE(275)
					_this;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(278)
				int _g11 = ::Math_obj::floor(Camera->x);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(278)
				int _g12 = ::Math_obj::floor((Camera->y + Thickness));		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(278)
				::flixel::tile::FlxTileblock _g13 = ::flixel::tile::FlxTileblock_obj::__new(_g11,_g12,Thickness,(Camera->height - (Thickness * (int)2)));		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(278)
				left = _g13;
				HX_STACK_LINE(279)
				int _g14 = ::Math_obj::floor(((Camera->x + Camera->width) - Thickness));		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(279)
				int _g15 = ::Math_obj::floor((Camera->y + Thickness));		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(279)
				::flixel::tile::FlxTileblock _g16 = ::flixel::tile::FlxTileblock_obj::__new(_g14,_g15,Thickness,(Camera->height - (Thickness * (int)2)));		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(279)
				right = _g16;
				HX_STACK_LINE(280)
				int _g17 = ::Math_obj::floor(Camera->x);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(280)
				int _g18 = ::Math_obj::floor(Camera->y);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(280)
				::flixel::tile::FlxTileblock _g19 = ::flixel::tile::FlxTileblock_obj::__new(_g17,_g18,Camera->width,Thickness);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(280)
				top = _g19;
				HX_STACK_LINE(281)
				int _g20 = ::Math_obj::floor(Camera->x);		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(281)
				::flixel::tile::FlxTileblock _g21 = ::flixel::tile::FlxTileblock_obj::__new(_g20,(Camera->height - Thickness),Camera->width,Thickness);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(281)
				bottom = _g21;
				HX_STACK_LINE(283)
				if ((AdjustWorldBounds)){
					HX_STACK_LINE(285)
					::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(285)
					_this->x = Camera->x;
					HX_STACK_LINE(285)
					_this->y = Camera->y;
					HX_STACK_LINE(285)
					_this->width = Camera->width;
					HX_STACK_LINE(285)
					_this->height = Camera->height;
					HX_STACK_LINE(285)
					_this;
				}
			}
			;break;
		}
		HX_STACK_LINE(289)
		::flixel::group::FlxGroup result = ::flixel::group::FlxGroup_obj::__new((int)4);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(291)
		result->add(left);
		HX_STACK_LINE(292)
		result->add(right);
		HX_STACK_LINE(293)
		result->add(top);
		HX_STACK_LINE(294)
		result->add(bottom);
		HX_STACK_LINE(296)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,createCameraWall,return )


FlxCollision_obj::FlxCollision_obj()
{
}

Dynamic FlxCollision_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pointA") ) { return pointA; }
		if (HX_FIELD_EQ(inName,"pointB") ) { return pointB; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"centerA") ) { return centerA; }
		if (HX_FIELD_EQ(inName,"centerB") ) { return centerB; }
		if (HX_FIELD_EQ(inName,"matrixA") ) { return matrixA; }
		if (HX_FIELD_EQ(inName,"matrixB") ) { return matrixB; }
		if (HX_FIELD_EQ(inName,"boundsA") ) { return boundsA; }
		if (HX_FIELD_EQ(inName,"boundsB") ) { return boundsB; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testMatrix") ) { return testMatrix; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createCameraWall") ) { return createCameraWall_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"pixelPerfectCheck") ) { return pixelPerfectCheck_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"pixelPerfectPointCheck") ) { return pixelPerfectPointCheck_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxCollision_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pointA") ) { pointA=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pointB") ) { pointB=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"centerA") ) { centerA=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"centerB") ) { centerB=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrixA") ) { matrixA=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrixB") ) { matrixB=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"boundsA") ) { boundsA=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"boundsB") ) { boundsB=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testMatrix") ) { testMatrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxCollision_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CAMERA_WALL_OUTSIDE"),
	HX_CSTRING("CAMERA_WALL_INSIDE"),
	HX_CSTRING("pointA"),
	HX_CSTRING("pointB"),
	HX_CSTRING("centerA"),
	HX_CSTRING("centerB"),
	HX_CSTRING("matrixA"),
	HX_CSTRING("matrixB"),
	HX_CSTRING("testMatrix"),
	HX_CSTRING("boundsA"),
	HX_CSTRING("boundsB"),
	HX_CSTRING("pixelPerfectCheck"),
	HX_CSTRING("pixelPerfectPointCheck"),
	HX_CSTRING("createCameraWall"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::CAMERA_WALL_OUTSIDE,"CAMERA_WALL_OUTSIDE");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::CAMERA_WALL_INSIDE,"CAMERA_WALL_INSIDE");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::pointA,"pointA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::pointB,"pointB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::centerA,"centerA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::centerB,"centerB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::matrixA,"matrixA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::matrixB,"matrixB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::testMatrix,"testMatrix");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::boundsA,"boundsA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::boundsB,"boundsB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::CAMERA_WALL_OUTSIDE,"CAMERA_WALL_OUTSIDE");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::CAMERA_WALL_INSIDE,"CAMERA_WALL_INSIDE");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::pointA,"pointA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::pointB,"pointB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::centerA,"centerA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::centerB,"centerB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::matrixA,"matrixA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::matrixB,"matrixB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::testMatrix,"testMatrix");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::boundsA,"boundsA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::boundsB,"boundsB");
};

#endif

Class FlxCollision_obj::__mClass;

void FlxCollision_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxCollision"), hx::TCanCast< FlxCollision_obj> ,sStaticFields,sMemberFields,
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

void FlxCollision_obj::__boot()
{
	CAMERA_WALL_OUTSIDE= (int)0;
	CAMERA_WALL_INSIDE= (int)1;
	pointA= ::flash::geom::Point_obj::__new(null(),null());
	pointB= ::flash::geom::Point_obj::__new(null(),null());
	centerA= ::flash::geom::Point_obj::__new(null(),null());
	centerB= ::flash::geom::Point_obj::__new(null(),null());
	matrixA= ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	matrixB= ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	testMatrix= ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	boundsA= ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	boundsB= ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
}

} // end namespace flixel
} // end namespace util
