#ifndef INCLUDED_flixel_input_keyboard_FlxKey
#define INCLUDED_flixel_input_keyboard_FlxKey

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,keyboard,FlxKey)
namespace flixel{
namespace input{
namespace keyboard{


class HXCPP_CLASS_ATTRIBUTES  FlxKey_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxKey_obj OBJ_;
		FlxKey_obj();
		Void __construct(::String Name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxKey_obj > __new(::String Name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxKey_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxKey"); }

		::String name;
		int current;
		int last;
		static int JUST_RELEASED;
		static int RELEASED;
		static int PRESSED;
		static int JUST_PRESSED;
		static int A;
		static int B;
		static int C;
		static int D;
		static int E;
		static int F;
		static int G;
		static int H;
		static int I;
		static int J;
		static int K;
		static int L;
		static int M;
		static int N;
		static int O;
		static int P;
		static int Q;
		static int R;
		static int S;
		static int T;
		static int U;
		static int V;
		static int W;
		static int X;
		static int Y;
		static int Z;
		static int ZERO;
		static int ONE;
		static int TWO;
		static int THREE;
		static int FOUR;
		static int FIVE;
		static int SIX;
		static int SEVEN;
		static int EIGHT;
		static int NINE;
		static int PAGEUP;
		static int PAGEDOWN;
		static int HOME;
		static int END;
		static int INSERT;
		static int ESCAPE;
		static int MINUS;
		static int PLUS;
		static int DELETE;
		static int BACKSPACE;
		static int LBRACKET;
		static int RBRACKET;
		static int BACKSLASH;
		static int CAPSLOCK;
		static int SEMICOLON;
		static int QUOTE;
		static int ENTER;
		static int SHIFT;
		static int COMMA;
		static int PERIOD;
		static int SLASH;
		static int NUMPADSLASH;
		static int GRAVEACCENT;
		static int CONTROL;
		static int ALT;
		static int SPACE;
		static int UP;
		static int DOWN;
		static int LEFT;
		static int RIGHT;
		static int TAB;
		static int PRINTSCREEN;
		static int F1;
		static int F2;
		static int F3;
		static int F4;
		static int F5;
		static int F6;
		static int F7;
		static int F8;
		static int F9;
		static int F10;
		static int F11;
		static int F12;
		static int NUMPADZERO;
		static int NUMPADONE;
		static int NUMPADTWO;
		static int NUMPADTHREE;
		static int NUMPADFOUR;
		static int NUMPADFIVE;
		static int NUMPADSIX;
		static int NUMPADSEVEN;
		static int NUMPADEIGHT;
		static int NUMPADNINE;
		static int NUMPADMINUS;
		static int NUMPADPLUS;
		static int NUMPADPERIOD;
		static int NUMPADMULTIPLY;
};

} // end namespace flixel
} // end namespace input
} // end namespace keyboard

#endif /* INCLUDED_flixel_input_keyboard_FlxKey */ 
