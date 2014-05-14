#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_filters_BitmapFilter
#include <flash/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFieldAutoSize
#include <flash/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_text_TextFormatAlign
#include <flash/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
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
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace text{

Void FlxText_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_FieldWidth,::String Text,hx::Null< int >  __o_Size,hx::Null< bool >  __o_EmbeddedFont)
{
HX_STACK_FRAME("flixel.text.FlxText","new",0x8fca03a2,"flixel.text.FlxText.new","flixel/text/FlxText.hx",27,0xdf165a6e)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_FieldWidth,"FieldWidth")
HX_STACK_ARG(Text,"Text")
HX_STACK_ARG(__o_Size,"Size")
HX_STACK_ARG(__o_EmbeddedFont,"EmbeddedFont")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float FieldWidth = __o_FieldWidth.Default(0);
int Size = __o_Size.Default(8);
bool EmbeddedFont = __o_EmbeddedFont.Default(true);
{
	HX_STACK_LINE(153)
	this->_heightInc = (int)0;
	HX_STACK_LINE(152)
	this->_widthInc = (int)0;
	HX_STACK_LINE(110)
	this->borderQuality = (int)1;
	HX_STACK_LINE(103)
	this->borderSize = (int)1;
	HX_STACK_LINE(98)
	this->borderColor = (int)0;
	HX_STACK_LINE(93)
	this->borderStyle = (int)0;
	HX_STACK_LINE(167)
	super::__construct(X,Y,null());
	HX_STACK_LINE(169)
	this->_filters = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(171)
	bool setTextEmpty = false;		HX_STACK_VAR(setTextEmpty,"setTextEmpty");
	HX_STACK_LINE(172)
	if (((bool((Text == null())) || bool((Text == HX_CSTRING("")))))){
		HX_STACK_LINE(179)
		Text = HX_CSTRING("");
		HX_STACK_LINE(181)
		setTextEmpty = true;
	}
	HX_STACK_LINE(184)
	::flash::text::TextField _g = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(184)
	this->_textField = _g;
	HX_STACK_LINE(185)
	this->_textField->set_selectable(false);
	HX_STACK_LINE(186)
	this->_textField->set_multiline(true);
	HX_STACK_LINE(187)
	this->_textField->set_wordWrap(true);
	HX_STACK_LINE(188)
	::flash::text::TextFormat _g1 = ::flash::text::TextFormat_obj::__new(::flixel::system::FlxAssets_obj::FONT_DEFAULT,Size,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(188)
	this->_defaultFormat = _g1;
	HX_STACK_LINE(189)
	::flash::text::TextFormat _g2 = ::flash::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(189)
	this->_formatAdjusted = _g2;
	HX_STACK_LINE(190)
	this->_textField->set_defaultTextFormat(this->_defaultFormat);
	HX_STACK_LINE(191)
	this->_textField->set_text(Text);
	HX_STACK_LINE(192)
	this->set_fieldWidth(FieldWidth);
	HX_STACK_LINE(193)
	this->_textField->set_embedFonts(EmbeddedFont);
	HX_STACK_LINE(195)
	Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(195)
	this->_formats = _g3;
	HX_STACK_LINE(201)
	this->_textField->set_height((  (((Text.length <= (int)0))) ? Float((int)1) : Float((int)10) ));
	HX_STACK_LINE(203)
	this->allowCollisions = (int)0;
	HX_STACK_LINE(204)
	this->set_moves(false);
	HX_STACK_LINE(206)
	::String key = ::flixel::FlxG_obj::bitmap->getUniqueKey(HX_CSTRING("text"));		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(207)
	int graphicWidth;		HX_STACK_VAR(graphicWidth,"graphicWidth");
	HX_STACK_LINE(207)
	if (((FieldWidth <= (int)0))){
		HX_STACK_LINE(207)
		graphicWidth = (int)1;
	}
	else{
		HX_STACK_LINE(207)
		graphicWidth = ::Std_obj::_int(FieldWidth);
	}
	HX_STACK_LINE(208)
	this->makeGraphic(graphicWidth,(int)1,(int)0,false,key);
	HX_STACK_LINE(217)
	if (((Text != HX_CSTRING("")))){
		HX_STACK_LINE(219)
		this->calcFrame(null());
	}
	HX_STACK_LINE(223)
	::flixel::util::FlxPoint _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(223)
	{
		HX_STACK_LINE(223)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set((int)1,(int)1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(223)
		point->_inPool = false;
		HX_STACK_LINE(223)
		_g4 = point;
	}
	HX_STACK_LINE(223)
	this->shadowOffset = _g4;
}
;
	return null();
}

//FlxText_obj::~FlxText_obj() { }

Dynamic FlxText_obj::__CreateEmpty() { return  new FlxText_obj; }
hx::ObjectPtr< FlxText_obj > FlxText_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_FieldWidth,::String Text,hx::Null< int >  __o_Size,hx::Null< bool >  __o_EmbeddedFont)
{  hx::ObjectPtr< FlxText_obj > result = new FlxText_obj();
	result->__construct(__o_X,__o_Y,__o_FieldWidth,Text,__o_Size,__o_EmbeddedFont);
	return result;}

Dynamic FlxText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxText_obj > result = new FlxText_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void FlxText_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","destroy",0x1704293c,"flixel.text.FlxText.destroy","flixel/text/FlxText.hx",230,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(231)
		this->_textField = null();
		HX_STACK_LINE(232)
		this->_defaultFormat = null();
		HX_STACK_LINE(233)
		this->_formatAdjusted = null();
		HX_STACK_LINE(234)
		this->_filters = null();
		HX_STACK_LINE(235)
		if (((this->_formats != null()))){
			HX_STACK_LINE(237)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(237)
			Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(237)
			while((true)){
				HX_STACK_LINE(237)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(237)
					break;
				}
				HX_STACK_LINE(237)
				::flixel::text::FlxTextFormat format = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(format,"format");
				HX_STACK_LINE(237)
				++(_g);
				HX_STACK_LINE(239)
				if (((format != null()))){
					HX_STACK_LINE(241)
					format->destroy();
					HX_STACK_LINE(242)
					format = null();
				}
			}
		}
		HX_STACK_LINE(246)
		this->_formats = null();
		HX_STACK_LINE(247)
		::flixel::util::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->shadowOffset);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(247)
		this->shadowOffset = _g;
		HX_STACK_LINE(248)
		this->super::destroy();
	}
return null();
}


