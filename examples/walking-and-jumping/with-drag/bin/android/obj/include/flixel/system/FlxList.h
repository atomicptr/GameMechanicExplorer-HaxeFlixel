#ifndef INCLUDED_flixel_system_FlxList
#define INCLUDED_flixel_system_FlxList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/interfaces/IFlxDestroyable.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,system,FlxList)
namespace flixel{
namespace system{


class HXCPP_CLASS_ATTRIBUTES  FlxList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxList_obj OBJ_;
		FlxList_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxList_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::interfaces::IFlxDestroyable_obj *()
			{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxList_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxList"); }

		::flixel::FlxObject object;
		::flixel::system::FlxList next;
		bool exists;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		static int _NUM_CACHED_FLX_LIST;
		static ::flixel::system::FlxList _cachedListsHead;
		static ::flixel::system::FlxList recycle( );
		static Dynamic recycle_dyn();

		static Void clearCache( );
		static Dynamic clearCache_dyn();

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxList */ 
