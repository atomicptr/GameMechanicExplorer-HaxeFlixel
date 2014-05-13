#ifndef INCLUDED_flixel_input_android_FlxAndroidKeys
#define INCLUDED_flixel_input_android_FlxAndroidKeys

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/interfaces/IFlxInput.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,KeyboardEvent)
HX_DECLARE_CLASS3(flixel,input,android,FlxAndroidKeys)
HX_DECLARE_CLASS3(flixel,input,keyboard,FlxKey)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxInput)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace flixel{
namespace input{
namespace android{


class HXCPP_CLASS_ATTRIBUTES  FlxAndroidKeys_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxAndroidKeys_obj OBJ_;
		FlxAndroidKeys_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxAndroidKeys_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxAndroidKeys_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::interfaces::IFlxInput_obj *()
			{ return new ::flixel::interfaces::IFlxInput_delegate_< FlxAndroidKeys_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxAndroidKeys"); }

		bool enabled;
		::haxe::ds::StringMap _keyLookup;
		::haxe::ds::IntMap _keyList;
		bool preventDefaultBackAction;
		virtual Void addKey( ::String KeyName,int KeyCode);
		Dynamic addKey_dyn();

		Dynamic pressed;
		virtual bool anyPressed( Dynamic KeyArray);
		Dynamic anyPressed_dyn();

		Dynamic justPressed;
		virtual bool anyJustPressed( Dynamic KeyArray);
		Dynamic anyJustPressed_dyn();

		Dynamic justReleased;
		virtual bool anyJustReleased( Dynamic KeyArray);
		Dynamic anyJustReleased_dyn();

		virtual int getKeyCode( ::String KeyName);
		Dynamic getKeyCode_dyn();

		virtual Array< ::Dynamic > getIsDown( );
		Dynamic getIsDown_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual bool checkKeyStatus( Dynamic KeyArray,int Status);
		Dynamic checkKeyStatus_dyn();

		virtual Void onKeyUp( ::flash::events::KeyboardEvent FlashEvent);
		Dynamic onKeyUp_dyn();

		virtual Void onKeyDown( ::flash::events::KeyboardEvent FlashEvent);
		Dynamic onKeyDown_dyn();

		virtual bool inKeyArray( Array< ::String > KeyArray,int KeyCode);
		Dynamic inKeyArray_dyn();

		virtual Void updateKeyStates( int KeyCode,bool Down);
		Dynamic updateKeyStates_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		static int TOTAL;
};

} // end namespace flixel
} // end namespace input
} // end namespace android

#endif /* INCLUDED_flixel_input_android_FlxAndroidKeys */ 
