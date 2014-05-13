#ifndef INCLUDED_flixel_util_FlxColorUtil
#define INCLUDED_flixel_util_FlxColorUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxColorUtil)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxColorUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxColorUtil_obj OBJ_;
		FlxColorUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxColorUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxColorUtil_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxColorUtil"); }

		static int makeFromARGB( hx::Null< Float >  Alpha,int Red,int Green,int Blue);
		static Dynamic makeFromARGB_dyn();

		static int makeFromHSBA( Float Hue,Float Saturation,Float Brightness,hx::Null< Float >  Alpha);
		static Dynamic makeFromHSBA_dyn();

		static Dynamic getARGB( int Color,Dynamic Results);
		static Dynamic getARGB_dyn();

		static Dynamic getHSBA( int Color,Dynamic Results);
		static Dynamic getHSBA_dyn();

		static int getAlpha( int Color);
		static Dynamic getAlpha_dyn();

		static Float getAlphaFloat( int Color);
		static Dynamic getAlphaFloat_dyn();

		static int getRed( int Color);
		static Dynamic getRed_dyn();

		static int getGreen( int Color);
		static Dynamic getGreen_dyn();

		static int getBlue( int Color);
		static Dynamic getBlue_dyn();

		static int getRandomColor( hx::Null< int >  Min,hx::Null< int >  Max,hx::Null< int >  Alpha);
		static Dynamic getRandomColor_dyn();

		static int getColor32( int Alpha,int Red,int Green,int Blue);
		static Dynamic getColor32_dyn();

		static int getColor24( int Red,int Green,int Blue);
		static Dynamic getColor24_dyn();

		static Array< int > getHSVColorWheel( hx::Null< int >  Alpha);
		static Dynamic getHSVColorWheel_dyn();

		static int getComplementHarmony( int Color);
		static Dynamic getComplementHarmony_dyn();

		static Dynamic getAnalogousHarmony( int Color,hx::Null< int >  Threshold);
		static Dynamic getAnalogousHarmony_dyn();

		static Dynamic getSplitComplementHarmony( int Color,hx::Null< int >  Threshold);
		static Dynamic getSplitComplementHarmony_dyn();

		static Dynamic getTriadicHarmony( int Color);
		static Dynamic getTriadicHarmony_dyn();

		static ::String getColorInfo( int Color);
		static Dynamic getColorInfo_dyn();

		static ::String ARGBtoHexString( int Color);
		static Dynamic ARGBtoHexString_dyn();

		static ::String ARGBtoWebString( int Color);
		static Dynamic ARGBtoWebString_dyn();

		static ::String colorToHexString( int Color);
		static Dynamic colorToHexString_dyn();

		static int HSVtoARGB( Float H,Float S,Float V,hx::Null< int >  Alpha);
		static Dynamic HSVtoARGB_dyn();

		static Dynamic RGBtoHSV( int Color);
		static Dynamic RGBtoHSV_dyn();

		static int ARGBtoRGB( int Color);
		static Dynamic ARGBtoRGB_dyn();

		static int interpolateColor( int Color1,int Color2,int Steps,int CurrentStep,hx::Null< int >  Alpha);
		static Dynamic interpolateColor_dyn();

		static int interpolateColorWithRGB( int Color,int R2,int G2,int B2,int Steps,int CurrentStep);
		static Dynamic interpolateColorWithRGB_dyn();

		static int interpolateRGB( int R1,int G1,int B1,int R2,int G2,int B2,int Steps,int CurrentStep);
		static Dynamic interpolateRGB_dyn();

		static int darken( int Color,hx::Null< Float >  Factor);
		static Dynamic darken_dyn();

		static int brighten( int Color,hx::Null< Float >  Factor);
		static Dynamic brighten_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxColorUtil */ 
