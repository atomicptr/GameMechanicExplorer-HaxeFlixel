#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxColor
#include <flixel/util/FlxColor.h>
#endif
namespace flixel{
namespace util{

Void FlxColor_obj::__construct()
{
	return null();
}

//FlxColor_obj::~FlxColor_obj() { }

Dynamic FlxColor_obj::__CreateEmpty() { return  new FlxColor_obj; }
hx::ObjectPtr< FlxColor_obj > FlxColor_obj::__new()
{  hx::ObjectPtr< FlxColor_obj > result = new FlxColor_obj();
	result->__construct();
	return result;}

Dynamic FlxColor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxColor_obj > result = new FlxColor_obj();
	result->__construct();
	return result;}

int FlxColor_obj::RED;

int FlxColor_obj::YELLOW;

int FlxColor_obj::GREEN;

int FlxColor_obj::BLUE;

int FlxColor_obj::PINK;

int FlxColor_obj::PURPLE;

int FlxColor_obj::WHITE;

int FlxColor_obj::BLACK;

int FlxColor_obj::GRAY;

int FlxColor_obj::BROWN;

int FlxColor_obj::TRANSPARENT;

int FlxColor_obj::IVORY;

int FlxColor_obj::BEIGE;

int FlxColor_obj::WHEAT;

int FlxColor_obj::TAN;

int FlxColor_obj::KHAKI;

int FlxColor_obj::SILVER;

int FlxColor_obj::CHARCOAL;

int FlxColor_obj::NAVY_BLUE;

int FlxColor_obj::ROYAL_BLUE;

int FlxColor_obj::MEDIUM_BLUE;

int FlxColor_obj::AZURE;

int FlxColor_obj::CYAN;

int FlxColor_obj::MAGENTA;

int FlxColor_obj::AQUAMARINE;

int FlxColor_obj::TEAL;

int FlxColor_obj::FOREST_GREEN;

int FlxColor_obj::OLIVE;

int FlxColor_obj::CHARTREUSE;

int FlxColor_obj::LIME;

int FlxColor_obj::GOLDEN;

int FlxColor_obj::GOLDENROD;

int FlxColor_obj::CORAL;

int FlxColor_obj::SALMON;

int FlxColor_obj::HOT_PINK;

int FlxColor_obj::FUCHSIA;

int FlxColor_obj::PUCE;

int FlxColor_obj::MAUVE;

int FlxColor_obj::LAVENDER;

int FlxColor_obj::PLUM;

int FlxColor_obj::INDIGO;

int FlxColor_obj::MAROON;

int FlxColor_obj::CRIMSON;


FlxColor_obj::FlxColor_obj()
{
}

Dynamic FlxColor_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FlxColor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxColor_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("RED"),
	HX_CSTRING("YELLOW"),
	HX_CSTRING("GREEN"),
	HX_CSTRING("BLUE"),
	HX_CSTRING("PINK"),
	HX_CSTRING("PURPLE"),
	HX_CSTRING("WHITE"),
	HX_CSTRING("BLACK"),
	HX_CSTRING("GRAY"),
	HX_CSTRING("BROWN"),
	HX_CSTRING("TRANSPARENT"),
	HX_CSTRING("IVORY"),
	HX_CSTRING("BEIGE"),
	HX_CSTRING("WHEAT"),
	HX_CSTRING("TAN"),
	HX_CSTRING("KHAKI"),
	HX_CSTRING("SILVER"),
	HX_CSTRING("CHARCOAL"),
	HX_CSTRING("NAVY_BLUE"),
	HX_CSTRING("ROYAL_BLUE"),
	HX_CSTRING("MEDIUM_BLUE"),
	HX_CSTRING("AZURE"),
	HX_CSTRING("CYAN"),
	HX_CSTRING("MAGENTA"),
	HX_CSTRING("AQUAMARINE"),
	HX_CSTRING("TEAL"),
	HX_CSTRING("FOREST_GREEN"),
	HX_CSTRING("OLIVE"),
	HX_CSTRING("CHARTREUSE"),
	HX_CSTRING("LIME"),
	HX_CSTRING("GOLDEN"),
	HX_CSTRING("GOLDENROD"),
	HX_CSTRING("CORAL"),
	HX_CSTRING("SALMON"),
	HX_CSTRING("HOT_PINK"),
	HX_CSTRING("FUCHSIA"),
	HX_CSTRING("PUCE"),
	HX_CSTRING("MAUVE"),
	HX_CSTRING("LAVENDER"),
	HX_CSTRING("PLUM"),
	HX_CSTRING("INDIGO"),
	HX_CSTRING("MAROON"),
	HX_CSTRING("CRIMSON"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxColor_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxColor_obj::RED,"RED");
	HX_MARK_MEMBER_NAME(FlxColor_obj::YELLOW,"YELLOW");
	HX_MARK_MEMBER_NAME(FlxColor_obj::GREEN,"GREEN");
	HX_MARK_MEMBER_NAME(FlxColor_obj::BLUE,"BLUE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::PINK,"PINK");
	HX_MARK_MEMBER_NAME(FlxColor_obj::PURPLE,"PURPLE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::WHITE,"WHITE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::BLACK,"BLACK");
	HX_MARK_MEMBER_NAME(FlxColor_obj::GRAY,"GRAY");
	HX_MARK_MEMBER_NAME(FlxColor_obj::BROWN,"BROWN");
	HX_MARK_MEMBER_NAME(FlxColor_obj::TRANSPARENT,"TRANSPARENT");
	HX_MARK_MEMBER_NAME(FlxColor_obj::IVORY,"IVORY");
	HX_MARK_MEMBER_NAME(FlxColor_obj::BEIGE,"BEIGE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::WHEAT,"WHEAT");
	HX_MARK_MEMBER_NAME(FlxColor_obj::TAN,"TAN");
	HX_MARK_MEMBER_NAME(FlxColor_obj::KHAKI,"KHAKI");
	HX_MARK_MEMBER_NAME(FlxColor_obj::SILVER,"SILVER");
	HX_MARK_MEMBER_NAME(FlxColor_obj::CHARCOAL,"CHARCOAL");
	HX_MARK_MEMBER_NAME(FlxColor_obj::NAVY_BLUE,"NAVY_BLUE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::ROYAL_BLUE,"ROYAL_BLUE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::MEDIUM_BLUE,"MEDIUM_BLUE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::AZURE,"AZURE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::CYAN,"CYAN");
	HX_MARK_MEMBER_NAME(FlxColor_obj::MAGENTA,"MAGENTA");
	HX_MARK_MEMBER_NAME(FlxColor_obj::AQUAMARINE,"AQUAMARINE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::TEAL,"TEAL");
	HX_MARK_MEMBER_NAME(FlxColor_obj::FOREST_GREEN,"FOREST_GREEN");
	HX_MARK_MEMBER_NAME(FlxColor_obj::OLIVE,"OLIVE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::CHARTREUSE,"CHARTREUSE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::LIME,"LIME");
	HX_MARK_MEMBER_NAME(FlxColor_obj::GOLDEN,"GOLDEN");
	HX_MARK_MEMBER_NAME(FlxColor_obj::GOLDENROD,"GOLDENROD");
	HX_MARK_MEMBER_NAME(FlxColor_obj::CORAL,"CORAL");
	HX_MARK_MEMBER_NAME(FlxColor_obj::SALMON,"SALMON");
	HX_MARK_MEMBER_NAME(FlxColor_obj::HOT_PINK,"HOT_PINK");
	HX_MARK_MEMBER_NAME(FlxColor_obj::FUCHSIA,"FUCHSIA");
	HX_MARK_MEMBER_NAME(FlxColor_obj::PUCE,"PUCE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::MAUVE,"MAUVE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::LAVENDER,"LAVENDER");
	HX_MARK_MEMBER_NAME(FlxColor_obj::PLUM,"PLUM");
	HX_MARK_MEMBER_NAME(FlxColor_obj::INDIGO,"INDIGO");
	HX_MARK_MEMBER_NAME(FlxColor_obj::MAROON,"MAROON");
	HX_MARK_MEMBER_NAME(FlxColor_obj::CRIMSON,"CRIMSON");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxColor_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::RED,"RED");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::YELLOW,"YELLOW");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::GREEN,"GREEN");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::BLUE,"BLUE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::PINK,"PINK");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::PURPLE,"PURPLE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::WHITE,"WHITE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::BLACK,"BLACK");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::GRAY,"GRAY");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::BROWN,"BROWN");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::TRANSPARENT,"TRANSPARENT");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::IVORY,"IVORY");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::BEIGE,"BEIGE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::WHEAT,"WHEAT");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::TAN,"TAN");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::KHAKI,"KHAKI");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::SILVER,"SILVER");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::CHARCOAL,"CHARCOAL");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::NAVY_BLUE,"NAVY_BLUE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::ROYAL_BLUE,"ROYAL_BLUE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::MEDIUM_BLUE,"MEDIUM_BLUE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::AZURE,"AZURE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::CYAN,"CYAN");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::MAGENTA,"MAGENTA");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::AQUAMARINE,"AQUAMARINE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::TEAL,"TEAL");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::FOREST_GREEN,"FOREST_GREEN");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::OLIVE,"OLIVE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::CHARTREUSE,"CHARTREUSE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::LIME,"LIME");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::GOLDEN,"GOLDEN");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::GOLDENROD,"GOLDENROD");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::CORAL,"CORAL");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::SALMON,"SALMON");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::HOT_PINK,"HOT_PINK");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::FUCHSIA,"FUCHSIA");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::PUCE,"PUCE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::MAUVE,"MAUVE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::LAVENDER,"LAVENDER");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::PLUM,"PLUM");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::INDIGO,"INDIGO");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::MAROON,"MAROON");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::CRIMSON,"CRIMSON");
};

