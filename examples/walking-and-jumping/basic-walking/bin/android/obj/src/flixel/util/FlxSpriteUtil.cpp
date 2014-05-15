#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_CapsStyle
#include <flash/display/CapsStyle.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_JointStyle
#include <flash/display/JointStyle.h>
#endif
#ifndef INCLUDED_flash_display_LineScaleMode
#include <flash/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
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
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
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
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace util{

Void FlxSpriteUtil_obj::__construct()
{
	return null();
}

//FlxSpriteUtil_obj::~FlxSpriteUtil_obj() { }

Dynamic FlxSpriteUtil_obj::__CreateEmpty() { return  new FlxSpriteUtil_obj; }
hx::ObjectPtr< FlxSpriteUtil_obj > FlxSpriteUtil_obj::__new()
{  hx::ObjectPtr< FlxSpriteUtil_obj > result = new FlxSpriteUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxSpriteUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSpriteUtil_obj > result = new FlxSpriteUtil_obj();
	result->__construct();
	return result;}

::flash::display::Sprite FlxSpriteUtil_obj::flashGfxSprite;

::flash::display::Graphics FlxSpriteUtil_obj::flashGfx;

::flixel::FlxSprite FlxSpriteUtil_obj::alphaMask( ::flixel::FlxSprite output,Dynamic source,Dynamic mask){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","alphaMask",0xaad6793b,"flixel.util.FlxSpriteUtil.alphaMask","flixel/util/FlxSpriteUtil.hx",52,0xc647097f)
	HX_STACK_ARG(output,"output")
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_LINE(53)
	::flash::display::BitmapData data = null();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(54)
	if ((::Std_obj::is(source,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(56)
		::flash::display::BitmapData _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			::String id = source;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(56)
			_g = ::openfl::Assets_obj::getBitmapData(id,false);
		}
		HX_STACK_LINE(56)
		data = _g;
	}
	else{
		HX_STACK_LINE(58)
		if ((::Std_obj::is(source,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(60)
			data = ::Type_obj::createInstance(source,Dynamic( Array_obj<Dynamic>::__new()))->__Field(HX_CSTRING("bitmapData"),true);
		}
		else{
			HX_STACK_LINE(62)
			if ((::Std_obj::is(source,hx::ClassOf< ::flash::display::BitmapData >()))){
				HX_STACK_LINE(64)
				::flash::display::BitmapData _g1 = (hx::TCast< flash::display::BitmapData >::cast(source))->clone();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(64)
				data = _g1;
			}
			else{
				HX_STACK_LINE(68)
				return null();
			}
		}
	}
	HX_STACK_LINE(70)
	::flash::display::BitmapData maskData = null();		HX_STACK_VAR(maskData,"maskData");
	HX_STACK_LINE(71)
	if ((::Std_obj::is(mask,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(73)
		::flash::display::BitmapData _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			::String id = mask;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(73)
			_g2 = ::openfl::Assets_obj::getBitmapData(id,false);
		}
		HX_STACK_LINE(73)
		maskData = _g2;
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(mask,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(77)
			maskData = ::Type_obj::createInstance(mask,Dynamic( Array_obj<Dynamic>::__new()))->__Field(HX_CSTRING("bitmapData"),true);
		}
		else{
			HX_STACK_LINE(79)
			if ((::Std_obj::is(mask,hx::ClassOf< ::flash::display::BitmapData >()))){
				HX_STACK_LINE(81)
				maskData = mask;
			}
			else{
				HX_STACK_LINE(85)
				return null();
			}
		}
	}
	HX_STACK_LINE(88)
	int _g3 = data->get_width();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(88)
	int _g4 = data->get_height();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(88)
	::flash::geom::Rectangle _g5 = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,_g3,_g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(88)
	::flash::geom::Point _g6 = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(88)
	data->copyChannel(maskData,_g5,_g6,(int)8,(int)8);
	HX_STACK_LINE(89)
	output->set_pixels(data);
	HX_STACK_LINE(90)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,alphaMask,return )

::flixel::FlxSprite FlxSpriteUtil_obj::alphaMaskFlxSprite( ::flixel::FlxSprite sprite,::flixel::FlxSprite mask,::flixel::FlxSprite output){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","alphaMaskFlxSprite",0x13c0dd5c,"flixel.util.FlxSpriteUtil.alphaMaskFlxSprite","flixel/util/FlxSpriteUtil.hx",106,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(107)
	{
		HX_STACK_LINE(107)
		bool Force = false;		HX_STACK_VAR(Force,"Force");
		HX_STACK_LINE(107)
		sprite->calcFrame(true);
	}
	HX_STACK_LINE(108)
	::flash::display::BitmapData data = sprite->get_pixels()->clone();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(109)
	::flash::display::BitmapData _g = mask->get_pixels();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(109)
	Float _g1 = sprite->get_width();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(109)
	Float _g2 = sprite->get_height();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(109)
	::flash::geom::Rectangle _g3 = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,_g1,_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(109)
	::flash::geom::Point _g4 = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(109)
	data->copyChannel(_g,_g3,_g4,(int)8,(int)8);
	HX_STACK_LINE(110)
	output->set_pixels(data);
	HX_STACK_LINE(111)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,alphaMaskFlxSprite,return )

::flixel::FlxSprite FlxSpriteUtil_obj::screenWrap( ::flixel::FlxSprite sprite,hx::Null< bool >  __o_Left,hx::Null< bool >  __o_Right,hx::Null< bool >  __o_Top,hx::Null< bool >  __o_Bottom){
bool Left = __o_Left.Default(true);
bool Right = __o_Right.Default(true);
bool Top = __o_Top.Default(true);
bool Bottom = __o_Bottom.Default(true);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","screenWrap",0x74418065,"flixel.util.FlxSpriteUtil.screenWrap","flixel/util/FlxSpriteUtil.hx",126,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(Left,"Left")
	HX_STACK_ARG(Right,"Right")
	HX_STACK_ARG(Top,"Top")
	HX_STACK_ARG(Bottom,"Bottom")
{
		HX_STACK_LINE(127)
		if (((bool(Left) && bool(((sprite->x + sprite->frameWidth) <= (int)0))))){
			HX_STACK_LINE(129)
			sprite->set_x(::flixel::FlxG_obj::width);
		}
		else{
			HX_STACK_LINE(131)
			if (((bool(Right) && bool((sprite->x >= ::flixel::FlxG_obj::width))))){
				HX_STACK_LINE(133)
				sprite->set_x((int)0);
			}
		}
		HX_STACK_LINE(136)
		if (((bool(Top) && bool(((sprite->y + sprite->frameHeight) <= (int)0))))){
			HX_STACK_LINE(138)
			sprite->set_y(::flixel::FlxG_obj::height);
		}
		else{
			HX_STACK_LINE(140)
			if (((bool(Bottom) && bool((sprite->y >= ::flixel::FlxG_obj::height))))){
				HX_STACK_LINE(142)
				sprite->set_y((int)0);
			}
		}
		HX_STACK_LINE(144)
		return sprite;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxSpriteUtil_obj,screenWrap,return )

::flixel::FlxSprite FlxSpriteUtil_obj::bound( ::flixel::FlxSprite sprite,hx::Null< Float >  __o_MinX,hx::Null< Float >  __o_MaxX,hx::Null< Float >  __o_MinY,hx::Null< Float >  __o_MaxY){
Float MinX = __o_MinX.Default(0);
Float MaxX = __o_MaxX.Default(0);
Float MinY = __o_MinY.Default(0);
Float MaxY = __o_MaxY.Default(0);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","bound",0x7d89918f,"flixel.util.FlxSpriteUtil.bound","flixel/util/FlxSpriteUtil.hx",159,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(MinX,"MinX")
	HX_STACK_ARG(MaxX,"MaxX")
	HX_STACK_ARG(MinY,"MinY")
	HX_STACK_ARG(MaxY,"MaxY")
{
		HX_STACK_LINE(160)
		if (((MaxX <= (int)0))){
			HX_STACK_LINE(162)
			MaxX = ::flixel::FlxG_obj::width;
		}
		HX_STACK_LINE(164)
		if (((MaxY <= (int)0))){
			HX_STACK_LINE(166)
			MaxY = ::flixel::FlxG_obj::height;
		}
		HX_STACK_LINE(169)
		hx::SubEq(MaxX,sprite->frameWidth);
		HX_STACK_LINE(170)
		hx::SubEq(MaxY,sprite->frameHeight);
		struct _Function_1_1{
			inline static Float Block( ::flixel::FlxSprite &sprite,Float &MaxX,Float &MinX){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",172,0xc647097f)
				{
					HX_STACK_LINE(172)
					Float Value = sprite->x;		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(172)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(172)
					if (((Value < MinX))){
						HX_STACK_LINE(172)
						lowerBound = MinX;
					}
					else{
						HX_STACK_LINE(172)
						lowerBound = Value;
					}
					HX_STACK_LINE(172)
					return (  (((lowerBound > MaxX))) ? Float(MaxX) : Float(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(172)
		sprite->set_x(_Function_1_1::Block(sprite,MaxX,MinX));
		struct _Function_1_2{
			inline static Float Block( Float &MaxY,::flixel::FlxSprite &sprite,Float &MinY){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",173,0xc647097f)
				{
					HX_STACK_LINE(173)
					Float Value = sprite->y;		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(173)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(173)
					if (((Value < MinY))){
						HX_STACK_LINE(173)
						lowerBound = MinY;
					}
					else{
						HX_STACK_LINE(173)
						lowerBound = Value;
					}
					HX_STACK_LINE(173)
					return (  (((lowerBound > MaxY))) ? Float(MaxY) : Float(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(173)
		sprite->set_y(_Function_1_2::Block(MaxY,sprite,MinY));
		HX_STACK_LINE(175)
		return sprite;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxSpriteUtil_obj,bound,return )

Void FlxSpriteUtil_obj::space( Array< ::Dynamic > objects,int startX,int startY,hx::Null< int >  __o_horizontalSpacing,hx::Null< int >  __o_verticalSpacing,hx::Null< bool >  __o_spaceFromBounds){
int horizontalSpacing = __o_horizontalSpacing.Default(0);
int verticalSpacing = __o_verticalSpacing.Default(0);
bool spaceFromBounds = __o_spaceFromBounds.Default(false);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","space",0x47f36e17,"flixel.util.FlxSpriteUtil.space","flixel/util/FlxSpriteUtil.hx",189,0xc647097f)
	HX_STACK_ARG(objects,"objects")
	HX_STACK_ARG(startX,"startX")
	HX_STACK_ARG(startY,"startY")
	HX_STACK_ARG(horizontalSpacing,"horizontalSpacing")
	HX_STACK_ARG(verticalSpacing,"verticalSpacing")
	HX_STACK_ARG(spaceFromBounds,"spaceFromBounds")
{
		HX_STACK_LINE(190)
		int prevWidth = (int)0;		HX_STACK_VAR(prevWidth,"prevWidth");
		HX_STACK_LINE(191)
		int prevHeight = (int)0;		HX_STACK_VAR(prevHeight,"prevHeight");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(193)
			int _g = objects->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(193)
			while((true)){
				HX_STACK_LINE(193)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(193)
					break;
				}
				HX_STACK_LINE(193)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(195)
				::flixel::FlxObject object = objects->__get(i).StaticCast< ::flixel::FlxObject >();		HX_STACK_VAR(object,"object");
				HX_STACK_LINE(197)
				if ((spaceFromBounds)){
					HX_STACK_LINE(199)
					object->set_x(((startX + prevWidth) + (i * horizontalSpacing)));
					HX_STACK_LINE(200)
					object->set_y(((startY + prevHeight) + (i * verticalSpacing)));
				}
				else{
					HX_STACK_LINE(204)
					object->set_x((startX + (i * horizontalSpacing)));
					HX_STACK_LINE(205)
					object->set_y((startY + (i * verticalSpacing)));
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxSpriteUtil_obj,space,(void))

::flixel::FlxObject FlxSpriteUtil_obj::screenCenter( ::flixel::FlxObject object,hx::Null< bool >  __o_xAxis,hx::Null< bool >  __o_yAxis){
bool xAxis = __o_xAxis.Default(true);
bool yAxis = __o_yAxis.Default(true);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","screenCenter",0xb5308930,"flixel.util.FlxSpriteUtil.screenCenter","flixel/util/FlxSpriteUtil.hx",219,0xc647097f)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(xAxis,"xAxis")
	HX_STACK_ARG(yAxis,"yAxis")
{
		HX_STACK_LINE(220)
		if ((xAxis)){
			HX_STACK_LINE(222)
			Float _g = object->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(222)
			Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(222)
			Float _g2 = ((Float(::flixel::FlxG_obj::width) / Float((int)2)) - _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(222)
			object->set_x(_g2);
		}
		HX_STACK_LINE(225)
		if ((yAxis)){
			HX_STACK_LINE(227)
			Float _g3 = object->get_height();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(227)
			Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(227)
			Float _g5 = ((Float(::flixel::FlxG_obj::height) / Float((int)2)) - _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(227)
			object->set_y(_g5);
		}
		HX_STACK_LINE(230)
		return object;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,screenCenter,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawLine( ::flixel::FlxSprite sprite,Float StartX,Float StartY,Float EndX,Float EndY,Dynamic lineStyle,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawLine",0x239cc967,"flixel.util.FlxSpriteUtil.drawLine","flixel/util/FlxSpriteUtil.hx",249,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(StartX,"StartX")
	HX_STACK_ARG(StartY,"StartY")
	HX_STACK_ARG(EndX,"EndX")
	HX_STACK_ARG(EndY,"EndY")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(250)
	{
		HX_STACK_LINE(250)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
		HX_STACK_LINE(250)
		if (((lineStyle != null()))){
			HX_STACK_LINE(250)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(250)
			Float alpha;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(250)
			if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
				HX_STACK_LINE(250)
				color = (int)0;
				HX_STACK_LINE(250)
				alpha = (int)1;
			}
			else{
				HX_STACK_LINE(250)
				{
					HX_STACK_LINE(250)
					int Color = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color,"Color");
					HX_STACK_LINE(250)
					color = (int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255))));
				}
				HX_STACK_LINE(250)
				{
					HX_STACK_LINE(250)
					int Color = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color,"Color");
					HX_STACK_LINE(250)
					int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(250)
					alpha = (Float(f) / Float((int)255));
				}
			}
			HX_STACK_LINE(250)
			if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
				HX_STACK_LINE(250)
				lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
			}
			HX_STACK_LINE(250)
			if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
				HX_STACK_LINE(250)
				lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
			}
			HX_STACK_LINE(250)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),color,alpha,lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
		}
		struct _Function_2_1{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",250,0xc647097f)
				{
					HX_STACK_LINE(250)
					int f = (int)0;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(250)
					return (Float(f) / Float((int)255));
				}
				return null();
			}
		};
		HX_STACK_LINE(250)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int)0,_Function_2_1::Block());
	}
	HX_STACK_LINE(251)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->moveTo(StartX,StartY);
	HX_STACK_LINE(252)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo(EndX,EndY);
	HX_STACK_LINE(253)
	{
		HX_STACK_LINE(253)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
		HX_STACK_LINE(253)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
		HX_STACK_LINE(253)
		sprite;
	}
	HX_STACK_LINE(254)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,drawLine,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawRect( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,int Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawRect",0x2790fe97,"flixel.util.FlxSpriteUtil.drawRect","flixel/util/FlxSpriteUtil.hx",272,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(fillStyle,"fillStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(273)
	{
		HX_STACK_LINE(273)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
		HX_STACK_LINE(273)
		if (((lineStyle != null()))){
			HX_STACK_LINE(273)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(273)
			Float alpha;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(273)
			if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
				HX_STACK_LINE(273)
				color = (int)0;
				HX_STACK_LINE(273)
				alpha = (int)1;
			}
			else{
				HX_STACK_LINE(273)
				{
					HX_STACK_LINE(273)
					int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
					HX_STACK_LINE(273)
					color = (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
				}
				HX_STACK_LINE(273)
				{
					HX_STACK_LINE(273)
					int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
					HX_STACK_LINE(273)
					int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(273)
					alpha = (Float(f) / Float((int)255));
				}
			}
			HX_STACK_LINE(273)
			if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
				HX_STACK_LINE(273)
				lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
			}
			HX_STACK_LINE(273)
			if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
				HX_STACK_LINE(273)
				lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
			}
			HX_STACK_LINE(273)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),color,alpha,lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
		}
		HX_STACK_LINE(273)
		if (((bool((fillStyle != null())) && bool(fillStyle->__Field(HX_CSTRING("hasFill"),true))))){
			struct _Function_3_1{
				inline static int Block( Dynamic &fillStyle){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",273,0xc647097f)
					{
						HX_STACK_LINE(273)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(273)
						return (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static Float Block( Dynamic &fillStyle){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",273,0xc647097f)
					{
						HX_STACK_LINE(273)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(273)
						int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(273)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(273)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill(_Function_3_1::Block(fillStyle),_Function_3_2::Block(fillStyle));
		}
		else{
			struct _Function_3_1{
				inline static Float Block( int &Color){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",273,0xc647097f)
					{
						HX_STACK_LINE(273)
						int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(273)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(273)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255)))),_Function_3_1::Block(Color));
		}
	}
	HX_STACK_LINE(274)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->drawRect(X,Y,Width,Height);
	HX_STACK_LINE(275)
	{
		HX_STACK_LINE(275)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
		HX_STACK_LINE(275)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
		HX_STACK_LINE(275)
		sprite;
	}
	HX_STACK_LINE(276)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxSpriteUtil_obj,drawRect,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawRoundRect( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,Float EllipseWidth,Float EllipseHeight,int Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawRoundRect",0x00e2de3f,"flixel.util.FlxSpriteUtil.drawRoundRect","flixel/util/FlxSpriteUtil.hx",296,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(EllipseWidth,"EllipseWidth")
	HX_STACK_ARG(EllipseHeight,"EllipseHeight")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(fillStyle,"fillStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(297)
	{
		HX_STACK_LINE(297)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
		HX_STACK_LINE(297)
		if (((lineStyle != null()))){
			HX_STACK_LINE(297)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(297)
			Float alpha;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(297)
			if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
				HX_STACK_LINE(297)
				color = (int)0;
				HX_STACK_LINE(297)
				alpha = (int)1;
			}
			else{
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
					HX_STACK_LINE(297)
					color = (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
				}
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
					HX_STACK_LINE(297)
					int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(297)
					alpha = (Float(f) / Float((int)255));
				}
			}
			HX_STACK_LINE(297)
			if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
				HX_STACK_LINE(297)
				lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
			}
			HX_STACK_LINE(297)
			if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
				HX_STACK_LINE(297)
				lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
			}
			HX_STACK_LINE(297)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),color,alpha,lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
		}
		HX_STACK_LINE(297)
		if (((bool((fillStyle != null())) && bool(fillStyle->__Field(HX_CSTRING("hasFill"),true))))){
			struct _Function_3_1{
				inline static int Block( Dynamic &fillStyle){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",297,0xc647097f)
					{
						HX_STACK_LINE(297)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(297)
						return (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static Float Block( Dynamic &fillStyle){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",297,0xc647097f)
					{
						HX_STACK_LINE(297)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(297)
						int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(297)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(297)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill(_Function_3_1::Block(fillStyle),_Function_3_2::Block(fillStyle));
		}
		else{
			struct _Function_3_1{
				inline static Float Block( int &Color){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",297,0xc647097f)
					{
						HX_STACK_LINE(297)
						int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(297)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(297)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255)))),_Function_3_1::Block(Color));
		}
	}
	HX_STACK_LINE(298)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->drawRoundRect(X,Y,Width,Height,EllipseWidth,EllipseHeight);
	HX_STACK_LINE(299)
	{
		HX_STACK_LINE(299)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
		HX_STACK_LINE(299)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
		HX_STACK_LINE(299)
		sprite;
	}
	HX_STACK_LINE(300)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(FlxSpriteUtil_obj,drawRoundRect,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawCircle( ::flixel::FlxSprite sprite,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Radius,hx::Null< int >  __o_Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle){
Float X = __o_X.Default(-1);
Float Y = __o_Y.Default(-1);
Float Radius = __o_Radius.Default(-1);
int Color = __o_Color.Default(-1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawCircle",0x44dca643,"flixel.util.FlxSpriteUtil.drawCircle","flixel/util/FlxSpriteUtil.hx",346,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Radius,"Radius")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(fillStyle,"fillStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
{
		HX_STACK_LINE(347)
		if (((bool((X == (int)-1)) || bool((Y == (int)-1))))){
			HX_STACK_LINE(349)
			::flixel::util::FlxPoint midPoint = sprite->getGraphicMidpoint(null());		HX_STACK_VAR(midPoint,"midPoint");
			HX_STACK_LINE(351)
			if (((X == (int)-1))){
				HX_STACK_LINE(352)
				X = midPoint->x;
			}
			HX_STACK_LINE(354)
			if (((Y == (int)-1))){
				HX_STACK_LINE(355)
				Y = midPoint->y;
			}
		}
		HX_STACK_LINE(359)
		if (((Radius < (int)1))){
			HX_STACK_LINE(361)
			Float minVal = ::Math_obj::min(sprite->frameWidth,sprite->frameHeight);		HX_STACK_VAR(minVal,"minVal");
			HX_STACK_LINE(362)
			Radius = (Float(minVal) / Float((int)2));
		}
		HX_STACK_LINE(365)
		{
			HX_STACK_LINE(365)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
			HX_STACK_LINE(365)
			if (((lineStyle != null()))){
				HX_STACK_LINE(365)
				int color;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(365)
				Float alpha;		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(365)
				if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
					HX_STACK_LINE(365)
					color = (int)0;
					HX_STACK_LINE(365)
					alpha = (int)1;
				}
				else{
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(365)
						color = (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
					}
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(365)
						int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(365)
						alpha = (Float(f) / Float((int)255));
					}
				}
				HX_STACK_LINE(365)
				if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
					HX_STACK_LINE(365)
					lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
				}
				HX_STACK_LINE(365)
				if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
					HX_STACK_LINE(365)
					lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
				}
				HX_STACK_LINE(365)
				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),color,alpha,lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
			}
			HX_STACK_LINE(365)
			if (((bool((fillStyle != null())) && bool(fillStyle->__Field(HX_CSTRING("hasFill"),true))))){
				struct _Function_3_1{
					inline static int Block( Dynamic &fillStyle){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",365,0xc647097f)
						{
							HX_STACK_LINE(365)
							int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(365)
							return (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static Float Block( Dynamic &fillStyle){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",365,0xc647097f)
						{
							HX_STACK_LINE(365)
							int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(365)
							int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(365)
							return (Float(f) / Float((int)255));
						}
						return null();
					}
				};
				HX_STACK_LINE(365)
				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill(_Function_3_1::Block(fillStyle),_Function_3_2::Block(fillStyle));
			}
			else{
				struct _Function_3_1{
					inline static Float Block( int &Color){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",365,0xc647097f)
						{
							HX_STACK_LINE(365)
							int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(365)
							return (Float(f) / Float((int)255));
						}
						return null();
					}
				};
				HX_STACK_LINE(365)
				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255)))),_Function_3_1::Block(Color));
			}
		}
		HX_STACK_LINE(366)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->drawCircle(X,Y,Radius);
		HX_STACK_LINE(367)
		{
			HX_STACK_LINE(367)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
			HX_STACK_LINE(367)
			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
			HX_STACK_LINE(367)
			sprite;
		}
		HX_STACK_LINE(368)
		return sprite;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxSpriteUtil_obj,drawCircle,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawEllipse( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,int Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawEllipse",0x1204b94b,"flixel.util.FlxSpriteUtil.drawEllipse","flixel/util/FlxSpriteUtil.hx",386,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(fillStyle,"fillStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(387)
	{
		HX_STACK_LINE(387)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
		HX_STACK_LINE(387)
		if (((lineStyle != null()))){
			HX_STACK_LINE(387)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(387)
			Float alpha;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(387)
			if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
				HX_STACK_LINE(387)
				color = (int)0;
				HX_STACK_LINE(387)
				alpha = (int)1;
			}
			else{
				HX_STACK_LINE(387)
				{
					HX_STACK_LINE(387)
					int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
					HX_STACK_LINE(387)
					color = (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
				}
				HX_STACK_LINE(387)
				{
					HX_STACK_LINE(387)
					int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
					HX_STACK_LINE(387)
					int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(387)
					alpha = (Float(f) / Float((int)255));
				}
			}
			HX_STACK_LINE(387)
			if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
				HX_STACK_LINE(387)
				lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
			}
			HX_STACK_LINE(387)
			if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
				HX_STACK_LINE(387)
				lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
			}
			HX_STACK_LINE(387)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),color,alpha,lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
		}
		HX_STACK_LINE(387)
		if (((bool((fillStyle != null())) && bool(fillStyle->__Field(HX_CSTRING("hasFill"),true))))){
			struct _Function_3_1{
				inline static int Block( Dynamic &fillStyle){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",387,0xc647097f)
					{
						HX_STACK_LINE(387)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(387)
						return (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static Float Block( Dynamic &fillStyle){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",387,0xc647097f)
					{
						HX_STACK_LINE(387)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(387)
						int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(387)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(387)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill(_Function_3_1::Block(fillStyle),_Function_3_2::Block(fillStyle));
		}
		else{
			struct _Function_3_1{
				inline static Float Block( int &Color){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",387,0xc647097f)
					{
						HX_STACK_LINE(387)
						int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(387)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(387)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255)))),_Function_3_1::Block(Color));
		}
	}
	HX_STACK_LINE(388)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->drawEllipse(X,Y,Width,Height);
	HX_STACK_LINE(389)
	{
		HX_STACK_LINE(389)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
		HX_STACK_LINE(389)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
		HX_STACK_LINE(389)
		sprite;
	}
	HX_STACK_LINE(390)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxSpriteUtil_obj,drawEllipse,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawTriangle( ::flixel::FlxSprite sprite,Float X,Float Y,Float Height,int Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawTriangle",0x35f0a5bb,"flixel.util.FlxSpriteUtil.drawTriangle","flixel/util/FlxSpriteUtil.hx",407,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(fillStyle,"fillStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(408)
	{
		HX_STACK_LINE(408)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
		HX_STACK_LINE(408)
		if (((lineStyle != null()))){
			HX_STACK_LINE(408)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(408)
			Float alpha;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(408)
			if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
				HX_STACK_LINE(408)
				color = (int)0;
				HX_STACK_LINE(408)
				alpha = (int)1;
			}
			else{
				HX_STACK_LINE(408)
				{
					HX_STACK_LINE(408)
					int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
					HX_STACK_LINE(408)
					color = (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
				}
				HX_STACK_LINE(408)
				{
					HX_STACK_LINE(408)
					int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
					HX_STACK_LINE(408)
					int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(408)
					alpha = (Float(f) / Float((int)255));
				}
			}
			HX_STACK_LINE(408)
			if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
				HX_STACK_LINE(408)
				lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
			}
			HX_STACK_LINE(408)
			if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
				HX_STACK_LINE(408)
				lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
			}
			HX_STACK_LINE(408)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),color,alpha,lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
		}
		HX_STACK_LINE(408)
		if (((bool((fillStyle != null())) && bool(fillStyle->__Field(HX_CSTRING("hasFill"),true))))){
			struct _Function_3_1{
				inline static int Block( Dynamic &fillStyle){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",408,0xc647097f)
					{
						HX_STACK_LINE(408)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(408)
						return (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static Float Block( Dynamic &fillStyle){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",408,0xc647097f)
					{
						HX_STACK_LINE(408)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(408)
						int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(408)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(408)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill(_Function_3_1::Block(fillStyle),_Function_3_2::Block(fillStyle));
		}
		else{
			struct _Function_3_1{
				inline static Float Block( int &Color){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",408,0xc647097f)
					{
						HX_STACK_LINE(408)
						int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(408)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(408)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255)))),_Function_3_1::Block(Color));
		}
	}
	HX_STACK_LINE(409)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->moveTo((X + (Float(Height) / Float((int)2))),Y);
	HX_STACK_LINE(410)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo((X + Height),(Height + Y));
	HX_STACK_LINE(411)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo(X,(Height + Y));
	HX_STACK_LINE(412)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo((X + (Float(Height) / Float((int)2))),Y);
	HX_STACK_LINE(413)
	{
		HX_STACK_LINE(413)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
		HX_STACK_LINE(413)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
		HX_STACK_LINE(413)
		sprite;
	}
	HX_STACK_LINE(414)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxSpriteUtil_obj,drawTriangle,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawPolygon( ::flixel::FlxSprite sprite,Array< ::Dynamic > Vertices,int Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawPolygon",0x190f7ae7,"flixel.util.FlxSpriteUtil.drawPolygon","flixel/util/FlxSpriteUtil.hx",429,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(Vertices,"Vertices")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(fillStyle,"fillStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(430)
	{
		HX_STACK_LINE(430)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
		HX_STACK_LINE(430)
		if (((lineStyle != null()))){
			HX_STACK_LINE(430)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(430)
			Float alpha;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(430)
			if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
				HX_STACK_LINE(430)
				color = (int)0;
				HX_STACK_LINE(430)
				alpha = (int)1;
			}
			else{
				HX_STACK_LINE(430)
				{
					HX_STACK_LINE(430)
					int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
					HX_STACK_LINE(430)
					color = (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
				}
				HX_STACK_LINE(430)
				{
					HX_STACK_LINE(430)
					int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
					HX_STACK_LINE(430)
					int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(430)
					alpha = (Float(f) / Float((int)255));
				}
			}
			HX_STACK_LINE(430)
			if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
				HX_STACK_LINE(430)
				lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
			}
			HX_STACK_LINE(430)
			if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
				HX_STACK_LINE(430)
				lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
			}
			HX_STACK_LINE(430)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),color,alpha,lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
		}
		HX_STACK_LINE(430)
		if (((bool((fillStyle != null())) && bool(fillStyle->__Field(HX_CSTRING("hasFill"),true))))){
			struct _Function_3_1{
				inline static int Block( Dynamic &fillStyle){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",430,0xc647097f)
					{
						HX_STACK_LINE(430)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(430)
						return (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static Float Block( Dynamic &fillStyle){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",430,0xc647097f)
					{
						HX_STACK_LINE(430)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(430)
						int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(430)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(430)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill(_Function_3_1::Block(fillStyle),_Function_3_2::Block(fillStyle));
		}
		else{
			struct _Function_3_1{
				inline static Float Block( int &Color){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",430,0xc647097f)
					{
						HX_STACK_LINE(430)
						int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(430)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(430)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255)))),_Function_3_1::Block(Color));
		}
	}
	HX_STACK_LINE(431)
	::flixel::util::FlxPoint p = Vertices->shift().StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(432)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->moveTo(p->x,p->y);
	HX_STACK_LINE(433)
	{
		HX_STACK_LINE(433)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(433)
		while((true)){
			HX_STACK_LINE(433)
			if ((!(((_g < Vertices->length))))){
				HX_STACK_LINE(433)
				break;
			}
			HX_STACK_LINE(433)
			::flixel::util::FlxPoint p1 = Vertices->__get(_g).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(p1,"p1");
			HX_STACK_LINE(433)
			++(_g);
			HX_STACK_LINE(435)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo(p1->x,p1->y);
		}
	}
	HX_STACK_LINE(437)
	{
		HX_STACK_LINE(437)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
		HX_STACK_LINE(437)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
		HX_STACK_LINE(437)
		sprite;
	}
	HX_STACK_LINE(438)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxSpriteUtil_obj,drawPolygon,return )

Void FlxSpriteUtil_obj::beginDraw( int Color,Dynamic lineStyle,Dynamic fillStyle){
{
		HX_STACK_FRAME("flixel.util.FlxSpriteUtil","beginDraw",0x53d0689e,"flixel.util.FlxSpriteUtil.beginDraw","flixel/util/FlxSpriteUtil.hx",450,0xc647097f)
		HX_STACK_ARG(Color,"Color")
		HX_STACK_ARG(lineStyle,"lineStyle")
		HX_STACK_ARG(fillStyle,"fillStyle")
		HX_STACK_LINE(451)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
		HX_STACK_LINE(452)
		if (((lineStyle != null()))){
			HX_STACK_LINE(452)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(452)
			Float alpha;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(452)
			if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
				HX_STACK_LINE(452)
				color = (int)0;
				HX_STACK_LINE(452)
				alpha = (int)1;
			}
			else{
				HX_STACK_LINE(452)
				{
					HX_STACK_LINE(452)
					int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
					HX_STACK_LINE(452)
					color = (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
				}
				HX_STACK_LINE(452)
				{
					HX_STACK_LINE(452)
					int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
					HX_STACK_LINE(452)
					int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(452)
					alpha = (Float(f) / Float((int)255));
				}
			}
			HX_STACK_LINE(452)
			if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
				HX_STACK_LINE(452)
				lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
			}
			HX_STACK_LINE(452)
			if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
				HX_STACK_LINE(452)
				lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
			}
			HX_STACK_LINE(452)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),color,alpha,lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
		}
		HX_STACK_LINE(454)
		if (((bool((fillStyle != null())) && bool(fillStyle->__Field(HX_CSTRING("hasFill"),true))))){
			struct _Function_2_1{
				inline static int Block( Dynamic &fillStyle){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",457,0xc647097f)
					{
						HX_STACK_LINE(457)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(457)
						return (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( Dynamic &fillStyle){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",457,0xc647097f)
					{
						HX_STACK_LINE(457)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(457)
						int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(457)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(457)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill(_Function_2_1::Block(fillStyle),_Function_2_2::Block(fillStyle));
		}
		else{
			struct _Function_2_1{
				inline static Float Block( int &Color){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",462,0xc647097f)
					{
						HX_STACK_LINE(462)
						int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(462)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(462)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255)))),_Function_2_1::Block(Color));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,beginDraw,(void))

::flixel::FlxSprite FlxSpriteUtil_obj::endDraw( ::flixel::FlxSprite sprite,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","endDraw",0x51197d10,"flixel.util.FlxSpriteUtil.endDraw","flixel/util/FlxSpriteUtil.hx",474,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(475)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
	HX_STACK_LINE(476)
	::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
	HX_STACK_LINE(477)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,endDraw,return )

::flixel::FlxSprite FlxSpriteUtil_obj::updateSpriteGraphic( ::flixel::FlxSprite sprite,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","updateSpriteGraphic",0x448b866b,"flixel.util.FlxSpriteUtil.updateSpriteGraphic","flixel/util/FlxSpriteUtil.hx",489,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(490)
	if (((drawStyle == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",492,0xc647097f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("smoothing") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(492)
		drawStyle = _Function_2_1::Block();
	}
	else{
		HX_STACK_LINE(494)
		if (((drawStyle->__Field(HX_CSTRING("smoothing"),true) == null()))){
			HX_STACK_LINE(496)
			drawStyle->__FieldRef(HX_CSTRING("smoothing")) = false;
		}
	}
	HX_STACK_LINE(499)
	sprite->get_pixels()->draw(::flixel::util::FlxSpriteUtil_obj::flashGfxSprite,drawStyle->__Field(HX_CSTRING("matrix"),true),drawStyle->__Field(HX_CSTRING("colorTransform"),true),drawStyle->__Field(HX_CSTRING("blendMode"),true),drawStyle->__Field(HX_CSTRING("clipRect"),true),drawStyle->__Field(HX_CSTRING("smoothing"),true));
	HX_STACK_LINE(501)
	sprite->dirty = true;
	HX_STACK_LINE(502)
	sprite->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
	HX_STACK_LINE(503)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,updateSpriteGraphic,return )

Void FlxSpriteUtil_obj::setLineStyle( Dynamic lineStyle){
{
		HX_STACK_FRAME("flixel.util.FlxSpriteUtil","setLineStyle",0xc19fc36a,"flixel.util.FlxSpriteUtil.setLineStyle","flixel/util/FlxSpriteUtil.hx",515,0xc647097f)
		HX_STACK_ARG(lineStyle,"lineStyle")
		HX_STACK_LINE(515)
		if (((lineStyle != null()))){
			HX_STACK_LINE(517)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(518)
			Float alpha;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(520)
			if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
				HX_STACK_LINE(522)
				color = (int)0;
				HX_STACK_LINE(523)
				alpha = (int)1;
			}
			else{
				HX_STACK_LINE(527)
				{
					HX_STACK_LINE(527)
					int Color = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color,"Color");
					HX_STACK_LINE(527)
					color = (int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255))));
				}
				HX_STACK_LINE(528)
				{
					HX_STACK_LINE(528)
					int Color = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color,"Color");
					HX_STACK_LINE(528)
					int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(528)
					alpha = (Float(f) / Float((int)255));
				}
			}
			HX_STACK_LINE(531)
			if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
				HX_STACK_LINE(531)
				lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
			}
			HX_STACK_LINE(532)
			if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
				HX_STACK_LINE(532)
				lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
			}
			HX_STACK_LINE(534)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),color,alpha,lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,setLineStyle,(void))

::flixel::FlxSprite FlxSpriteUtil_obj::fill( ::flixel::FlxSprite sprite,int Color){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","fill",0x7a944252,"flixel.util.FlxSpriteUtil.fill","flixel/util/FlxSpriteUtil.hx",553,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(554)
	::flash::geom::Rectangle _g = sprite->get_pixels()->get_rect();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(554)
	sprite->get_pixels()->fillRect(_g,Color);
	HX_STACK_LINE(556)
	::flash::display::BitmapData _g1 = sprite->get_pixels();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(556)
	if (((_g1 != sprite->framePixels))){
		HX_STACK_LINE(558)
		sprite->dirty = true;
	}
	HX_STACK_LINE(561)
	sprite->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
	HX_STACK_LINE(562)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,fill,return )

::flixel::FlxObject FlxSpriteUtil_obj::flicker( ::flixel::FlxObject Object,hx::Null< Float >  __o_Duration,hx::Null< Float >  __o_Interval,hx::Null< bool >  __o_EndVisibility,hx::Null< bool >  __o_ForceRestart,Dynamic CompletionCallback,Dynamic ProgressCallback){
Float Duration = __o_Duration.Default(1);
Float Interval = __o_Interval.Default(0.04);
bool EndVisibility = __o_EndVisibility.Default(true);
bool ForceRestart = __o_ForceRestart.Default(true);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","flicker",0xa3717289,"flixel.util.FlxSpriteUtil.flicker","flixel/util/FlxSpriteUtil.hx",578,0xc647097f)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Interval,"Interval")
	HX_STACK_ARG(EndVisibility,"EndVisibility")
	HX_STACK_ARG(ForceRestart,"ForceRestart")
	HX_STACK_ARG(CompletionCallback,"CompletionCallback")
	HX_STACK_ARG(ProgressCallback,"ProgressCallback")
{
		HX_STACK_LINE(579)
		::flixel::effects::FlxFlicker_obj::flicker(Object,Duration,Interval,EndVisibility,ForceRestart,CompletionCallback,ProgressCallback);
		HX_STACK_LINE(580)
		return Object;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,flicker,return )

bool FlxSpriteUtil_obj::isFlickering( ::flixel::FlxObject Object){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","isFlickering",0x05aae043,"flixel.util.FlxSpriteUtil.isFlickering","flixel/util/FlxSpriteUtil.hx",590,0xc647097f)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(590)
	return ::flixel::effects::FlxFlicker_obj::isFlickering(Object);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,isFlickering,return )

::flixel::FlxObject FlxSpriteUtil_obj::stopFlickering( ::flixel::FlxObject Object){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","stopFlickering",0x9d49141b,"flixel.util.FlxSpriteUtil.stopFlickering","flixel/util/FlxSpriteUtil.hx",600,0xc647097f)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(601)
	::flixel::effects::FlxFlicker_obj::stopFlickering(Object);
	HX_STACK_LINE(602)
	return Object;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,stopFlickering,return )

::flixel::FlxSprite FlxSpriteUtil_obj::fadeIn( ::flixel::FlxSprite sprite,hx::Null< Float >  __o_Duration,Dynamic ResetAlpha,Dynamic OnComplete){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","fadeIn",0xd9639210,"flixel.util.FlxSpriteUtil.fadeIn","flixel/util/FlxSpriteUtil.hx",613,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(ResetAlpha,"ResetAlpha")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(614)
		if ((ResetAlpha)){
			HX_STACK_LINE(616)
			sprite->set_alpha((int)0);
		}
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &OnComplete){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",618,0xc647097f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("complete") , OnComplete,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(618)
		::flixel::tweens::FlxTween_obj::color(sprite,Duration,sprite->color,sprite->color,sprite->alpha,(int)1,(  (((OnComplete != null()))) ? Dynamic(_Function_1_1::Block(OnComplete)) : Dynamic(null()) ));
		HX_STACK_LINE(619)
		return sprite;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxSpriteUtil_obj,fadeIn,return )

::flixel::FlxSprite FlxSpriteUtil_obj::fadeOut( ::flixel::FlxSprite sprite,hx::Null< Float >  __o_Duration,Dynamic FadeToBlack,Dynamic OnComplete){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","fadeOut",0x5dc0d003,"flixel.util.FlxSpriteUtil.fadeOut","flixel/util/FlxSpriteUtil.hx",630,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FadeToBlack,"FadeToBlack")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &OnComplete){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",631,0xc647097f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("complete") , OnComplete,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(631)
		::flixel::tweens::FlxTween_obj::color(sprite,Duration,sprite->color,(  ((FadeToBlack)) ? int((int)-16777216) : int(sprite->color) ),sprite->alpha,(int)0,(  (((OnComplete != null()))) ? Dynamic(_Function_1_1::Block(OnComplete)) : Dynamic(null()) ));
		HX_STACK_LINE(632)
		return sprite;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxSpriteUtil_obj,fadeOut,return )


FlxSpriteUtil_obj::FlxSpriteUtil_obj()
{
}

Dynamic FlxSpriteUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { return bound_dyn(); }
		if (HX_FIELD_EQ(inName,"space") ) { return space_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fadeIn") ) { return fadeIn_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endDraw") ) { return endDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"flicker") ) { return flicker_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeOut") ) { return fadeOut_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flashGfx") ) { return flashGfx; }
		if (HX_FIELD_EQ(inName,"drawLine") ) { return drawLine_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alphaMask") ) { return alphaMask_dyn(); }
		if (HX_FIELD_EQ(inName,"beginDraw") ) { return beginDraw_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"screenWrap") ) { return screenWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return drawEllipse_dyn(); }
		if (HX_FIELD_EQ(inName,"drawPolygon") ) { return drawPolygon_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenCenter") ) { return screenCenter_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangle") ) { return drawTriangle_dyn(); }
		if (HX_FIELD_EQ(inName,"setLineStyle") ) { return setLineStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"isFlickering") ) { return isFlickering_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flashGfxSprite") ) { return flashGfxSprite; }
		if (HX_FIELD_EQ(inName,"stopFlickering") ) { return stopFlickering_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"alphaMaskFlxSprite") ) { return alphaMaskFlxSprite_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateSpriteGraphic") ) { return updateSpriteGraphic_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSpriteUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"flashGfx") ) { flashGfx=inValue.Cast< ::flash::display::Graphics >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flashGfxSprite") ) { flashGfxSprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSpriteUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("flashGfxSprite"),
	HX_CSTRING("flashGfx"),
	HX_CSTRING("alphaMask"),
	HX_CSTRING("alphaMaskFlxSprite"),
	HX_CSTRING("screenWrap"),
	HX_CSTRING("bound"),
	HX_CSTRING("space"),
	HX_CSTRING("screenCenter"),
	HX_CSTRING("drawLine"),
	HX_CSTRING("drawRect"),
	HX_CSTRING("drawRoundRect"),
	HX_CSTRING("drawCircle"),
	HX_CSTRING("drawEllipse"),
	HX_CSTRING("drawTriangle"),
	HX_CSTRING("drawPolygon"),
	HX_CSTRING("beginDraw"),
	HX_CSTRING("endDraw"),
	HX_CSTRING("updateSpriteGraphic"),
	HX_CSTRING("setLineStyle"),
	HX_CSTRING("fill"),
	HX_CSTRING("flicker"),
	HX_CSTRING("isFlickering"),
	HX_CSTRING("stopFlickering"),
	HX_CSTRING("fadeIn"),
	HX_CSTRING("fadeOut"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::flashGfxSprite,"flashGfxSprite");
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::flashGfx,"flashGfx");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::flashGfxSprite,"flashGfxSprite");
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::flashGfx,"flashGfx");
};

#endif

Class FlxSpriteUtil_obj::__mClass;

void FlxSpriteUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxSpriteUtil"), hx::TCanCast< FlxSpriteUtil_obj> ,sStaticFields,sMemberFields,
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

void FlxSpriteUtil_obj::__boot()
{
	flashGfxSprite= ::flash::display::Sprite_obj::__new();
	flashGfx= ::flixel::util::FlxSpriteUtil_obj::flashGfxSprite->get_graphics();
}

} // end namespace flixel
} // end namespace util
