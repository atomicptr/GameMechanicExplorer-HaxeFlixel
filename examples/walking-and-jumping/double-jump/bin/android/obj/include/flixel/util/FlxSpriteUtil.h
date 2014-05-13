#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#define INCLUDED_flixel_util_FlxSpriteUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,effects,FlxFlicker)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxSpriteUtil)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxSpriteUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxSpriteUtil_obj OBJ_;
		FlxSpriteUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxSpriteUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSpriteUtil_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxSpriteUtil"); }

		static ::flash::display::Sprite flashGfxSprite;
		static ::flash::display::Graphics flashGfx;
		static ::flixel::FlxSprite alphaMask( ::flixel::FlxSprite output,Dynamic source,Dynamic mask);
		static Dynamic alphaMask_dyn();

		static ::flixel::FlxSprite alphaMaskFlxSprite( ::flixel::FlxSprite sprite,::flixel::FlxSprite mask,::flixel::FlxSprite output);
		static Dynamic alphaMaskFlxSprite_dyn();

		static ::flixel::FlxSprite screenWrap( ::flixel::FlxSprite sprite,hx::Null< bool >  Left,hx::Null< bool >  Right,hx::Null< bool >  Top,hx::Null< bool >  Bottom);
		static Dynamic screenWrap_dyn();

		static ::flixel::FlxSprite bound( ::flixel::FlxSprite sprite,hx::Null< Float >  MinX,hx::Null< Float >  MaxX,hx::Null< Float >  MinY,hx::Null< Float >  MaxY);
		static Dynamic bound_dyn();

		static Void space( Array< ::Dynamic > objects,int startX,int startY,hx::Null< int >  horizontalSpacing,hx::Null< int >  verticalSpacing,hx::Null< bool >  spaceFromBounds);
		static Dynamic space_dyn();

		static ::flixel::FlxObject screenCenter( ::flixel::FlxObject object,hx::Null< bool >  xAxis,hx::Null< bool >  yAxis);
		static Dynamic screenCenter_dyn();

		static ::flixel::FlxSprite drawLine( ::flixel::FlxSprite sprite,Float StartX,Float StartY,Float EndX,Float EndY,Dynamic lineStyle,Dynamic drawStyle);
		static Dynamic drawLine_dyn();

		static ::flixel::FlxSprite drawRect( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,int Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle);
		static Dynamic drawRect_dyn();

		static ::flixel::FlxSprite drawRoundRect( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,Float EllipseWidth,Float EllipseHeight,int Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle);
		static Dynamic drawRoundRect_dyn();

		static ::flixel::FlxSprite drawCircle( ::flixel::FlxSprite sprite,hx::Null< Float >  X,hx::Null< Float >  Y,hx::Null< Float >  Radius,hx::Null< int >  Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle);
		static Dynamic drawCircle_dyn();

		static ::flixel::FlxSprite drawEllipse( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,int Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle);
		static Dynamic drawEllipse_dyn();

		static ::flixel::FlxSprite drawTriangle( ::flixel::FlxSprite sprite,Float X,Float Y,Float Height,int Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle);
		static Dynamic drawTriangle_dyn();

		static ::flixel::FlxSprite drawPolygon( ::flixel::FlxSprite sprite,Array< ::Dynamic > Vertices,int Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle);
		static Dynamic drawPolygon_dyn();

		static Void beginDraw( int Color,Dynamic lineStyle,Dynamic fillStyle);
		static Dynamic beginDraw_dyn();

		static ::flixel::FlxSprite endDraw( ::flixel::FlxSprite sprite,Dynamic drawStyle);
		static Dynamic endDraw_dyn();

		static ::flixel::FlxSprite updateSpriteGraphic( ::flixel::FlxSprite sprite,Dynamic drawStyle);
		static Dynamic updateSpriteGraphic_dyn();

		static Void setLineStyle( Dynamic lineStyle);
		static Dynamic setLineStyle_dyn();

		static ::flixel::FlxSprite fill( ::flixel::FlxSprite sprite,int Color);
		static Dynamic fill_dyn();

		static ::flixel::FlxObject flicker( ::flixel::FlxObject Object,hx::Null< Float >  Duration,hx::Null< Float >  Interval,hx::Null< bool >  EndVisibility,hx::Null< bool >  ForceRestart,Dynamic CompletionCallback,Dynamic ProgressCallback);
		static Dynamic flicker_dyn();

		static bool isFlickering( ::flixel::FlxObject Object);
		static Dynamic isFlickering_dyn();

		static ::flixel::FlxObject stopFlickering( ::flixel::FlxObject Object);
		static Dynamic stopFlickering_dyn();

		static ::flixel::FlxSprite fadeIn( ::flixel::FlxSprite sprite,hx::Null< Float >  Duration,Dynamic ResetAlpha,Dynamic OnComplete);
		static Dynamic fadeIn_dyn();

		static ::flixel::FlxSprite fadeOut( ::flixel::FlxSprite sprite,hx::Null< Float >  Duration,Dynamic FadeToBlack,Dynamic OnComplete);
		static Dynamic fadeOut_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxSpriteUtil */ 
