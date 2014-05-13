#ifndef INCLUDED_flixel_tile_FlxTilemap
#define INCLUDED_flixel_tile_FlxTilemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxObject.h>
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS3(flixel,system,layer,Region)
HX_DECLARE_CLASS4(flixel,system,layer,frames,FlxSpriteFrames)
HX_DECLARE_CLASS2(flixel,tile,FlxTile)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemapBuffer)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
HX_DECLARE_CLASS3(flixel,util,loaders,CachedGraphics)
namespace flixel{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES  FlxTilemap_obj : public ::flixel::FlxObject_obj{
	public:
		typedef ::flixel::FlxObject_obj super;
		typedef FlxTilemap_obj OBJ_;
		FlxTilemap_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxTilemap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTilemap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTilemap"); }

		int _auto;
		int widthInTiles;
		int heightInTiles;
		int totalTiles;
		Float tileScaleHack;
		Array< int > customTileRemap;
		::flixel::util::FlxPoint scale;
		::flixel::system::layer::Region region;
		::flixel::system::layer::frames::FlxSpriteFrames framesData;
		::flixel::util::loaders::CachedGraphics cachedGraphics;
		Array< int > _randomIndices;
		Array< ::Dynamic > _randomChoices;
		Dynamic _randomLambda;
		Dynamic &_randomLambda_dyn() { return _randomLambda;}
		::flash::geom::Point _flashPoint;
		::flash::geom::Rectangle _flashRect;
		Array< ::Dynamic > _buffers;
		Array< int > _data;
		int _tileWidth;
		int _tileHeight;
		Float _scaledTileWidth;
		Float _scaledTileHeight;
		Array< ::Dynamic > _tileObjects;
		int _startingIndex;
		::flash::geom::Point _helperPoint;
		Array< int > _rectIDs;
		virtual Void destroy( );

		virtual ::flixel::tile::FlxTilemap loadMap( Dynamic MapData,Dynamic TileGraphic,hx::Null< int >  TileWidth,hx::Null< int >  TileHeight,hx::Null< int >  AutoTile,hx::Null< int >  StartingIndex,hx::Null< int >  DrawIndex,hx::Null< int >  CollideIndex);
		Dynamic loadMap_dyn();

		virtual Void setCustomTileMappings( Array< int > mappings,Array< int > randomIndices,Array< ::Dynamic > randomChoices,Dynamic randomLambda);
		Dynamic setCustomTileMappings_dyn();

		virtual Void draw( );

		virtual Array< int > getData( hx::Null< bool >  Simple);
		Dynamic getData_dyn();

		virtual Void setDirty( hx::Null< bool >  Dirty);
		Dynamic setDirty_dyn();

		virtual Array< ::Dynamic > findPath( ::flixel::util::FlxPoint Start,::flixel::util::FlxPoint End,hx::Null< bool >  Simplify,hx::Null< bool >  RaySimplify,hx::Null< bool >  WideDiagonal);
		Dynamic findPath_dyn();

		virtual bool overlaps( ::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  InScreenSpace,::flixel::FlxCamera Camera);

		virtual bool tilemapOverlapsCallback( ::flixel::FlxBasic ObjectOrGroup,hx::Null< Float >  X,hx::Null< Float >  Y,hx::Null< bool >  InScreenSpace,::flixel::FlxCamera Camera);
		Dynamic tilemapOverlapsCallback_dyn();

		virtual bool overlapsAt( Float X,Float Y,::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  InScreenSpace,::flixel::FlxCamera Camera);

		virtual bool tilemapOverlapsAtCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera);
		Dynamic tilemapOverlapsAtCallback_dyn();

		virtual bool overlapsWithCallback( ::flixel::FlxObject Object,Dynamic Callback,hx::Null< bool >  FlipCallbackParams,::flixel::util::FlxPoint Position);
		Dynamic overlapsWithCallback_dyn();

		virtual bool overlapsPoint( ::flixel::util::FlxPoint WorldPoint,hx::Null< bool >  InScreenSpace,::flixel::FlxCamera Camera);

