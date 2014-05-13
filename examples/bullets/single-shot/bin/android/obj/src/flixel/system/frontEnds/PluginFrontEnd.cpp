#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
#ifndef INCLUDED_flixel_plugin_PathManager
#include <flixel/plugin/PathManager.h>
#endif
#ifndef INCLUDED_flixel_plugin_TimerManager
#include <flixel/plugin/TimerManager.h>
#endif
#ifndef INCLUDED_flixel_plugin_TweenManager
#include <flixel/plugin/TweenManager.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void PluginFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","new",0x6ca9c2b1,"flixel.system.frontEnds.PluginFrontEnd.new","flixel/system/frontEnds/PluginFrontEnd.hx",13,0xbff70e9e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	this->list = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(114)
	::flixel::plugin::PathManager _g = ::flixel::plugin::PathManager_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(114)
	::flixel::plugin::PathManager _g1 = ::flixel::util::FlxPath_obj::manager = _g;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(114)
	this->add_flixel_plugin_PathManager(_g1);
	HX_STACK_LINE(115)
	::flixel::plugin::TimerManager _g2 = ::flixel::plugin::TimerManager_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(115)
	::flixel::plugin::TimerManager _g3 = ::flixel::util::FlxTimer_obj::manager = _g2;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(115)
	this->add_flixel_plugin_TimerManager(_g3);
	HX_STACK_LINE(116)
	::flixel::plugin::TweenManager _g4 = ::flixel::plugin::TweenManager_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(116)
	::flixel::plugin::TweenManager _g5 = ::flixel::tweens::FlxTween_obj::manager = _g4;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(116)
	this->add_flixel_plugin_TweenManager(_g5);
}
;
	return null();
}

//PluginFrontEnd_obj::~PluginFrontEnd_obj() { }

Dynamic PluginFrontEnd_obj::__CreateEmpty() { return  new PluginFrontEnd_obj; }
hx::ObjectPtr< PluginFrontEnd_obj > PluginFrontEnd_obj::__new()
{  hx::ObjectPtr< PluginFrontEnd_obj > result = new PluginFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic PluginFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PluginFrontEnd_obj > result = new PluginFrontEnd_obj();
	result->__construct();
	return result;}

::flixel::plugin::TweenManager PluginFrontEnd_obj::add_flixel_plugin_TweenManager( ::flixel::plugin::TweenManager Plugin){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","add_flixel_plugin_TweenManager",0xcad736f8,"flixel.system.frontEnds.PluginFrontEnd.add_flixel_plugin_TweenManager","flixel/system/frontEnds/PluginFrontEnd.hx",28,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Plugin,"Plugin")
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(30)
		while((true)){
			HX_STACK_LINE(30)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(30)
				break;
			}
			HX_STACK_LINE(30)
			::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(30)
			++(_g);
			struct _Function_3_1{
				inline static bool Block( ::flixel::plugin::TweenManager &Plugin,::flixel::plugin::FlxPlugin &plugin){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/PluginFrontEnd.hx",32,0xbff70e9e)
					{
						HX_STACK_LINE(32)
						bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
						HX_STACK_LINE(32)
						::String _g5;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(32)
						{
							HX_STACK_LINE(32)
							::Class cl;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(32)
							if ((::Std_obj::is(Plugin,hx::ClassOf< ::Class >()))){
								HX_STACK_LINE(32)
								cl = Plugin;
							}
							else{
								HX_STACK_LINE(32)
								::Class _g2 = ::Type_obj::getClass(Plugin);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(32)
								cl = _g2;
							}
							HX_STACK_LINE(32)
							::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(32)
							if (((s != null()))){
								HX_STACK_LINE(32)
								::String _g11 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(32)
								s = _g11;
								HX_STACK_LINE(32)
								if ((Simple)){
									HX_STACK_LINE(32)
									int _g2 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(32)
									int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(32)
									::String _g4 = s.substr(_g3,null());		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(32)
									s = _g4;
								}
							}
							HX_STACK_LINE(32)
							_g5 = s;
						}
						HX_STACK_LINE(32)
						::String _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(32)
						{
							HX_STACK_LINE(32)
							::Class cl;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(32)
							if ((::Std_obj::is(plugin,hx::ClassOf< ::Class >()))){
								HX_STACK_LINE(32)
								cl = plugin;
							}
							else{
								HX_STACK_LINE(32)
								::Class _g6 = ::Type_obj::getClass(plugin);		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(32)
								cl = _g6;
							}
							HX_STACK_LINE(32)
							::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(32)
							if (((s != null()))){
								HX_STACK_LINE(32)
								::String _g7 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(32)
								s = _g7;
								HX_STACK_LINE(32)
								if ((Simple)){
									HX_STACK_LINE(32)
									int _g8 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(32)
									int _g9 = (_g8 + (int)1);		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(32)
									::String _g10 = s.substr(_g9,null());		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(32)
									s = _g10;
								}
							}
							HX_STACK_LINE(32)
							_g11 = s;
						}
						HX_STACK_LINE(32)
						return (_g5 == _g11);
					}
					return null();
				}
			};
			HX_STACK_LINE(32)
			if ((_Function_3_1::Block(Plugin,plugin))){
				HX_STACK_LINE(34)
				return Plugin;
			}
		}
	}
	HX_STACK_LINE(39)
	this->list->push(Plugin);
	HX_STACK_LINE(40)
	return Plugin;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,add_flixel_plugin_TweenManager,return )

