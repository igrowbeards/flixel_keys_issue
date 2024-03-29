#ifndef INCLUDED_org_flixel_FlxSprite
#define INCLUDED_org_flixel_FlxSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxObject.h>
HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,BlendMode)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,filters,BitmapFilter)
HX_DECLARE_CLASS2(native,geom,ColorTransform)
HX_DECLARE_CLASS2(native,geom,Matrix)
HX_DECLARE_CLASS2(native,geom,Point)
HX_DECLARE_CLASS2(native,geom,Rectangle)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxCamera)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxPoint)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS3(org,flixel,system,FlxAnim)
namespace org{
namespace flixel{


class FlxSprite_obj : public ::org::flixel::FlxObject_obj{
	public:
		typedef ::org::flixel::FlxObject_obj super;
		typedef FlxSprite_obj OBJ_;
		FlxSprite_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic);

	public:
		static hx::ObjectPtr< FlxSprite_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxSprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxSprite"); }

		virtual bool overlapsPoint( ::org::flixel::FlxPoint point,hx::Null< bool >  InScreenSpace,::org::flixel::FlxCamera Camera);

		virtual Void updateFrameData( );

		virtual ::native::display::BlendMode set_blend( ::native::display::BlendMode value);
		Dynamic set_blend_dyn();

		virtual ::native::display::BlendMode get_blend( );
		Dynamic get_blend_dyn();

		::native::display::BlendMode blend; /* REM */ 
		virtual bool simpleRenderSprite( );
		Dynamic simpleRenderSprite_dyn();

		virtual bool get_simpleRender( );
		Dynamic get_simpleRender_dyn();

		bool simpleRender; /* REM */ 
		Float bakedRotation; /* REM */ 
		virtual bool set_antialiasing( bool val);
		Dynamic set_antialiasing_dyn();

		bool antialiasing; /* REM */ 
		virtual Void removeAllFilters( );
		Dynamic removeAllFilters_dyn();

		virtual Void removeFilter( ::native::filters::BitmapFilter filter);
		Dynamic removeFilter_dyn();

		virtual Void setClipping( int width,int height);
		Dynamic setClipping_dyn();

		virtual Void addFilter( ::native::filters::BitmapFilter filter,::org::flixel::FlxPoint updateSize,hx::Null< bool >  permanent);
		Dynamic addFilter_dyn();

		virtual Void calcFrame( hx::Null< bool >  AreYouSure);
		Dynamic calcFrame_dyn();

		virtual bool pixelsOverlapPoint( ::org::flixel::FlxPoint point,hx::Null< int >  Mask,::org::flixel::FlxCamera Camera);
		Dynamic pixelsOverlapPoint_dyn();

		virtual bool onScreenSprite( ::org::flixel::FlxCamera Camera);
		Dynamic onScreenSprite_dyn();

		virtual bool onScreen( ::org::flixel::FlxCamera Camera);

		virtual ::String set_curAnim( ::String AnimName);
		Dynamic set_curAnim_dyn();

		virtual ::String get_curAnim( );
		Dynamic get_curAnim_dyn();

		virtual int set_frame( int Frame);
		Dynamic set_frame_dyn();

		virtual int get_frame( );
		Dynamic get_frame_dyn();

		virtual int set_color( int Color);
		Dynamic set_color_dyn();

		virtual int get_color( );
		Dynamic get_color_dyn();

		virtual Float set_alpha( Float Alpha);
		Dynamic set_alpha_dyn();

		Float alpha; /* REM */ 
		virtual int set_facing( int Direction);
		Dynamic set_facing_dyn();

		virtual ::native::display::BitmapData set_pixels( ::native::display::BitmapData Pixels);
		Dynamic set_pixels_dyn();

		virtual ::native::display::BitmapData get_pixels( );
		Dynamic get_pixels_dyn();

		::native::display::BitmapData pixels; /* REM */ 
		virtual Array< ::org::flixel::FlxPoint > replaceColor( int Color,int NewColor,hx::Null< bool >  FetchPositions);
		Dynamic replaceColor_dyn();

		virtual Void centerOffsets( hx::Null< bool >  AdjustPosition);
		Dynamic centerOffsets_dyn();

		virtual Void setOriginToCorner( );
		Dynamic setOriginToCorner_dyn();

		virtual Void randomFrame( );
		Dynamic randomFrame_dyn();

