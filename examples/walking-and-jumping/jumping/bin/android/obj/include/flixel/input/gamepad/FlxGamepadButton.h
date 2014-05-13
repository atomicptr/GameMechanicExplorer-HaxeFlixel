#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#define INCLUDED_flixel_input_gamepad_FlxGamepadButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadButton)
namespace flixel{
namespace input{
namespace gamepad{


class HXCPP_CLASS_ATTRIBUTES  FlxGamepadButton_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxGamepadButton_obj OBJ_;
		FlxGamepadButton_obj();
		Void __construct(int ID,hx::Null< int >  __o_Current,hx::Null< int >  __o_Last);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxGamepadButton_obj > __new(int ID,hx::Null< int >  __o_Current,hx::Null< int >  __o_Last);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxGamepadButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxGamepadButton"); }

		int id;
		int current;
		int last;
		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void release( );
		Dynamic release_dyn();

		virtual Void press( );
		Dynamic press_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_input_gamepad_FlxGamepadButton */ 
