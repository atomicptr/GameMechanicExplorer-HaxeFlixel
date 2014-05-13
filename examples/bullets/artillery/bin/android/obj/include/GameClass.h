#ifndef INCLUDED_GameClass
#define INCLUDED_GameClass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxGame.h>
HX_DECLARE_CLASS0(GameClass)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS1(flixel,FlxGame)


class HXCPP_CLASS_ATTRIBUTES  GameClass_obj : public ::flixel::FlxGame_obj{
	public:
		typedef ::flixel::FlxGame_obj super;
		typedef GameClass_obj OBJ_;
		GameClass_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GameClass_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameClass_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GameClass"); }

		int gameWidth;
		int gameHeight;
		::Class initialState;
		Float zoom;
		int framerate;
		bool skipSplash;
		bool startFullscreen;
};


#endif /* INCLUDED_GameClass */ 