		virtual ::org::flixel::system::FlxAnim getAnimation( ::String name);
		Dynamic getAnimation_dyn();

		virtual Void play( ::String AnimName,hx::Null< bool >  Force);
		Dynamic play_dyn();

		virtual Void addAnimationCallback( Dynamic AnimationCallback);
		Dynamic addAnimationCallback_dyn();

		virtual Void addAnimation( ::String Name,Array< int > Frames,hx::Null< int >  FrameRate,hx::Null< bool >  Looped);
		Dynamic addAnimation_dyn();

		virtual Void drawFrame( hx::Null< bool >  Force);
		Dynamic drawFrame_dyn();

		virtual Void updateAnimation( );
		Dynamic updateAnimation_dyn();

		virtual Void fill( int Color);
		Dynamic fill_dyn();

		virtual Void drawLine( Float StartX,Float StartY,Float EndX,Float EndY,int Color,hx::Null< int >  Thickness);
		Dynamic drawLine_dyn();

		virtual Void stamp( ::org::flixel::FlxSprite Brush,hx::Null< int >  X,hx::Null< int >  Y);
		Dynamic stamp_dyn();

		virtual Void draw( );

		virtual bool isColored( );
		Dynamic isColored_dyn();

		virtual Void postUpdate( );

		virtual Void resetHelpers( );
		Dynamic resetHelpers_dyn();

		virtual ::org::flixel::FlxSprite makeGraphic( int Width,int Height,Dynamic Color,hx::Null< bool >  Unique,::String Key);
		Dynamic makeGraphic_dyn();

		virtual ::org::flixel::FlxSprite loadRotatedGraphic( Dynamic Graphic,hx::Null< int >  Rotations,hx::Null< int >  Frame,hx::Null< bool >  AntiAliasing,hx::Null< bool >  AutoBuffer,::String Key);
		Dynamic loadRotatedGraphic_dyn();

		virtual ::org::flixel::FlxSprite loadGraphic( Dynamic Graphic,hx::Null< bool >  Animated,hx::Null< bool >  Reverse,hx::Null< int >  Width,hx::Null< int >  Height,hx::Null< bool >  Unique,::String Key);
		Dynamic loadGraphic_dyn();

		virtual Void destroy( );

		Float _additionalAngle; /* REM */ 
		Float _halfHeight; /* REM */ 
		Float _halfWidth; /* REM */ 
		Float _blue; /* REM */ 
		Float _green; /* REM */ 
		Float _red; /* REM */ 
		int _frameID; /* REM */ 
		Array< ::native::filters::BitmapFilter > filters; /* REM */ 
		::native::geom::Matrix _matrix; /* REM */ 
		bool _useColorTransform; /* REM */ 
		::native::geom::ColorTransform _colorTransform; /* REM */ 
		::native::geom::Point _flashPointZero; /* REM */ 
		::native::geom::Rectangle _flashRect2; /* REM */ 
		::native::geom::Rectangle _flashRect; /* REM */ 
		::native::geom::Point _flashPoint; /* REM */ 
		::native::display::BitmapData _pixels; /* REM */ 
		int _color; /* REM */ 
		Dynamic _callback; /* REM */ 
		Dynamic &_callback_dyn() { return _callback;}
		Float _frameTimer; /* REM */ 
		int _curIndex; /* REM */ 
		int _curFrame; /* REM */ 
		::org::flixel::system::FlxAnim _curAnim; /* REM */ 
		::Hash _animations; /* REM */ 
		bool dirty; /* REM */ 
		::native::display::BitmapData framePixels; /* REM */ 
		int frames; /* REM */ 
		int frameHeight; /* REM */ 
		int frameWidth; /* REM */ 
		bool paused; /* REM */ 
		bool finished; /* REM */ 
		int _calculatedPixelsFacing; /* REM */ 
		int _calculatedPixelsIndex; /* REM */ 
		int _blendInt; /* REM */ 
		::native::display::BlendMode _blend; /* REM */ 
		::org::flixel::FlxPoint scale; /* REM */ 
		::org::flixel::FlxPoint offset; /* REM */ 
		::org::flixel::FlxPoint origin; /* REM */ 
		::String curAnim; /* REM */ 
		virtual int get_flipped( );
		Dynamic get_flipped_dyn();

		int _flipped; /* REM */ 
		int flipped; /* REM */ 
		int frame; /* REM */ 
		int color; /* REM */ 
		int facing; /* REM */ 
};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxSprite */ 
