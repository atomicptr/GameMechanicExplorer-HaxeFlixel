#ifndef INCLUDED_flixel_system_debug_Window
#define INCLUDED_flixel_system_debug_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(flash,text,TextField)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,system,debug,Window)
HX_DECLARE_CLASS3(flixel,system,ui,FlxSystemButton)
namespace flixel{
namespace system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Window_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef Window_obj OBJ_;
		Window_obj();
		Void __construct(::String Title,::flash::display::BitmapData Icon,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds,hx::Null< bool >  __o_Closable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Window_obj > __new(::String Title,::flash::display::BitmapData Icon,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds,hx::Null< bool >  __o_Closable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Window_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Window"); }

		::flash::geom::Point minSize;
		::flash::geom::Point maxSize;
		int _width;
		int _height;
		::flash::geom::Rectangle _bounds;
		::flash::display::Bitmap _background;
		::flash::display::Bitmap _header;
		::flash::display::Bitmap _shadow;
		::flash::text::TextField _title;
		::flash::display::Bitmap _handle;
		::flixel::system::ui::FlxSystemButton _closeButton;
		bool _overHeader;
		bool _overHandle;
		::flash::geom::Point _drag;
		bool _dragging;
		bool _resizing;
		bool _resizable;
		int _id;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void resize( Float Width,Float Height);
		Dynamic resize_dyn();

		virtual Void reposition( Float X,Float Y);
		Dynamic reposition_dyn();

		virtual Void updateBounds( ::flash::geom::Rectangle Bounds);
		Dynamic updateBounds_dyn();

		virtual Void toggleVisibility( );
		Dynamic toggleVisibility_dyn();

		virtual Void loadSaveData( );
		Dynamic loadSaveData_dyn();

		virtual Void initSaveData( );
		Dynamic initSaveData_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void init( ::flash::events::Event E);
		Dynamic init_dyn();

		virtual Void onMouseMove( ::flash::events::MouseEvent E);
		Dynamic onMouseMove_dyn();

		virtual Void onMouseDown( ::flash::events::MouseEvent E);
		Dynamic onMouseDown_dyn();

		virtual Void onMouseUp( ::flash::events::MouseEvent E);
		Dynamic onMouseUp_dyn();

		virtual Void bound( );
		Dynamic bound_dyn();

		virtual Void updateSize( );
		Dynamic updateSize_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		static int BG_COLOR;
		static int HEADER_COLOR;
		static Float HEADER_ALPHA;
		static int HEADER_HEIGHT;
		static int WINDOW_AMOUNT;
};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_Window */ 
