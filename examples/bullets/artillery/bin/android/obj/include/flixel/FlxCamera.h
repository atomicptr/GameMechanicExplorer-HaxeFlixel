#ifndef INCLUDED_flixel_FlxCamera
#define INCLUDED_flixel_FlxCamera

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxBasic.h>
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS3(flixel,system,layer,DrawStackItem)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
HX_DECLARE_CLASS3(flixel,util,loaders,CachedGraphics)
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxCamera_obj : public ::flixel::FlxBasic_obj{
	public:
		typedef ::flixel::FlxBasic_obj super;
		typedef FlxCamera_obj OBJ_;
		FlxCamera_obj();
		Void __construct(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_Zoom);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxCamera_obj > __new(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_Zoom);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxCamera_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxCamera"); }

		Float x;
		Float y;
		int style;
		::flixel::FlxObject target;
		Float followLerp;
		::flixel::util::FlxRect deadzone;
		::flixel::util::FlxRect bounds;
		::flixel::util::FlxPoint scroll;
		int bgColor;
		bool useBgAlphaBlending;
		::flash::display::Sprite flashSprite;
		int width;
		int height;
		Float zoom;
		Float alpha;
		Float angle;
		int color;
		bool antialiasing;
		::flixel::util::FlxPoint followLead;
		::flash::geom::Rectangle _flashRect;
		::flash::geom::Point _flashPoint;
		::flixel::util::FlxPoint _flashOffset;
		int _fxFlashColor;
		Float _fxFlashDuration;
		Dynamic _fxFlashComplete;
		Dynamic &_fxFlashComplete_dyn() { return _fxFlashComplete;}
		Float _fxFlashAlpha;
		int _fxFadeColor;
		::flixel::util::FlxPoint _lastTargetPosition;
		::flixel::util::FlxPoint _scrollTarget;
		Float _fxFadeDuration;
		bool _fxFadeIn;
		Dynamic _fxFadeComplete;
		Dynamic &_fxFadeComplete_dyn() { return _fxFadeComplete;}
		Float _fxFadeAlpha;
		Float _fxShakeIntensity;
		Float _fxShakeDuration;
		Dynamic _fxShakeComplete;
		Dynamic &_fxShakeComplete_dyn() { return _fxShakeComplete;}
		::flixel::util::FlxPoint _fxShakeOffset;
		int _fxShakeDirection;
		::flixel::util::FlxPoint _point;
		::flash::display::Sprite canvas;
		::flixel::system::layer::DrawStackItem _currentStackItem;
		::flixel::system::layer::DrawStackItem _headOfDrawStack;
		virtual ::flixel::system::layer::DrawStackItem getDrawStackItem( ::flixel::util::loaders::CachedGraphics ObjGraphics,bool ObjColored,int ObjBlending,hx::Null< bool >  ObjAntialiasing);
		Dynamic getDrawStackItem_dyn();

		virtual Void clearDrawStack( );
		Dynamic clearDrawStack_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void destroy( );

		virtual Void update( );

		virtual Void updateFollow( );
		Dynamic updateFollow_dyn();

		virtual Void updateFlash( );
		Dynamic updateFlash_dyn();

		virtual Void updateFade( );
		Dynamic updateFade_dyn();

		virtual Void updateShake( );
		Dynamic updateShake_dyn();

		virtual Void follow( ::flixel::FlxObject Target,hx::Null< int >  Style,::flixel::util::FlxPoint Offset,hx::Null< Float >  Lerp);
		Dynamic follow_dyn();

		virtual Void focusOn( ::flixel::util::FlxPoint point);
		Dynamic focusOn_dyn();

		virtual Void flash( hx::Null< int >  Color,hx::Null< Float >  Duration,Dynamic OnComplete,hx::Null< bool >  Force);
		Dynamic flash_dyn();

		virtual Void fade( hx::Null< int >  Color,hx::Null< Float >  Duration,hx::Null< bool >  FadeIn,Dynamic OnComplete,hx::Null< bool >  Force);
		Dynamic fade_dyn();

		virtual Void shake( hx::Null< Float >  Intensity,hx::Null< Float >  Duration,Dynamic OnComplete,hx::Null< bool >  Force,hx::Null< int >  Direction);
		Dynamic shake_dyn();

		virtual Void stopFX( );
		Dynamic stopFX_dyn();

		virtual ::flixel::FlxCamera copyFrom( ::flixel::FlxCamera Camera);
		Dynamic copyFrom_dyn();

		virtual Void fill( int Color,hx::Null< bool >  BlendAlpha,hx::Null< Float >  FxAlpha,::flash::display::Graphics graphics);
		Dynamic fill_dyn();

		virtual Void drawFX( );
		Dynamic drawFX_dyn();

		virtual Void setSize( int Width,int Height);
		Dynamic setSize_dyn();

		virtual Void setPosition( hx::Null< Float >  X,hx::Null< Float >  Y);
		Dynamic setPosition_dyn();

		virtual Void setBounds( hx::Null< Float >  X,hx::Null< Float >  Y,hx::Null< Float >  Width,hx::Null< Float >  Height,hx::Null< bool >  UpdateWorld);
		Dynamic setBounds_dyn();

		virtual Void setScale( Float X,Float Y);
		Dynamic setScale_dyn();

		virtual ::flixel::util::FlxPoint getScale( );
		Dynamic getScale_dyn();

		virtual int set_width( int Value);
		Dynamic set_width_dyn();

		virtual int set_height( int Value);
		Dynamic set_height_dyn();

		virtual Float set_zoom( Float Zoom);
		Dynamic set_zoom_dyn();

		virtual Float set_alpha( Float Alpha);
		Dynamic set_alpha_dyn();

		virtual Float set_angle( Float Angle);
		Dynamic set_angle_dyn();

		virtual int set_color( int Color);
		Dynamic set_color_dyn();

		virtual bool set_antialiasing( bool Antialiasing);
		Dynamic set_antialiasing_dyn();

		static int STYLE_LOCKON;
		static int STYLE_PLATFORMER;
		static int STYLE_TOPDOWN;
		static int STYLE_TOPDOWN_TIGHT;
		static int STYLE_SCREEN_BY_SCREEN;
		static int STYLE_NO_DEAD_ZONE;
		static int SHAKE_BOTH_AXES;
		static int SHAKE_HORIZONTAL_ONLY;
		static int SHAKE_VERTICAL_ONLY;
		static Float defaultZoom;
		static Array< ::Dynamic > defaultCameras;
		static ::flixel::system::layer::DrawStackItem _storageHead;
};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxCamera */ 