::flixel::plugin::TimerManager PluginFrontEnd_obj::add_flixel_plugin_TimerManager( ::flixel::plugin::TimerManager Plugin){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","add_flixel_plugin_TimerManager",0xa5cae0de,"flixel.system.frontEnds.PluginFrontEnd.add_flixel_plugin_TimerManager","flixel/system/frontEnds/PluginFrontEnd.hx",28,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Plugin,"Plugin")
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(30)
		while((true)){
			HX_STACK_LINE(30)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(30)
				break;
			}
			HX_STACK_LINE(30)
			::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(30)
			++(_g);
			struct _Function_3_1{
				inline static bool Block( ::flixel::plugin::TimerManager &Plugin,::flixel::plugin::FlxPlugin &plugin){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/PluginFrontEnd.hx",32,0xbff70e9e)
					{
						HX_STACK_LINE(32)
						bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
						HX_STACK_LINE(32)
						::String _g5;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(32)
						{
							HX_STACK_LINE(32)
							::Class cl;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(32)
							if ((::Std_obj::is(Plugin,hx::ClassOf< ::Class >()))){
								HX_STACK_LINE(32)
								cl = Plugin;
							}
							else{
								HX_STACK_LINE(32)
								::Class _g2 = ::Type_obj::getClass(Plugin);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(32)
								cl = _g2;
							}
							HX_STACK_LINE(32)
							::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(32)
							if (((s != null()))){
								HX_STACK_LINE(32)
								::String _g11 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(32)
								s = _g11;
								HX_STACK_LINE(32)
								if ((Simple)){
									HX_STACK_LINE(32)
									int _g2 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(32)
									int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(32)
									::String _g4 = s.substr(_g3,null());		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(32)
									s = _g4;
								}
							}
							HX_STACK_LINE(32)
							_g5 = s;
						}
						HX_STACK_LINE(32)
						::String _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(32)
						{
							HX_STACK_LINE(32)
							::Class cl;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(32)
							if ((::Std_obj::is(plugin,hx::ClassOf< ::Class >()))){
								HX_STACK_LINE(32)
								cl = plugin;
							}
							else{
								HX_STACK_LINE(32)
								::Class _g6 = ::Type_obj::getClass(plugin);		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(32)
								cl = _g6;
							}
							HX_STACK_LINE(32)
							::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(32)
							if (((s != null()))){
								HX_STACK_LINE(32)
								::String _g7 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(32)
								s = _g7;
								HX_STACK_LINE(32)
								if ((Simple)){
									HX_STACK_LINE(32)
									int _g8 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(32)
									int _g9 = (_g8 + (int)1);		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(32)
									::String _g10 = s.substr(_g9,null());		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(32)
									s = _g10;
								}
							}
							HX_STACK_LINE(32)
							_g11 = s;
						}
						HX_STACK_LINE(32)
						return (_g5 == _g11);
					}
					return null();
				}
			};
			HX_STACK_LINE(32)
			if ((_Function_3_1::Block(Plugin,plugin))){
				HX_STACK_LINE(34)
				return Plugin;
			}
		}
	}
	HX_STACK_LINE(39)
	this->list->push(Plugin);
	HX_STACK_LINE(40)
	return Plugin;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,add_flixel_plugin_TimerManager,return )

