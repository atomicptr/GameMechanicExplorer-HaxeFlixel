#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
namespace haxe{
namespace io{

Void Bytes_obj::__construct(int length,Array< unsigned char > b)
{
HX_STACK_FRAME("haxe.io.Bytes","new",0x3938d57d,"haxe.io.Bytes.new","/usr/local/lib/haxe/std/haxe/io/Bytes.hx",33,0xd68ef8f0)
HX_STACK_THIS(this)
HX_STACK_ARG(length,"length")
HX_STACK_ARG(b,"b")
{
	HX_STACK_LINE(34)
	this->length = length;
	HX_STACK_LINE(35)
	this->b = b;
}
;
	return null();
}

//Bytes_obj::~Bytes_obj() { }

Dynamic Bytes_obj::__CreateEmpty() { return  new Bytes_obj; }
hx::ObjectPtr< Bytes_obj > Bytes_obj::__new(int length,Array< unsigned char > b)
{  hx::ObjectPtr< Bytes_obj > result = new Bytes_obj();
	result->__construct(length,b);
	return result;}

Dynamic Bytes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bytes_obj > result = new Bytes_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Bytes_obj::blit( int pos,::haxe::io::Bytes src,int srcpos,int len){
{
		HX_STACK_FRAME("haxe.io.Bytes","blit",0xd098ac78,"haxe.io.Bytes.blit","/usr/local/lib/haxe/std/haxe/io/Bytes.hx",75,0xd68ef8f0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(src,"src")
		HX_STACK_ARG(srcpos,"srcpos")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(77)
		if (((bool((bool((bool((bool((pos < (int)0)) || bool((srcpos < (int)0)))) || bool((len < (int)0)))) || bool(((pos + len) > this->length)))) || bool(((srcpos + len) > src->length))))){
			HX_STACK_LINE(77)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		HX_STACK_LINE(91)
		this->b->blit(pos,src->b,srcpos,len);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Bytes_obj,blit,(void))

::haxe::io::Bytes Bytes_obj::sub( int pos,int len){
	HX_STACK_FRAME("haxe.io.Bytes","sub",0x393cae9d,"haxe.io.Bytes.sub","/usr/local/lib/haxe/std/haxe/io/Bytes.hx",127,0xd68ef8f0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(129)
	if (((bool((bool((pos < (int)0)) || bool((len < (int)0)))) || bool(((pos + len) > this->length))))){
		HX_STACK_LINE(129)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(149)
	Array< unsigned char > _g = this->b->slice(pos,(pos + len));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(149)
	return ::haxe::io::Bytes_obj::__new(len,_g);
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,sub,return )

::String Bytes_obj::getString( int pos,int len){
	HX_STACK_FRAME("haxe.io.Bytes","getString",0xa16beae4,"haxe.io.Bytes.getString","/usr/local/lib/haxe/std/haxe/io/Bytes.hx",261,0xd68ef8f0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(263)
	if (((bool((bool((pos < (int)0)) || bool((len < (int)0)))) || bool(((pos + len) > this->length))))){
		HX_STACK_LINE(263)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(273)
	::String result = HX_CSTRING("");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(274)
	::__hxcpp_string_of_bytes(this->b,result,pos,len);
	HX_STACK_LINE(275)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,getString,return )

::String Bytes_obj::toString( ){
	HX_STACK_FRAME("haxe.io.Bytes","toString",0x0291226f,"haxe.io.Bytes.toString","/usr/local/lib/haxe/std/haxe/io/Bytes.hx",335,0xd68ef8f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(335)
	return this->getString((int)0,this->length);
}


HX_DEFINE_DYNAMIC_FUNC0(Bytes_obj,toString,return )

::haxe::io::Bytes Bytes_obj::alloc( int length){
	HX_STACK_FRAME("haxe.io.Bytes","alloc",0x2199ead2,"haxe.io.Bytes.alloc","/usr/local/lib/haxe/std/haxe/io/Bytes.hx",357,0xd68ef8f0)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(367)
	Array< unsigned char > a = Array_obj< unsigned char >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(368)
	if (((length > (int)0))){
		HX_STACK_LINE(368)
		a[(length - (int)1)] = (int)0;
	}
	HX_STACK_LINE(369)
	return ::haxe::io::Bytes_obj::__new(length,a);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,alloc,return )

::haxe::io::Bytes Bytes_obj::ofString( ::String s){
	HX_STACK_FRAME("haxe.io.Bytes","ofString",0x6e53bb0b,"haxe.io.Bytes.ofString","/usr/local/lib/haxe/std/haxe/io/Bytes.hx",382,0xd68ef8f0)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(393)
	Array< unsigned char > a = Array_obj< unsigned char >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(394)
	::__hxcpp_bytes_of_string(a,s);
	HX_STACK_LINE(395)
	return ::haxe::io::Bytes_obj::__new(a->length,a);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,ofString,return )

::haxe::io::Bytes Bytes_obj::ofData( Array< unsigned char > b){
	HX_STACK_FRAME("haxe.io.Bytes","ofData",0x4f3005e4,"haxe.io.Bytes.ofData","/usr/local/lib/haxe/std/haxe/io/Bytes.hx",445,0xd68ef8f0)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(445)
	return ::haxe::io::Bytes_obj::__new(b->length,b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,ofData,return )


Bytes_obj::Bytes_obj()
{
}

void Bytes_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bytes);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_END_CLASS();
}

void Bytes_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(b,"b");
}

Dynamic Bytes_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { return sub_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blit") ) { return blit_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ofData") ) { return ofData_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ofString") ) { return ofString_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getString") ) { return getString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bytes_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Array< unsigned char > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bytes_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("b"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("alloc"),
	HX_CSTRING("ofString"),
	HX_CSTRING("ofData"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Bytes_obj,length),HX_CSTRING("length")},
	{hx::fsObject /*Array< unsigned char >*/ ,(int)offsetof(Bytes_obj,b),HX_CSTRING("b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("length"),
	HX_CSTRING("b"),
	HX_CSTRING("blit"),
	HX_CSTRING("sub"),
	HX_CSTRING("getString"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bytes_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bytes_obj::__mClass,"__mClass");
};

#endif

Class Bytes_obj::__mClass;

void Bytes_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.io.Bytes"), hx::TCanCast< Bytes_obj> ,sStaticFields,sMemberFields,
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

void Bytes_obj::__boot()
{
}

} // end namespace haxe
} // end namespace io
