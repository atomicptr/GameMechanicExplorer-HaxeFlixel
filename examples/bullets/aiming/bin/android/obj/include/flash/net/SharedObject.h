#ifndef INCLUDED_flash_net_SharedObject
#define INCLUDED_flash_net_SharedObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/EventDispatcher.h>
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,net,SharedObject)
HX_DECLARE_CLASS2(flash,net,SharedObjectFlushStatus)
namespace flash{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  SharedObject_obj : public ::flash::events::EventDispatcher_obj{
	public:
		typedef ::flash::events::EventDispatcher_obj super;
		typedef SharedObject_obj OBJ_;
		SharedObject_obj();
		Void __construct(::String name,::String localPath,Dynamic data);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SharedObject_obj > __new(::String name,::String localPath,Dynamic data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SharedObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SharedObject"); }

		Dynamic data;
		::String localPath;
		::String name;
		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		virtual ::flash::net::SharedObjectFlushStatus flush( hx::Null< int >  minDiskSpace);
		Dynamic flush_dyn();

		virtual Void setProperty( ::String propertyName,Dynamic value);
		Dynamic setProperty_dyn();

		static ::String getFilePath( ::String name,::String localPath);
		static Dynamic getFilePath_dyn();

		static ::flash::net::SharedObject getLocal( ::String name,::String localPath,hx::Null< bool >  secure);
		static Dynamic getLocal_dyn();

		static ::Class resolveClass( ::String name);
		static Dynamic resolveClass_dyn();

		static Dynamic lime_get_user_preference;
		static Dynamic &lime_get_user_preference_dyn() { return lime_get_user_preference;}
		static Dynamic lime_set_user_preference;
		static Dynamic &lime_set_user_preference_dyn() { return lime_set_user_preference;}
		static Dynamic lime_clear_user_preference;
		static Dynamic &lime_clear_user_preference_dyn() { return lime_clear_user_preference;}
};

} // end namespace flash
} // end namespace net

#endif /* INCLUDED_flash_net_SharedObject */ 