::flixel::plugin::PathManager PluginFrontEnd_obj::add_flixel_plugin_PathManager( ::flixel::plugin::PathManager Plugin){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","add_flixel_plugin_PathManager",0x40533852,"flixel.system.frontEnds.PluginFrontEnd.add_flixel_plugin_PathManager","flixel/system/frontEnds/PluginFrontEnd.hx",28,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Plugin,"Plugin")
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(30)
		while((true)){
			HX_STACK_LINE(30)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(30)
				break;
			}
			HX_STACK_LINE(30)
			::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(30)
			++(_g);
			struct _Function_3_1{
				inline static bool Block( ::flixel::plugin::PathManager &Plugin,::flixel::plugin::FlxPlugin &plugin){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/PluginFrontEnd.hx",32,0xbff70e9e)
					{
						HX_STACK_LINE(32)
						bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
						HX_STACK_LINE(32)
						::String _g5;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(32)
						{
							HX_STACK_LINE(32)
							::Class cl;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(32)
							if ((::Std_obj::is(Plugin,hx::ClassOf< ::Class >()))){
								HX_STACK_LINE(32)
								cl = Plugin;
							}
							else{
								HX_STACK_LINE(32)
								::Class _g2 = ::Type_obj::getClass(Plugin);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(32)
								cl = _g2;
							}
							HX_STACK_LINE(32)
							::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(32)
							if (((s != null()))){
								HX_STACK_LINE(32)
								::String _g11 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(32)
								s = _g11;
								HX_STACK_LINE(32)
								if ((Simple)){
									HX_STACK_LINE(32)
									int _g2 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(32)
									int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(32)
									::String _g4 = s.substr(_g3,null());		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(32)
									s = _g4;
								}
							}
							HX_STACK_LINE(32)
							_g5 = s;
						}
						HX_STACK_LINE(32)
						::String _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(32)
						{
							HX_STACK_LINE(32)
							::Class cl;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(32)
							if ((::Std_obj::is(plugin,hx::ClassOf< ::Class >()))){
								HX_STACK_LINE(32)
								cl = plugin;
							}
							else{
								HX_STACK_LINE(32)
								::Class _g6 = ::Type_obj::getClass(plugin);		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(32)
								cl = _g6;
							}
							HX_STACK_LINE(32)
							::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(32)
							if (((s != null()))){
								HX_STACK_LINE(32)
								::String _g7 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(32)
								s = _g7;
								HX_STACK_LINE(32)
								if ((Simple)){
									HX_STACK_LINE(32)
									int _g8 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(32)
									int _g9 = (_g8 + (int)1);		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(32)
									::String _g10 = s.substr(_g9,null());		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(32)
									s = _g10;
								}
							}
							HX_STACK_LINE(32)
							_g11 = s;
						}
						HX_STACK_LINE(32)
						return (_g5 == _g11);
					}
					return null();
				}
			};
			HX_STACK_LINE(32)
			if ((_Function_3_1::Block(Plugin,plugin))){
				HX_STACK_LINE(34)
				return Plugin;
			}
		}
	}
	HX_STACK_LINE(39)
	this->list->push(Plugin);
	HX_STACK_LINE(40)
	return Plugin;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,add_flixel_plugin_PathManager,return )

::flixel::plugin::FlxPlugin PluginFrontEnd_obj::get( ::Class ClassType){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","get",0x6ca472e7,"flixel.system.frontEnds.PluginFrontEnd.get","flixel/system/frontEnds/PluginFrontEnd.hx",50,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ClassType,"ClassType")
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(51)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(51)
		while((true)){
			HX_STACK_LINE(51)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(51)
				break;
			}
			HX_STACK_LINE(51)
			::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(51)
			++(_g);
			HX_STACK_LINE(53)
			if ((::Std_obj::is(plugin,ClassType))){
				HX_STACK_LINE(55)
				return plugin;
			}
		}
	}
	HX_STACK_LINE(59)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,get,return )

::flixel::plugin::FlxPlugin PluginFrontEnd_obj::remove( ::flixel::plugin::FlxPlugin Plugin){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","remove",0x66803293,"flixel.system.frontEnds.PluginFrontEnd.remove","flixel/system/frontEnds/PluginFrontEnd.hx",69,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Plugin,"Plugin")
	HX_STACK_LINE(71)
	int i = (this->list->length - (int)1);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(73)
	while((true)){
		HX_STACK_LINE(73)
		if ((!(((i >= (int)0))))){
			HX_STACK_LINE(73)
			break;
		}
		HX_STACK_LINE(75)
		if (((this->list->__get(i).StaticCast< ::flixel::plugin::FlxPlugin >() == Plugin))){
			HX_STACK_LINE(77)
			this->list->splice(i,(int)1);
			HX_STACK_LINE(78)
			return Plugin;
		}
		HX_STACK_LINE(80)
		(i)--;
	}
	HX_STACK_LINE(83)
	return Plugin;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,remove,return )

