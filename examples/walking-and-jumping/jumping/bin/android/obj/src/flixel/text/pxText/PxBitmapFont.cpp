#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_flixel_text_pxText_PxBitmapFont
#include <flixel/text/pxText/PxBitmapFont.h>
#endif
#ifndef INCLUDED_flixel_text_pxText_PxFontSymbol
#include <flixel/text/pxText/PxFontSymbol.h>
#endif
#ifndef INCLUDED_flixel_text_pxText__PxBitmapFont_HelperSymbol
#include <flixel/text/pxText/_PxBitmapFont/HelperSymbol.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace flixel{
namespace text{
namespace pxText{

Void PxBitmapFont_obj::__construct()
{
HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","new",0x07bda9e2,"flixel.text.pxText.PxBitmapFont.new","flixel/text/pxText/PxBitmapFont.hx",19,0xb7b5754d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(34)
	this->_maxHeight = (int)0;
	HX_STACK_LINE(30)
	this->_bgTileID = (int)-1;
	HX_STACK_LINE(29)
	this->_num_letters = (int)0;
	HX_STACK_LINE(56)
	::flash::geom::Point _g = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(56)
	this->_point = _g;
	HX_STACK_LINE(63)
	::haxe::ds::IntMap _g1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(63)
	this->_glyphs = _g1;
}
;
	return null();
}

//PxBitmapFont_obj::~PxBitmapFont_obj() { }

Dynamic PxBitmapFont_obj::__CreateEmpty() { return  new PxBitmapFont_obj; }
hx::ObjectPtr< PxBitmapFont_obj > PxBitmapFont_obj::__new()
{  hx::ObjectPtr< PxBitmapFont_obj > result = new PxBitmapFont_obj();
	result->__construct();
	return result;}

Dynamic PxBitmapFont_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PxBitmapFont_obj > result = new PxBitmapFont_obj();
	result->__construct();
	return result;}