#endif

Class FlxColor_obj::__mClass;

void FlxColor_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxColor"), hx::TCanCast< FlxColor_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void FlxColor_obj::__boot()
{
	RED= (int)-65536;
	YELLOW= (int)-256;
	GREEN= (int)-16744448;
	BLUE= (int)-16776961;
	PINK= (int)-16181;
	PURPLE= (int)-8388480;
	WHITE= (int)-1;
	BLACK= (int)-16777216;
	GRAY= (int)-8355712;
	BROWN= (int)-6927616;
	TRANSPARENT= (int)0;
	IVORY= (int)-16;
	BEIGE= (int)-657956;
	WHEAT= (int)-663885;
	TAN= (int)-2968436;
	KHAKI= (int)-3952495;
	SILVER= (int)-4144960;
	CHARCOAL= (int)-12171706;
	NAVY_BLUE= (int)-16777088;
	ROYAL_BLUE= (int)-16233314;
	MEDIUM_BLUE= (int)-16777011;
	AZURE= (int)-16744449;
	CYAN= (int)-16711681;
	MAGENTA= (int)-65281;
	AQUAMARINE= (int)-8388652;
	TEAL= (int)-16744320;
	FOREST_GREEN= (int)-14513374;
	OLIVE= (int)-8355840;
	CHARTREUSE= (int)-8388864;
	LIME= (int)-4194560;
	GOLDEN= (int)-10496;
	GOLDENROD= (int)-2448096;
	CORAL= (int)-32944;
	SALMON= (int)-360334;
	HOT_PINK= (int)-258112;
	FUCHSIA= (int)-34817;
	PUCE= (int)-3372903;
	MAUVE= (int)-2051841;
	LAVENDER= (int)-4882724;
	PLUM= (int)-8113799;
	INDIGO= (int)-11861886;
	MAROON= (int)-8388608;
	CRIMSON= (int)-2354116;
}

} // end namespace flixel
} // end namespace util