bool PluginFrontEnd_obj::removeType( ::Class ClassType){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","removeType",0x8b4a96ed,"flixel.system.frontEnds.PluginFrontEnd.removeType","flixel/system/frontEnds/PluginFrontEnd.hx",93,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ClassType,"ClassType")
	HX_STACK_LINE(95)
	bool results = false;		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(96)
	int i = (this->list->length - (int)1);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(98)
	while((true)){
		HX_STACK_LINE(98)
		if ((!(((i >= (int)0))))){
			HX_STACK_LINE(98)
			break;
		}
		HX_STACK_LINE(100)
		if ((::Std_obj::is(this->list->__get(i).StaticCast< ::flixel::plugin::FlxPlugin >(),ClassType))){
			HX_STACK_LINE(102)
			this->list->splice(i,(int)1);
			HX_STACK_LINE(103)
			results = true;
		}
		HX_STACK_LINE(105)
		(i)--;
	}
	HX_STACK_LINE(108)
	return results;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,removeType,return )

Void PluginFrontEnd_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","update",0xe8fd1c58,"flixel.system.frontEnds.PluginFrontEnd.update","flixel/system/frontEnds/PluginFrontEnd.hx",124,0xbff70e9e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(124)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(124)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(124)
		while((true)){
			HX_STACK_LINE(124)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(124)
				break;
			}
			HX_STACK_LINE(124)
			::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(124)
			++(_g);
			HX_STACK_LINE(126)
			if (((bool(plugin->exists) && bool(plugin->active)))){
				HX_STACK_LINE(128)
				plugin->update();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PluginFrontEnd_obj,update,(void))

Void PluginFrontEnd_obj::draw( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","draw",0xa14e4093,"flixel.system.frontEnds.PluginFrontEnd.draw","flixel/system/frontEnds/PluginFrontEnd.hx",138,0xbff70e9e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(138)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(138)
		while((true)){
			HX_STACK_LINE(138)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(138)
				break;
			}
			HX_STACK_LINE(138)
			::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(138)
			++(_g);
			HX_STACK_LINE(140)
			if (((bool(plugin->exists) && bool(plugin->visible)))){
				HX_STACK_LINE(142)
				plugin->draw();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PluginFrontEnd_obj,draw,(void))

Void PluginFrontEnd_obj::onStateSwitch( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","onStateSwitch",0xb3451597,"flixel.system.frontEnds.PluginFrontEnd.onStateSwitch","flixel/system/frontEnds/PluginFrontEnd.hx",152,0xbff70e9e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(152)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(152)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(152)
		while((true)){
			HX_STACK_LINE(152)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(152)
				break;
			}
			HX_STACK_LINE(152)
			::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(152)
			++(_g);
			HX_STACK_LINE(154)
			if ((plugin->exists)){
				HX_STACK_LINE(156)
				plugin->onStateSwitch();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PluginFrontEnd_obj,onStateSwitch,(void))

Void PluginFrontEnd_obj::onResize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","onResize",0x67ed5882,"flixel.system.frontEnds.PluginFrontEnd.onResize","flixel/system/frontEnds/PluginFrontEnd.hx",168,0xbff70e9e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(168)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(168)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(168)
		while((true)){
			HX_STACK_LINE(168)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(168)
				break;
			}
			HX_STACK_LINE(168)
			::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(168)
			++(_g);
			HX_STACK_LINE(170)
			if ((plugin->exists)){
				HX_STACK_LINE(172)
				plugin->onResize(Width,Height);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PluginFrontEnd_obj,onResize,(void))


PluginFrontEnd_obj::PluginFrontEnd_obj()
{
}

void PluginFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PluginFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void PluginFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
}

Dynamic PluginFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeType") ) { return removeType_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { return onStateSwitch_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"add_flixel_plugin_PathManager") ) { return add_flixel_plugin_PathManager_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"add_flixel_plugin_TweenManager") ) { return add_flixel_plugin_TweenManager_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_plugin_TimerManager") ) { return add_flixel_plugin_TimerManager_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PluginFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PluginFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("list"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PluginFrontEnd_obj,list),HX_CSTRING("list")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("add_flixel_plugin_TweenManager"),
	HX_CSTRING("add_flixel_plugin_TimerManager"),
	HX_CSTRING("add_flixel_plugin_PathManager"),
	HX_CSTRING("list"),
	HX_CSTRING("get"),
	HX_CSTRING("remove"),
	HX_CSTRING("removeType"),
	HX_CSTRING("update"),
	HX_CSTRING("draw"),
	HX_CSTRING("onStateSwitch"),
	HX_CSTRING("onResize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PluginFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PluginFrontEnd_obj::__mClass,"__mClass");
};

#endif

Class PluginFrontEnd_obj::__mClass;

void PluginFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.PluginFrontEnd"), hx::TCanCast< PluginFrontEnd_obj> ,sStaticFields,sMemberFields,
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

void PluginFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
