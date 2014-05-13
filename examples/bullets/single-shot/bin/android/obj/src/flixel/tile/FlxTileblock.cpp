#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTileblock
#include <flixel/tile/FlxTileblock.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
namespace flixel{
namespace tile{

Void FlxTileblock_obj::__construct(int X,int Y,int Width,int Height)
{
HX_STACK_FRAME("flixel.tile.FlxTileblock","new",0x8f1d69cd,"flixel.tile.FlxTileblock.new","flixel/tile/FlxTileblock.hx",26,0xecdf1de3)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Height,"Height")
{
	HX_STACK_LINE(27)
	super::__construct(X,Y,null());
	HX_STACK_LINE(28)
	this->makeGraphic(Width,Height,(int)0,true,null());
	HX_STACK_LINE(29)
	this->set_active(false);
	HX_STACK_LINE(30)
	this->set_immovable(true);
	HX_STACK_LINE(31)
	this->set_moves(false);
}
;
	return null();
}

//FlxTileblock_obj::~FlxTileblock_obj() { }

Dynamic FlxTileblock_obj::__CreateEmpty() { return  new FlxTileblock_obj; }
hx::ObjectPtr< FlxTileblock_obj > FlxTileblock_obj::__new(int X,int Y,int Width,int Height)
{  hx::ObjectPtr< FlxTileblock_obj > result = new FlxTileblock_obj();
	result->__construct(X,Y,Width,Height);
	return result;}

Dynamic FlxTileblock_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTileblock_obj > result = new FlxTileblock_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::flixel::tile::FlxTileblock FlxTileblock_obj::loadTiles( Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,hx::Null< int >  __o_Empties){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int Empties = __o_Empties.Default(0);
	HX_STACK_FRAME("flixel.tile.FlxTileblock","loadTiles",0x7f9232ac,"flixel.tile.FlxTileblock.loadTiles","flixel/tile/FlxTileblock.hx",43,0xecdf1de3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(Empties,"Empties")
{
		HX_STACK_LINE(44)
		if (((TileGraphic == null()))){
			HX_STACK_LINE(46)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(50)
		::flixel::FlxSprite sprite = ::flixel::FlxSprite_obj::__new(null(),null(),null())->loadGraphic(TileGraphic,true,TileWidth,TileHeight,null(),null());		HX_STACK_VAR(sprite,"sprite");
		HX_STACK_LINE(51)
		Float _g = sprite->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(51)
		int spriteWidth = ::Std_obj::_int(_g);		HX_STACK_VAR(spriteWidth,"spriteWidth");
		HX_STACK_LINE(52)
		Float _g1 = sprite->get_height();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(52)
		int spriteHeight = ::Std_obj::_int(_g1);		HX_STACK_VAR(spriteHeight,"spriteHeight");
		HX_STACK_LINE(53)
		int total = (sprite->frames + Empties);		HX_STACK_VAR(total,"total");
		HX_STACK_LINE(56)
		bool regen = false;		HX_STACK_VAR(regen,"regen");
		HX_STACK_LINE(58)
		Float _g2 = this->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(58)
		Float _g3 = sprite->get_width();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(58)
		Float _g4 = hx::Mod(_g2,_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(58)
		if (((_g4 != (int)0))){
			HX_STACK_LINE(60)
			Float _g5 = this->get_width();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(60)
			Float _g6 = (Float(_g5) / Float(spriteWidth));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(60)
			Float _g7 = (_g6 + (int)1);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(60)
			int _g8 = ::Std_obj::_int(_g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(60)
			int _g9 = (_g8 * spriteWidth);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(60)
			this->set_width(_g9);
			HX_STACK_LINE(61)
			regen = true;
		}
		HX_STACK_LINE(64)
		Float _g10 = this->get_height();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(64)
		Float _g11 = sprite->get_height();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(64)
		Float _g12 = hx::Mod(_g10,_g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(64)
		if (((_g12 != (int)0))){
			HX_STACK_LINE(66)
			Float _g13 = this->get_height();		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(66)
			Float _g14 = (Float(_g13) / Float(spriteHeight));		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(66)
			Float _g15 = (_g14 + (int)1);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(66)
			int _g16 = ::Std_obj::_int(_g15);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(66)
			int _g17 = (_g16 * spriteHeight);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(66)
			this->set_height(_g17);
			HX_STACK_LINE(67)
			regen = true;
		}
		HX_STACK_LINE(70)
		if ((regen)){
			HX_STACK_LINE(72)
			Float _g18 = this->get_width();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(72)
			int _g19 = ::Std_obj::_int(_g18);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(72)
			Float _g20 = this->get_height();		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(72)
			int _g21 = ::Std_obj::_int(_g20);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(72)
			this->makeGraphic(_g19,_g21,(int)0,true,null());
		}
		else{
			HX_STACK_LINE(76)
			::flixel::util::FlxSpriteUtil_obj::fill(hx::ObjectPtr<OBJ_>(this),(int)0);
		}
		HX_STACK_LINE(80)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(81)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(82)
		int destinationX;		HX_STACK_VAR(destinationX,"destinationX");
		HX_STACK_LINE(83)
		int destinationY = (int)0;		HX_STACK_VAR(destinationY,"destinationY");
		HX_STACK_LINE(84)
		Float _g22 = this->get_width();		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(84)
		Float _g23 = (Float(_g22) / Float(spriteWidth));		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(84)
		int widthInTiles = ::Std_obj::_int(_g23);		HX_STACK_VAR(widthInTiles,"widthInTiles");
		HX_STACK_LINE(85)
		Float _g24 = this->get_height();		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(85)
		Float _g25 = (Float(_g24) / Float(spriteHeight));		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(85)
		int heightInTiles = ::Std_obj::_int(_g25);		HX_STACK_VAR(heightInTiles,"heightInTiles");
		HX_STACK_LINE(87)
		while((true)){
			HX_STACK_LINE(87)
			if ((!(((row < heightInTiles))))){
				HX_STACK_LINE(87)
				break;
			}
			HX_STACK_LINE(89)
			destinationX = (int)0;
			HX_STACK_LINE(90)
			column = (int)0;
			HX_STACK_LINE(92)
			while((true)){
				HX_STACK_LINE(92)
				if ((!(((column < widthInTiles))))){
					HX_STACK_LINE(92)
					break;
				}
				HX_STACK_LINE(94)
				int _g26 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g26,"_g26");
				HX_STACK_LINE(94)
				Float _g27 = (Float(_g26) / Float((int)2147483647));		HX_STACK_VAR(_g27,"_g27");
				HX_STACK_LINE(94)
				Float _g28 = (_g27 * total);		HX_STACK_VAR(_g28,"_g28");
				HX_STACK_LINE(94)
				if (((_g28 > Empties))){
					HX_STACK_LINE(96)
					sprite->animation->randomFrame();
					HX_STACK_LINE(97)
					{
						HX_STACK_LINE(97)
						bool Force = false;		HX_STACK_VAR(Force,"Force");
						HX_STACK_LINE(97)
						sprite->calcFrame(true);
					}
					HX_STACK_LINE(98)
					this->stamp(sprite,destinationX,destinationY);
				}
				HX_STACK_LINE(101)
				hx::AddEq(destinationX,spriteWidth);
				HX_STACK_LINE(102)
				(column)++;
			}
			HX_STACK_LINE(105)
			hx::AddEq(destinationY,spriteHeight);
			HX_STACK_LINE(106)
			(row)++;
		}
		HX_STACK_LINE(109)
		sprite->destroy();
		HX_STACK_LINE(110)
		this->dirty = true;
		HX_STACK_LINE(111)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTileblock_obj,loadTiles,return )


FlxTileblock_obj::FlxTileblock_obj()
{
}

Dynamic FlxTileblock_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"loadTiles") ) { return loadTiles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTileblock_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTileblock_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("loadTiles"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTileblock_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTileblock_obj::__mClass,"__mClass");
};

#endif

Class FlxTileblock_obj::__mClass;

void FlxTileblock_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tile.FlxTileblock"), hx::TCanCast< FlxTileblock_obj> ,sStaticFields,sMemberFields,
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

void FlxTileblock_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tile
