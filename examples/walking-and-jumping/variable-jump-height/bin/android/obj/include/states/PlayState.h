#ifndef INCLUDED_states_PlayState
#define INCLUDED_states_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS1(states,PlayState)
namespace states{


class HXCPP_CLASS_ATTRIBUTES  PlayState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PlayState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayState"); }

		::flixel::FlxSprite player;
		::flixel::group::FlxGroup ground;
		::flixel::util::FlxTimer variableJumpTimer;
		bool timerStarted;
		bool canDoubleJump;
		bool canVariableJump;
		int MAX_SPEED;
		int ACCELERATION;
		int DRAG;
		int GRAVITY;
		int JUMP_SPEED;
		Float VARIABLE_JUMP_TIME;
		virtual Void create( );

		virtual Void destroy( );

		virtual Void update( );

		virtual Void onVariableJumpEnds( ::flixel::util::FlxTimer timer);
		Dynamic onVariableJumpEnds_dyn();

};

} // end namespace states

#endif /* INCLUDED_states_PlayState */ 
