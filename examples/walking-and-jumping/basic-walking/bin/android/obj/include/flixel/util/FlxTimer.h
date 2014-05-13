#ifndef INCLUDED_flixel_util_FlxTimer
#define INCLUDED_flixel_util_FlxTimer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/interfaces/IFlxDestroyable.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,plugin,FlxPlugin)
HX_DECLARE_CLASS2(flixel,plugin,TimerManager)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxTimer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxTimer_obj OBJ_;
		FlxTimer_obj();
		Void __construct(Dynamic Time,Dynamic Callback,hx::Null< int >  __o_Loops);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxTimer_obj > __new(Dynamic Time,Dynamic Callback,hx::Null< int >  __o_Loops);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTimer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::interfaces::IFlxDestroyable_obj *()
			{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxTimer_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxTimer"); }

		Float time;
		int loops;
		bool active;
		bool finished;
		Dynamic complete;
		Dynamic &complete_dyn() { return complete;}
		Float _timeCounter;
		int _loopsCounter;
		bool _inManager;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::flixel::util::FlxTimer start( hx::Null< Float >  Time,Dynamic Callback,hx::Null< int >  Loops);
		Dynamic start_dyn();

		virtual ::flixel::util::FlxTimer reset( hx::Null< Float >  NewTime);
		Dynamic reset_dyn();

		virtual Void cancel( );
		Dynamic cancel_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Float get_timeLeft( );
		Dynamic get_timeLeft_dyn();

		virtual Float get_elapsedTime( );
		Dynamic get_elapsedTime_dyn();

		virtual int get_loopsLeft( );
		Dynamic get_loopsLeft_dyn();

		virtual int get_elapsedLoops( );
		Dynamic get_elapsedLoops_dyn();

		virtual Float get_progress( );
		Dynamic get_progress_dyn();

		static ::flixel::plugin::TimerManager manager;
};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxTimer */ 
