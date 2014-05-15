#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureRegion
#include <flixel/util/loaders/TextureRegion.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_AssetCache
#include <openfl/AssetCache.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void BitmapFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","new",0x0f2331ed,"flixel.system.frontEnds.BitmapFrontEnd.new","flixel/system/frontEnds/BitmapFrontEnd.hx",21,0x91a05ae2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	this->clearCache();
}
;
	return null();
}

//BitmapFrontEnd_obj::~BitmapFrontEnd_obj() { }

Dynamic BitmapFrontEnd_obj::__CreateEmpty() { return  new BitmapFrontEnd_obj; }
hx::ObjectPtr< BitmapFrontEnd_obj > BitmapFrontEnd_obj::__new()
{  hx::ObjectPtr< BitmapFrontEnd_obj > result = new BitmapFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic BitmapFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapFrontEnd_obj > result = new BitmapFrontEnd_obj();
	result->__construct();
	return result;}

::flixel::util::loaders::CachedGraphics BitmapFrontEnd_obj::get_whitePixel( ){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","get_whitePixel",0xa476cef9,"flixel.system.frontEnds.BitmapFrontEnd.get_whitePixel","flixel/system/frontEnds/BitmapFrontEnd.hx",30,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	if (((this->_whitePixel == null()))){
		HX_STACK_LINE(33)
		::flash::display::BitmapData bd = ::flash::display::BitmapData_obj::__new((int)2,(int)2,true,(int)-1,null());		HX_STACK_VAR(bd,"bd");
		HX_STACK_LINE(34)
		::flixel::util::loaders::CachedGraphics _g = ::flixel::util::loaders::CachedGraphics_obj::__new(HX_CSTRING("whitePixel"),bd,true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(34)
		this->_whitePixel = _g;
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			::flixel::system::layer::TileSheetData _this = this->_whitePixel->get_tilesheet();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(35)
			::flash::geom::Rectangle tileRect = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,(int)1,(int)1);		HX_STACK_VAR(tileRect,"tileRect");
			HX_STACK_LINE(35)
			::flash::geom::Point point = ::flash::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(35)
			_this->tileSheet->addTileRectID(tileRect,point);
		}
	}
	HX_STACK_LINE(38)
	return this->_whitePixel;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,get_whitePixel,return )

