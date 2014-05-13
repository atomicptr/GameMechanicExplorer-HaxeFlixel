#ifndef INCLUDED_flixel_util_FlxRandom
#define INCLUDED_flixel_util_FlxRandom

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxRandom)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxRandom_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxRandom_obj OBJ_;
		FlxRandom_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxRandom_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxRandom_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxRandom"); }

		static Dynamic getObject_getRandom_T( Dynamic Objects,hx::Null< int >  StartIndex,hx::Null< int >  EndIndex);
		static Dynamic getObject_getRandom_T_dyn();

		static Dynamic shuffleArray_shuffle_T( Dynamic Objects,int HowManyTimes);
		static Dynamic shuffleArray_shuffle_T_dyn();

		static int globalSeed;
		static int set_globalSeed( int NewSeed);
		static Dynamic set_globalSeed_dyn();

		static int _internalSeed;
		static int MULTIPLIER;
		static int MODULUS;
		static int _intHelper;
		static int _intHelper2;
		static int _intHelper3;
		static Float _floatHelper;
		static Array< Float > _arrayFloatHelper;
		static int _red;
		static int _green;
		static int _blue;
		static int _alpha;
		static int resetGlobalSeed( );
		static Dynamic resetGlobalSeed_dyn();

		static int _int( );
		static Dynamic _int_dyn();

		static Float _float( );
		static Dynamic _float_dyn();

		static int intRanged( hx::Null< int >  Min,hx::Null< int >  Max,Array< int > Excludes);
		static Dynamic intRanged_dyn();

		static Float floatRanged( hx::Null< Float >  Min,hx::Null< Float >  Max,Array< Float > Excludes);
		static Dynamic floatRanged_dyn();

		static bool chanceRoll( hx::Null< Float >  Chance);
		static Dynamic chanceRoll_dyn();

		static int sign( hx::Null< Float >  Chance);
		static Dynamic sign_dyn();

		static int weightedPick( Array< Float > WeightsArray);
		static Dynamic weightedPick_dyn();

		static int color( hx::Null< int >  Min,hx::Null< int >  Max,hx::Null< int >  Alpha,hx::Null< bool >  GreyScale);
		static Dynamic color_dyn();

		static int colorExt( hx::Null< int >  RedMinimum,hx::Null< int >  RedMaximum,hx::Null< int >  GreenMinimum,hx::Null< int >  GreenMaximum,hx::Null< int >  BlueMinimum,hx::Null< int >  BlueMaximum,hx::Null< int >  AlphaMinimum,hx::Null< int >  AlphaMaximum);
		static Dynamic colorExt_dyn();

		static int generate( );
		static Dynamic generate_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxRandom */ 
