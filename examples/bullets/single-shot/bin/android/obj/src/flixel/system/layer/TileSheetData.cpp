#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
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
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxRotatedFrame
#include <flixel/system/layer/frames/FlxRotatedFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureAtlasFrame
#include <flixel/util/loaders/TextureAtlasFrame.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TexturePackerData
#include <flixel/util/loaders/TexturePackerData.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace flixel{
namespace system{
namespace layer{

Void TileSheetData_obj::__construct(::flash::display::BitmapData Bitmap)
{
HX_STACK_FRAME("flixel.system.layer.TileSheetData","new",0xa6b56f23,"flixel.system.layer.TileSheetData.new","flixel/system/layer/TileSheetData.hx",44,0x2838e1ce)
HX_STACK_THIS(this)
HX_STACK_ARG(Bitmap,"Bitmap")
{
	HX_STACK_LINE(45)
	this->bitmap = Bitmap;
	HX_STACK_LINE(47)
	::flixel::system::layer::TileSheetExt _g = ::flixel::system::layer::TileSheetExt_obj::__new(this->bitmap);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(47)
	this->tileSheet = _g;
	HX_STACK_LINE(49)
	::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(49)
	this->flxSpriteFrames = _g1;
	HX_STACK_LINE(50)
	::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(50)
	this->flxFrames = _g2;
	HX_STACK_LINE(51)
	Array< ::String > _g3 = Array_obj< ::String >::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(51)
	this->frameNames = _g3;
	HX_STACK_LINE(52)
	Array< ::Dynamic > _g4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(52)
	this->framesArr = _g4;
}
;
	return null();
}

//TileSheetData_obj::~TileSheetData_obj() { }

Dynamic TileSheetData_obj::__CreateEmpty() { return  new TileSheetData_obj; }
hx::ObjectPtr< TileSheetData_obj > TileSheetData_obj::__new(::flash::display::BitmapData Bitmap)
{  hx::ObjectPtr< TileSheetData_obj > result = new TileSheetData_obj();
	result->__construct(Bitmap);
	return result;}

Dynamic TileSheetData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileSheetData_obj > result = new TileSheetData_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *TileSheetData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

::flixel::system::layer::frames::FlxFrame TileSheetData_obj::getFrame( ::String name){
	HX_STACK_FRAME("flixel.system.layer.TileSheetData","getFrame",0x5af38614,"flixel.system.layer.TileSheetData.getFrame","flixel/system/layer/TileSheetData.hx",57,0x2838e1ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(57)
	return this->flxFrames->get(name);
}


HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,getFrame,return )

::flixel::system::layer::frames::FlxSpriteFrames TileSheetData_obj::getSpriteSheetFrames( ::flixel::system::layer::Region region,::flash::geom::Point origin){
	HX_STACK_FRAME("flixel.system.layer.TileSheetData","getSpriteSheetFrames",0x12547407,"flixel.system.layer.TileSheetData.getSpriteSheetFrames","flixel/system/layer/TileSheetData.hx",61,0x2838e1ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(region,"region")
	HX_STACK_ARG(origin,"origin")
	HX_STACK_LINE(62)
	int bitmapWidth = region->width;		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
	HX_STACK_LINE(63)
	int bitmapHeight = region->height;		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
	HX_STACK_LINE(65)
	int startX = region->startX;		HX_STACK_VAR(startX,"startX");
	HX_STACK_LINE(66)
	int startY = region->startY;		HX_STACK_VAR(startY,"startY");
	HX_STACK_LINE(68)
	int endX = (startX + bitmapWidth);		HX_STACK_VAR(endX,"endX");
	HX_STACK_LINE(69)
	int endY = (startY + bitmapHeight);		HX_STACK_VAR(endY,"endY");
	HX_STACK_LINE(71)
	int xSpacing = region->spacingX;		HX_STACK_VAR(xSpacing,"xSpacing");
	HX_STACK_LINE(72)
	int ySpacing = region->spacingY;		HX_STACK_VAR(ySpacing,"ySpacing");
	HX_STACK_LINE(74)
	int width;		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(74)
	if (((region->tileWidth == (int)0))){
		HX_STACK_LINE(74)
		width = bitmapWidth;
	}
	else{
		HX_STACK_LINE(74)
		width = region->tileWidth;
	}
	HX_STACK_LINE(75)
	int height;		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(75)
	if (((region->tileHeight == (int)0))){
		HX_STACK_LINE(75)
		height = bitmapHeight;
	}
	else{
		HX_STACK_LINE(75)
		height = region->tileHeight;
	}
	HX_STACK_LINE(77)
	Float pointX = (0.5 * width);		HX_STACK_VAR(pointX,"pointX");
	HX_STACK_LINE(78)
	Float pointY = (0.5 * height);		HX_STACK_VAR(pointY,"pointY");
	HX_STACK_LINE(80)
	if (((origin != null()))){
		HX_STACK_LINE(82)
		pointX = origin->x;
		HX_STACK_LINE(83)
		pointY = origin->y;
	}
	HX_STACK_LINE(86)
	::String key = ((((((((((((((((((width + HX_CSTRING("_")) + height) + HX_CSTRING("_")) + startX) + HX_CSTRING("_")) + startY) + HX_CSTRING("_")) + endX) + HX_CSTRING("_")) + endY) + HX_CSTRING("_")) + xSpacing) + HX_CSTRING("_")) + ySpacing) + HX_CSTRING("_")) + pointX) + HX_CSTRING("_")) + pointY);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(87)
	if ((this->flxSpriteFrames->exists(key))){
		HX_STACK_LINE(89)
		return this->flxSpriteFrames->get(key);
	}
	HX_STACK_LINE(92)
	int numRows = region->get_numRows();		HX_STACK_VAR(numRows,"numRows");
	HX_STACK_LINE(93)
	int numCols = region->get_numCols();		HX_STACK_VAR(numCols,"numCols");
	HX_STACK_LINE(95)
	::flash::geom::Point tempPoint = origin;		HX_STACK_VAR(tempPoint,"tempPoint");
	HX_STACK_LINE(96)
	if (((origin == null()))){
		HX_STACK_LINE(98)
		::flash::geom::Point _g = ::flash::geom::Point_obj::__new(pointX,pointY);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(98)
		tempPoint = _g;
	}
	HX_STACK_LINE(101)
	::flixel::system::layer::frames::FlxSpriteFrames spriteData = ::flixel::system::layer::frames::FlxSpriteFrames_obj::__new(key);		HX_STACK_VAR(spriteData,"spriteData");
	HX_STACK_LINE(103)
	::flixel::system::layer::frames::FlxFrame frame;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(104)
	::flash::geom::Rectangle tempRect;		HX_STACK_VAR(tempRect,"tempRect");
	HX_STACK_LINE(106)
	int spacedWidth = (width + xSpacing);		HX_STACK_VAR(spacedWidth,"spacedWidth");
	HX_STACK_LINE(107)
	int spacedHeight = (height + ySpacing);		HX_STACK_VAR(spacedHeight,"spacedHeight");
	HX_STACK_LINE(109)
	{
		HX_STACK_LINE(109)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(109)
		int _g = numRows;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(109)
		while((true)){
			HX_STACK_LINE(109)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(109)
				break;
			}
			HX_STACK_LINE(109)
			int j = (_g1)++;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(111)
			{
				HX_STACK_LINE(111)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(111)
				int _g2 = numCols;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(111)
				while((true)){
					HX_STACK_LINE(111)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(111)
						break;
					}
					HX_STACK_LINE(111)
					int i = (_g3)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(113)
					::flash::geom::Rectangle _g11 = ::flash::geom::Rectangle_obj::__new((startX + (i * spacedWidth)),(startY + (j * spacedHeight)),width,height);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(113)
					tempRect = _g11;
					HX_STACK_LINE(114)
					::flixel::system::layer::frames::FlxFrame _g21 = this->addSpriteSheetFrame(tempRect,tempPoint);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(114)
					frame = _g21;
					HX_STACK_LINE(115)
					spriteData->addFrame(frame);
				}
			}
		}
	}
	HX_STACK_LINE(119)
	this->flxSpriteFrames->set(key,spriteData);
	HX_STACK_LINE(120)
	return spriteData;
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,getSpriteSheetFrames,return )

::String TileSheetData_obj::getSpriteSheetFrameKey( ::flash::geom::Rectangle rect,::flash::geom::Point point){
	HX_STACK_FRAME("flixel.system.layer.TileSheetData","getSpriteSheetFrameKey",0xa740c213,"flixel.system.layer.TileSheetData.getSpriteSheetFrameKey","flixel/system/layer/TileSheetData.hx",131,0x2838e1ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(131)
	return ((((((((((rect->x + HX_CSTRING("_")) + rect->y) + HX_CSTRING("_")) + rect->width) + HX_CSTRING("_")) + rect->height) + HX_CSTRING("_")) + point->x) + HX_CSTRING("_")) + point->y);
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,getSpriteSheetFrameKey,return )

::String TileSheetData_obj::getKeyForSpriteSheetFrames( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY){
	HX_STACK_FRAME("flixel.system.layer.TileSheetData","getKeyForSpriteSheetFrames",0x8c6fd93d,"flixel.system.layer.TileSheetData.getKeyForSpriteSheetFrames","flixel/system/layer/TileSheetData.hx",136,0x2838e1ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(startX,"startX")
	HX_STACK_ARG(startY,"startY")
	HX_STACK_ARG(endX,"endX")
	HX_STACK_ARG(endY,"endY")
	HX_STACK_ARG(xSpacing,"xSpacing")
	HX_STACK_ARG(ySpacing,"ySpacing")
	HX_STACK_ARG(pointX,"pointX")
	HX_STACK_ARG(pointY,"pointY")
	HX_STACK_LINE(136)
	return ((((((((((((((((((width + HX_CSTRING("_")) + height) + HX_CSTRING("_")) + startX) + HX_CSTRING("_")) + startY) + HX_CSTRING("_")) + endX) + HX_CSTRING("_")) + endY) + HX_CSTRING("_")) + xSpacing) + HX_CSTRING("_")) + ySpacing) + HX_CSTRING("_")) + pointX) + HX_CSTRING("_")) + pointY);
}


HX_DEFINE_DYNAMIC_FUNC10(TileSheetData_obj,getKeyForSpriteSheetFrames,return )

bool TileSheetData_obj::containsSpriteSheetFrames( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY){
	HX_STACK_FRAME("flixel.system.layer.TileSheetData","containsSpriteSheetFrames",0x6b49c384,"flixel.system.layer.TileSheetData.containsSpriteSheetFrames","flixel/system/layer/TileSheetData.hx",140,0x2838e1ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(startX,"startX")
	HX_STACK_ARG(startY,"startY")
	HX_STACK_ARG(endX,"endX")
	HX_STACK_ARG(endY,"endY")
	HX_STACK_ARG(xSpacing,"xSpacing")
	HX_STACK_ARG(ySpacing,"ySpacing")
	HX_STACK_ARG(pointX,"pointX")
	HX_STACK_ARG(pointY,"pointY")
	HX_STACK_LINE(141)
	::String key = ((((((((((((((((((width + HX_CSTRING("_")) + height) + HX_CSTRING("_")) + startX) + HX_CSTRING("_")) + startY) + HX_CSTRING("_")) + endX) + HX_CSTRING("_")) + endY) + HX_CSTRING("_")) + xSpacing) + HX_CSTRING("_")) + ySpacing) + HX_CSTRING("_")) + pointX) + HX_CSTRING("_")) + pointY);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(142)
	return this->flxSpriteFrames->exists(key);
}


HX_DEFINE_DYNAMIC_FUNC10(TileSheetData_obj,containsSpriteSheetFrames,return )

::flixel::system::layer::frames::FlxFrame TileSheetData_obj::addSpriteSheetFrame( ::flash::geom::Rectangle rect,::flash::geom::Point point){
	HX_STACK_FRAME("flixel.system.layer.TileSheetData","addSpriteSheetFrame",0x64739277,"flixel.system.layer.TileSheetData.addSpriteSheetFrame","flixel/system/layer/TileSheetData.hx",149,0x2838e1ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(150)
	::String key = ((((((((((rect->x + HX_CSTRING("_")) + rect->y) + HX_CSTRING("_")) + rect->width) + HX_CSTRING("_")) + rect->height) + HX_CSTRING("_")) + point->x) + HX_CSTRING("_")) + point->y);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(151)
	if ((this->flxFrames->exists(key))){
		HX_STACK_LINE(153)
		return this->flxFrames->get(key);
	}
	HX_STACK_LINE(156)
	::flixel::system::layer::frames::FlxFrame frame = ::flixel::system::layer::frames::FlxFrame_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(158)
	int _g = this->tileSheet->addTileRectID(rect,point);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(158)
	frame->tileID = _g;
	HX_STACK_LINE(160)
	frame->name = key;
	HX_STACK_LINE(161)
	frame->frame = rect;
	HX_STACK_LINE(162)
	frame->trimmed = false;
	HX_STACK_LINE(163)
	frame->sourceSize->set(rect->width,rect->height);
	HX_STACK_LINE(164)
	frame->offset->set((int)0,(int)0);
	HX_STACK_LINE(166)
	frame->center->set((0.5 * rect->width),(0.5 * rect->height));
	HX_STACK_LINE(167)
	this->flxFrames->set(key,frame);
	HX_STACK_LINE(168)
	this->frameNames->push(key);
	HX_STACK_LINE(169)
	this->framesArr->push(frame);
	HX_STACK_LINE(170)
	return frame;
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,addSpriteSheetFrame,return )

bool TileSheetData_obj::containsFrame( ::String key){
	HX_STACK_FRAME("flixel.system.layer.TileSheetData","containsFrame",0x0c1e4e11,"flixel.system.layer.TileSheetData.containsFrame","flixel/system/layer/TileSheetData.hx",175,0x2838e1ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(175)
	return this->flxFrames->exists(key);
}


HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,containsFrame,return )

int TileSheetData_obj::addTileRect( ::flash::geom::Rectangle tileRect,::flash::geom::Point point){
	HX_STACK_FRAME("flixel.system.layer.TileSheetData","addTileRect",0xd31c4476,"flixel.system.layer.TileSheetData.addTileRect","flixel/system/layer/TileSheetData.hx",181,0x2838e1ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileRect,"tileRect")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(181)
	return this->tileSheet->addTileRectID(tileRect,point);
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,addTileRect,return )

Void TileSheetData_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.layer.TileSheetData","destroy",0xa631e93d,"flixel.system.layer.TileSheetData.destroy","flixel/system/layer/TileSheetData.hx",186,0x2838e1ce)
		HX_STACK_THIS(this)
		HX_STACK_LINE(187)
		this->bitmap = null();
		HX_STACK_LINE(189)
		this->tileSheet->destroy();
		HX_STACK_LINE(190)
		this->tileSheet = null();
		HX_STACK_LINE(193)
		for(::cpp::FastIterator_obj< ::flixel::system::layer::frames::FlxSpriteFrames > *__it = ::cpp::CreateFastIterator< ::flixel::system::layer::frames::FlxSpriteFrames >(this->flxSpriteFrames->iterator());  __it->hasNext(); ){
			::flixel::system::layer::frames::FlxSpriteFrames frames = __it->next();
			frames->destroy();
		}
		HX_STACK_LINE(197)
		this->flxSpriteFrames = null();
		HX_STACK_LINE(199)
		{
			HX_STACK_LINE(199)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(199)
			Array< ::Dynamic > _g1 = this->framesArr;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(199)
			while((true)){
				HX_STACK_LINE(199)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(199)
					break;
				}
				HX_STACK_LINE(199)
				::flixel::system::layer::frames::FlxFrame frame = _g1->__get(_g).StaticCast< ::flixel::system::layer::frames::FlxFrame >();		HX_STACK_VAR(frame,"frame");
				HX_STACK_LINE(199)
				++(_g);
				HX_STACK_LINE(201)
				frame->destroy();
			}
		}
		HX_STACK_LINE(203)
		this->flxFrames = null();
		HX_STACK_LINE(205)
		this->frameNames = null();
		HX_STACK_LINE(206)
		this->framesArr = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileSheetData_obj,destroy,(void))

Void TileSheetData_obj::onContext( ::flash::display::BitmapData bitmap){
{
		HX_STACK_FRAME("flixel.system.layer.TileSheetData","onContext",0x0267e193,"flixel.system.layer.TileSheetData.onContext","flixel/system/layer/TileSheetData.hx",211,0x2838e1ce)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_LINE(212)
		this->bitmap = bitmap;
		HX_STACK_LINE(213)
		::flixel::system::layer::TileSheetExt newSheet = ::flixel::system::layer::TileSheetExt_obj::__new(bitmap);		HX_STACK_VAR(newSheet,"newSheet");
		HX_STACK_LINE(214)
		newSheet->rebuildFromOld(this->tileSheet);
		HX_STACK_LINE(215)
		this->tileSheet = newSheet;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,onContext,(void))

::flixel::system::layer::frames::FlxSpriteFrames TileSheetData_obj::getTexturePackerFrames( ::flixel::util::loaders::TexturePackerData data,hx::Null< int >  __o_startX,hx::Null< int >  __o_startY){
int startX = __o_startX.Default(0);
int startY = __o_startY.Default(0);
	HX_STACK_FRAME("flixel.system.layer.TileSheetData","getTexturePackerFrames",0xc98e496e,"flixel.system.layer.TileSheetData.getTexturePackerFrames","flixel/system/layer/TileSheetData.hx",223,0x2838e1ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(startX,"startX")
	HX_STACK_ARG(startY,"startY")
{
		HX_STACK_LINE(225)
		if ((this->flxSpriteFrames->exists(data->assetName))){
			HX_STACK_LINE(227)
			return this->flxSpriteFrames->get(data->assetName);
		}
		HX_STACK_LINE(230)
		data->parseData();
		HX_STACK_LINE(232)
		::flixel::system::layer::frames::FlxFrame frame;		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(233)
		::flixel::system::layer::frames::FlxSpriteFrames packerFrames = ::flixel::system::layer::frames::FlxSpriteFrames_obj::__new(data->assetName);		HX_STACK_VAR(packerFrames,"packerFrames");
		HX_STACK_LINE(235)
		int l = data->frames->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(236)
		{
			HX_STACK_LINE(236)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(236)
			while((true)){
				HX_STACK_LINE(236)
				if ((!(((_g < l))))){
					HX_STACK_LINE(236)
					break;
				}
				HX_STACK_LINE(236)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(238)
				::flixel::system::layer::frames::FlxFrame _g1 = this->addTexturePackerFrame(data->frames->__get(i).StaticCast< ::flixel::util::loaders::TextureAtlasFrame >(),startX,startY);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(238)
				frame = _g1;
				HX_STACK_LINE(239)
				packerFrames->addFrame(frame);
			}
		}
		HX_STACK_LINE(242)
		this->flxSpriteFrames->set(data->assetName,packerFrames);
		HX_STACK_LINE(243)
		return packerFrames;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(TileSheetData_obj,getTexturePackerFrames,return )

::flixel::system::layer::frames::FlxFrame TileSheetData_obj::addTexturePackerFrame( ::flixel::util::loaders::TextureAtlasFrame frameData,hx::Null< int >  __o_startX,hx::Null< int >  __o_startY){
int startX = __o_startX.Default(0);
int startY = __o_startY.Default(0);
	HX_STACK_FRAME("flixel.system.layer.TileSheetData","addTexturePackerFrame",0x4900dfb0,"flixel.system.layer.TileSheetData.addTexturePackerFrame","flixel/system/layer/TileSheetData.hx",250,0x2838e1ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frameData,"frameData")
	HX_STACK_ARG(startX,"startX")
	HX_STACK_ARG(startY,"startY")
{
		HX_STACK_LINE(251)
		::String key = frameData->name;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(252)
		if ((this->flxFrames->exists(key))){
			HX_STACK_LINE(254)
			return this->flxFrames->get(key);
		}
		HX_STACK_LINE(257)
		::flixel::system::layer::frames::FlxFrame texFrame = null();		HX_STACK_VAR(texFrame,"texFrame");
		HX_STACK_LINE(259)
		if ((frameData->rotated)){
			HX_STACK_LINE(261)
			::flixel::system::layer::frames::FlxRotatedFrame _g = ::flixel::system::layer::frames::FlxRotatedFrame_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(261)
			texFrame = _g;
		}
		else{
			HX_STACK_LINE(265)
			::flixel::system::layer::frames::FlxFrame _g1 = ::flixel::system::layer::frames::FlxFrame_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(265)
			texFrame = _g1;
		}
		HX_STACK_LINE(268)
		texFrame->trimmed = frameData->trimmed;
		HX_STACK_LINE(269)
		texFrame->name = key;
		HX_STACK_LINE(270)
		{
			HX_STACK_LINE(270)
			::flixel::util::FlxPoint _this = texFrame->sourceSize;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(270)
			::flixel::util::FlxPoint point = frameData->sourceSize;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(270)
			_this->set_x(point->x);
			HX_STACK_LINE(270)
			_this->set_y(point->y);
			HX_STACK_LINE(270)
			_this;
		}
		HX_STACK_LINE(271)
		{
			HX_STACK_LINE(271)
			::flixel::util::FlxPoint _this = texFrame->offset;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(271)
			::flixel::util::FlxPoint point = frameData->offset;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(271)
			_this->set_x(point->x);
			HX_STACK_LINE(271)
			_this->set_y(point->y);
			HX_STACK_LINE(271)
			_this;
		}
		HX_STACK_LINE(272)
		texFrame->center->set((int)0,(int)0);
		HX_STACK_LINE(273)
		::flash::geom::Rectangle _g2 = frameData->frame->clone();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(273)
		texFrame->frame = _g2;
		HX_STACK_LINE(275)
		if ((frameData->rotated)){
			HX_STACK_LINE(277)
			texFrame->center->set(((texFrame->frame->height * 0.5) + texFrame->offset->x),((texFrame->frame->width * 0.5) + texFrame->offset->y));
		}
		else{
			HX_STACK_LINE(281)
			texFrame->center->set(((texFrame->frame->width * 0.5) + texFrame->offset->x),((texFrame->frame->height * 0.5) + texFrame->offset->y));
		}
		HX_STACK_LINE(284)
		texFrame->additionalAngle = frameData->additionalAngle;
		HX_STACK_LINE(287)
		int _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(287)
		{
			HX_STACK_LINE(287)
			::flash::geom::Point point = ::flash::geom::Point_obj::__new((0.5 * texFrame->frame->width),(0.5 * texFrame->frame->height));		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(287)
			_g3 = this->tileSheet->addTileRectID(texFrame->frame,point);
		}
		HX_STACK_LINE(287)
		texFrame->tileID = _g3;
		HX_STACK_LINE(289)
		this->flxFrames->set(key,texFrame);
		HX_STACK_LINE(290)
		this->frameNames->push(key);
		HX_STACK_LINE(291)
		this->framesArr->push(texFrame);
		HX_STACK_LINE(292)
		return texFrame;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(TileSheetData_obj,addTexturePackerFrame,return )

Void TileSheetData_obj::destroyFrameBitmapDatas( ){
{
		HX_STACK_FRAME("flixel.system.layer.TileSheetData","destroyFrameBitmapDatas",0x25de80ca,"flixel.system.layer.TileSheetData.destroyFrameBitmapDatas","flixel/system/layer/TileSheetData.hx",296,0x2838e1ce)
		HX_STACK_THIS(this)
		HX_STACK_LINE(297)
		int numFrames = this->frameNames->length;		HX_STACK_VAR(numFrames,"numFrames");
		HX_STACK_LINE(298)
		{
			HX_STACK_LINE(298)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(298)
			Array< ::Dynamic > _g1 = this->framesArr;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(298)
			while((true)){
				HX_STACK_LINE(298)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(298)
					break;
				}
				HX_STACK_LINE(298)
				::flixel::system::layer::frames::FlxFrame frame = _g1->__get(_g).StaticCast< ::flixel::system::layer::frames::FlxFrame >();		HX_STACK_VAR(frame,"frame");
				HX_STACK_LINE(298)
				++(_g);
				HX_STACK_LINE(300)
				frame->destroyBitmapDatas();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileSheetData_obj,destroyFrameBitmapDatas,(void))


TileSheetData_obj::TileSheetData_obj()
{
}

void TileSheetData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileSheetData);
	HX_MARK_MEMBER_NAME(tileSheet,"tileSheet");
	HX_MARK_MEMBER_NAME(flxSpriteFrames,"flxSpriteFrames");
	HX_MARK_MEMBER_NAME(flxFrames,"flxFrames");
	HX_MARK_MEMBER_NAME(frameNames,"frameNames");
	HX_MARK_MEMBER_NAME(framesArr,"framesArr");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_END_CLASS();
}

void TileSheetData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tileSheet,"tileSheet");
	HX_VISIT_MEMBER_NAME(flxSpriteFrames,"flxSpriteFrames");
	HX_VISIT_MEMBER_NAME(flxFrames,"flxFrames");
	HX_VISIT_MEMBER_NAME(frameNames,"frameNames");
	HX_VISIT_MEMBER_NAME(framesArr,"framesArr");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
}

Dynamic TileSheetData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFrame") ) { return getFrame_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileSheet") ) { return tileSheet; }
		if (HX_FIELD_EQ(inName,"flxFrames") ) { return flxFrames; }
		if (HX_FIELD_EQ(inName,"framesArr") ) { return framesArr; }
		if (HX_FIELD_EQ(inName,"onContext") ) { return onContext_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameNames") ) { return frameNames; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addTileRect") ) { return addTileRect_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsFrame") ) { return containsFrame_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"flxSpriteFrames") ) { return flxSpriteFrames; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addSpriteSheetFrame") ) { return addSpriteSheetFrame_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getSpriteSheetFrames") ) { return getSpriteSheetFrames_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"addTexturePackerFrame") ) { return addTexturePackerFrame_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getSpriteSheetFrameKey") ) { return getSpriteSheetFrameKey_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexturePackerFrames") ) { return getTexturePackerFrames_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"destroyFrameBitmapDatas") ) { return destroyFrameBitmapDatas_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"containsSpriteSheetFrames") ) { return containsSpriteSheetFrames_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getKeyForSpriteSheetFrames") ) { return getKeyForSpriteSheetFrames_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileSheetData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileSheet") ) { tileSheet=inValue.Cast< ::flixel::system::layer::TileSheetExt >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flxFrames") ) { flxFrames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framesArr") ) { framesArr=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameNames") ) { frameNames=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"flxSpriteFrames") ) { flxSpriteFrames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileSheetData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tileSheet"));
	outFields->push(HX_CSTRING("flxSpriteFrames"));
	outFields->push(HX_CSTRING("flxFrames"));
	outFields->push(HX_CSTRING("frameNames"));
	outFields->push(HX_CSTRING("framesArr"));
	outFields->push(HX_CSTRING("bitmap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::system::layer::TileSheetExt*/ ,(int)offsetof(TileSheetData_obj,tileSheet),HX_CSTRING("tileSheet")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TileSheetData_obj,flxSpriteFrames),HX_CSTRING("flxSpriteFrames")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TileSheetData_obj,flxFrames),HX_CSTRING("flxFrames")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TileSheetData_obj,frameNames),HX_CSTRING("frameNames")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TileSheetData_obj,framesArr),HX_CSTRING("framesArr")},
	{hx::fsObject /*::flash::display::BitmapData*/ ,(int)offsetof(TileSheetData_obj,bitmap),HX_CSTRING("bitmap")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("tileSheet"),
	HX_CSTRING("flxSpriteFrames"),
	HX_CSTRING("flxFrames"),
	HX_CSTRING("frameNames"),
	HX_CSTRING("framesArr"),
	HX_CSTRING("bitmap"),
	HX_CSTRING("getFrame"),
	HX_CSTRING("getSpriteSheetFrames"),
	HX_CSTRING("getSpriteSheetFrameKey"),
	HX_CSTRING("getKeyForSpriteSheetFrames"),
	HX_CSTRING("containsSpriteSheetFrames"),
	HX_CSTRING("addSpriteSheetFrame"),
	HX_CSTRING("containsFrame"),
	HX_CSTRING("addTileRect"),
	HX_CSTRING("destroy"),
	HX_CSTRING("onContext"),
	HX_CSTRING("getTexturePackerFrames"),
	HX_CSTRING("addTexturePackerFrame"),
	HX_CSTRING("destroyFrameBitmapDatas"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileSheetData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileSheetData_obj::__mClass,"__mClass");
};

#endif

Class TileSheetData_obj::__mClass;

void TileSheetData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.layer.TileSheetData"), hx::TCanCast< TileSheetData_obj> ,sStaticFields,sMemberFields,
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

void TileSheetData_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace layer