Void BitmapFrontEnd_obj::onContext( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","onContext",0x0e82d7dd,"flixel.system.frontEnds.BitmapFrontEnd.onContext","flixel/system/frontEnds/BitmapFrontEnd.hx",42,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		::flixel::util::loaders::CachedGraphics obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(45)
		if (((this->_cache != null()))){
			HX_STACK_LINE(47)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_cache->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(49)
					::flixel::util::loaders::CachedGraphics _g = this->_cache->get(key);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(49)
					obj = _g;
					HX_STACK_LINE(50)
					if (((bool((obj != null())) && bool(obj->isDumped)))){
						HX_STACK_LINE(52)
						obj->onContext();
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,onContext,(void))

Void BitmapFrontEnd_obj::dumpCache( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","dumpCache",0xf899b9bb,"flixel.system.frontEnds.BitmapFrontEnd.dumpCache","flixel/system/frontEnds/BitmapFrontEnd.hx",64,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		::flixel::util::loaders::CachedGraphics obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(68)
		if (((this->_cache != null()))){
			HX_STACK_LINE(70)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_cache->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(72)
					::flixel::util::loaders::CachedGraphics _g = this->_cache->get(key);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(72)
					obj = _g;
					HX_STACK_LINE(73)
					if (((bool((obj != null())) && bool(((bool((obj->assetsClass != null())) || bool((obj->assetsKey != null())))))))){
						HX_STACK_LINE(75)
						obj->dump();
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,dumpCache,(void))

bool BitmapFrontEnd_obj::checkCache( ::String Key){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","checkCache",0xe81c366d,"flixel.system.frontEnds.BitmapFrontEnd.checkCache","flixel/system/frontEnds/BitmapFrontEnd.hx",90,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Key,"Key")
	HX_STACK_LINE(90)
	if ((this->_cache->exists(Key))){
		HX_STACK_LINE(90)
		::flixel::util::loaders::CachedGraphics _g = this->_cache->get(Key);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(90)
		return (_g != null());
	}
	else{
		HX_STACK_LINE(90)
		return false;
	}
	HX_STACK_LINE(90)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,checkCache,return )

::flixel::util::loaders::CachedGraphics BitmapFrontEnd_obj::create( int Width,int Height,int Color,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","create",0xd385bb8f,"flixel.system.frontEnds.BitmapFrontEnd.create","flixel/system/frontEnds/BitmapFrontEnd.hx",104,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(105)
		::String key = Key;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(106)
		if (((key == null()))){
			HX_STACK_LINE(108)
			key = ((((Width + HX_CSTRING("x")) + Height) + HX_CSTRING(":")) + Color);
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::system::frontEnds::BitmapFrontEnd_obj > __this,::String &key){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/BitmapFrontEnd.hx",109,0x91a05ae2)
					{
						struct _Function_3_1{
							inline static bool Block( hx::ObjectPtr< ::flixel::system::frontEnds::BitmapFrontEnd_obj > __this,::String &key){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/BitmapFrontEnd.hx",109,0x91a05ae2)
								{
									HX_STACK_LINE(109)
									::flixel::util::loaders::CachedGraphics _g = __this->_cache->get(key);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(109)
									return (_g != null());
								}
								return null();
							}
						};
						HX_STACK_LINE(109)
						return (  ((__this->_cache->exists(key))) ? bool(_Function_3_1::Block(__this,key)) : bool(false) );
					}
					return null();
				}
			};
			HX_STACK_LINE(109)
			if (((  ((Unique)) ? bool(_Function_2_1::Block(this,key)) : bool(false) ))){
				HX_STACK_LINE(111)
				::String _g1 = this->getUniqueKey(key);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(111)
				key = _g1;
			}
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::system::frontEnds::BitmapFrontEnd_obj > __this,::String &key){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/BitmapFrontEnd.hx",114,0x91a05ae2)
				{
					HX_STACK_LINE(114)
					::flixel::util::loaders::CachedGraphics _g2 = __this->_cache->get(key);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(114)
					return (_g2 != null());
				}
				return null();
			}
		};
		HX_STACK_LINE(114)
		if ((!(((  ((this->_cache->exists(key))) ? bool(_Function_1_1::Block(this,key)) : bool(false) ))))){
			HX_STACK_LINE(116)
			::flash::display::BitmapData _g3 = ::flash::display::BitmapData_obj::__new(Width,Height,true,Color,null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(116)
			::flixel::util::loaders::CachedGraphics value = ::flixel::util::loaders::CachedGraphics_obj::__new(key,_g3,null());		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(116)
			this->_cache->set(key,value);
		}
		HX_STACK_LINE(119)
		return this->_cache->get(key);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapFrontEnd_obj,create,return )

::flixel::util::loaders::CachedGraphics BitmapFrontEnd_obj::add( Dynamic Graphic,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","add",0x0f1953ae,"flixel.system.frontEnds.BitmapFrontEnd.add","flixel/system/frontEnds/BitmapFrontEnd.hx",132,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(132)
		return this->addWithSpaces(Graphic,(int)0,(int)0,(int)1,(int)1,Unique,Key);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFrontEnd_obj,add,return )

::flixel::util::loaders::CachedGraphics BitmapFrontEnd_obj::addWithSpaces( Dynamic Graphic,int FrameWidth,int FrameHeight,hx::Null< int >  __o_SpacingX,hx::Null< int >  __o_SpacingY,hx::Null< bool >  __o_Unique,::String Key){
int SpacingX = __o_SpacingX.Default(1);
int SpacingY = __o_SpacingY.Default(1);
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","addWithSpaces",0x971bd0e1,"flixel.system.frontEnds.BitmapFrontEnd.addWithSpaces","flixel/system/frontEnds/BitmapFrontEnd.hx",149,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(FrameWidth,"FrameWidth")
	HX_STACK_ARG(FrameHeight,"FrameHeight")
	HX_STACK_ARG(SpacingX,"SpacingX")
	HX_STACK_ARG(SpacingY,"SpacingY")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(150)
		if (((Graphic == null()))){
			HX_STACK_LINE(152)
			return null();
		}
		HX_STACK_LINE(155)
		::flixel::util::loaders::TextureRegion region = null();		HX_STACK_VAR(region,"region");
		HX_STACK_LINE(156)
		::flixel::util::loaders::CachedGraphics graphic = null();		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(158)
		bool isClass = false;		HX_STACK_VAR(isClass,"isClass");
		HX_STACK_LINE(159)
		bool isBitmap = false;		HX_STACK_VAR(isBitmap,"isBitmap");
		HX_STACK_LINE(160)
		bool isRegion = false;		HX_STACK_VAR(isRegion,"isRegion");
		HX_STACK_LINE(161)
		bool isGraphics = false;		HX_STACK_VAR(isGraphics,"isGraphics");
		HX_STACK_LINE(163)
		if ((::Std_obj::is(Graphic,hx::ClassOf< ::flixel::util::loaders::CachedGraphics >()))){
			HX_STACK_LINE(165)
			isGraphics = true;
			HX_STACK_LINE(166)
			::flixel::util::loaders::CachedGraphics _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(166)
			_g = hx::TCast< flixel::util::loaders::CachedGraphics >::cast(Graphic);
			HX_STACK_LINE(166)
			graphic = _g;
			HX_STACK_LINE(168)
			if (((bool(!(Unique)) && bool(((bool((FrameWidth <= (int)0)) && bool((FrameHeight <= (int)0)))))))){
				HX_STACK_LINE(170)
				return graphic;
			}
		}
		else{
			HX_STACK_LINE(173)
			if ((::Std_obj::is(Graphic,hx::ClassOf< ::Class >()))){
				HX_STACK_LINE(175)
				isClass = true;
			}
			else{
				HX_STACK_LINE(177)
				if ((::Std_obj::is(Graphic,hx::ClassOf< ::flash::display::BitmapData >()))){
					HX_STACK_LINE(179)
					isBitmap = true;
				}
				else{
					HX_STACK_LINE(181)
					if ((::Std_obj::is(Graphic,hx::ClassOf< ::flixel::util::loaders::TextureRegion >()))){
						HX_STACK_LINE(183)
						isRegion = true;
						HX_STACK_LINE(184)
						::flixel::util::loaders::TextureRegion _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(184)
						_g1 = hx::TCast< flixel::util::loaders::TextureRegion >::cast(Graphic);
						HX_STACK_LINE(184)
						region = _g1;
					}
					else{
						HX_STACK_LINE(186)
						if ((::Std_obj::is(Graphic,hx::ClassOf< ::String >()))){
						}
						else{
							HX_STACK_LINE(192)
							return null();
						}
					}
				}
			}
		}
		HX_STACK_LINE(195)
		::String additionalKey = HX_CSTRING("");		HX_STACK_VAR(additionalKey,"additionalKey");
		HX_STACK_LINE(197)
		if (((bool((FrameWidth > (int)0)) || bool((FrameHeight > (int)0))))){
			HX_STACK_LINE(199)
			additionalKey = (((((((HX_CSTRING("FrameSize:") + FrameWidth) + HX_CSTRING("_")) + FrameHeight) + HX_CSTRING("_Spacing:")) + SpacingX) + HX_CSTRING("_")) + SpacingY);
		}
		HX_STACK_LINE(202)
		::String key = Key;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(203)
		if (((key == null()))){
			HX_STACK_LINE(205)
			if ((isClass)){
				HX_STACK_LINE(207)
				::Class _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(207)
				_g2 = hx::TCast< Class >::cast(Graphic);
				HX_STACK_LINE(207)
				::String _g3 = ::Type_obj::getClassName(_g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(207)
				key = _g3;
			}
			else{
				HX_STACK_LINE(209)
				if ((isBitmap)){
					HX_STACK_LINE(211)
					if ((!(Unique))){
						HX_STACK_LINE(213)
						::String _g4 = this->getCacheKeyFor(Graphic);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(213)
						key = _g4;
						HX_STACK_LINE(214)
						if (((key == null()))){
							HX_STACK_LINE(216)
							::String _g5 = this->getUniqueKey(null());		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(216)
							key = _g5;
						}
					}
				}
				else{
					HX_STACK_LINE(220)
					if ((isRegion)){
						HX_STACK_LINE(222)
						key = region->data->key;
					}
					else{
						HX_STACK_LINE(224)
						if ((isGraphics)){
							HX_STACK_LINE(226)
							key = graphic->key;
						}
						else{
							HX_STACK_LINE(230)
							key = Graphic;
						}
					}
				}
			}
			HX_STACK_LINE(233)
			hx::AddEq(key,additionalKey);
			HX_STACK_LINE(235)
			if ((Unique)){
				HX_STACK_LINE(237)
				::String _g6 = this->getUniqueKey((  (((key == null()))) ? ::String(HX_CSTRING("pixels")) : ::String(key) ));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(237)
				key = _g6;
			}
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::system::frontEnds::BitmapFrontEnd_obj > __this,::String &key){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/BitmapFrontEnd.hx",242,0x91a05ae2)
				{
					HX_STACK_LINE(242)
					::flixel::util::loaders::CachedGraphics _g7 = __this->_cache->get(key);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(242)
					return (_g7 != null());
				}
				return null();
			}
		};
		HX_STACK_LINE(242)
		if ((!(((  ((this->_cache->exists(key))) ? bool(_Function_1_1::Block(this,key)) : bool(false) ))))){
			HX_STACK_LINE(244)
			::flash::display::BitmapData bd = null();		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(245)
			if ((isClass)){
				HX_STACK_LINE(247)
				::Class _g8;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(247)
				_g8 = hx::TCast< Class >::cast(Graphic);
				HX_STACK_LINE(247)
				::flash::display::BitmapData _g9 = ::Type_obj::createInstance(_g8,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0)));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(247)
				bd = _g9;
			}
			else{
				HX_STACK_LINE(249)
				if ((isBitmap)){
					HX_STACK_LINE(251)
					bd = Graphic;
				}
				else{
					HX_STACK_LINE(253)
					if ((isRegion)){
						HX_STACK_LINE(255)
						bd = region->data->bitmap;
					}
					else{
						HX_STACK_LINE(257)
						if ((isGraphics)){
							HX_STACK_LINE(259)
							bd = graphic->bitmap;
						}
						else{
							HX_STACK_LINE(263)
							::flash::display::BitmapData _g10;		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(263)
							{
								HX_STACK_LINE(263)
								::String id = Graphic;		HX_STACK_VAR(id,"id");
								HX_STACK_LINE(263)
								_g10 = ::openfl::Assets_obj::getBitmapData(id,false);
							}
							HX_STACK_LINE(263)
							bd = _g10;
						}
					}
				}
			}
			HX_STACK_LINE(266)
			if (((bool((FrameWidth > (int)0)) || bool((FrameHeight > (int)0))))){
				HX_STACK_LINE(268)
				int numHorizontalFrames;		HX_STACK_VAR(numHorizontalFrames,"numHorizontalFrames");
				HX_STACK_LINE(268)
				if (((FrameWidth == (int)0))){
					HX_STACK_LINE(268)
					numHorizontalFrames = (int)1;
				}
				else{
					HX_STACK_LINE(268)
					int _g11 = bd->get_width();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(268)
					Float _g12 = (Float(_g11) / Float(FrameWidth));		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(268)
					numHorizontalFrames = ::Std_obj::_int(_g12);
				}
				HX_STACK_LINE(269)
				int numVerticalFrames;		HX_STACK_VAR(numVerticalFrames,"numVerticalFrames");
				HX_STACK_LINE(269)
				if (((FrameHeight == (int)0))){
					HX_STACK_LINE(269)
					numVerticalFrames = (int)1;
				}
				else{
					HX_STACK_LINE(269)
					int _g13 = bd->get_height();		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(269)
					Float _g14 = (Float(_g13) / Float(FrameHeight));		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(269)
					numVerticalFrames = ::Std_obj::_int(_g14);
				}
				HX_STACK_LINE(271)
				int _g15;		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(271)
				if (((FrameWidth == (int)0))){
					HX_STACK_LINE(271)
					_g15 = bd->get_width();
				}
				else{
					HX_STACK_LINE(271)
					_g15 = FrameWidth;
				}
				HX_STACK_LINE(271)
				FrameWidth = _g15;
				HX_STACK_LINE(272)
				int _g16;		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(272)
				if (((FrameHeight == (int)0))){
					HX_STACK_LINE(272)
					_g16 = bd->get_height();
				}
				else{
					HX_STACK_LINE(272)
					_g16 = FrameHeight;
				}
				HX_STACK_LINE(272)
				FrameHeight = _g16;
				HX_STACK_LINE(274)
				int _g17 = bd->get_width();		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(274)
				int _g18 = (_g17 + (numHorizontalFrames * SpacingX));		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(274)
				int _g19 = bd->get_height();		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(274)
				int _g20 = (_g19 + (numVerticalFrames * SpacingY));		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(274)
				::flash::display::BitmapData tempBitmap = ::flash::display::BitmapData_obj::__new(_g18,_g20,true,(int)0,null());		HX_STACK_VAR(tempBitmap,"tempBitmap");
				HX_STACK_LINE(275)
				tempBitmap->lock();
				HX_STACK_LINE(276)
				::flash::geom::Rectangle tempRect = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,FrameWidth,FrameHeight);		HX_STACK_VAR(tempRect,"tempRect");
				HX_STACK_LINE(277)
				::flash::geom::Point tempPoint = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tempPoint,"tempPoint");
				HX_STACK_LINE(279)
				{
					HX_STACK_LINE(279)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(279)
					while((true)){
						HX_STACK_LINE(279)
						if ((!(((_g < numHorizontalFrames))))){
							HX_STACK_LINE(279)
							break;
						}
						HX_STACK_LINE(279)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(281)
						tempPoint->x = (i * ((FrameWidth + SpacingX)));
						HX_STACK_LINE(282)
						tempRect->x = (i * FrameWidth);
						HX_STACK_LINE(284)
						{
							HX_STACK_LINE(284)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(284)
							int _g1 = numVerticalFrames;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(284)
							while((true)){
								HX_STACK_LINE(284)
								if ((!(((_g2 < _g1))))){
									HX_STACK_LINE(284)
									break;
								}
								HX_STACK_LINE(284)
								int j = (_g2)++;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(286)
								tempPoint->y = (j * ((FrameHeight + SpacingY)));
								HX_STACK_LINE(287)
								tempRect->y = (j * FrameHeight);
								HX_STACK_LINE(288)
								tempBitmap->copyPixels(bd,tempRect,tempPoint,null(),null(),null());
							}
						}
					}
				}
				HX_STACK_LINE(291)
				tempBitmap->unlock(null());
				HX_STACK_LINE(292)
				bd = tempBitmap;
			}
			HX_STACK_LINE(295)
			if ((Unique)){
				HX_STACK_LINE(297)
				::flash::display::BitmapData _g21 = bd->clone();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(297)
				bd = _g21;
			}
			HX_STACK_LINE(300)
			::flixel::util::loaders::CachedGraphics co = ::flixel::util::loaders::CachedGraphics_obj::__new(key,bd,null());		HX_STACK_VAR(co,"co");
			HX_STACK_LINE(302)
			if (((bool(isClass) && bool(!(Unique))))){
				HX_STACK_LINE(304)
				co->assetsClass = Graphic;
			}
			else{
				HX_STACK_LINE(306)
				if (((bool((bool((bool(!(isClass)) && bool(!(isBitmap)))) && bool(!(isRegion)))) && bool(!(Unique))))){
					HX_STACK_LINE(308)
					co->assetsKey = Graphic;
				}
			}
			HX_STACK_LINE(311)
			this->_cache->set(key,co);
		}
		HX_STACK_LINE(314)
		return this->_cache->get(key);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapFrontEnd_obj,addWithSpaces,return )