::flixel::text::pxText::PxBitmapFont PxBitmapFont_obj::loadPixelizer( ::flash::display::BitmapData PxBitmapData,::String PxLetters){
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","loadPixelizer",0x55603520,"flixel.text.pxText.PxBitmapFont.loadPixelizer","flixel/text/pxText/PxBitmapFont.hx",75,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(PxBitmapData,"PxBitmapData")
	HX_STACK_ARG(PxLetters,"PxLetters")
	HX_STACK_LINE(76)
	this->reset();
	HX_STACK_LINE(78)
	this->_glyphString = PxLetters;
	HX_STACK_LINE(88)
	if (((PxBitmapData != null()))){
		HX_STACK_LINE(90)
		this->_tileRects = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(91)
		::flash::display::BitmapData result = this->preparePixelizerBitmapData(PxBitmapData,this->_tileRects);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(92)
		::String key = ::flixel::FlxG_obj::bitmap->getUniqueKey(HX_CSTRING("font"));		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(93)
		::flixel::util::loaders::CachedGraphics _g = ::flixel::FlxG_obj::bitmap->addWithSpaces(result,(int)0,(int)0,(int)1,(int)1,false,key);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(93)
		this->setCachedGraphics(_g);
		HX_STACK_LINE(94)
		::flixel::system::layer::Region _g1 = ::flixel::system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(94)
		this->_region = _g1;
		HX_STACK_LINE(95)
		int _g2 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(95)
		this->_region->width = _g2;
		HX_STACK_LINE(96)
		int _g3 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(96)
		this->_region->height = _g3;
		HX_STACK_LINE(97)
		::flash::geom::Rectangle currRect;		HX_STACK_VAR(currRect,"currRect");
		HX_STACK_LINE(102)
		::flixel::system::layer::TileSheetData _g4 = this->cachedGraphics->get_tilesheet();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(102)
		this->updateGlyphData(_g4);
	}
	HX_STACK_LINE(106)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(PxBitmapFont_obj,loadPixelizer,return )

::flixel::text::pxText::PxBitmapFont PxBitmapFont_obj::loadAngelCode( ::flash::display::BitmapData pBitmapData,::Xml pXMLData){
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","loadAngelCode",0x3b23f08a,"flixel.text.pxText.PxBitmapFont.loadAngelCode","flixel/text/pxText/PxBitmapFont.hx",117,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pBitmapData,"pBitmapData")
	HX_STACK_ARG(pXMLData,"pXMLData")
	HX_STACK_LINE(118)
	this->reset();
	HX_STACK_LINE(120)
	if (((bool((pBitmapData != null())) && bool((pXMLData != null()))))){
		HX_STACK_LINE(122)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(122)
		this->_symbols = _g;
		HX_STACK_LINE(123)
		::flash::display::BitmapData result = this->prepareAngelCodeBitmapData(pBitmapData,pXMLData,this->_symbols);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(124)
		::String key = ::flixel::FlxG_obj::bitmap->getUniqueKey(HX_CSTRING("font"));		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(125)
		::flixel::util::loaders::CachedGraphics _g1 = ::flixel::FlxG_obj::bitmap->addWithSpaces(result,(int)0,(int)0,(int)1,(int)1,false,key);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(125)
		this->setCachedGraphics(_g1);
		HX_STACK_LINE(130)
		::flixel::system::layer::TileSheetData _g2 = this->cachedGraphics->get_tilesheet();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(130)
		this->updateGlyphData(_g2);
	}
	HX_STACK_LINE(134)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(PxBitmapFont_obj,loadAngelCode,return )

Void PxBitmapFont_obj::updateGlyphData( ::flixel::system::layer::TileSheetData Tiles){
{
		HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","updateGlyphData",0x6585ab2f,"flixel.text.pxText.PxBitmapFont.updateGlyphData","flixel/text/pxText/PxBitmapFont.hx",141,0xb7b5754d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Tiles,"Tiles")
		HX_STACK_LINE(143)
		::haxe::ds::IntMap _g = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(143)
		this->_glyphs = _g;
		HX_STACK_LINE(146)
		::flash::geom::Rectangle rect;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(148)
		if (((this->_symbols != null()))){
			HX_STACK_LINE(150)
			this->_glyphString = HX_CSTRING("");
			HX_STACK_LINE(151)
			::flash::geom::Point point = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(152)
			::flash::display::BitmapData bd;		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(153)
			::String charString;		HX_STACK_VAR(charString,"charString");
			HX_STACK_LINE(155)
			{
				HX_STACK_LINE(155)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(155)
				Array< ::Dynamic > _g11 = this->_symbols;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(155)
				while((true)){
					HX_STACK_LINE(155)
					if ((!(((_g1 < _g11->length))))){
						HX_STACK_LINE(155)
						break;
					}
					HX_STACK_LINE(155)
					::flixel::text::pxText::_PxBitmapFont::HelperSymbol symbol = _g11->__get(_g1).StaticCast< ::flixel::text::pxText::_PxBitmapFont::HelperSymbol >();		HX_STACK_VAR(symbol,"symbol");
					HX_STACK_LINE(155)
					++(_g1);
					HX_STACK_LINE(157)
					::flash::geom::Rectangle _g12 = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(157)
					rect = _g12;
					HX_STACK_LINE(158)
					rect->x = symbol->x;
					HX_STACK_LINE(159)
					rect->y = symbol->y;
					HX_STACK_LINE(160)
					rect->width = symbol->width;
					HX_STACK_LINE(161)
					rect->height = symbol->height;
					HX_STACK_LINE(163)
					point->x = symbol->xoffset;
					HX_STACK_LINE(164)
					point->y = symbol->yoffset;
					HX_STACK_LINE(166)
					::String _g2 = ::String::fromCharCode(symbol->charCode);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(166)
					charString = _g2;
					HX_STACK_LINE(167)
					hx::AddEq(this->_glyphString,charString);
					HX_STACK_LINE(169)
					int xadvance = symbol->xadvance;		HX_STACK_VAR(xadvance,"xadvance");
					HX_STACK_LINE(170)
					int charWidth = xadvance;		HX_STACK_VAR(charWidth,"charWidth");
					HX_STACK_LINE(172)
					if (((rect->width > xadvance))){
						HX_STACK_LINE(174)
						charWidth = symbol->width;
						HX_STACK_LINE(175)
						point->x = (int)0;
					}
					HX_STACK_LINE(197)
					if (((bool((charString != HX_CSTRING(" "))) && bool((charString != HX_CSTRING("")))))){
						HX_STACK_LINE(199)
						int _g3 = ::Math_obj::floor(point->x);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(199)
						int _g4 = ::Math_obj::floor(point->y);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(199)
						this->setGlyph(Tiles,symbol->charCode,rect,_g3,_g4,charWidth);
					}
					else{
						HX_STACK_LINE(203)
						int _g5 = ::Math_obj::floor(point->x);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(203)
						this->setGlyph(Tiles,symbol->charCode,rect,_g5,(int)1,charWidth);
					}
				}
			}
		}
		else{
			HX_STACK_LINE(208)
			if (((this->_tileRects != null()))){
				HX_STACK_LINE(210)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(210)
				int _g2 = this->_tileRects->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(210)
				while((true)){
					HX_STACK_LINE(210)
					if ((!(((_g1 < _g2))))){
						HX_STACK_LINE(210)
						break;
					}
					HX_STACK_LINE(210)
					int letterID = (_g1)++;		HX_STACK_VAR(letterID,"letterID");
					HX_STACK_LINE(212)
					rect = this->_tileRects->__get(letterID).StaticCast< ::flash::geom::Rectangle >();
					HX_STACK_LINE(222)
					Dynamic _g6 = this->_glyphString.charCodeAt(letterID);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(222)
					int _g7 = ::Std_obj::_int(rect->width);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(222)
					this->setGlyph(Tiles,_g6,rect,(int)0,(int)0,_g7);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PxBitmapFont_obj,updateGlyphData,(void))

Void PxBitmapFont_obj::reset( ){
{
		HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","reset",0xff7d07d1,"flixel.text.pxText.PxBitmapFont.reset","flixel/text/pxText/PxBitmapFont.hx",232,0xb7b5754d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(233)
		this->dispose();
		HX_STACK_LINE(234)
		this->_maxHeight = (int)0;
		HX_STACK_LINE(239)
		::haxe::ds::IntMap _g = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(239)
		this->_glyphs = _g;
		HX_STACK_LINE(240)
		this->_bgTileID = (int)-1;
		HX_STACK_LINE(243)
		this->_symbols = null();
		HX_STACK_LINE(244)
		this->_tileRects = null();
		HX_STACK_LINE(245)
		this->_glyphString = HX_CSTRING("");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,reset,(void))

::flash::display::BitmapData PxBitmapFont_obj::preparePixelizerBitmapData( ::flash::display::BitmapData PxBitmapData,Array< ::Dynamic > PxRects){
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","preparePixelizerBitmapData",0xa38b1074,"flixel.text.pxText.PxBitmapFont.preparePixelizerBitmapData","flixel/text/pxText/PxBitmapFont.hx",249,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(PxBitmapData,"PxBitmapData")
	HX_STACK_ARG(PxRects,"PxRects")
	HX_STACK_LINE(250)
	int bgColor = PxBitmapData->getPixel((int)0,(int)0);		HX_STACK_VAR(bgColor,"bgColor");
	HX_STACK_LINE(251)
	int cy = (int)0;		HX_STACK_VAR(cy,"cy");
	HX_STACK_LINE(252)
	int cx;		HX_STACK_VAR(cx,"cx");
	HX_STACK_LINE(254)
	while((true)){
		HX_STACK_LINE(254)
		int _g = PxBitmapData->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(254)
		if ((!(((cy < _g))))){
			HX_STACK_LINE(254)
			break;
		}
		HX_STACK_LINE(256)
		int rowHeight = (int)0;		HX_STACK_VAR(rowHeight,"rowHeight");
		HX_STACK_LINE(257)
		cx = (int)0;
		HX_STACK_LINE(259)
		while((true)){
			HX_STACK_LINE(259)
			int _g1 = PxBitmapData->get_width();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(259)
			if ((!(((cx < _g1))))){
				HX_STACK_LINE(259)
				break;
			}
			HX_STACK_LINE(261)
			int _g2 = PxBitmapData->getPixel(cx,cy);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(261)
			int _g3 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(261)
			if (((_g3 != bgColor))){
				HX_STACK_LINE(264)
				int gx = cx;		HX_STACK_VAR(gx,"gx");
				HX_STACK_LINE(265)
				int gy = cy;		HX_STACK_VAR(gy,"gy");
				HX_STACK_LINE(268)
				while((true)){
					HX_STACK_LINE(268)
					int _g4 = PxBitmapData->getPixel(gx,cy);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(268)
					int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(268)
					if ((!(((_g5 != bgColor))))){
						HX_STACK_LINE(268)
						break;
					}
					HX_STACK_LINE(270)
					(gx)++;
				}
				HX_STACK_LINE(273)
				while((true)){
					HX_STACK_LINE(273)
					int _g6 = PxBitmapData->getPixel(cx,gy);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(273)
					int _g7 = ::Std_obj::_int(_g6);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(273)
					if ((!(((_g7 != bgColor))))){
						HX_STACK_LINE(273)
						break;
					}
					HX_STACK_LINE(275)
					(gy)++;
				}
				HX_STACK_LINE(278)
				int gw = (gx - cx);		HX_STACK_VAR(gw,"gw");
				HX_STACK_LINE(279)
				int gh = (gy - cy);		HX_STACK_VAR(gh,"gh");
				HX_STACK_LINE(281)
				::flash::geom::Rectangle _g8 = ::flash::geom::Rectangle_obj::__new(cx,cy,gw,gh);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(281)
				PxRects->push(_g8);
				HX_STACK_LINE(284)
				if (((gh > rowHeight))){
					HX_STACK_LINE(286)
					rowHeight = gh;
				}
				HX_STACK_LINE(289)
				if (((gh > this->_maxHeight))){
					HX_STACK_LINE(291)
					this->_maxHeight = gh;
				}
				HX_STACK_LINE(295)
				hx::AddEq(cx,gw);
			}
			HX_STACK_LINE(298)
			(cx)++;
		}
		HX_STACK_LINE(301)
		hx::AddEq(cy,(rowHeight + (int)1));
	}
	HX_STACK_LINE(305)
	PxBitmapData->floodFill((int)0,(int)0,(int)0);
	HX_STACK_LINE(307)
	return PxBitmapData;
}


HX_DEFINE_DYNAMIC_FUNC2(PxBitmapFont_obj,preparePixelizerBitmapData,return )

::flash::display::BitmapData PxBitmapFont_obj::prepareAngelCodeBitmapData( ::flash::display::BitmapData PxBitmapData,::Xml PxXMLData,Array< ::Dynamic > PxSymbols){
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","prepareAngelCodeBitmapData",0x4f7ef45e,"flixel.text.pxText.PxBitmapFont.prepareAngelCodeBitmapData","flixel/text/pxText/PxBitmapFont.hx",311,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(PxBitmapData,"PxBitmapData")
	HX_STACK_ARG(PxXMLData,"PxXMLData")
	HX_STACK_ARG(PxSymbols,"PxSymbols")
	HX_STACK_LINE(312)
	::Xml chars = null();		HX_STACK_VAR(chars,"chars");
	HX_STACK_LINE(314)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(PxXMLData->elements());  __it->hasNext(); ){
		::Xml node = __it->next();
		{
			HX_STACK_LINE(316)
			::String _g = node->get_nodeName();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(316)
			if (((_g == HX_CSTRING("font")))){
				HX_STACK_LINE(318)
				for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(node->elements());  __it->hasNext(); ){
					::Xml nodeChild = __it->next();
					{
						HX_STACK_LINE(320)
						::String _g1 = nodeChild->get_nodeName();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(320)
						if (((_g1 == HX_CSTRING("chars")))){
							HX_STACK_LINE(322)
							chars = nodeChild;
							HX_STACK_LINE(323)
							break;
						}
					}
;
				}
			}
		}
;
	}
	HX_STACK_LINE(329)
	::flixel::text::pxText::_PxBitmapFont::HelperSymbol symbol;		HX_STACK_VAR(symbol,"symbol");
	HX_STACK_LINE(330)
	int maxX = (int)0;		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(331)
	int maxY = (int)0;		HX_STACK_VAR(maxY,"maxY");
	HX_STACK_LINE(333)
	if (((chars != null()))){
		HX_STACK_LINE(335)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(chars->elements());  __it->hasNext(); ){
			::Xml node = __it->next();
			{
				HX_STACK_LINE(337)
				::String _g2 = node->get_nodeName();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(337)
				if (((_g2 == HX_CSTRING("char")))){
					HX_STACK_LINE(339)
					::flixel::text::pxText::_PxBitmapFont::HelperSymbol _g3 = ::flixel::text::pxText::_PxBitmapFont::HelperSymbol_obj::__new();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(339)
					symbol = _g3;
					HX_STACK_LINE(340)
					::String _g4 = node->get(HX_CSTRING("x"));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(340)
					Dynamic _g5 = ::Std_obj::parseInt(_g4);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(340)
					symbol->x = _g5;
					HX_STACK_LINE(341)
					::String _g6 = node->get(HX_CSTRING("y"));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(341)
					Dynamic _g7 = ::Std_obj::parseInt(_g6);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(341)
					symbol->y = _g7;
					HX_STACK_LINE(342)
					::String _g8 = node->get(HX_CSTRING("width"));		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(342)
					Dynamic _g9 = ::Std_obj::parseInt(_g8);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(342)
					symbol->width = _g9;
					HX_STACK_LINE(343)
					::String _g10 = node->get(HX_CSTRING("height"));		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(343)
					Dynamic _g11 = ::Std_obj::parseInt(_g10);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(343)
					symbol->height = _g11;
					HX_STACK_LINE(344)
					::String _g12 = node->get(HX_CSTRING("xoffset"));		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(344)
					Dynamic _g13 = ::Std_obj::parseInt(_g12);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(344)
					symbol->xoffset = _g13;
					HX_STACK_LINE(345)
					::String _g14 = node->get(HX_CSTRING("yoffset"));		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(345)
					Dynamic _g15 = ::Std_obj::parseInt(_g14);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(345)
					symbol->yoffset = _g15;
					HX_STACK_LINE(346)
					::String _g16 = node->get(HX_CSTRING("xadvance"));		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(346)
					Dynamic _g17 = ::Std_obj::parseInt(_g16);		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(346)
					symbol->xadvance = _g17;
					HX_STACK_LINE(347)
					::String _g18 = node->get(HX_CSTRING("id"));		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(347)
					Dynamic _g19 = ::Std_obj::parseInt(_g18);		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(347)
					symbol->charCode = _g19;
					HX_STACK_LINE(349)
					PxSymbols->push(symbol);
					HX_STACK_LINE(351)
					maxX = (symbol->x + symbol->width);
					HX_STACK_LINE(352)
					maxY = (symbol->y + symbol->height);
				}
			}
;
		}
	}
	HX_STACK_LINE(357)
	return PxBitmapData;
}


HX_DEFINE_DYNAMIC_FUNC3(PxBitmapFont_obj,prepareAngelCodeBitmapData,return )

Void PxBitmapFont_obj::dispose( ){
{
		HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","dispose",0xf92e4321,"flixel.text.pxText.PxBitmapFont.dispose","flixel/text/pxText/PxBitmapFont.hx",421,0xb7b5754d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(435)
		this->_symbols = null();
		HX_STACK_LINE(436)
		this->_tileRects = null();
		HX_STACK_LINE(437)
		this->setCachedGraphics(null());
		HX_STACK_LINE(438)
		this->_region = null();
		HX_STACK_LINE(439)
		this->_glyphs = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,dispose,(void))

Void PxBitmapFont_obj::setGlyph( ::flixel::system::layer::TileSheetData Tiles,int PxCharID,::flash::geom::Rectangle PxRect,hx::Null< int >  __o_PxOffsetX,hx::Null< int >  __o_PxOffsetY,hx::Null< int >  __o_PxAdvanceX){
int PxOffsetX = __o_PxOffsetX.Default(0);
int PxOffsetY = __o_PxOffsetY.Default(0);
int PxAdvanceX = __o_PxAdvanceX.Default(0);
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","setGlyph",0x8be1d5e8,"flixel.text.pxText.PxBitmapFont.setGlyph","flixel/text/pxText/PxBitmapFont.hx",490,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tiles,"Tiles")
	HX_STACK_ARG(PxCharID,"PxCharID")
	HX_STACK_ARG(PxRect,"PxRect")
	HX_STACK_ARG(PxOffsetX,"PxOffsetX")
	HX_STACK_ARG(PxOffsetY,"PxOffsetY")
	HX_STACK_ARG(PxAdvanceX,"PxAdvanceX")
{
		HX_STACK_LINE(491)
		int tileID = Tiles->tileSheet->addTileRectID(PxRect,::flixel::text::pxText::PxBitmapFont_obj::ZERO_POINT);		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(492)
		::flixel::text::pxText::PxFontSymbol symbol = ::flixel::text::pxText::PxFontSymbol_obj::__new();		HX_STACK_VAR(symbol,"symbol");
		HX_STACK_LINE(493)
		symbol->tileID = tileID;
		HX_STACK_LINE(494)
		symbol->xoffset = PxOffsetX;
		HX_STACK_LINE(495)
		symbol->yoffset = PxOffsetY;
		HX_STACK_LINE(496)
		symbol->xadvance = PxAdvanceX;
		HX_STACK_LINE(498)
		this->_glyphs->set(PxCharID,symbol);
		HX_STACK_LINE(499)
		(this->_num_letters)++;
		HX_STACK_LINE(501)
		int _g = ::Math_obj::floor(PxRect->height);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(501)
		int _g1 = (_g + PxOffsetY);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(501)
		if (((_g1 > this->_maxHeight))){
			HX_STACK_LINE(503)
			int _g2 = ::Math_obj::floor(PxRect->height);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(503)
			int _g3 = (_g2 + PxOffsetY);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(503)
			this->_maxHeight = _g3;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(PxBitmapFont_obj,setGlyph,(void))

Void PxBitmapFont_obj::render( Array< Float > DrawData,::String PxText,int PxColor,int PxSecondColor,Float PxAlpha,Float PxOffsetX,Float PxOffsetY,int PxLetterSpacing,Float PxScale,hx::Null< bool >  __o_PxUseColor){
bool PxUseColor = __o_PxUseColor.Default(true);
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","render",0x8a9aef14,"flixel.text.pxText.PxBitmapFont.render","flixel/text/pxText/PxBitmapFont.hx",522,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(DrawData,"DrawData")
	HX_STACK_ARG(PxText,"PxText")
	HX_STACK_ARG(PxColor,"PxColor")
	HX_STACK_ARG(PxSecondColor,"PxSecondColor")
	HX_STACK_ARG(PxAlpha,"PxAlpha")
	HX_STACK_ARG(PxOffsetX,"PxOffsetX")
	HX_STACK_ARG(PxOffsetY,"PxOffsetY")
	HX_STACK_ARG(PxLetterSpacing,"PxLetterSpacing")
	HX_STACK_ARG(PxScale,"PxScale")
	HX_STACK_ARG(PxUseColor,"PxUseColor")
{
		HX_STACK_LINE(524)
		Float colorMultiplier = 0.00392156862745098;		HX_STACK_VAR(colorMultiplier,"colorMultiplier");
		HX_STACK_LINE(525)
		Float red = colorMultiplier;		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(526)
		Float green = colorMultiplier;		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(527)
		Float blue = colorMultiplier;		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(529)
		if ((PxUseColor)){
			HX_STACK_LINE(531)
			red = (((int(PxColor) >> int((int)16))) * colorMultiplier);
			HX_STACK_LINE(532)
			green = (((int((int(PxColor) >> int((int)8))) & int((int)255))) * colorMultiplier);
			HX_STACK_LINE(533)
			blue = (((int(PxColor) & int((int)255))) * colorMultiplier);
		}
		HX_STACK_LINE(536)
		hx::AndEq(PxSecondColor,(int)16777215);
		HX_STACK_LINE(537)
		hx::MultEq(red,(int(PxSecondColor) >> int((int)16)));
		HX_STACK_LINE(538)
		hx::MultEq(green,(int((int(PxSecondColor) >> int((int)8))) & int((int)255)));
		HX_STACK_LINE(539)
		hx::MultEq(blue,(int(PxSecondColor) & int((int)255)));
		HX_STACK_LINE(542)
		this->_point->x = PxOffsetX;
		HX_STACK_LINE(543)
		this->_point->y = PxOffsetY;
		HX_STACK_LINE(548)
		::flixel::text::pxText::PxFontSymbol glyph;		HX_STACK_VAR(glyph,"glyph");
		HX_STACK_LINE(549)
		int glyphWidth;		HX_STACK_VAR(glyphWidth,"glyphWidth");
		HX_STACK_LINE(552)
		{
			HX_STACK_LINE(552)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(552)
			int _g = PxText.length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(552)
			while((true)){
				HX_STACK_LINE(552)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(552)
					break;
				}
				HX_STACK_LINE(552)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(554)
				int charCode = PxText.charCodeAt(i);		HX_STACK_VAR(charCode,"charCode");
				HX_STACK_LINE(560)
				::flixel::text::pxText::PxFontSymbol _g2 = this->_glyphs->get(charCode);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(560)
				glyph = _g2;
				HX_STACK_LINE(561)
				if ((this->_glyphs->exists(charCode))){
					HX_STACK_LINE(568)
					glyphWidth = glyph->xadvance;
					HX_STACK_LINE(571)
					DrawData->push(glyph->tileID);
					HX_STACK_LINE(573)
					DrawData->push((this->_point->x + (glyph->xoffset * PxScale)));
					HX_STACK_LINE(575)
					DrawData->push((this->_point->y + (glyph->yoffset * PxScale)));
					HX_STACK_LINE(576)
					DrawData->push(red);
					HX_STACK_LINE(577)
					DrawData->push(green);
					HX_STACK_LINE(578)
					DrawData->push(blue);
					HX_STACK_LINE(580)
					hx::AddEq(this->_point->x,((glyphWidth * PxScale) + PxLetterSpacing));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC10(PxBitmapFont_obj,render,(void))

int PxBitmapFont_obj::getTextWidth( ::String PxText,hx::Null< int >  __o_PxLetterSpacing,hx::Null< Float >  __o_PxFontScale){
int PxLetterSpacing = __o_PxLetterSpacing.Default(0);
Float PxFontScale = __o_PxFontScale.Default(1);
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","getTextWidth",0x7b8ac8e1,"flixel.text.pxText.PxBitmapFont.getTextWidth","flixel/text/pxText/PxBitmapFont.hx",595,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(PxText,"PxText")
	HX_STACK_ARG(PxLetterSpacing,"PxLetterSpacing")
	HX_STACK_ARG(PxFontScale,"PxFontScale")
{
		HX_STACK_LINE(596)
		int w = (int)0;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(598)
		int textLength = PxText.length;		HX_STACK_VAR(textLength,"textLength");
		HX_STACK_LINE(600)
		{
			HX_STACK_LINE(600)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(600)
			int _g = textLength;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(600)
			while((true)){
				HX_STACK_LINE(600)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(600)
					break;
				}
				HX_STACK_LINE(600)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(602)
				int charCode = PxText.charCodeAt(i);		HX_STACK_VAR(charCode,"charCode");
				HX_STACK_LINE(613)
				if ((this->_glyphs->exists(charCode))){
					HX_STACK_LINE(616)
					hx::AddEq(w,this->_glyphs->get(charCode)->__Field(HX_CSTRING("xadvance"),true));
				}
			}
		}
		HX_STACK_LINE(621)
		int _g = ::Math_obj::round((w * PxFontScale));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(621)
		w = _g;
		HX_STACK_LINE(623)
		if (((textLength > (int)1))){
			HX_STACK_LINE(625)
			hx::AddEq(w,(((textLength - (int)1)) * PxLetterSpacing));
		}
		HX_STACK_LINE(628)
		return w;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(PxBitmapFont_obj,getTextWidth,return )

int PxBitmapFont_obj::getFontHeight( ){
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","getFontHeight",0xd1978b4e,"flixel.text.pxText.PxBitmapFont.getFontHeight","flixel/text/pxText/PxBitmapFont.hx",638,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(638)
	return this->_maxHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,getFontHeight,return )

::flash::display::BitmapData PxBitmapFont_obj::get_pixels( ){
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","get_pixels",0xf34299b4,"flixel.text.pxText.PxBitmapFont.get_pixels","flixel/text/pxText/PxBitmapFont.hx",652,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(653)
	if ((!(this->cachedGraphics->isDumped))){
		HX_STACK_LINE(655)
		return this->cachedGraphics->bitmap;
	}
	HX_STACK_LINE(657)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,get_pixels,return )

int PxBitmapFont_obj::get_bgTileID( ){
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","get_bgTileID",0xb12d3875,"flixel.text.pxText.PxBitmapFont.get_bgTileID","flixel/text/pxText/PxBitmapFont.hx",664,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(664)
	return this->_bgTileID;
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,get_bgTileID,return )

int PxBitmapFont_obj::get_numLetters( ){
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","get_numLetters",0xa0fcd52e,"flixel.text.pxText.PxBitmapFont.get_numLetters","flixel/text/pxText/PxBitmapFont.hx",673,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(673)
	return this->_num_letters;
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,get_numLetters,return )

Void PxBitmapFont_obj::setCachedGraphics( ::flixel::util::loaders::CachedGraphics value){
{
		HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","setCachedGraphics",0x035e0711,"flixel.text.pxText.PxBitmapFont.setCachedGraphics","flixel/text/pxText/PxBitmapFont.hx",678,0xb7b5754d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(679)
		if (((bool((this->cachedGraphics != null())) && bool((this->cachedGraphics != value))))){
			HX_STACK_LINE(681)
			::flixel::util::loaders::CachedGraphics _g = this->cachedGraphics;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(681)
			int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(681)
			_g->set_useCount((_g1 - (int)1));
			HX_STACK_LINE(681)
			_g1;
		}
		HX_STACK_LINE(684)
		if (((bool((this->cachedGraphics != value)) && bool((value != null()))))){
			HX_STACK_LINE(686)
			::flixel::util::loaders::CachedGraphics _g = value;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(686)
			int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(686)
			_g->set_useCount((_g1 + (int)1));
			HX_STACK_LINE(686)
			_g1;
		}
		HX_STACK_LINE(688)
		this->cachedGraphics = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PxBitmapFont_obj,setCachedGraphics,(void))

::haxe::ds::StringMap PxBitmapFont_obj::_storedFonts;

::flash::geom::Point PxBitmapFont_obj::ZERO_POINT;

Void PxBitmapFont_obj::store( ::String PxHandle,::flixel::text::pxText::PxBitmapFont PxFont){
{
		HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","store",0x9ccad1e3,"flixel.text.pxText.PxBitmapFont.store","flixel/text/pxText/PxBitmapFont.hx",699,0xb7b5754d)
		HX_STACK_ARG(PxHandle,"PxHandle")
		HX_STACK_ARG(PxFont,"PxFont")
		HX_STACK_LINE(699)
		::flixel::text::pxText::PxBitmapFont_obj::_storedFonts->set(PxHandle,PxFont);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PxBitmapFont_obj,store,(void))

::flixel::text::pxText::PxBitmapFont PxBitmapFont_obj::fetch( ::String PxHandle){
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","fetch",0x16aed23c,"flixel.text.pxText.PxBitmapFont.fetch","flixel/text/pxText/PxBitmapFont.hx",709,0xb7b5754d)
	HX_STACK_ARG(PxHandle,"PxHandle")
	HX_STACK_LINE(710)
	::flixel::text::pxText::PxBitmapFont f = ::flixel::text::pxText::PxBitmapFont_obj::_storedFonts->get(PxHandle);		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(712)
	return f;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PxBitmapFont_obj,fetch,return )

Void PxBitmapFont_obj::clearStorage( ){
{
		HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","clearStorage",0x290b776c,"flixel.text.pxText.PxBitmapFont.clearStorage","flixel/text/pxText/PxBitmapFont.hx",716,0xb7b5754d)
		HX_STACK_LINE(717)
		for(::cpp::FastIterator_obj< ::flixel::text::pxText::PxBitmapFont > *__it = ::cpp::CreateFastIterator< ::flixel::text::pxText::PxBitmapFont >(::flixel::text::pxText::PxBitmapFont_obj::_storedFonts->iterator());  __it->hasNext(); ){
			::flixel::text::pxText::PxBitmapFont font = __it->next();
			font->dispose();
		}
		HX_STACK_LINE(722)
		::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(722)
		::flixel::text::pxText::PxBitmapFont_obj::_storedFonts = _g;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,clearStorage,(void))


PxBitmapFont_obj::PxBitmapFont_obj()
{
}

void PxBitmapFont_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PxBitmapFont);
	HX_MARK_MEMBER_NAME(_glyphs,"_glyphs");
	HX_MARK_MEMBER_NAME(_num_letters,"_num_letters");
	HX_MARK_MEMBER_NAME(_bgTileID,"_bgTileID");
	HX_MARK_MEMBER_NAME(_glyphString,"_glyphString");
	HX_MARK_MEMBER_NAME(_maxHeight,"_maxHeight");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_tileRects,"_tileRects");
	HX_MARK_MEMBER_NAME(_symbols,"_symbols");
	HX_MARK_MEMBER_NAME(_region,"_region");
	HX_MARK_MEMBER_NAME(cachedGraphics,"cachedGraphics");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(bgTileID,"bgTileID");
	HX_MARK_END_CLASS();
}

void PxBitmapFont_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_glyphs,"_glyphs");
	HX_VISIT_MEMBER_NAME(_num_letters,"_num_letters");
	HX_VISIT_MEMBER_NAME(_bgTileID,"_bgTileID");
	HX_VISIT_MEMBER_NAME(_glyphString,"_glyphString");
	HX_VISIT_MEMBER_NAME(_maxHeight,"_maxHeight");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_tileRects,"_tileRects");
	HX_VISIT_MEMBER_NAME(_symbols,"_symbols");
	HX_VISIT_MEMBER_NAME(_region,"_region");
	HX_VISIT_MEMBER_NAME(cachedGraphics,"cachedGraphics");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(bgTileID,"bgTileID");
}

Dynamic PxBitmapFont_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"store") ) { return store_dyn(); }
		if (HX_FIELD_EQ(inName,"fetch") ) { return fetch_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"pixels") ) { return inCallProp ? get_pixels() : pixels; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_glyphs") ) { return _glyphs; }
		if (HX_FIELD_EQ(inName,"_region") ) { return _region; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_symbols") ) { return _symbols; }
		if (HX_FIELD_EQ(inName,"setGlyph") ) { return setGlyph_dyn(); }
		if (HX_FIELD_EQ(inName,"bgTileID") ) { return inCallProp ? get_bgTileID() : bgTileID; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bgTileID") ) { return _bgTileID; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ZERO_POINT") ) { return ZERO_POINT; }
		if (HX_FIELD_EQ(inName,"_maxHeight") ) { return _maxHeight; }
		if (HX_FIELD_EQ(inName,"_tileRects") ) { return _tileRects; }
		if (HX_FIELD_EQ(inName,"numLetters") ) { return get_numLetters(); }
		if (HX_FIELD_EQ(inName,"get_pixels") ) { return get_pixels_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storedFonts") ) { return _storedFonts; }
		if (HX_FIELD_EQ(inName,"clearStorage") ) { return clearStorage_dyn(); }
		if (HX_FIELD_EQ(inName,"_num_letters") ) { return _num_letters; }
		if (HX_FIELD_EQ(inName,"_glyphString") ) { return _glyphString; }
		if (HX_FIELD_EQ(inName,"getTextWidth") ) { return getTextWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bgTileID") ) { return get_bgTileID_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadPixelizer") ) { return loadPixelizer_dyn(); }
		if (HX_FIELD_EQ(inName,"loadAngelCode") ) { return loadAngelCode_dyn(); }
		if (HX_FIELD_EQ(inName,"getFontHeight") ) { return getFontHeight_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cachedGraphics") ) { return cachedGraphics; }
		if (HX_FIELD_EQ(inName,"get_numLetters") ) { return get_numLetters_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateGlyphData") ) { return updateGlyphData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setCachedGraphics") ) { return setCachedGraphics_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"preparePixelizerBitmapData") ) { return preparePixelizerBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"prepareAngelCodeBitmapData") ) { return prepareAngelCodeBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PxBitmapFont_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_glyphs") ) { _glyphs=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_region") ) { _region=inValue.Cast< ::flixel::system::layer::Region >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_symbols") ) { _symbols=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bgTileID") ) { bgTileID=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bgTileID") ) { _bgTileID=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ZERO_POINT") ) { ZERO_POINT=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxHeight") ) { _maxHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileRects") ) { _tileRects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storedFonts") ) { _storedFonts=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_num_letters") ) { _num_letters=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_glyphString") ) { _glyphString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cachedGraphics") ) { cachedGraphics=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PxBitmapFont_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_glyphs"));
	outFields->push(HX_CSTRING("_num_letters"));
	outFields->push(HX_CSTRING("_bgTileID"));
	outFields->push(HX_CSTRING("_glyphString"));
	outFields->push(HX_CSTRING("_maxHeight"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_tileRects"));
	outFields->push(HX_CSTRING("_symbols"));
	outFields->push(HX_CSTRING("_region"));
	outFields->push(HX_CSTRING("cachedGraphics"));
	outFields->push(HX_CSTRING("numLetters"));
	outFields->push(HX_CSTRING("pixels"));
	outFields->push(HX_CSTRING("bgTileID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_storedFonts"),
	HX_CSTRING("ZERO_POINT"),
	HX_CSTRING("store"),
	HX_CSTRING("fetch"),
	HX_CSTRING("clearStorage"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(PxBitmapFont_obj,_glyphs),HX_CSTRING("_glyphs")},
	{hx::fsInt,(int)offsetof(PxBitmapFont_obj,_num_letters),HX_CSTRING("_num_letters")},
	{hx::fsInt,(int)offsetof(PxBitmapFont_obj,_bgTileID),HX_CSTRING("_bgTileID")},
	{hx::fsString,(int)offsetof(PxBitmapFont_obj,_glyphString),HX_CSTRING("_glyphString")},
	{hx::fsInt,(int)offsetof(PxBitmapFont_obj,_maxHeight),HX_CSTRING("_maxHeight")},
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(PxBitmapFont_obj,_point),HX_CSTRING("_point")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PxBitmapFont_obj,_tileRects),HX_CSTRING("_tileRects")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PxBitmapFont_obj,_symbols),HX_CSTRING("_symbols")},
	{hx::fsObject /*::flixel::system::layer::Region*/ ,(int)offsetof(PxBitmapFont_obj,_region),HX_CSTRING("_region")},
	{hx::fsObject /*::flixel::util::loaders::CachedGraphics*/ ,(int)offsetof(PxBitmapFont_obj,cachedGraphics),HX_CSTRING("cachedGraphics")},
	{hx::fsObject /*::flash::display::BitmapData*/ ,(int)offsetof(PxBitmapFont_obj,pixels),HX_CSTRING("pixels")},
	{hx::fsInt,(int)offsetof(PxBitmapFont_obj,bgTileID),HX_CSTRING("bgTileID")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_glyphs"),
	HX_CSTRING("_num_letters"),
	HX_CSTRING("_bgTileID"),
	HX_CSTRING("_glyphString"),
	HX_CSTRING("_maxHeight"),
	HX_CSTRING("_point"),
	HX_CSTRING("_tileRects"),
	HX_CSTRING("_symbols"),
	HX_CSTRING("_region"),
	HX_CSTRING("cachedGraphics"),
	HX_CSTRING("loadPixelizer"),
	HX_CSTRING("loadAngelCode"),
	HX_CSTRING("updateGlyphData"),
	HX_CSTRING("reset"),
	HX_CSTRING("preparePixelizerBitmapData"),
	HX_CSTRING("prepareAngelCodeBitmapData"),
	HX_CSTRING("dispose"),
	HX_CSTRING("setGlyph"),
	HX_CSTRING("render"),
	HX_CSTRING("getTextWidth"),
	HX_CSTRING("getFontHeight"),
	HX_CSTRING("pixels"),
	HX_CSTRING("get_pixels"),
	HX_CSTRING("bgTileID"),
	HX_CSTRING("get_bgTileID"),
	HX_CSTRING("get_numLetters"),
	HX_CSTRING("setCachedGraphics"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PxBitmapFont_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PxBitmapFont_obj::_storedFonts,"_storedFonts");
	HX_MARK_MEMBER_NAME(PxBitmapFont_obj::ZERO_POINT,"ZERO_POINT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PxBitmapFont_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PxBitmapFont_obj::_storedFonts,"_storedFonts");
	HX_VISIT_MEMBER_NAME(PxBitmapFont_obj::ZERO_POINT,"ZERO_POINT");
};

#endif

Class PxBitmapFont_obj::__mClass;

void PxBitmapFont_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.text.pxText.PxBitmapFont"), hx::TCanCast< PxBitmapFont_obj> ,sStaticFields,sMemberFields,
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

void PxBitmapFont_obj::__boot()
{
	_storedFonts= ::haxe::ds::StringMap_obj::__new();
	ZERO_POINT= ::flash::geom::Point_obj::__new(null(),null());
}

} // end namespace flixel
} // end namespace text
} // end namespace pxText
