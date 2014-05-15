#ifndef INCLUDED_flixel_util_FlxMath
#define INCLUDED_flixel_util_FlxMath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouch)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxMath)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxMath_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxMath_obj OBJ_;
		FlxMath_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxMath_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxMath_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxMath"); }

		static Float MIN_VALUE;
		static Float MAX_VALUE;
		static Float SQUARE_ROOT_OF_TWO;
		static Float roundDecimal( Float Value,int Precision);
		static Dynamic roundDecimal_dyn();

		static Float bound( Float Value,Float Min,Float Max);
		static Dynamic bound_dyn();

		static Float lerp( Float Min,Float Max,Float Ratio);
		static Dynamic lerp_dyn();

		static bool inBounds( Float Value,Float Min,Float Max);
		static Dynamic inBounds_dyn();

		static bool isOdd( Float n);
		static Dynamic isOdd_dyn();

		static bool isEven( Float n);
		static Dynamic isEven_dyn();

		static int numericComparison( Float num1,Float num2);
		static Dynamic numericComparison_dyn();

		static bool pointInCoordinates( Float pointX,Float pointY,Float rectX,Float rectY,Float rectWidth,Float rectHeight);
		static Dynamic pointInCoordinates_dyn();

		static bool pointInFlxRect( Float pointX,Float pointY,::flixel::util::FlxRect rect);
		static Dynamic pointInFlxRect_dyn();

		static bool mouseInFlxRect( bool useWorldCoords,::flixel::util::FlxRect rect);
		static Dynamic mouseInFlxRect_dyn();

		static bool pointInRectangle( Float pointX,Float pointY,::flash::geom::Rectangle rect);
		static Dynamic pointInRectangle_dyn();

		static int maxAdd( int value,int amount,int max,hx::Null< int >  min);
		static Dynamic maxAdd_dyn();

		static int wrapValue( int value,int amount,int max);
		static Dynamic wrapValue_dyn();

		static Float dotProduct( Float ax,Float ay,Float bx,Float by);
		static Dynamic dotProduct_dyn();

		static Float vectorLength( Float dx,Float dy);
		static Dynamic vectorLength_dyn();

		static Float getDistance( ::flixel::util::FlxPoint Point1,::flixel::util::FlxPoint Point2);
		static Dynamic getDistance_dyn();

		static int distanceBetween( ::flixel::FlxSprite SpriteA,::flixel::FlxSprite SpriteB);
		static Dynamic distanceBetween_dyn();

		static bool isDistanceWithin( ::flixel::FlxSprite SpriteA,::flixel::FlxSprite SpriteB,Float Distance,hx::Null< bool >  IncludeEqual);
		static Dynamic isDistanceWithin_dyn();

		static int distanceToPoint( ::flixel::FlxSprite Sprite,::flixel::util::FlxPoint Target);
		static Dynamic distanceToPoint_dyn();

		static bool isDistanceToPointWithin( ::flixel::FlxSprite Sprite,::flixel::util::FlxPoint Target,Float Distance,hx::Null< bool >  IncludeEqual);
		static Dynamic isDistanceToPointWithin_dyn();

		static int distanceToMouse( ::flixel::FlxSprite Sprite);
		static Dynamic distanceToMouse_dyn();

		static bool isDistanceToMouseWithin( ::flixel::FlxSprite Sprite,Float Distance,hx::Null< bool >  IncludeEqual);
		static Dynamic isDistanceToMouseWithin_dyn();

		static int distanceToTouch( ::flixel::FlxSprite Sprite,::flixel::input::touch::FlxTouch Touch);
		static Dynamic distanceToTouch_dyn();

		static bool isDistanceToTouchWithin( ::flixel::FlxSprite Sprite,::flixel::input::touch::FlxTouch Touch,Float Distance,hx::Null< bool >  IncludeEqual);
		static Dynamic isDistanceToTouchWithin_dyn();

		static int getDecimals( Float Number);
		static Dynamic getDecimals_dyn();

		static bool equal( Float aValueA,Float aValueB,hx::Null< Float >  aDiff);
		static Dynamic equal_dyn();

		static int signOf( Float f);
		static Dynamic signOf_dyn();

		static bool sameSign( Float f1,Float f2);
		static Dynamic sameSign_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxMath */ 