		virtual int getTile( int X,int Y);
		Dynamic getTile_dyn();

		virtual int getTileByIndex( int Index);
		Dynamic getTileByIndex_dyn();

		virtual int getTileCollisions( int Index);
		Dynamic getTileCollisions_dyn();

		virtual Array< int > getTileInstances( int Index);
		Dynamic getTileInstances_dyn();

		virtual Array< ::Dynamic > getTileCoords( int Index,hx::Null< bool >  Midpoint);
		Dynamic getTileCoords_dyn();

		virtual bool setTile( int X,int Y,int Tile,hx::Null< bool >  UpdateGraphics);
		Dynamic setTile_dyn();

		virtual bool setTileByIndex( int Index,int Tile,hx::Null< bool >  UpdateGraphics);
		Dynamic setTileByIndex_dyn();

		virtual Void setTileProperties( int Tile,hx::Null< int >  AllowCollisions,Dynamic Callback,::Class CallbackFilter,hx::Null< int >  Range);
		Dynamic setTileProperties_dyn();

		virtual Void follow( ::flixel::FlxCamera Camera,hx::Null< int >  Border,hx::Null< bool >  UpdateWorld);
		Dynamic follow_dyn();

		virtual ::flixel::util::FlxRect getBounds( ::flixel::util::FlxRect Bounds);
		Dynamic getBounds_dyn();

		virtual bool ray( ::flixel::util::FlxPoint Start,::flixel::util::FlxPoint End,::flixel::util::FlxPoint Result,hx::Null< Float >  Resolution);
		Dynamic ray_dyn();

		virtual Void updateFrameData( );
		Dynamic updateFrameData_dyn();

		virtual ::flixel::FlxSprite tileToFlxSprite( int X,int Y,hx::Null< int >  NewTile);
		Dynamic tileToFlxSprite_dyn();

		virtual Void updateBuffers( );
		Dynamic updateBuffers_dyn();

		virtual Void drawTilemap( ::flixel::tile::FlxTilemapBuffer Buffer,::flixel::FlxCamera Camera);
		Dynamic drawTilemap_dyn();

		virtual Void simplifyPath( Array< ::Dynamic > Points);
		Dynamic simplifyPath_dyn();

		virtual Void raySimplifyPath( Array< ::Dynamic > Points);
		Dynamic raySimplifyPath_dyn();

		virtual Array< int > computePathDistance( int StartIndex,int EndIndex,bool WideDiagonal,hx::Null< bool >  StopOnEnd);
		Dynamic computePathDistance_dyn();

		virtual Void walkPath( Array< int > Data,int Start,Array< ::Dynamic > Points);
		Dynamic walkPath_dyn();

		virtual Void updateTile( int Index);
		Dynamic updateTile_dyn();

		virtual Void autoTile( int Index);
		Dynamic autoTile_dyn();

		virtual ::flixel::tile::FlxTilemapBuffer createBuffer( ::flixel::FlxCamera camera);
		Dynamic createBuffer_dyn();

		virtual Void onGameResize( int _,int _1);
		Dynamic onGameResize_dyn();

		virtual ::flixel::util::loaders::CachedGraphics set_cachedGraphics( ::flixel::util::loaders::CachedGraphics Value);
		Dynamic set_cachedGraphics_dyn();

		virtual bool set_pixelPerfectRender( bool Value);

		virtual Void setScaleXYCallback( ::flixel::util::FlxPoint Scale);
		Dynamic setScaleXYCallback_dyn();

		virtual Void setScaleXCallback( ::flixel::util::FlxPoint Scale);
		Dynamic setScaleXCallback_dyn();

		virtual Void setScaleYCallback( ::flixel::util::FlxPoint Scale);
		Dynamic setScaleYCallback_dyn();

		static int OFF;
		static int AUTO;
		static int ALT;
		static ::flixel::tile::FlxTilemapBuffer _helperBuffer;
};

} // end namespace flixel
} // end namespace tile

#endif /* INCLUDED_flixel_tile_FlxTilemap */ 