Void FlxText_obj::addFormat( ::flixel::text::FlxTextFormat Format,hx::Null< int >  __o_Start,hx::Null< int >  __o_End){
int Start = __o_Start.Default(-1);
int End = __o_End.Default(-1);
	HX_STACK_FRAME("flixel.text.FlxText","addFormat",0xc0d9d4fa,"flixel.text.FlxText.addFormat","flixel/text/FlxText.hx",259,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Format,"Format")
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
{
		HX_STACK_LINE(260)
		if (((Start > (int)-1))){
			HX_STACK_LINE(260)
			Format->start = Start;
		}
		else{
			HX_STACK_LINE(260)
			Format->start = Format->start;
		}
		HX_STACK_LINE(261)
		if (((End > (int)-1))){
			HX_STACK_LINE(261)
			Format->end = End;
		}
		else{
			HX_STACK_LINE(261)
			Format->end = Format->end;
		}
		HX_STACK_LINE(262)
		this->_formats->push(Format);

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int run(::flixel::text::FlxTextFormat left,::flixel::text::FlxTextFormat right){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/text/FlxText.hx",264,0xdf165a6e)
			HX_STACK_ARG(left,"left")
			HX_STACK_ARG(right,"right")
			{
				HX_STACK_LINE(264)
				if (((left->start < right->start))){
					HX_STACK_LINE(264)
					return (int)-1;
				}
				else{
					HX_STACK_LINE(264)
					return (int)1;
				}
				HX_STACK_LINE(264)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(264)
		this->_formats->sort( Dynamic(new _Function_1_1()));
		HX_STACK_LINE(265)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,addFormat,(void))

Void FlxText_obj::removeFormat( ::flixel::text::FlxTextFormat Format){
{
		HX_STACK_FRAME("flixel.text.FlxText","removeFormat",0xa79a7f19,"flixel.text.FlxText.removeFormat","flixel/text/FlxText.hx",272,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Format,"Format")
		HX_STACK_LINE(273)
		{
			HX_STACK_LINE(273)
			Array< ::Dynamic > array = this->_formats;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(273)
			int index = ::flixel::util::FlxArrayUtil_obj::indexOf_fastSplice_T(array,Format,null());		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(273)
			if (((index != (int)-1))){
				HX_STACK_LINE(273)
				array[index] = array->__get((array->length - (int)1)).StaticCast< ::flixel::text::FlxTextFormat >();
				HX_STACK_LINE(273)
				array->pop().StaticCast< ::flixel::text::FlxTextFormat >();
				HX_STACK_LINE(273)
				array;
			}
			else{
				HX_STACK_LINE(273)
				array;
			}
		}
		HX_STACK_LINE(274)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,removeFormat,(void))

Void FlxText_obj::clearFormats( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","clearFormats",0xf58bc7cd,"flixel.text.FlxText.clearFormats","flixel/text/FlxText.hx",281,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(282)
		{
			HX_STACK_LINE(282)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(282)
			Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(282)
			while((true)){
				HX_STACK_LINE(282)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(282)
					break;
				}
				HX_STACK_LINE(282)
				::flixel::text::FlxTextFormat format = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(format,"format");
				HX_STACK_LINE(282)
				++(_g);
				HX_STACK_LINE(284)
				format->destroy();
				HX_STACK_LINE(285)
				format = null();
			}
		}
		HX_STACK_LINE(288)
		this->_formats = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(290)
		this->_textField->setTextFormat(this->_defaultFormat,(int)0,this->_textField->get_text().length);
		HX_STACK_LINE(291)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,clearFormats,(void))

::flixel::text::FlxText FlxText_obj::setFormat( ::String Font,hx::Null< Float >  __o_Size,hx::Null< int >  __o_Color,::String Alignment,hx::Null< int >  __o_BorderStyle,hx::Null< int >  __o_BorderColor,hx::Null< bool >  __o_Embedded){
Float Size = __o_Size.Default(8);
int Color = __o_Color.Default(16777215);
int BorderStyle = __o_BorderStyle.Default(0);
int BorderColor = __o_BorderColor.Default(0);
bool Embedded = __o_Embedded.Default(true);
	HX_STACK_FRAME("flixel.text.FlxText","setFormat",0x685d153b,"flixel.text.FlxText.setFormat","flixel/text/FlxText.hx",309,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Font,"Font")
	HX_STACK_ARG(Size,"Size")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Alignment,"Alignment")
	HX_STACK_ARG(BorderStyle,"BorderStyle")
	HX_STACK_ARG(BorderColor,"BorderColor")
	HX_STACK_ARG(Embedded,"Embedded")
{
		HX_STACK_LINE(310)
		if ((Embedded)){
			HX_STACK_LINE(312)
			if (((Font == null()))){
				HX_STACK_LINE(314)
				this->_defaultFormat->font = ::flixel::system::FlxAssets_obj::FONT_DEFAULT;
			}
			else{
				HX_STACK_LINE(318)
				this->_defaultFormat->font = ::openfl::Assets_obj::getFont(Font,null())->fontName;
			}
		}
		else{
			HX_STACK_LINE(321)
			if (((Font != null()))){
				HX_STACK_LINE(323)
				this->_defaultFormat->font = Font;
			}
		}
		HX_STACK_LINE(326)
		this->_textField->set_embedFonts(Embedded);
		HX_STACK_LINE(328)
		this->_defaultFormat->size = Size;
		HX_STACK_LINE(329)
		hx::AndEq(Color,(int)16777215);
		HX_STACK_LINE(330)
		this->_defaultFormat->color = Color;
		HX_STACK_LINE(331)
		::String _g = this->convertTextAlignmentFromString(Alignment);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(331)
		this->_defaultFormat->align = _g;
		HX_STACK_LINE(332)
		this->_textField->set_defaultTextFormat(this->_defaultFormat);
		HX_STACK_LINE(333)
		this->set_borderStyle(BorderStyle);
		HX_STACK_LINE(334)
		this->set_borderColor(BorderColor);
		HX_STACK_LINE(335)
		this->_textField->setTextFormat(this->_defaultFormat,(int)0,this->_textField->get_text().length);
		HX_STACK_LINE(336)
		this->dirty = true;
		HX_STACK_LINE(338)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxText_obj,setFormat,return )

Void FlxText_obj::setBorderStyle( int Style,hx::Null< int >  __o_Color,hx::Null< Float >  __o_Size,hx::Null< Float >  __o_Quality){
int Color = __o_Color.Default(0);
Float Size = __o_Size.Default(1);
Float Quality = __o_Quality.Default(1);
	HX_STACK_FRAME("flixel.text.FlxText","setBorderStyle",0x26cf9c21,"flixel.text.FlxText.setBorderStyle","flixel/text/FlxText.hx",350,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Style,"Style")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Size,"Size")
	HX_STACK_ARG(Quality,"Quality")
{
		HX_STACK_LINE(351)
		this->set_borderStyle(Style);
		HX_STACK_LINE(352)
		this->set_borderColor(Color);
		HX_STACK_LINE(353)
		this->set_borderSize(Size);
		HX_STACK_LINE(354)
		this->set_borderQuality(Quality);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxText_obj,setBorderStyle,(void))

Void FlxText_obj::addFilter( ::flash::filters::BitmapFilter filter,hx::Null< int >  __o_widthInc,hx::Null< int >  __o_heightInc){
int widthInc = __o_widthInc.Default(0);
int heightInc = __o_heightInc.Default(0);
	HX_STACK_FRAME("flixel.text.FlxText","addFilter",0x4880657b,"flixel.text.FlxText.addFilter","flixel/text/FlxText.hx",358,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(widthInc,"widthInc")
	HX_STACK_ARG(heightInc,"heightInc")
{
		HX_STACK_LINE(359)
		this->_filters->push(filter);
		HX_STACK_LINE(360)
		this->_widthInc = widthInc;
		HX_STACK_LINE(361)
		this->_heightInc = heightInc;
		HX_STACK_LINE(362)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,addFilter,(void))

Void FlxText_obj::removeFilter( ::flash::filters::BitmapFilter filter){
{
		HX_STACK_FRAME("flixel.text.FlxText","removeFilter",0x2f410f9a,"flixel.text.FlxText.removeFilter","flixel/text/FlxText.hx",366,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(367)
		bool removed = this->_filters->remove(filter);		HX_STACK_VAR(removed,"removed");
		HX_STACK_LINE(368)
		if ((removed)){
			HX_STACK_LINE(370)
			this->dirty = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,removeFilter,(void))

Void FlxText_obj::clearFilters( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","clearFilters",0x1fa3a82c,"flixel.text.FlxText.clearFilters","flixel/text/FlxText.hx",375,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(376)
		if (((this->_filters->length > (int)0))){
			HX_STACK_LINE(378)
			this->dirty = true;
		}
		HX_STACK_LINE(380)
		this->_filters = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,clearFilters,(void))

Void FlxText_obj::updateFrameData( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","updateFrameData",0xbc85f3f0,"flixel.text.FlxText.updateFrameData","flixel/text/FlxText.hx",385,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(385)
		if (((this->cachedGraphics != null()))){
			HX_STACK_LINE(387)
			::flixel::system::layer::frames::FlxSpriteFrames _g = this->cachedGraphics->get_tilesheet()->getSpriteSheetFrames(this->region,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(387)
			this->framesData = _g;
			HX_STACK_LINE(388)
			this->set_frame(this->framesData->frames->__get((int)0).StaticCast< ::flixel::system::layer::frames::FlxFrame >());
			HX_STACK_LINE(389)
			this->frames = (int)1;
		}
	}
return null();
}


Void FlxText_obj::applyFormats( ::flash::text::TextFormat FormatAdjusted,hx::Null< bool >  __o_UseBorderColor){
bool UseBorderColor = __o_UseBorderColor.Default(false);
	HX_STACK_FRAME("flixel.text.FlxText","applyFormats",0x597a620c,"flixel.text.FlxText.applyFormats","flixel/text/FlxText.hx",394,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FormatAdjusted,"FormatAdjusted")
	HX_STACK_ARG(UseBorderColor,"UseBorderColor")
{
		HX_STACK_LINE(396)
		if ((UseBorderColor)){
			HX_STACK_LINE(396)
			FormatAdjusted->color = this->borderColor;
		}
		else{
			HX_STACK_LINE(396)
			FormatAdjusted->color = this->_defaultFormat->color;
		}
		HX_STACK_LINE(397)
		this->_textField->setTextFormat(FormatAdjusted,(int)0,this->_textField->get_text().length);
		HX_STACK_LINE(400)
		{
			HX_STACK_LINE(400)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(400)
			Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(400)
			while((true)){
				HX_STACK_LINE(400)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(400)
					break;
				}
				HX_STACK_LINE(400)
				::flixel::text::FlxTextFormat format = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(format,"format");
				HX_STACK_LINE(400)
				++(_g);
				HX_STACK_LINE(402)
				if ((((this->_textField->get_text().length - (int)1) < format->start))){
					HX_STACK_LINE(405)
					break;
				}
				else{
					HX_STACK_LINE(409)
					FormatAdjusted->font = format->format->font;
					HX_STACK_LINE(410)
					FormatAdjusted->bold = format->format->bold;
					HX_STACK_LINE(411)
					FormatAdjusted->italic = format->format->italic;
					HX_STACK_LINE(412)
					FormatAdjusted->size = format->format->size;
					HX_STACK_LINE(413)
					if ((UseBorderColor)){
						HX_STACK_LINE(413)
						FormatAdjusted->color = format->borderColor;
					}
					else{
						HX_STACK_LINE(413)
						FormatAdjusted->color = format->format->color;
					}
				}
				HX_STACK_LINE(416)
				Float _g2 = ::Math_obj::min(format->end,this->_textField->get_text().length);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(416)
				int _g11 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(416)
				this->_textField->setTextFormat(FormatAdjusted,format->start,_g11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,applyFormats,(void))

Float FlxText_obj::set_fieldWidth( Float value){
	HX_STACK_FRAME("flixel.text.FlxText","set_fieldWidth",0x9c758fa7,"flixel.text.FlxText.set_fieldWidth","flixel/text/FlxText.hx",421,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(422)
	if (((this->_textField != null()))){
		HX_STACK_LINE(424)
		if (((value <= (int)0))){
			HX_STACK_LINE(426)
			this->set_wordWrap(false);
			HX_STACK_LINE(427)
			this->set_autoSize(true);
		}
		else{
			HX_STACK_LINE(431)
			this->_textField->set_width(value);
		}
		HX_STACK_LINE(434)
		this->dirty = true;
	}
	HX_STACK_LINE(437)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_fieldWidth,return )

Float FlxText_obj::get_fieldWidth( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_fieldWidth",0x7c55a733,"flixel.text.FlxText.get_fieldWidth","flixel/text/FlxText.hx",442,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(442)
	if (((this->_textField != null()))){
		HX_STACK_LINE(442)
		return this->_textField->get_width();
	}
	else{
		HX_STACK_LINE(442)
		return (int)0;
	}
	HX_STACK_LINE(442)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_fieldWidth,return )

bool FlxText_obj::set_autoSize( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_autoSize",0x346abbcb,"flixel.text.FlxText.set_autoSize","flixel/text/FlxText.hx",446,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(447)
	if (((this->_textField != null()))){
		HX_STACK_LINE(449)
		if ((value)){
			HX_STACK_LINE(450)
			this->_textField->set_autoSize(::flash::text::TextFieldAutoSize_obj::LEFT);
		}
		else{
			HX_STACK_LINE(452)
			this->_textField->set_autoSize(::flash::text::TextFieldAutoSize_obj::NONE);
		}
		HX_STACK_LINE(454)
		this->dirty = true;
	}
	HX_STACK_LINE(457)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_autoSize,return )

bool FlxText_obj::get_autoSize( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_autoSize",0x1f719857,"flixel.text.FlxText.get_autoSize","flixel/text/FlxText.hx",462,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(462)
	if (((this->_textField != null()))){
		HX_STACK_LINE(462)
		::flash::text::TextFieldAutoSize _g = this->_textField->get_autoSize();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(462)
		return (_g != ::flash::text::TextFieldAutoSize_obj::NONE);
	}
	else{
		HX_STACK_LINE(462)
		return false;
	}
	HX_STACK_LINE(462)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_autoSize,return )

::String FlxText_obj::get_text( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_text",0x087345b4,"flixel.text.FlxText.get_text","flixel/text/FlxText.hx",467,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(467)
	return this->_textField->get_text();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_text,return )

::String FlxText_obj::set_text( ::String Text){
	HX_STACK_FRAME("flixel.text.FlxText","set_text",0xb6d09f28,"flixel.text.FlxText.set_text","flixel/text/FlxText.hx",471,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Text,"Text")
	HX_STACK_LINE(472)
	::String ot = this->_textField->get_text();		HX_STACK_VAR(ot,"ot");
	HX_STACK_LINE(473)
	this->_textField->set_text(Text);
	HX_STACK_LINE(475)
	::String _g = this->_textField->get_text();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(475)
	if (((_g != ot))){
		HX_STACK_LINE(477)
		this->dirty = true;
	}
	HX_STACK_LINE(480)
	return this->_textField->get_text();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_text,return )

Float FlxText_obj::get_size( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_size",0x07cd19c8,"flixel.text.FlxText.get_size","flixel/text/FlxText.hx",485,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(485)
	return this->_defaultFormat->size;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_size,return )

Float FlxText_obj::set_size( Float Size){
	HX_STACK_FRAME("flixel.text.FlxText","set_size",0xb62a733c,"flixel.text.FlxText.set_size","flixel/text/FlxText.hx",489,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Size,"Size")
	HX_STACK_LINE(490)
	this->_defaultFormat->size = Size;
	HX_STACK_LINE(491)
	this->_textField->set_defaultTextFormat(this->_defaultFormat);
	HX_STACK_LINE(492)
	this->_textField->setTextFormat(this->_defaultFormat,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(493)
	this->dirty = true;
	HX_STACK_LINE(495)
	return Size;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_size,return )

int FlxText_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.text.FlxText","set_color",0x7c7dca88,"flixel.text.FlxText.set_color","flixel/text/FlxText.hx",502,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(503)
	hx::AndEq(Color,(int)16777215);
	HX_STACK_LINE(504)
	if (((this->_defaultFormat->color == Color))){
		HX_STACK_LINE(506)
		return Color;
	}
	HX_STACK_LINE(508)
	this->_defaultFormat->color = Color;
	HX_STACK_LINE(509)
	this->color = Color;
	HX_STACK_LINE(510)
	this->_textField->set_defaultTextFormat(this->_defaultFormat);
	HX_STACK_LINE(511)
	this->_textField->setTextFormat(this->_defaultFormat,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(512)
	this->dirty = true;
	HX_STACK_LINE(513)
	return Color;
}


::String FlxText_obj::get_font( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_font",0xff39d6d6,"flixel.text.FlxText.get_font","flixel/text/FlxText.hx",518,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(518)
	return this->_defaultFormat->font;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_font,return )

::String FlxText_obj::set_font( ::String Font){
	HX_STACK_FRAME("flixel.text.FlxText","set_font",0xad97304a,"flixel.text.FlxText.set_font","flixel/text/FlxText.hx",522,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Font,"Font")
	HX_STACK_LINE(523)
	this->_textField->set_embedFonts(true);
	HX_STACK_LINE(524)
	this->_defaultFormat->font = ::openfl::Assets_obj::getFont(Font,null())->fontName;
	HX_STACK_LINE(525)
	this->_textField->set_defaultTextFormat(this->_defaultFormat);
	HX_STACK_LINE(526)
	this->_textField->setTextFormat(this->_defaultFormat,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(527)
	this->dirty = true;
	HX_STACK_LINE(528)
	return Font;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_font,return )

bool FlxText_obj::get_embedded( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_embedded",0xce5a2211,"flixel.text.FlxText.get_embedded","flixel/text/FlxText.hx",533,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(533)
	return this->_textField->set_embedFonts(true);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_embedded,return )

::String FlxText_obj::get_systemFont( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_systemFont",0xd6b43ca5,"flixel.text.FlxText.get_systemFont","flixel/text/FlxText.hx",538,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(538)
	return this->_defaultFormat->font;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_systemFont,return )

::String FlxText_obj::set_systemFont( ::String Font){
	HX_STACK_FRAME("flixel.text.FlxText","set_systemFont",0xf6d42519,"flixel.text.FlxText.set_systemFont","flixel/text/FlxText.hx",542,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Font,"Font")
	HX_STACK_LINE(543)
	this->_textField->set_embedFonts(false);
	HX_STACK_LINE(544)
	this->_defaultFormat->font = Font;
	HX_STACK_LINE(545)
	this->_textField->set_defaultTextFormat(this->_defaultFormat);
	HX_STACK_LINE(546)
	this->_textField->setTextFormat(this->_defaultFormat,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(547)
	this->dirty = true;
	HX_STACK_LINE(548)
	return Font;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_systemFont,return )

bool FlxText_obj::get_bold( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_bold",0xfc94fa8c,"flixel.text.FlxText.get_bold","flixel/text/FlxText.hx",553,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(553)
	return this->_defaultFormat->bold;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_bold,return )

bool FlxText_obj::set_bold( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_bold",0xaaf25400,"flixel.text.FlxText.set_bold","flixel/text/FlxText.hx",557,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(558)
	if (((this->_defaultFormat->bold != value))){
		HX_STACK_LINE(560)
		this->_defaultFormat->bold = value;
		HX_STACK_LINE(561)
		this->_textField->set_defaultTextFormat(this->_defaultFormat);
		HX_STACK_LINE(562)
		this->_textField->setTextFormat(this->_defaultFormat,(int)0,this->_textField->get_text().length);
		HX_STACK_LINE(563)
		this->dirty = true;
	}
	HX_STACK_LINE(565)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_bold,return )

bool FlxText_obj::get_italic( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_italic",0xadf337b7,"flixel.text.FlxText.get_italic","flixel/text/FlxText.hx",570,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(570)
	return this->_defaultFormat->italic;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_italic,return )

bool FlxText_obj::set_italic( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_italic",0xb170d62b,"flixel.text.FlxText.set_italic","flixel/text/FlxText.hx",574,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(575)
	if (((this->_defaultFormat->italic != value))){
		HX_STACK_LINE(577)
		this->_defaultFormat->italic = value;
		HX_STACK_LINE(578)
		this->_textField->set_defaultTextFormat(this->_defaultFormat);
		HX_STACK_LINE(579)
		this->_textField->setTextFormat(this->_defaultFormat,(int)0,this->_textField->get_text().length);
		HX_STACK_LINE(580)
		this->dirty = true;
	}
	HX_STACK_LINE(582)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_italic,return )

bool FlxText_obj::get_wordWrap( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_wordWrap",0xf0d31d3b,"flixel.text.FlxText.get_wordWrap","flixel/text/FlxText.hx",587,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(587)
	return this->_textField->get_wordWrap();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_wordWrap,return )

bool FlxText_obj::set_wordWrap( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_wordWrap",0x05cc40af,"flixel.text.FlxText.set_wordWrap","flixel/text/FlxText.hx",591,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(592)
	bool _g = this->_textField->get_wordWrap();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(592)
	if (((_g != value))){
		HX_STACK_LINE(594)
		this->_textField->set_wordWrap(value);
		HX_STACK_LINE(596)
		this->dirty = true;
	}
	HX_STACK_LINE(598)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_wordWrap,return )

::String FlxText_obj::get_alignment( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_alignment",0xf34d507c,"flixel.text.FlxText.get_alignment","flixel/text/FlxText.hx",603,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(603)
	return hx::TCast< String >::cast(this->_defaultFormat->align);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_alignment,return )

::String FlxText_obj::set_alignment( ::String Alignment){
	HX_STACK_FRAME("flixel.text.FlxText","set_alignment",0x38533288,"flixel.text.FlxText.set_alignment","flixel/text/FlxText.hx",607,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alignment,"Alignment")
	HX_STACK_LINE(608)
	::String _g = this->convertTextAlignmentFromString(Alignment);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(608)
	this->_defaultFormat->align = _g;
	HX_STACK_LINE(609)
	this->_textField->set_defaultTextFormat(this->_defaultFormat);
	HX_STACK_LINE(610)
	this->_textField->setTextFormat(this->_defaultFormat,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(611)
	this->dirty = true;
	HX_STACK_LINE(612)
	return Alignment;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_alignment,return )

int FlxText_obj::set_borderStyle( int style){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderStyle",0x0a5ab38a,"flixel.text.FlxText.set_borderStyle","flixel/text/FlxText.hx",616,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(style,"style")
	HX_STACK_LINE(617)
	if (((style != this->borderStyle))){
		HX_STACK_LINE(619)
		this->borderStyle = style;
		HX_STACK_LINE(620)
		this->dirty = true;
	}
	HX_STACK_LINE(623)
	return this->borderStyle;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderStyle,return )

int FlxText_obj::set_borderColor( int Color){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderColor",0xd0997fbc,"flixel.text.FlxText.set_borderColor","flixel/text/FlxText.hx",627,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(628)
	hx::AndEq(Color,(int)16777215);
	HX_STACK_LINE(630)
	if (((bool((this->borderColor != Color)) && bool((this->borderStyle != (int)0))))){
		HX_STACK_LINE(632)
		this->dirty = true;
	}
	HX_STACK_LINE(634)
	this->borderColor = Color;
	HX_STACK_LINE(636)
	return Color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderColor,return )

Float FlxText_obj::set_borderSize( Float Value){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderSize",0x0b7e6088,"flixel.text.FlxText.set_borderSize","flixel/text/FlxText.hx",640,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(641)
	if (((bool((Value != this->borderSize)) && bool((this->borderStyle != (int)0))))){
		HX_STACK_LINE(643)
		this->dirty = true;
	}
	HX_STACK_LINE(645)
	this->borderSize = Value;
	HX_STACK_LINE(647)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderSize,return )

Float FlxText_obj::set_borderQuality( Float Value){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderQuality",0x9eac1b58,"flixel.text.FlxText.set_borderQuality","flixel/text/FlxText.hx",651,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(652)
	if (((Value < (int)0))){
		HX_STACK_LINE(653)
		Value = (int)0;
	}
	else{
		HX_STACK_LINE(654)
		if (((Value > (int)1))){
			HX_STACK_LINE(655)
			Value = (int)1;
		}
	}
	HX_STACK_LINE(657)
	if (((bool((Value != this->borderQuality)) && bool((this->borderStyle != (int)0))))){
		HX_STACK_LINE(659)
		this->dirty = true;
	}
	HX_STACK_LINE(661)
	this->borderQuality = Value;
	HX_STACK_LINE(663)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderQuality,return )

::flash::text::TextField FlxText_obj::get_textField( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_textField",0xa2909266,"flixel.text.FlxText.get_textField","flixel/text/FlxText.hx",668,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(668)
	return this->_textField;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_textField,return )

::flixel::util::loaders::CachedGraphics FlxText_obj::set_cachedGraphics( ::flixel::util::loaders::CachedGraphics Value){
	HX_STACK_FRAME("flixel.text.FlxText","set_cachedGraphics",0x5e50a108,"flixel.text.FlxText.set_cachedGraphics","flixel/text/FlxText.hx",672,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(673)
	::flixel::util::loaders::CachedGraphics cached = this->super::set_cachedGraphics(Value);		HX_STACK_VAR(cached,"cached");
	HX_STACK_LINE(675)
	if (((Value != null()))){
		HX_STACK_LINE(676)
		Value->set_destroyOnNoUse(true);
	}
	HX_STACK_LINE(678)
	return cached;
}


Void FlxText_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","updateColorTransform",0x81f611f0,"flixel.text.FlxText.updateColorTransform","flixel/text/FlxText.hx",682,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(683)
		if (((this->alpha != (int)1))){
			HX_STACK_LINE(685)
			if (((this->colorTransform == null()))){
				HX_STACK_LINE(687)
				::flash::geom::ColorTransform _g = ::flash::geom::ColorTransform_obj::__new((int)1,(int)1,(int)1,this->alpha,null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(687)
				this->colorTransform = _g;
			}
			else{
				HX_STACK_LINE(691)
				this->colorTransform->alphaMultiplier = this->alpha;
			}
			HX_STACK_LINE(693)
			this->useColorTransform = true;
		}
		else{
			HX_STACK_LINE(697)
			if (((this->colorTransform != null()))){
				HX_STACK_LINE(699)
				this->colorTransform->alphaMultiplier = (int)1;
			}
			HX_STACK_LINE(702)
			this->useColorTransform = false;
		}
		HX_STACK_LINE(705)
		this->dirty = true;
	}
return null();
}


Void FlxText_obj::regenGraphics( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","regenGraphics",0x8e9d026a,"flixel.text.FlxText.regenGraphics","flixel/text/FlxText.hx",709,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(710)
		Float oldWidth = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(oldWidth,"oldWidth");
		HX_STACK_LINE(711)
		Float oldHeight = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(oldHeight,"oldHeight");
		HX_STACK_LINE(713)
		Float _g = this->_textField->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(713)
		Float newWidth = (_g + this->_widthInc);		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(715)
		Float _g1 = this->_textField->get_textHeight();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(715)
		Float _g2 = (_g1 + this->_heightInc);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(715)
		Float newHeight = (_g2 + (int)4);		HX_STACK_VAR(newHeight,"newHeight");
		HX_STACK_LINE(718)
		Float _g3 = this->_textField->get_textHeight();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(718)
		if (((_g3 == (int)0))){
			HX_STACK_LINE(720)
			newHeight = oldHeight;
		}
		HX_STACK_LINE(723)
		if (((bool((oldWidth != newWidth)) || bool((oldHeight != newHeight))))){
			HX_STACK_LINE(726)
			this->set_height((newHeight - this->_heightInc));
			HX_STACK_LINE(727)
			::String key = this->cachedGraphics->key;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(728)
			::flixel::FlxG_obj::bitmap->remove(key);
			HX_STACK_LINE(730)
			int _g4 = ::Std_obj::_int(newWidth);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(730)
			int _g5 = ::Std_obj::_int(newHeight);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(730)
			this->makeGraphic(_g4,_g5,(int)0,false,key);
			HX_STACK_LINE(731)
			Float _g6 = this->get_height();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(731)
			int _g7 = ::Std_obj::_int(_g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(731)
			this->frameHeight = _g7;
			HX_STACK_LINE(732)
			Float _g8 = this->get_height();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(732)
			Float _g9 = (_g8 * 1.2);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(732)
			this->_textField->set_height(_g9);
			HX_STACK_LINE(733)
			this->_flashRect->x = (int)0;
			HX_STACK_LINE(734)
			this->_flashRect->y = (int)0;
			HX_STACK_LINE(735)
			this->_flashRect->width = newWidth;
			HX_STACK_LINE(736)
			this->_flashRect->height = newHeight;
		}
		else{
			HX_STACK_LINE(741)
			this->cachedGraphics->bitmap->fillRect(this->_flashRect,(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,regenGraphics,(void))

Void FlxText_obj::calcFrame( hx::Null< bool >  __o_RunOnCpp){
bool RunOnCpp = __o_RunOnCpp.Default(false);
	HX_STACK_FRAME("flixel.text.FlxText","calcFrame",0x04b3a41a,"flixel.text.FlxText.calcFrame","flixel/text/FlxText.hx",751,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RunOnCpp,"RunOnCpp")
{
		HX_STACK_LINE(752)
		if (((this->_textField == null()))){
			HX_STACK_LINE(754)
			return null();
		}
		HX_STACK_LINE(757)
		if (((this->_filters != null()))){
			HX_STACK_LINE(759)
			this->_textField->set_filters(this->_filters);
		}
		HX_STACK_LINE(762)
		this->regenGraphics();
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::text::FlxText_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/text/FlxText.hx",764,0xdf165a6e)
				{
					HX_STACK_LINE(764)
					::String _g = __this->_textField->get_text();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(764)
					return (_g != null());
				}
				return null();
			}
		};
		HX_STACK_LINE(764)
		if (((  (((  (((this->_textField != null()))) ? bool(_Function_1_1::Block(this)) : bool(false) ))) ? bool((this->_textField->get_text().length > (int)0)) : bool(false) ))){
			HX_STACK_LINE(767)
			this->_formatAdjusted->font = this->_defaultFormat->font;
			HX_STACK_LINE(768)
			this->_formatAdjusted->size = this->_defaultFormat->size;
			HX_STACK_LINE(769)
			this->_formatAdjusted->bold = this->_defaultFormat->bold;
			HX_STACK_LINE(770)
			this->_formatAdjusted->italic = this->_defaultFormat->italic;
			HX_STACK_LINE(771)
			this->_formatAdjusted->color = this->_defaultFormat->color;
			HX_STACK_LINE(772)
			this->_formatAdjusted->align = this->_defaultFormat->align;
			HX_STACK_LINE(773)
			this->_matrix->identity();
			HX_STACK_LINE(775)
			int _g1 = ::Std_obj::_int((0.5 * this->_widthInc));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(775)
			int _g2 = ::Std_obj::_int((0.5 * this->_heightInc));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(775)
			this->_matrix->translate(_g1,_g2);
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::text::FlxText_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/text/FlxText.hx",778,0xdf165a6e)
					{
						HX_STACK_LINE(778)
						int _g3 = __this->_textField->get_numLines();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(778)
						return (_g3 == (int)1);
					}
					return null();
				}
			};
			HX_STACK_LINE(778)
			if (((  (((this->_defaultFormat->align == ::flash::text::TextFormatAlign_obj::CENTER))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(780)
				this->_formatAdjusted->align = ::flash::text::TextFormatAlign_obj::LEFT;
				HX_STACK_LINE(781)
				this->_textField->setTextFormat(this->_formatAdjusted,(int)0,this->_textField->get_text().length);
				HX_STACK_LINE(786)
				Float _g4 = this->get_width();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(786)
				Float _g5 = this->_textField->get_textWidth();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(786)
				Float _g6 = (_g4 - _g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(786)
				Float _g7 = (Float(_g6) / Float((int)2));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(786)
				int _g8 = ::Math_obj::floor(_g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(786)
				this->_matrix->translate(_g8,(int)0);
			}
			HX_STACK_LINE(790)
			if (((this->borderStyle != (int)0))){
				HX_STACK_LINE(792)
				int iterations = ::Std_obj::_int((this->borderSize * this->borderQuality));		HX_STACK_VAR(iterations,"iterations");
				HX_STACK_LINE(793)
				if (((iterations <= (int)0))){
					HX_STACK_LINE(795)
					iterations = (int)1;
				}
				HX_STACK_LINE(797)
				Float delta = (Float(this->borderSize) / Float(iterations));		HX_STACK_VAR(delta,"delta");
				HX_STACK_LINE(799)
				if (((this->borderStyle == (int)1))){
					HX_STACK_LINE(803)
					{
						HX_STACK_LINE(803)
						::flash::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
						HX_STACK_LINE(803)
						FormatAdjusted->color = this->borderColor;
						HX_STACK_LINE(803)
						this->_textField->setTextFormat(FormatAdjusted,(int)0,this->_textField->get_text().length);
						HX_STACK_LINE(803)
						{
							HX_STACK_LINE(803)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(803)
							Array< ::Dynamic > _g11 = this->_formats;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(803)
							while((true)){
								HX_STACK_LINE(803)
								if ((!(((_g < _g11->length))))){
									HX_STACK_LINE(803)
									break;
								}
								HX_STACK_LINE(803)
								::flixel::text::FlxTextFormat format = _g11->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(format,"format");
								HX_STACK_LINE(803)
								++(_g);
								HX_STACK_LINE(803)
								if ((((this->_textField->get_text().length - (int)1) < format->start))){
									HX_STACK_LINE(803)
									break;
								}
								else{
									HX_STACK_LINE(803)
									FormatAdjusted->font = format->format->font;
									HX_STACK_LINE(803)
									FormatAdjusted->bold = format->format->bold;
									HX_STACK_LINE(803)
									FormatAdjusted->italic = format->format->italic;
									HX_STACK_LINE(803)
									FormatAdjusted->size = format->format->size;
									HX_STACK_LINE(803)
									FormatAdjusted->color = format->borderColor;
								}
								HX_STACK_LINE(803)
								Float _g9 = ::Math_obj::min(format->end,this->_textField->get_text().length);		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(803)
								int _g10 = ::Std_obj::_int(_g9);		HX_STACK_VAR(_g10,"_g10");
								HX_STACK_LINE(803)
								this->_textField->setTextFormat(FormatAdjusted,format->start,_g10);
							}
						}
					}
					HX_STACK_LINE(805)
					{
						HX_STACK_LINE(805)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(805)
						while((true)){
							HX_STACK_LINE(805)
							if ((!(((_g < iterations))))){
								HX_STACK_LINE(805)
								break;
							}
							HX_STACK_LINE(805)
							int iter = (_g)++;		HX_STACK_VAR(iter,"iter");
							HX_STACK_LINE(807)
							this->_matrix->translate(delta,delta);
							HX_STACK_LINE(808)
							this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
						}
					}
					HX_STACK_LINE(811)
					this->_matrix->translate((-(this->shadowOffset->x) * this->borderSize),(-(this->shadowOffset->y) * this->borderSize));
					HX_STACK_LINE(812)
					{
						HX_STACK_LINE(812)
						::flash::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
						HX_STACK_LINE(812)
						FormatAdjusted->color = this->_defaultFormat->color;
						HX_STACK_LINE(812)
						this->_textField->setTextFormat(FormatAdjusted,(int)0,this->_textField->get_text().length);
						HX_STACK_LINE(812)
						{
							HX_STACK_LINE(812)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(812)
							Array< ::Dynamic > _g11 = this->_formats;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(812)
							while((true)){
								HX_STACK_LINE(812)
								if ((!(((_g < _g11->length))))){
									HX_STACK_LINE(812)
									break;
								}
								HX_STACK_LINE(812)
								::flixel::text::FlxTextFormat format = _g11->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(format,"format");
								HX_STACK_LINE(812)
								++(_g);
								HX_STACK_LINE(812)
								if ((((this->_textField->get_text().length - (int)1) < format->start))){
									HX_STACK_LINE(812)
									break;
								}
								else{
									HX_STACK_LINE(812)
									FormatAdjusted->font = format->format->font;
									HX_STACK_LINE(812)
									FormatAdjusted->bold = format->format->bold;
									HX_STACK_LINE(812)
									FormatAdjusted->italic = format->format->italic;
									HX_STACK_LINE(812)
									FormatAdjusted->size = format->format->size;
									HX_STACK_LINE(812)
									FormatAdjusted->color = format->format->color;
								}
								HX_STACK_LINE(812)
								Float _g111 = ::Math_obj::min(format->end,this->_textField->get_text().length);		HX_STACK_VAR(_g111,"_g111");
								HX_STACK_LINE(812)
								int _g12 = ::Std_obj::_int(_g111);		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(812)
								this->_textField->setTextFormat(FormatAdjusted,format->start,_g12);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(814)
					if (((this->borderStyle == (int)2))){
						HX_STACK_LINE(818)
						{
							HX_STACK_LINE(818)
							::flash::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
							HX_STACK_LINE(818)
							FormatAdjusted->color = this->borderColor;
							HX_STACK_LINE(818)
							this->_textField->setTextFormat(FormatAdjusted,(int)0,this->_textField->get_text().length);
							HX_STACK_LINE(818)
							{
								HX_STACK_LINE(818)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(818)
								Array< ::Dynamic > _g11 = this->_formats;		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(818)
								while((true)){
									HX_STACK_LINE(818)
									if ((!(((_g < _g11->length))))){
										HX_STACK_LINE(818)
										break;
									}
									HX_STACK_LINE(818)
									::flixel::text::FlxTextFormat format = _g11->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(format,"format");
									HX_STACK_LINE(818)
									++(_g);
									HX_STACK_LINE(818)
									if ((((this->_textField->get_text().length - (int)1) < format->start))){
										HX_STACK_LINE(818)
										break;
									}
									else{
										HX_STACK_LINE(818)
										FormatAdjusted->font = format->format->font;
										HX_STACK_LINE(818)
										FormatAdjusted->bold = format->format->bold;
										HX_STACK_LINE(818)
										FormatAdjusted->italic = format->format->italic;
										HX_STACK_LINE(818)
										FormatAdjusted->size = format->format->size;
										HX_STACK_LINE(818)
										FormatAdjusted->color = format->borderColor;
									}
									HX_STACK_LINE(818)
									Float _g13 = ::Math_obj::min(format->end,this->_textField->get_text().length);		HX_STACK_VAR(_g13,"_g13");
									HX_STACK_LINE(818)
									int _g14 = ::Std_obj::_int(_g13);		HX_STACK_VAR(_g14,"_g14");
									HX_STACK_LINE(818)
									this->_textField->setTextFormat(FormatAdjusted,format->start,_g14);
								}
							}
						}
						HX_STACK_LINE(820)
						Float itd = delta;		HX_STACK_VAR(itd,"itd");
						HX_STACK_LINE(821)
						{
							HX_STACK_LINE(821)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(821)
							while((true)){
								HX_STACK_LINE(821)
								if ((!(((_g < iterations))))){
									HX_STACK_LINE(821)
									break;
								}
								HX_STACK_LINE(821)
								int iter = (_g)++;		HX_STACK_VAR(iter,"iter");
								HX_STACK_LINE(823)
								this->_matrix->translate(-(itd),-(itd));
								HX_STACK_LINE(824)
								this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
								HX_STACK_LINE(825)
								this->_matrix->translate(itd,(int)0);
								HX_STACK_LINE(826)
								this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
								HX_STACK_LINE(827)
								this->_matrix->translate(itd,(int)0);
								HX_STACK_LINE(828)
								this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
								HX_STACK_LINE(829)
								this->_matrix->translate((int)0,itd);
								HX_STACK_LINE(830)
								this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
								HX_STACK_LINE(831)
								this->_matrix->translate((int)0,itd);
								HX_STACK_LINE(832)
								this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
								HX_STACK_LINE(833)
								this->_matrix->translate(-(itd),(int)0);
								HX_STACK_LINE(834)
								this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
								HX_STACK_LINE(835)
								this->_matrix->translate(-(itd),(int)0);
								HX_STACK_LINE(836)
								this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
								HX_STACK_LINE(837)
								this->_matrix->translate((int)0,-(itd));
								HX_STACK_LINE(838)
								this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
								HX_STACK_LINE(839)
								this->_matrix->translate(itd,(int)0);
								HX_STACK_LINE(840)
								hx::AddEq(itd,delta);
							}
						}
						HX_STACK_LINE(843)
						{
							HX_STACK_LINE(843)
							::flash::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
							HX_STACK_LINE(843)
							FormatAdjusted->color = this->_defaultFormat->color;
							HX_STACK_LINE(843)
							this->_textField->setTextFormat(FormatAdjusted,(int)0,this->_textField->get_text().length);
							HX_STACK_LINE(843)
							{
								HX_STACK_LINE(843)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(843)
								Array< ::Dynamic > _g11 = this->_formats;		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(843)
								while((true)){
									HX_STACK_LINE(843)
									if ((!(((_g < _g11->length))))){
										HX_STACK_LINE(843)
										break;
									}
									HX_STACK_LINE(843)
									::flixel::text::FlxTextFormat format = _g11->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(format,"format");
									HX_STACK_LINE(843)
									++(_g);
									HX_STACK_LINE(843)
									if ((((this->_textField->get_text().length - (int)1) < format->start))){
										HX_STACK_LINE(843)
										break;
									}
									else{
										HX_STACK_LINE(843)
										FormatAdjusted->font = format->format->font;
										HX_STACK_LINE(843)
										FormatAdjusted->bold = format->format->bold;
										HX_STACK_LINE(843)
										FormatAdjusted->italic = format->format->italic;
										HX_STACK_LINE(843)
										FormatAdjusted->size = format->format->size;
										HX_STACK_LINE(843)
										FormatAdjusted->color = format->format->color;
									}
									HX_STACK_LINE(843)
									Float _g15 = ::Math_obj::min(format->end,this->_textField->get_text().length);		HX_STACK_VAR(_g15,"_g15");
									HX_STACK_LINE(843)
									int _g16 = ::Std_obj::_int(_g15);		HX_STACK_VAR(_g16,"_g16");
									HX_STACK_LINE(843)
									this->_textField->setTextFormat(FormatAdjusted,format->start,_g16);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(845)
						if (((this->borderStyle == (int)3))){
							HX_STACK_LINE(850)
							{
								HX_STACK_LINE(850)
								::flash::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
								HX_STACK_LINE(850)
								FormatAdjusted->color = this->borderColor;
								HX_STACK_LINE(850)
								this->_textField->setTextFormat(FormatAdjusted,(int)0,this->_textField->get_text().length);
								HX_STACK_LINE(850)
								{
									HX_STACK_LINE(850)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(850)
									Array< ::Dynamic > _g11 = this->_formats;		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(850)
									while((true)){
										HX_STACK_LINE(850)
										if ((!(((_g < _g11->length))))){
											HX_STACK_LINE(850)
											break;
										}
										HX_STACK_LINE(850)
										::flixel::text::FlxTextFormat format = _g11->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(format,"format");
										HX_STACK_LINE(850)
										++(_g);
										HX_STACK_LINE(850)
										if ((((this->_textField->get_text().length - (int)1) < format->start))){
											HX_STACK_LINE(850)
											break;
										}
										else{
											HX_STACK_LINE(850)
											FormatAdjusted->font = format->format->font;
											HX_STACK_LINE(850)
											FormatAdjusted->bold = format->format->bold;
											HX_STACK_LINE(850)
											FormatAdjusted->italic = format->format->italic;
											HX_STACK_LINE(850)
											FormatAdjusted->size = format->format->size;
											HX_STACK_LINE(850)
											FormatAdjusted->color = format->borderColor;
										}
										HX_STACK_LINE(850)
										Float _g17 = ::Math_obj::min(format->end,this->_textField->get_text().length);		HX_STACK_VAR(_g17,"_g17");
										HX_STACK_LINE(850)
										int _g18 = ::Std_obj::_int(_g17);		HX_STACK_VAR(_g18,"_g18");
										HX_STACK_LINE(850)
										this->_textField->setTextFormat(FormatAdjusted,format->start,_g18);
									}
								}
							}
							HX_STACK_LINE(852)
							Float itd = delta;		HX_STACK_VAR(itd,"itd");
							HX_STACK_LINE(853)
							{
								HX_STACK_LINE(853)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(853)
								while((true)){
									HX_STACK_LINE(853)
									if ((!(((_g < iterations))))){
										HX_STACK_LINE(853)
										break;
									}
									HX_STACK_LINE(853)
									int iter = (_g)++;		HX_STACK_VAR(iter,"iter");
									HX_STACK_LINE(855)
									this->_matrix->translate(-(itd),-(itd));
									HX_STACK_LINE(856)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
									HX_STACK_LINE(857)
									this->_matrix->translate((itd * (int)2),(int)0);
									HX_STACK_LINE(858)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
									HX_STACK_LINE(859)
									this->_matrix->translate((int)0,(itd * (int)2));
									HX_STACK_LINE(860)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
									HX_STACK_LINE(861)
									this->_matrix->translate((-(itd) * (int)2),(int)0);
									HX_STACK_LINE(862)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
									HX_STACK_LINE(863)
									this->_matrix->translate(itd,-(itd));
									HX_STACK_LINE(864)
									hx::AddEq(itd,delta);
								}
							}
							HX_STACK_LINE(867)
							{
								HX_STACK_LINE(867)
								::flash::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
								HX_STACK_LINE(867)
								FormatAdjusted->color = this->_defaultFormat->color;
								HX_STACK_LINE(867)
								this->_textField->setTextFormat(FormatAdjusted,(int)0,this->_textField->get_text().length);
								HX_STACK_LINE(867)
								{
									HX_STACK_LINE(867)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(867)
									Array< ::Dynamic > _g11 = this->_formats;		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(867)
									while((true)){
										HX_STACK_LINE(867)
										if ((!(((_g < _g11->length))))){
											HX_STACK_LINE(867)
											break;
										}
										HX_STACK_LINE(867)
										::flixel::text::FlxTextFormat format = _g11->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(format,"format");
										HX_STACK_LINE(867)
										++(_g);
										HX_STACK_LINE(867)
										if ((((this->_textField->get_text().length - (int)1) < format->start))){
											HX_STACK_LINE(867)
											break;
										}
										else{
											HX_STACK_LINE(867)
											FormatAdjusted->font = format->format->font;
											HX_STACK_LINE(867)
											FormatAdjusted->bold = format->format->bold;
											HX_STACK_LINE(867)
											FormatAdjusted->italic = format->format->italic;
											HX_STACK_LINE(867)
											FormatAdjusted->size = format->format->size;
											HX_STACK_LINE(867)
											FormatAdjusted->color = format->format->color;
										}
										HX_STACK_LINE(867)
										Float _g19 = ::Math_obj::min(format->end,this->_textField->get_text().length);		HX_STACK_VAR(_g19,"_g19");
										HX_STACK_LINE(867)
										int _g20 = ::Std_obj::_int(_g19);		HX_STACK_VAR(_g20,"_g20");
										HX_STACK_LINE(867)
										this->_textField->setTextFormat(FormatAdjusted,format->start,_g20);
									}
								}
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(872)
				::flash::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
				HX_STACK_LINE(872)
				FormatAdjusted->color = this->_defaultFormat->color;
				HX_STACK_LINE(872)
				this->_textField->setTextFormat(FormatAdjusted,(int)0,this->_textField->get_text().length);
				HX_STACK_LINE(872)
				{
					HX_STACK_LINE(872)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(872)
					Array< ::Dynamic > _g11 = this->_formats;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(872)
					while((true)){
						HX_STACK_LINE(872)
						if ((!(((_g < _g11->length))))){
							HX_STACK_LINE(872)
							break;
						}
						HX_STACK_LINE(872)
						::flixel::text::FlxTextFormat format = _g11->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(format,"format");
						HX_STACK_LINE(872)
						++(_g);
						HX_STACK_LINE(872)
						if ((((this->_textField->get_text().length - (int)1) < format->start))){
							HX_STACK_LINE(872)
							break;
						}
						else{
							HX_STACK_LINE(872)
							FormatAdjusted->font = format->format->font;
							HX_STACK_LINE(872)
							FormatAdjusted->bold = format->format->bold;
							HX_STACK_LINE(872)
							FormatAdjusted->italic = format->format->italic;
							HX_STACK_LINE(872)
							FormatAdjusted->size = format->format->size;
							HX_STACK_LINE(872)
							FormatAdjusted->color = format->format->color;
						}
						HX_STACK_LINE(872)
						Float _g21 = ::Math_obj::min(format->end,this->_textField->get_text().length);		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(872)
						int _g22 = ::Std_obj::_int(_g21);		HX_STACK_VAR(_g22,"_g22");
						HX_STACK_LINE(872)
						this->_textField->setTextFormat(FormatAdjusted,format->start,_g22);
					}
				}
			}
			HX_STACK_LINE(876)
			this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
		}
		HX_STACK_LINE(879)
		this->dirty = false;
		HX_STACK_LINE(882)
		if ((!(RunOnCpp))){
			HX_STACK_LINE(884)
			return null();
		}
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::flixel::text::FlxText_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/text/FlxText.hx",889,0xdf165a6e)
				{
					HX_STACK_LINE(889)
					int _g23 = __this->framePixels->get_width();		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(889)
					int _g24 = __this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(889)
					return (_g23 != _g24);
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static bool Block( hx::ObjectPtr< ::flixel::text::FlxText_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/text/FlxText.hx",889,0xdf165a6e)
				{
					HX_STACK_LINE(889)
					int _g25 = __this->framePixels->get_height();		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(889)
					int _g26 = __this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g26,"_g26");
					HX_STACK_LINE(889)
					return (_g25 != _g26);
				}
				return null();
			}
		};
		HX_STACK_LINE(889)
		if (((  ((!(((  ((!(((this->framePixels == null()))))) ? bool(_Function_1_2::Block(this)) : bool(true) ))))) ? bool(_Function_1_3::Block(this)) : bool(true) ))){
			HX_STACK_LINE(891)
			::flash::display::BitmapData _g27 = ::flixel::util::FlxDestroyUtil_obj::dispose(this->framePixels);		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(891)
			this->framePixels = _g27;
			HX_STACK_LINE(892)
			int _g28 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(892)
			int _g29 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g29,"_g29");
			HX_STACK_LINE(892)
			::flash::display::BitmapData _g30 = ::flash::display::BitmapData_obj::__new(_g28,_g29,true,(int)0,null());		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(892)
			this->framePixels = _g30;
		}
		HX_STACK_LINE(895)
		this->framePixels->copyPixels(this->cachedGraphics->bitmap,this->_flashRect,this->_flashPointZero,null(),null(),null());
		HX_STACK_LINE(897)
		if ((this->useColorTransform)){
			HX_STACK_LINE(899)
			this->framePixels->colorTransform(this->_flashRect,this->colorTransform);
		}
	}
return null();
}


::flash::text::TextFormat FlxText_obj::dtfCopy( ){
	HX_STACK_FRAME("flixel.text.FlxText","dtfCopy",0x79c34ded,"flixel.text.FlxText.dtfCopy","flixel/text/FlxText.hx",909,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(910)
	::flash::text::TextFormat defaultTextFormat = this->_textField->get_defaultTextFormat();		HX_STACK_VAR(defaultTextFormat,"defaultTextFormat");
	HX_STACK_LINE(912)
	return ::flash::text::TextFormat_obj::__new(defaultTextFormat->font,defaultTextFormat->size,defaultTextFormat->color,defaultTextFormat->bold,defaultTextFormat->italic,defaultTextFormat->underline,defaultTextFormat->url,defaultTextFormat->target,defaultTextFormat->align,null(),null(),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,dtfCopy,return )

::String FlxText_obj::convertTextAlignmentFromString( ::String StrAlign){
	HX_STACK_FRAME("flixel.text.FlxText","convertTextAlignmentFromString",0xca79ae3c,"flixel.text.FlxText.convertTextAlignmentFromString","flixel/text/FlxText.hx",924,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StrAlign,"StrAlign")
	HX_STACK_LINE(924)
	if (((StrAlign == HX_CSTRING("right")))){
		HX_STACK_LINE(926)
		return ::flash::text::TextFormatAlign_obj::RIGHT;
	}
	else{
		HX_STACK_LINE(928)
		if (((StrAlign == HX_CSTRING("center")))){
			HX_STACK_LINE(930)
			return ::flash::text::TextFormatAlign_obj::CENTER;
		}
		else{
			HX_STACK_LINE(932)
			if (((StrAlign == HX_CSTRING("justify")))){
				HX_STACK_LINE(934)
				return ::flash::text::TextFormatAlign_obj::JUSTIFY;
			}
			else{
				HX_STACK_LINE(938)
				return ::flash::text::TextFormatAlign_obj::LEFT;
			}
		}
	}
	HX_STACK_LINE(924)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,convertTextAlignmentFromString,return )

Void FlxText_obj::updateFormat( ::flash::text::TextFormat Format){
{
		HX_STACK_FRAME("flixel.text.FlxText","updateFormat",0x38308a9e,"flixel.text.FlxText.updateFormat","flixel/text/FlxText.hx",945,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Format,"Format")
		HX_STACK_LINE(945)
		this->_textField->setTextFormat(Format,(int)0,this->_textField->get_text().length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,updateFormat,(void))

int FlxText_obj::BORDER_NONE;

int FlxText_obj::BORDER_SHADOW;

int FlxText_obj::BORDER_OUTLINE;

int FlxText_obj::BORDER_OUTLINE_FAST;


FlxText_obj::FlxText_obj()
{
}

void FlxText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxText);
	HX_MARK_MEMBER_NAME(borderStyle,"borderStyle");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(borderSize,"borderSize");
	HX_MARK_MEMBER_NAME(borderQuality,"borderQuality");
	HX_MARK_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_MARK_MEMBER_NAME(_textField,"_textField");
	HX_MARK_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_MARK_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_MARK_MEMBER_NAME(_formats,"_formats");
	HX_MARK_MEMBER_NAME(_filters,"_filters");
	HX_MARK_MEMBER_NAME(_widthInc,"_widthInc");
	HX_MARK_MEMBER_NAME(_heightInc,"_heightInc");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(borderStyle,"borderStyle");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(borderSize,"borderSize");
	HX_VISIT_MEMBER_NAME(borderQuality,"borderQuality");
	HX_VISIT_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_VISIT_MEMBER_NAME(_textField,"_textField");
	HX_VISIT_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_VISIT_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_VISIT_MEMBER_NAME(_formats,"_formats");
	HX_VISIT_MEMBER_NAME(_filters,"_filters");
	HX_VISIT_MEMBER_NAME(_widthInc,"_widthInc");
	HX_VISIT_MEMBER_NAME(_heightInc,"_heightInc");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxText_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return get_text(); }
		if (HX_FIELD_EQ(inName,"size") ) { return get_size(); }
		if (HX_FIELD_EQ(inName,"font") ) { return get_font(); }
		if (HX_FIELD_EQ(inName,"bold") ) { return get_bold(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { return get_italic(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"dtfCopy") ) { return dtfCopy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"embedded") ) { return get_embedded(); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return get_wordWrap(); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { return get_autoSize(); }
		if (HX_FIELD_EQ(inName,"_formats") ) { return _formats; }
		if (HX_FIELD_EQ(inName,"_filters") ) { return _filters; }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"get_font") ) { return get_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bold") ) { return get_bold_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bold") ) { return set_bold_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { return get_alignment(); }
		if (HX_FIELD_EQ(inName,"textField") ) { return get_textField(); }
		if (HX_FIELD_EQ(inName,"_widthInc") ) { return _widthInc; }
		if (HX_FIELD_EQ(inName,"addFormat") ) { return addFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return setFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"addFilter") ) { return addFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemFont") ) { return get_systemFont(); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { return borderSize; }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { return get_fieldWidth(); }
		if (HX_FIELD_EQ(inName,"_textField") ) { return _textField; }
		if (HX_FIELD_EQ(inName,"_heightInc") ) { return _heightInc; }
		if (HX_FIELD_EQ(inName,"get_italic") ) { return get_italic_dyn(); }
		if (HX_FIELD_EQ(inName,"set_italic") ) { return set_italic_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderStyle") ) { return borderStyle; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { return shadowOffset; }
		if (HX_FIELD_EQ(inName,"removeFormat") ) { return removeFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"clearFormats") ) { return clearFormats_dyn(); }
		if (HX_FIELD_EQ(inName,"removeFilter") ) { return removeFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"clearFilters") ) { return clearFilters_dyn(); }
		if (HX_FIELD_EQ(inName,"applyFormats") ) { return applyFormats_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return get_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_embedded") ) { return get_embedded_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return get_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFormat") ) { return updateFormat_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"borderQuality") ) { return borderQuality; }
		if (HX_FIELD_EQ(inName,"get_alignment") ) { return get_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alignment") ) { return set_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textField") ) { return get_textField_dyn(); }
		if (HX_FIELD_EQ(inName,"regenGraphics") ) { return regenGraphics_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { return _defaultFormat; }
		if (HX_FIELD_EQ(inName,"setBorderStyle") ) { return setBorderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fieldWidth") ) { return set_fieldWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fieldWidth") ) { return get_fieldWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_systemFont") ) { return get_systemFont_dyn(); }
		if (HX_FIELD_EQ(inName,"set_systemFont") ) { return set_systemFont_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderSize") ) { return set_borderSize_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { return _formatAdjusted; }
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderStyle") ) { return set_borderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_borderQuality") ) { return set_borderQuality_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_cachedGraphics") ) { return set_cachedGraphics_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"convertTextAlignmentFromString") ) { return convertTextAlignmentFromString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxText_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		if (HX_FIELD_EQ(inName,"size") ) { return set_size(inValue); }
		if (HX_FIELD_EQ(inName,"font") ) { return set_font(inValue); }
		if (HX_FIELD_EQ(inName,"bold") ) { return set_bold(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { return set_italic(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return set_wordWrap(inValue); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { return set_autoSize(inValue); }
		if (HX_FIELD_EQ(inName,"_formats") ) { _formats=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filters") ) { _filters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { return set_alignment(inValue); }
		if (HX_FIELD_EQ(inName,"_widthInc") ) { _widthInc=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemFont") ) { return set_systemFont(inValue); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp) return set_borderSize(inValue);borderSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { return set_fieldWidth(inValue); }
		if (HX_FIELD_EQ(inName,"_textField") ) { _textField=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_heightInc") ) { _heightInc=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderStyle") ) { if (inCallProp) return set_borderStyle(inValue);borderStyle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp) return set_borderColor(inValue);borderColor=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { shadowOffset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"borderQuality") ) { if (inCallProp) return set_borderQuality(inValue);borderQuality=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { _defaultFormat=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { _formatAdjusted=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("embedded"));
	outFields->push(HX_CSTRING("systemFont"));
	outFields->push(HX_CSTRING("bold"));
	outFields->push(HX_CSTRING("italic"));
	outFields->push(HX_CSTRING("wordWrap"));
	outFields->push(HX_CSTRING("alignment"));
	outFields->push(HX_CSTRING("borderStyle"));
	outFields->push(HX_CSTRING("borderColor"));
	outFields->push(HX_CSTRING("borderSize"));
	outFields->push(HX_CSTRING("borderQuality"));
	outFields->push(HX_CSTRING("textField"));
	outFields->push(HX_CSTRING("fieldWidth"));
	outFields->push(HX_CSTRING("autoSize"));
	outFields->push(HX_CSTRING("shadowOffset"));
	outFields->push(HX_CSTRING("_textField"));
	outFields->push(HX_CSTRING("_defaultFormat"));
	outFields->push(HX_CSTRING("_formatAdjusted"));
	outFields->push(HX_CSTRING("_formats"));
	outFields->push(HX_CSTRING("_filters"));
	outFields->push(HX_CSTRING("_widthInc"));
	outFields->push(HX_CSTRING("_heightInc"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BORDER_NONE"),
	HX_CSTRING("BORDER_SHADOW"),
	HX_CSTRING("BORDER_OUTLINE"),
	HX_CSTRING("BORDER_OUTLINE_FAST"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxText_obj,borderStyle),HX_CSTRING("borderStyle")},
	{hx::fsInt,(int)offsetof(FlxText_obj,borderColor),HX_CSTRING("borderColor")},
	{hx::fsFloat,(int)offsetof(FlxText_obj,borderSize),HX_CSTRING("borderSize")},
	{hx::fsFloat,(int)offsetof(FlxText_obj,borderQuality),HX_CSTRING("borderQuality")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxText_obj,shadowOffset),HX_CSTRING("shadowOffset")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(FlxText_obj,_textField),HX_CSTRING("_textField")},
	{hx::fsObject /*::flash::text::TextFormat*/ ,(int)offsetof(FlxText_obj,_defaultFormat),HX_CSTRING("_defaultFormat")},
	{hx::fsObject /*::flash::text::TextFormat*/ ,(int)offsetof(FlxText_obj,_formatAdjusted),HX_CSTRING("_formatAdjusted")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxText_obj,_formats),HX_CSTRING("_formats")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxText_obj,_filters),HX_CSTRING("_filters")},
	{hx::fsInt,(int)offsetof(FlxText_obj,_widthInc),HX_CSTRING("_widthInc")},
	{hx::fsInt,(int)offsetof(FlxText_obj,_heightInc),HX_CSTRING("_heightInc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("borderStyle"),
	HX_CSTRING("borderColor"),
	HX_CSTRING("borderSize"),
	HX_CSTRING("borderQuality"),
	HX_CSTRING("shadowOffset"),
	HX_CSTRING("_textField"),
	HX_CSTRING("_defaultFormat"),
	HX_CSTRING("_formatAdjusted"),
	HX_CSTRING("_formats"),
	HX_CSTRING("_filters"),
	HX_CSTRING("_widthInc"),
	HX_CSTRING("_heightInc"),
	HX_CSTRING("destroy"),
	HX_CSTRING("addFormat"),
	HX_CSTRING("removeFormat"),
	HX_CSTRING("clearFormats"),
	HX_CSTRING("setFormat"),
	HX_CSTRING("setBorderStyle"),
	HX_CSTRING("addFilter"),
	HX_CSTRING("removeFilter"),
	HX_CSTRING("clearFilters"),
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("applyFormats"),
	HX_CSTRING("set_fieldWidth"),
	HX_CSTRING("get_fieldWidth"),
	HX_CSTRING("set_autoSize"),
	HX_CSTRING("get_autoSize"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_size"),
	HX_CSTRING("set_size"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_font"),
	HX_CSTRING("set_font"),
	HX_CSTRING("get_embedded"),
	HX_CSTRING("get_systemFont"),
	HX_CSTRING("set_systemFont"),
	HX_CSTRING("get_bold"),
	HX_CSTRING("set_bold"),
	HX_CSTRING("get_italic"),
	HX_CSTRING("set_italic"),
	HX_CSTRING("get_wordWrap"),
	HX_CSTRING("set_wordWrap"),
	HX_CSTRING("get_alignment"),
	HX_CSTRING("set_alignment"),
	HX_CSTRING("set_borderStyle"),
	HX_CSTRING("set_borderColor"),
	HX_CSTRING("set_borderSize"),
	HX_CSTRING("set_borderQuality"),
	HX_CSTRING("get_textField"),
	HX_CSTRING("set_cachedGraphics"),
	HX_CSTRING("updateColorTransform"),
	HX_CSTRING("regenGraphics"),
	HX_CSTRING("calcFrame"),
	HX_CSTRING("dtfCopy"),
	HX_CSTRING("convertTextAlignmentFromString"),
	HX_CSTRING("updateFormat"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxText_obj::BORDER_NONE,"BORDER_NONE");
	HX_MARK_MEMBER_NAME(FlxText_obj::BORDER_SHADOW,"BORDER_SHADOW");
	HX_MARK_MEMBER_NAME(FlxText_obj::BORDER_OUTLINE,"BORDER_OUTLINE");
	HX_MARK_MEMBER_NAME(FlxText_obj::BORDER_OUTLINE_FAST,"BORDER_OUTLINE_FAST");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxText_obj::BORDER_NONE,"BORDER_NONE");
	HX_VISIT_MEMBER_NAME(FlxText_obj::BORDER_SHADOW,"BORDER_SHADOW");
	HX_VISIT_MEMBER_NAME(FlxText_obj::BORDER_OUTLINE,"BORDER_OUTLINE");
	HX_VISIT_MEMBER_NAME(FlxText_obj::BORDER_OUTLINE_FAST,"BORDER_OUTLINE_FAST");
};

#endif

Class FlxText_obj::__mClass;

void FlxText_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.text.FlxText"), hx::TCanCast< FlxText_obj> ,sStaticFields,sMemberFields,
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

void FlxText_obj::__boot()
{
	BORDER_NONE= (int)0;
	BORDER_SHADOW= (int)1;
	BORDER_OUTLINE= (int)2;
	BORDER_OUTLINE_FAST= (int)3;
}

} // end namespace flixel
} // end namespace text
