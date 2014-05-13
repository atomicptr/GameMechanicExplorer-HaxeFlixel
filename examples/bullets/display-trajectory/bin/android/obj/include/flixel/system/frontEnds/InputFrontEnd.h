#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#define INCLUDED_flixel_system_frontEnds_InputFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,android,FlxAndroidKeys)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadManager)
HX_DECLARE_CLASS3(flixel,input,keyboard,FlxKeyboard)
HX_DECLARE_CLASS3(flixel,input,mouse,FlxMouse)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouchManager)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxInput)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS3(flixel,system,frontEnds,InputFrontEnd)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES  InputFrontEnd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InputFrontEnd_obj OBJ_;
		InputFrontEnd_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< InputFrontEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InputFrontEnd_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("InputFrontEnd"); }

		virtual ::flixel::input::mouse::FlxMouse replace_flixel_input_mouse_FlxMouse( ::flixel::input::mouse::FlxMouse Old,::flixel::input::mouse::FlxMouse New);
		Dynamic replace_flixel_input_mouse_FlxMouse_dyn();

		virtual ::flixel::input::android::FlxAndroidKeys add_flixel_input_android_FlxAndroidKeys( ::flixel::input::android::FlxAndroidKeys Input);
		Dynamic add_flixel_input_android_FlxAndroidKeys_dyn();

		virtual ::flixel::input::gamepad::FlxGamepadManager add_flixel_input_gamepad_FlxGamepadManager( ::flixel::input::gamepad::FlxGamepadManager Input);
		Dynamic add_flixel_input_gamepad_FlxGamepadManager_dyn();

		virtual ::flixel::input::touch::FlxTouchManager add_flixel_input_touch_FlxTouchManager( ::flixel::input::touch::FlxTouchManager Input);
		Dynamic add_flixel_input_touch_FlxTouchManager_dyn();

		virtual ::flixel::input::mouse::FlxMouse add_flixel_input_mouse_FlxMouse( ::flixel::input::mouse::FlxMouse Input);
		Dynamic add_flixel_input_mouse_FlxMouse_dyn();

		virtual ::flixel::input::keyboard::FlxKeyboard add_flixel_input_keyboard_FlxKeyboard( ::flixel::input::keyboard::FlxKeyboard Input);
		Dynamic add_flixel_input_keyboard_FlxKeyboard_dyn();

		Array< ::flixel::interfaces::IFlxInput > list;
		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_InputFrontEnd */ 
