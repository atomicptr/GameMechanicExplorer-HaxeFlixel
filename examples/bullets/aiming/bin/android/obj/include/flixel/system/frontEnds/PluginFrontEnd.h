#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#define INCLUDED_flixel_system_frontEnds_PluginFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,plugin,FlxPlugin)
HX_DECLARE_CLASS2(flixel,plugin,PathManager)
HX_DECLARE_CLASS2(flixel,plugin,TimerManager)
HX_DECLARE_CLASS2(flixel,plugin,TweenManager)
HX_DECLARE_CLASS3(flixel,system,frontEnds,PluginFrontEnd)
namespace flixel{
namespace system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES  PluginFrontEnd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PluginFrontEnd_obj OBJ_;
		PluginFrontEnd_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PluginFrontEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PluginFrontEnd_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PluginFrontEnd"); }

		virtual ::flixel::plugin::TweenManager add_flixel_plugin_TweenManager( ::flixel::plugin::TweenManager Plugin);
		Dynamic add_flixel_plugin_TweenManager_dyn();

		virtual ::flixel::plugin::TimerManager add_flixel_plugin_TimerManager( ::flixel::plugin::TimerManager Plugin);
		Dynamic add_flixel_plugin_TimerManager_dyn();

		virtual ::flixel::plugin::PathManager add_flixel_plugin_PathManager( ::flixel::plugin::PathManager Plugin);
		Dynamic add_flixel_plugin_PathManager_dyn();

		Array< ::Dynamic > list;
		virtual ::flixel::plugin::FlxPlugin get( ::Class ClassType);
		Dynamic get_dyn();

		virtual ::flixel::plugin::FlxPlugin remove( ::flixel::plugin::FlxPlugin Plugin);
		Dynamic remove_dyn();

		virtual bool removeType( ::Class ClassType);
		Dynamic removeType_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void draw( );
		Dynamic draw_dyn();

		virtual Void onStateSwitch( );
		Dynamic onStateSwitch_dyn();

		virtual Void onResize( int Width,int Height);
		Dynamic onResize_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_PluginFrontEnd */ 
