#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#define INCLUDED_flixel_input_keyboard_FlxKeyboard

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/interfaces/IFlxInput.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,KeyboardEvent)
HX_DECLARE_CLASS3(flixel,input,keyboard,FlxKey)
HX_DECLARE_CLASS3(flixel,input,keyboard,FlxKeyList)
HX_DECLARE_CLASS3(flixel,input,keyboard,FlxKeyboard)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxInput)
HX_DECLARE_CLASS3(flixel,system,replay,CodeValuePair)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace flixel{
namespace input{
namespace keyboard{


class HXCPP_CLASS_ATTRIBUTES  FlxKeyboard_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxKeyboard_obj OBJ_;
		FlxKeyboard_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxKeyboard_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxKeyboard_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::interfaces::IFlxInput_obj *()
			{ return new ::flixel::interfaces::IFlxInput_delegate_< FlxKeyboard_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxKeyboard"); }

		bool enabled;
		::flixel::input::keyboard::FlxKeyList pressed;
		::flixel::input::keyboard::FlxKeyList justPressed;
		::flixel::input::keyboard::FlxKeyList justReleased;
		Array< ::Dynamic > _keyList;
		::haxe::ds::StringMap _keyLookup;
		::haxe::ds::StringMap _nativeCorrection;
		virtual bool anyPressed( Array< ::String > KeyArray);
		Dynamic anyPressed_dyn();

		virtual bool anyJustPressed( Array< ::String > KeyArray);
		Dynamic anyJustPressed_dyn();

		virtual bool anyJustReleased( Array< ::String > KeyArray);
		Dynamic anyJustReleased_dyn();

		virtual ::String firstPressed( );
		Dynamic firstPressed_dyn();

		virtual ::String firstJustPressed( );
		Dynamic firstJustPressed_dyn();

		virtual ::String firstJustReleased( );
		Dynamic firstJustReleased_dyn();

		virtual bool checkStatus( int KeyCode,int Status);
		Dynamic checkStatus_dyn();

		virtual int getKeyCode( ::String KeyName);
		Dynamic getKeyCode_dyn();

		virtual Array< ::Dynamic > getIsDown( );
		Dynamic getIsDown_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void addKey( ::String KeyName,int KeyCode);
		Dynamic addKey_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual bool checkKeyStatus( Array< ::String > KeyArray,int Status);
		Dynamic checkKeyStatus_dyn();

		virtual Void onKeyUp( ::flash::events::KeyboardEvent FlashEvent);
		Dynamic onKeyUp_dyn();

		virtual Void onKeyDown( ::flash::events::KeyboardEvent FlashEvent);
		Dynamic onKeyDown_dyn();

		virtual bool inKeyArray( Array< ::String > KeyArray,int KeyCode);
		Dynamic inKeyArray_dyn();

		virtual int resolveKeyCode( ::flash::events::KeyboardEvent e);
		Dynamic resolveKeyCode_dyn();

		virtual Void updateKeyStates( int KeyCode,bool Down);
		Dynamic updateKeyStates_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Array< ::Dynamic > record( );
		Dynamic record_dyn();

		virtual Void playback( Array< ::Dynamic > Record);
		Dynamic playback_dyn();

		static int TOTAL;
};

} // end namespace flixel
} // end namespace input
} // end namespace keyboard

#endif /* INCLUDED_flixel_input_keyboard_FlxKeyboard */ 