::flixel::util::loaders::CachedGraphics BitmapFrontEnd_obj::get( ::String key){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","get",0x0f1de223,"flixel.system.frontEnds.BitmapFrontEnd.get","flixel/system/frontEnds/BitmapFrontEnd.hx",324,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(324)
	return this->_cache->get(key);
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,get,return )

::String BitmapFrontEnd_obj::getCacheKeyFor( ::flash::display::BitmapData bmd){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","getCacheKeyFor",0xfaa1a129,"flixel.system.frontEnds.BitmapFrontEnd.getCacheKeyFor","flixel/system/frontEnds/BitmapFrontEnd.hx",334,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmd,"bmd")
	HX_STACK_LINE(335)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_cache->keys());  __it->hasNext(); ){
		::String key = __it->next();
		{
			HX_STACK_LINE(337)
			::flash::display::BitmapData data = this->_cache->get(key)->__Field(HX_CSTRING("bitmap"),true);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(338)
			if (((data == bmd))){
				HX_STACK_LINE(340)
				return key;
			}
		}
;
	}
	HX_STACK_LINE(343)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,getCacheKeyFor,return )

::String BitmapFrontEnd_obj::getUniqueKey( ::String __o_baseKey){
::String baseKey = __o_baseKey.Default(HX_CSTRING("pixels"));
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","getUniqueKey",0x2898506b,"flixel.system.frontEnds.BitmapFrontEnd.getUniqueKey","flixel/system/frontEnds/BitmapFrontEnd.hx",353,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(baseKey,"baseKey")
{
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::system::frontEnds::BitmapFrontEnd_obj > __this,::String &baseKey){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/BitmapFrontEnd.hx",354,0x91a05ae2)
				{
					HX_STACK_LINE(354)
					::flixel::util::loaders::CachedGraphics _g = __this->_cache->get(baseKey);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(354)
					return (_g != null());
				}
				return null();
			}
		};
		HX_STACK_LINE(354)
		if (((  ((this->_cache->exists(baseKey))) ? bool(_Function_1_1::Block(this,baseKey)) : bool(false) ))){
			HX_STACK_LINE(356)
			int inc = (int)0;		HX_STACK_VAR(inc,"inc");
			HX_STACK_LINE(357)
			::String ukey;		HX_STACK_VAR(ukey,"ukey");
			HX_STACK_LINE(358)
			while((true)){
				HX_STACK_LINE(360)
				int _g1 = (inc)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(360)
				::String _g2 = (baseKey + _g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(360)
				ukey = _g2;
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::flixel::system::frontEnds::BitmapFrontEnd_obj > __this,::String &ukey){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/BitmapFrontEnd.hx",361,0x91a05ae2)
						{
							HX_STACK_LINE(361)
							::flixel::util::loaders::CachedGraphics _g3 = __this->_cache->get(ukey);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(361)
							return (_g3 != null());
						}
						return null();
					}
				};
				HX_STACK_LINE(358)
				if ((!(((  ((this->_cache->exists(ukey))) ? bool(_Function_3_1::Block(this,ukey)) : bool(false) ))))){
					HX_STACK_LINE(358)
					break;
				}
			}
			HX_STACK_LINE(362)
			baseKey = ukey;
		}
		HX_STACK_LINE(364)
		return baseKey;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,getUniqueKey,return )

