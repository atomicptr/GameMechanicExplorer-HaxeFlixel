#ifndef INCLUDED_flash_events_AccelerometerEvent
#define INCLUDED_flash_events_AccelerometerEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/Event.h>
HX_DECLARE_CLASS2(flash,events,AccelerometerEvent)
HX_DECLARE_CLASS2(flash,events,Event)
namespace flash{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  AccelerometerEvent_obj : public ::flash::events::Event_obj{
	public:
		typedef ::flash::events::Event_obj super;
		typedef AccelerometerEvent_obj OBJ_;
		AccelerometerEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_timestamp,hx::Null< Float >  __o_accelerationX,hx::Null< Float >  __o_accelerationY,hx::Null< Float >  __o_accelerationZ);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AccelerometerEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_timestamp,hx::Null< Float >  __o_accelerationX,hx::Null< Float >  __o_accelerationY,hx::Null< Float >  __o_accelerationZ);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AccelerometerEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AccelerometerEvent"); }

		Float accelerationX;
		Float accelerationY;
		Float accelerationZ;
		Float timestamp;
		virtual ::flash::events::Event clone( );

		virtual ::String toString( );

		static ::String UPDATE;
};

} // end namespace flash
} // end namespace events

#endif /* INCLUDED_flash_events_AccelerometerEvent */ 
