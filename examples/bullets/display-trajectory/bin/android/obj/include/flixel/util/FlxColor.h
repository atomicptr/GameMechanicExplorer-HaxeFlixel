#ifndef INCLUDED_flixel_util_FlxColor
#define INCLUDED_flixel_util_FlxColor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxColor)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxColor_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxColor_obj OBJ_;
		FlxColor_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxColor_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxColor_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxColor"); }

		static int RED;
		static int YELLOW;
		static int GREEN;
		static int BLUE;
		static int PINK;
		static int PURPLE;
		static int WHITE;
		static int BLACK;
		static int GRAY;
		static int BROWN;
		static int TRANSPARENT;
		static int IVORY;
		static int BEIGE;
		static int WHEAT;
		static int TAN;
		static int KHAKI;
		static int SILVER;
		static int CHARCOAL;
		static int NAVY_BLUE;
		static int ROYAL_BLUE;
		static int MEDIUM_BLUE;
		static int AZURE;
		static int CYAN;
		static int MAGENTA;
		static int AQUAMARINE;
		static int TEAL;
		static int FOREST_GREEN;
		static int OLIVE;
		static int CHARTREUSE;
		static int LIME;
		static int GOLDEN;
		static int GOLDENROD;
		static int CORAL;
		static int SALMON;
		static int HOT_PINK;
		static int FUCHSIA;
		static int PUCE;
		static int MAUVE;
		static int LAVENDER;
		static int PLUM;
		static int INDIGO;
		static int MAROON;
		static int CRIMSON;
};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxColor */ 