Void BitmapFrontEnd_obj::remove( ::String key){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","remove",0x5bfef0d7,"flixel.system.frontEnds.BitmapFrontEnd.remove","flixel/system/frontEnds/BitmapFrontEnd.hx",369,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(369)
		if (((  (((key != null()))) ? bool(this->_cache->exists(key)) : bool(false) ))){
			HX_STACK_LINE(371)
			::flixel::util::loaders::CachedGraphics obj = this->_cache->get(key);		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(372)
			bool _g = this->inOpenFlAssets(obj->bitmap);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(372)
			if (((_g == false))){
				HX_STACK_LINE(374)
				this->_cache->remove(key);
				HX_STACK_LINE(375)
				obj->destroy();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,remove,(void))

Void BitmapFrontEnd_obj::clearCache( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","clearCache",0xad367388,"flixel.system.frontEnds.BitmapFrontEnd.clearCache","flixel/system/frontEnds/BitmapFrontEnd.hx",384,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(385)
		::flixel::util::loaders::CachedGraphics obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(387)
		if (((this->_cache == null()))){
			HX_STACK_LINE(389)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(389)
			this->_cache = _g;
		}
		HX_STACK_LINE(392)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_cache->keys());  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(394)
				::flixel::util::loaders::CachedGraphics _g1 = this->_cache->get(key);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(394)
				obj = _g1;
				struct _Function_2_1{
					inline static bool Block( hx::ObjectPtr< ::flixel::system::frontEnds::BitmapFrontEnd_obj > __this,::flixel::util::loaders::CachedGraphics &obj){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/BitmapFrontEnd.hx",395,0x91a05ae2)
						{
							HX_STACK_LINE(395)
							bool _g2 = __this->inOpenFlAssets(obj->bitmap);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(395)
							return (_g2 == false);
						}
						return null();
					}
				};
				HX_STACK_LINE(395)
				if (((  (((bool((obj != null())) && bool(!(obj->persist))))) ? bool(_Function_2_1::Block(this,obj)) : bool(false) ))){
					HX_STACK_LINE(397)
					this->_cache->remove(key);
					HX_STACK_LINE(398)
					obj->destroy();
					HX_STACK_LINE(399)
					obj = null();
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,clearCache,(void))

bool BitmapFrontEnd_obj::inOpenFlAssets( ::flash::display::BitmapData bitmap){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","inOpenFlAssets",0xc245f36b,"flixel.system.frontEnds.BitmapFrontEnd.inOpenFlAssets","flixel/system/frontEnds/BitmapFrontEnd.hx",405,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_LINE(407)
	::haxe::ds::StringMap bitmapDataCache = ::openfl::Assets_obj::cache->bitmapData;		HX_STACK_VAR(bitmapDataCache,"bitmapDataCache");
	HX_STACK_LINE(408)
	if (((bitmapDataCache != null()))){
		HX_STACK_LINE(410)
		for(::cpp::FastIterator_obj< ::flash::display::BitmapData > *__it = ::cpp::CreateFastIterator< ::flash::display::BitmapData >(bitmapDataCache->iterator());  __it->hasNext(); ){
			::flash::display::BitmapData bd = __it->next();
			if (((bd == bitmap))){
				HX_STACK_LINE(414)
				return true;
			}
;
		}
	}
	HX_STACK_LINE(419)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,inOpenFlAssets,return )


BitmapFrontEnd_obj::BitmapFrontEnd_obj()
{
}

void BitmapFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapFrontEnd);
	HX_MARK_MEMBER_NAME(_cache,"_cache");
	HX_MARK_MEMBER_NAME(whitePixel,"whitePixel");
	HX_MARK_MEMBER_NAME(_whitePixel,"_whitePixel");
	HX_MARK_END_CLASS();
}

void BitmapFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cache,"_cache");
	HX_VISIT_MEMBER_NAME(whitePixel,"whitePixel");
	HX_VISIT_MEMBER_NAME(_whitePixel,"_whitePixel");
}

Dynamic BitmapFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { return _cache; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onContext") ) { return onContext_dyn(); }
		if (HX_FIELD_EQ(inName,"dumpCache") ) { return dumpCache_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"whitePixel") ) { return inCallProp ? get_whitePixel() : whitePixel; }
		if (HX_FIELD_EQ(inName,"checkCache") ) { return checkCache_dyn(); }
		if (HX_FIELD_EQ(inName,"clearCache") ) { return clearCache_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_whitePixel") ) { return _whitePixel; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getUniqueKey") ) { return getUniqueKey_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addWithSpaces") ) { return addWithSpaces_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_whitePixel") ) { return get_whitePixel_dyn(); }
		if (HX_FIELD_EQ(inName,"getCacheKeyFor") ) { return getCacheKeyFor_dyn(); }
		if (HX_FIELD_EQ(inName,"inOpenFlAssets") ) { return inOpenFlAssets_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { _cache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"whitePixel") ) { whitePixel=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_whitePixel") ) { _whitePixel=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_cache"));
	outFields->push(HX_CSTRING("whitePixel"));
	outFields->push(HX_CSTRING("_whitePixel"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(BitmapFrontEnd_obj,_cache),HX_CSTRING("_cache")},
	{hx::fsObject /*::flixel::util::loaders::CachedGraphics*/ ,(int)offsetof(BitmapFrontEnd_obj,whitePixel),HX_CSTRING("whitePixel")},
	{hx::fsObject /*::flixel::util::loaders::CachedGraphics*/ ,(int)offsetof(BitmapFrontEnd_obj,_whitePixel),HX_CSTRING("_whitePixel")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_cache"),
	HX_CSTRING("whitePixel"),
	HX_CSTRING("_whitePixel"),
	HX_CSTRING("get_whitePixel"),
	HX_CSTRING("onContext"),
	HX_CSTRING("dumpCache"),
	HX_CSTRING("checkCache"),
	HX_CSTRING("create"),
	HX_CSTRING("add"),
	HX_CSTRING("addWithSpaces"),
	HX_CSTRING("get"),
	HX_CSTRING("getCacheKeyFor"),
	HX_CSTRING("getUniqueKey"),
	HX_CSTRING("remove"),
	HX_CSTRING("clearCache"),
	HX_CSTRING("inOpenFlAssets"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFrontEnd_obj::__mClass,"__mClass");
};

#endif

Class BitmapFrontEnd_obj::__mClass;

void BitmapFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.BitmapFrontEnd"), hx::TCanCast< BitmapFrontEnd_obj> ,sStaticFields,sMemberFields,
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

void BitmapFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
