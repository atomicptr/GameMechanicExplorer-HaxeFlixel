#ifndef INCLUDED_flash_net_SharedObjectFlushStatus
#define INCLUDED_flash_net_SharedObjectFlushStatus

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,net,SharedObjectFlushStatus)
namespace flash{
namespace net{


class SharedObjectFlushStatus_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef SharedObjectFlushStatus_obj OBJ_;

	public:
		SharedObjectFlushStatus_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("flash.net.SharedObjectFlushStatus"); }
		::String __ToString() const { return HX_CSTRING("SharedObjectFlushStatus.") + tag; }

		static ::flash::net::SharedObjectFlushStatus FLUSHED;
		static inline ::flash::net::SharedObjectFlushStatus FLUSHED_dyn() { return FLUSHED; }
		static ::flash::net::SharedObjectFlushStatus PENDING;
		static inline ::flash::net::SharedObjectFlushStatus PENDING_dyn() { return PENDING; }
};

} // end namespace flash
} // end namespace net

#endif /* INCLUDED_flash_net_SharedObjectFlushStatus */ 
