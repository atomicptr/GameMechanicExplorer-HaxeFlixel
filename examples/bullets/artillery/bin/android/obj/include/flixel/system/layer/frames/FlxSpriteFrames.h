#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#define INCLUDED_flixel_system_layer_frames_FlxSpriteFrames

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/interfaces/IFlxDestroyable.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS4(flixel,system,layer,frames,FlxFrame)
HX_DECLARE_CLASS4(flixel,system,layer,frames,FlxSpriteFrames)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace flixel{
namespace system{
namespace layer{
namespace frames{


class HXCPP_CLASS_ATTRIBUTES  FlxSpriteFrames_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxSpriteFrames_obj OBJ_;
		FlxSpriteFrames_obj();
		Void __construct(::String name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxSpriteFrames_obj > __new(::String name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSpriteFrames_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::interfaces::IFlxDestroyable_obj *()
			{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxSpriteFrames_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxSpriteFrames"); }

		Array< ::Dynamic > frames;
		::haxe::ds::StringMap framesHash;
		::String name;
		virtual Void addFrame( ::flixel::system::layer::frames::FlxFrame frame);
		Dynamic addFrame_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace layer
} // end namespace frames

#endif /* INCLUDED_flixel_system_layer_frames_FlxSpriteFrames */ 
