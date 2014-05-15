#ifndef INCLUDED_flixel_system_replay_MouseRecord
#define INCLUDED_flixel_system_replay_MouseRecord

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/util/FlxPoint.h>
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS3(flixel,system,replay,MouseRecord)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace system{
namespace replay{


class HXCPP_CLASS_ATTRIBUTES  MouseRecord_obj : public ::flixel::util::FlxPoint_obj{
	public:
		typedef ::flixel::util::FlxPoint_obj super;
		typedef MouseRecord_obj OBJ_;
		MouseRecord_obj();
		Void __construct(int X,int Y,int Button,int Wheel);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MouseRecord_obj > __new(int X,int Y,int Button,int Wheel);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MouseRecord_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("MouseRecord"); }

		int button;
		int wheel;
};

} // end namespace flixel
} // end namespace system
} // end namespace replay

#endif /* INCLUDED_flixel_system_replay_MouseRecord */ 
