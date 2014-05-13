#include <hxcpp.h>

#include <states/PlayState.h>
#include <openfl/utils/WeakRef.h>
#include <openfl/utils/JNIMethod.h>
#include <openfl/utils/JNIStaticField.h>
#include <openfl/utils/JNIMemberField.h>
#include <openfl/utils/JNI.h>
#include <openfl/utils/Float32Array.h>
#include <openfl/utils/ArrayBufferView.h>
#include <openfl/gl/GLTexture.h>
#include <openfl/gl/GLShader.h>
#include <openfl/gl/GLRenderbuffer.h>
#include <openfl/gl/GLProgram.h>
#include <openfl/gl/GLFramebuffer.h>
#include <openfl/gl/GLBuffer.h>
#include <openfl/gl/GLObject.h>
#include <openfl/gl/_GL/Float32Data_Impl_.h>
#include <openfl/gl/GL.h>
#include <openfl/events/SystemEvent.h>
#include <openfl/events/JoystickEvent.h>
#include <openfl/display/OpenGLView.h>
#include <openfl/display/ManagedStage.h>
#include <openfl/display/DirectRenderer.h>
#include <openfl/AssetType.h>
#include <openfl/AssetData.h>
#include <openfl/Assets.h>
#include <openfl/AssetCache.h>
#include <haxe/zip/Uncompress.h>
#include <haxe/zip/FlushMode.h>
#include <haxe/zip/Compress.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/format/JsonParser.h>
#include <haxe/ds/StringMap.h>
#include <haxe/ds/ObjectMap.h>
#include <haxe/ds/IntMap.h>
#include <haxe/crypto/BaseCode.h>
#include <haxe/Unserializer.h>
#include <haxe/Timer.h>
#include <haxe/Serializer.h>
#include <haxe/Resource.h>
#include <haxe/CallStack.h>
#include <haxe/StackItem.h>
#include <flixel/util/loaders/TextureRegion.h>
#include <flixel/util/loaders/TexturePackerData.h>
#include <flixel/util/loaders/TextureAtlasFrame.h>
#include <flixel/util/loaders/CachedGraphics.h>
#include <flixel/util/FlxVelocity.h>
#include <flixel/util/LabelValuePair.h>
#include <flixel/util/FlxStringUtil.h>
#include <flixel/util/FlxSpriteUtil.h>
#include <flixel/util/FlxSort.h>
#include <flixel/util/_FlxSignal/FlxSignal4.h>
#include <flixel/util/_FlxSignal/FlxSignal3.h>
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
#include <flixel/util/_FlxSignal/FlxSignalHandler.h>
#include <flixel/util/FlxRandom.h>
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#include <flixel/util/FlxCallbackPoint.h>
#include <flixel/util/FlxMath.h>
#include <flixel/util/FlxDestroyUtil.h>
#include <flixel/util/FlxColorUtil.h>
#include <flixel/util/FlxColor.h>
#include <flixel/util/FlxCollision.h>
#include <flixel/util/_FlxBitmapDataPool/FlxBitmapDataPoolNode.h>
#include <flixel/util/FlxBitmapDataPool.h>
#include <flixel/util/FlxArrayUtil.h>
#include <flixel/util/FlxAngle.h>
#include <flixel/tweens/motion/QuadPath.h>
#include <flixel/tweens/motion/QuadMotion.h>
#include <flixel/tweens/motion/LinearPath.h>
#include <flixel/tweens/motion/LinearMotion.h>
#include <flixel/tweens/motion/CubicMotion.h>
#include <flixel/tweens/motion/CircularMotion.h>
#include <flixel/tweens/motion/Motion.h>
#include <flixel/tweens/misc/VarTween.h>
#include <flixel/tweens/misc/NumTween.h>
#include <flixel/tweens/misc/ColorTween.h>
#include <flixel/tweens/misc/AngleTween.h>
#include <flixel/tweens/FlxEase.h>
#include <flixel/tile/FlxTilemap.h>
#include <flixel/tile/FlxTilemapBuffer.h>
#include <flixel/tile/GraphicAutoAlt.h>
#include <flixel/tile/GraphicAuto.h>
#include <flixel/tile/FlxTileblock.h>
#include <flixel/tile/FlxTile.h>
#include <flixel/text/pxText/PxFontSymbol.h>
#include <flixel/text/pxText/_PxBitmapFont/HelperSymbol.h>
#include <flixel/text/pxText/PxBitmapFont.h>
#include <flixel/text/FlxTextFormat.h>
#include <flixel/text/FlxText.h>
#include <flixel/system/ui/FlxSystemButton.h>
#include <flixel/system/ui/FlxSoundTray.h>
#include <flixel/system/ui/FlxFocusLostScreen.h>
#include <flixel/system/replay/MouseRecord.h>
#include <flixel/system/replay/FrameRecord.h>
#include <flixel/system/replay/FlxReplay.h>
#include <flixel/system/replay/CodeValuePair.h>
#include <flixel/system/layer/frames/FrameType.h>
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#include <flixel/system/layer/frames/FlxRotatedFrame.h>
#include <flixel/system/layer/frames/FlxFrame.h>
#include <flixel/system/layer/_TileSheetExt/RectPointTileID.h>
#include <flixel/system/layer/TileSheetExt.h>
#include <openfl/display/Tilesheet.h>
#include <flixel/system/layer/TileSheetData.h>
#include <flixel/system/layer/Region.h>
#include <flixel/system/layer/DrawStackItem.h>
#include <flixel/system/debug/_Window/GraphicCloseButton.h>
#include <flixel/system/debug/_Window/GraphicWindowHandle.h>
#include <flixel/system/debug/TrackerProfile.h>
#include <flixel/system/debug/Tracker.h>
#include <flixel/system/debug/Watch.h>
#include <flixel/system/debug/Window.h>
#include <flixel/system/debug/LogStyle.h>
#include <flixel/system/debug/DebuggerLayout.h>
#include <flixel/system/debug/ButtonAlignment.h>
#include <flixel/system/debug/ConsoleUtil.h>
#include <flixel/system/FlxSplash.h>
#include <flixel/system/FlxSound.h>
#include <flixel/system/FlxQuadTree.h>
#include <flixel/system/FlxList.h>
#include <flixel/system/_FlxCollisionType/FlxCollisionType_Impl_.h>
#include <flixel/system/FlxBGSprite.h>
#include <flixel/system/FlxAssets.h>
#include <flixel/system/GraphicLogo.h>
#include <flixel/system/_FlxAssets/FontDefault.h>
#include <flixel/interfaces/IFlxSignal.h>
#include <flixel/input/touch/FlxTouchManager.h>
#include <flixel/input/touch/FlxTouch.h>
#include <flixel/input/mouse/FlxMouseButton.h>
#include <flixel/input/mouse/FlxMouse.h>
#include <flixel/input/mouse/_FlxMouse/GraphicCursor.h>
#include <flixel/input/keyboard/FlxKeyboard.h>
#include <flixel/input/keyboard/FlxKeyList.h>
#include <flixel/input/keyboard/FlxKey.h>
#include <flixel/input/gamepad/FlxGamepadManager.h>
#include <flixel/input/gamepad/FlxGamepadButton.h>
#include <flixel/input/gamepad/FlxGamepad.h>
#include <flixel/input/android/FlxAndroidKeys.h>
#include <flixel/interfaces/IFlxInput.h>
#include <flixel/input/FlxSwipe.h>
#include <flixel/input/FlxAccelerometer.h>
#include <flixel/group/FlxTypedGroupIterator.h>
#include <flixel/group/FlxSpriteGroup.h>
#include <flixel/group/FlxTypedSpriteGroup.h>
#include <flixel/effects/FlxFlicker.h>
#include <flixel/util/FlxPool_flixel_effects_FlxFlicker.h>
#include <flixel/animation/FlxPrerotatedAnimation.h>
#include <flixel/animation/FlxAnimationController.h>
#include <flixel/animation/FlxAnimation.h>
#include <flixel/animation/FlxBaseAnimation.h>
#include <flixel/FlxSubState.h>
#include <flixel/FlxState.h>
#include <flixel/group/FlxGroup.h>
#include <flixel/FlxSprite.h>
#include <flixel/_FlxSprite/GraphicDefault.h>
#include <flixel/FlxObject.h>
#include <flixel/FlxG.h>
#include <flixel/util/FlxRect.h>
#include <flixel/util/FlxPool_flixel_util_FlxRect.h>
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#include <flixel/group/FlxTypedGroup.h>
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#include <flixel/util/FlxSave.h>
#include <flixel/plugin/TweenManager.h>
#include <flixel/tweens/FlxTween.h>
#include <flixel/plugin/TimerManager.h>
#include <flixel/util/FlxTimer.h>
#include <flixel/plugin/PathManager.h>
#include <flixel/plugin/FlxPlugin.h>
#include <flixel/util/FlxPath.h>
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#include <haxe/Log.h>
#include <flixel/system/frontEnds/LogFrontEnd.h>
#include <flixel/system/frontEnds/InputFrontEnd.h>
#include <flixel/util/_FlxSignal/FlxTypedSignal_Impl_.h>
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#include <flixel/system/frontEnds/ConsoleFrontEnd.h>
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#include <flixel/system/frontEnds/BitmapLogFrontEnd.h>
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#include <flixel/system/scaleModes/RatioScaleMode.h>
#include <flixel/system/scaleModes/BaseScaleMode.h>
#include <flixel/util/FlxPoint.h>
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#include <flixel/interfaces/IFlxPooled.h>
#include <flixel/system/FlxVersion.h>
#include <flixel/FlxCamera.h>
#include <flixel/FlxBasic.h>
#include <flixel/interfaces/IFlxDestroyable.h>
#include <flash/utils/Endian.h>
#include <flash/utils/CompressionAlgorithm.h>
#include <flash/utils/ByteArray.h>
#include <flash/utils/IDataInput.h>
#include <openfl/utils/IMemoryRange.h>
#include <flash/utils/IDataOutput.h>
#include <flash/ui/MultitouchInputMode.h>
#include <flash/ui/Multitouch.h>
#include <flash/ui/Mouse.h>
#include <flash/ui/Keyboard.h>
#include <flash/text/TextLineMetrics.h>
#include <flash/text/TextFormatAlign.h>
#include <flash/text/TextFormat.h>
#include <flash/text/TextFieldType.h>
#include <flash/text/TextFieldAutoSize.h>
#include <flash/text/TextField.h>
#include <flash/text/GridFitType.h>
#include <flash/text/FontType.h>
#include <flash/text/FontStyle.h>
#include <flash/text/Font.h>
#include <flash/text/AntiAliasType.h>
#include <flash/system/SecurityDomain.h>
#include <flash/system/ScreenMode.h>
#include <flash/system/PixelFormat.h>
#include <flash/system/LoaderContext.h>
#include <flash/system/ApplicationDomain.h>
#include <flash/sensors/Accelerometer.h>
#include <flash/net/URLVariables.h>
#include <flash/net/URLRequestMethod.h>
#include <flash/net/URLRequestHeader.h>
#include <flash/net/URLRequest.h>
#include <flash/net/URLLoaderDataFormat.h>
#include <flash/net/SharedObjectFlushStatus.h>
#include <flash/net/SharedObject.h>
#include <flash/media/SoundTransform.h>
#include <flash/media/SoundLoaderContext.h>
#include <flash/media/AudioThreadState.h>
#include <flash/media/SoundChannel.h>
#include <flash/media/InternalAudioType.h>
#include <flash/media/Sound.h>
#include <flash/media/ID3Info.h>
#include <flash/geom/Vector3D.h>
#include <flash/geom/Transform.h>
#include <flash/geom/Rectangle.h>
#include <flash/geom/Point.h>
#include <flash/geom/Matrix3D.h>
#include <flash/geom/Matrix.h>
#include <flash/geom/ColorTransform.h>
#include <flash/filters/BitmapFilter.h>
#include <flash/filesystem/File.h>
#include <flash/events/UncaughtErrorEvents.h>
#include <flash/events/UncaughtErrorEvent.h>
#include <flash/events/SampleDataEvent.h>
#include <flash/events/ProgressEvent.h>
#include <flash/events/KeyboardEvent.h>
#include <flash/events/IOErrorEvent.h>
#include <flash/events/HTTPStatusEvent.h>
#include <flash/events/FocusEvent.h>
#include <flash/events/EventPhase.h>
#include <flash/events/Listener.h>
#include <flash/events/ErrorEvent.h>
#include <flash/events/TextEvent.h>
#include <flash/events/AccelerometerEvent.h>
#include <flash/errors/RangeError.h>
#include <flash/errors/EOFError.h>
#include <flash/errors/ArgumentError.h>
#include <flash/errors/Error.h>
#include <flash/display/TriangleCulling.h>
#include <flash/display/StageScaleMode.h>
#include <flash/display/StageQuality.h>
#include <flash/display/StageDisplayState.h>
#include <flash/display/StageAlign.h>
#include <flash/display/TouchInfo.h>
#include <flash/display/Stage.h>
#include <flash/events/TouchEvent.h>
#include <flash/events/MouseEvent.h>
#include <flash/events/Event.h>
#include <flash/display/SpreadMethod.h>
#include <flash/display/Shape.h>
#include <flash/display/PixelSnapping.h>
#include <flash/display/MovieClip.h>
#include <flash/display/LoaderInfo.h>
#include <flash/net/URLLoader.h>
#include <flash/display/Loader.h>
#include <flash/display/LineScaleMode.h>
#include <flash/display/JointStyle.h>
#include <flash/display/InterpolationMethod.h>
#include <flash/display/IGraphicsData.h>
#include <flash/display/GraphicsPathWinding.h>
#include <flash/display/Graphics.h>
#include <flash/display/GradientType.h>
#include <flash/display/FrameLabel.h>
#include <flash/display/CapsStyle.h>
#include <flash/display/BlendMode.h>
#include <flash/display/BitmapDataChannel.h>
#include <flash/display/OptimizedPerlin.h>
#include <flash/display/BitmapData.h>
#include <flash/display/Bitmap.h>
#include <flash/_Vector/Vector_Impl_.h>
#include <flash/Memory.h>
#include <cpp/vm/Thread.h>
#include <cpp/vm/Mutex.h>
#include <cpp/rtti/FieldNumericIntegerLookup.h>
#include <Xml.h>
#include <XmlType.h>
#include <Type.h>
#include <ValueType.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <Reflect.h>
#include <IMap.h>
#include <List.h>
#include <Lambda.h>
#include <GameClass.h>
#include <flixel/FlxGame.h>
#include <EReg.h>
#include <DefaultAssetLibrary.h>
#include <openfl/AssetLibrary.h>
#include <Date.h>
#include <DocumentClass.h>
#include <Main.h>
#include <flash/display/Sprite.h>
#include <flash/display/DisplayObjectContainer.h>
#include <flash/display/InteractiveObject.h>
#include <flash/display/DisplayObject.h>
#include <flash/Lib.h>
#include <Std.h>
#include <sys/io/_Process/Stdout.h>
#include <haxe/io/Input.h>
#include <haxe/io/Bytes.h>
#include <sys/io/_Process/Stdin.h>
#include <haxe/io/Output.h>
#include <sys/io/Process.h>
#include <Sys.h>
#include <cpp/Lib.h>
#include <flash/display/IBitmapDrawable.h>
#include <flash/events/EventDispatcher.h>
#include <flash/events/IEventDispatcher.h>
#include <ApplicationMain.h>

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::states::PlayState_obj::__register();
::openfl::utils::WeakRef_obj::__register();
::openfl::utils::JNIMethod_obj::__register();
::openfl::utils::JNIStaticField_obj::__register();
::openfl::utils::JNIMemberField_obj::__register();
::openfl::utils::JNI_obj::__register();
::openfl::utils::Float32Array_obj::__register();
::openfl::utils::ArrayBufferView_obj::__register();
::openfl::gl::GLTexture_obj::__register();
::openfl::gl::GLShader_obj::__register();
::openfl::gl::GLRenderbuffer_obj::__register();
::openfl::gl::GLProgram_obj::__register();
::openfl::gl::GLFramebuffer_obj::__register();
::openfl::gl::GLBuffer_obj::__register();
::openfl::gl::GLObject_obj::__register();
::openfl::gl::_GL::Float32Data_Impl__obj::__register();
::openfl::gl::GL_obj::__register();
::openfl::events::SystemEvent_obj::__register();
::openfl::events::JoystickEvent_obj::__register();
::openfl::display::OpenGLView_obj::__register();
::openfl::display::ManagedStage_obj::__register();
::openfl::display::DirectRenderer_obj::__register();
::openfl::AssetType_obj::__register();
::openfl::AssetData_obj::__register();
::openfl::Assets_obj::__register();
::openfl::AssetCache_obj::__register();
::haxe::zip::Uncompress_obj::__register();
::haxe::zip::FlushMode_obj::__register();
::haxe::zip::Compress_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::format::JsonParser_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::ds::ObjectMap_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::crypto::BaseCode_obj::__register();
::haxe::Unserializer_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Serializer_obj::__register();
::haxe::Resource_obj::__register();
::haxe::CallStack_obj::__register();
::haxe::StackItem_obj::__register();
::flixel::util::loaders::TextureRegion_obj::__register();
::flixel::util::loaders::TexturePackerData_obj::__register();
::flixel::util::loaders::TextureAtlasFrame_obj::__register();
::flixel::util::loaders::CachedGraphics_obj::__register();
::flixel::util::FlxVelocity_obj::__register();
::flixel::util::LabelValuePair_obj::__register();
::flixel::util::FlxStringUtil_obj::__register();
::flixel::util::FlxSpriteUtil_obj::__register();
::flixel::util::FlxSort_obj::__register();
::flixel::util::_FlxSignal::FlxSignal4_obj::__register();
::flixel::util::_FlxSignal::FlxSignal3_obj::__register();
::flixel::util::_FlxSignal::FlxSignal2_obj::__register();
::flixel::util::_FlxSignal::FlxSignal1_obj::__register();
::flixel::util::_FlxSignal::FlxSignal0_obj::__register();
::flixel::util::_FlxSignal::FlxSignalBase_obj::__register();
::flixel::util::_FlxSignal::FlxSignalHandler_obj::__register();
::flixel::util::FlxRandom_obj::__register();
::flixel::util::FlxPool_flixel_util_LabelValuePair_obj::__register();
::flixel::util::FlxCallbackPoint_obj::__register();
::flixel::util::FlxMath_obj::__register();
::flixel::util::FlxDestroyUtil_obj::__register();
::flixel::util::FlxColorUtil_obj::__register();
::flixel::util::FlxColor_obj::__register();
::flixel::util::FlxCollision_obj::__register();
::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode_obj::__register();
::flixel::util::FlxBitmapDataPool_obj::__register();
::flixel::util::FlxArrayUtil_obj::__register();
::flixel::util::FlxAngle_obj::__register();
::flixel::tweens::motion::QuadPath_obj::__register();
::flixel::tweens::motion::QuadMotion_obj::__register();
::flixel::tweens::motion::LinearPath_obj::__register();
::flixel::tweens::motion::LinearMotion_obj::__register();
::flixel::tweens::motion::CubicMotion_obj::__register();
::flixel::tweens::motion::CircularMotion_obj::__register();
::flixel::tweens::motion::Motion_obj::__register();
::flixel::tweens::misc::VarTween_obj::__register();
::flixel::tweens::misc::NumTween_obj::__register();
::flixel::tweens::misc::ColorTween_obj::__register();
::flixel::tweens::misc::AngleTween_obj::__register();
::flixel::tweens::FlxEase_obj::__register();
::flixel::tile::FlxTilemap_obj::__register();
::flixel::tile::FlxTilemapBuffer_obj::__register();
::flixel::tile::GraphicAutoAlt_obj::__register();
::flixel::tile::GraphicAuto_obj::__register();
::flixel::tile::FlxTileblock_obj::__register();
::flixel::tile::FlxTile_obj::__register();
::flixel::text::pxText::PxFontSymbol_obj::__register();
::flixel::text::pxText::_PxBitmapFont::HelperSymbol_obj::__register();
::flixel::text::pxText::PxBitmapFont_obj::__register();
::flixel::text::FlxTextFormat_obj::__register();
::flixel::text::FlxText_obj::__register();
::flixel::system::ui::FlxSystemButton_obj::__register();
::flixel::system::ui::FlxSoundTray_obj::__register();
::flixel::system::ui::FlxFocusLostScreen_obj::__register();
::flixel::system::replay::MouseRecord_obj::__register();
::flixel::system::replay::FrameRecord_obj::__register();
::flixel::system::replay::FlxReplay_obj::__register();
::flixel::system::replay::CodeValuePair_obj::__register();
::flixel::system::layer::frames::FrameType_obj::__register();
::flixel::system::layer::frames::FlxSpriteFrames_obj::__register();
::flixel::system::layer::frames::FlxRotatedFrame_obj::__register();
::flixel::system::layer::frames::FlxFrame_obj::__register();
::flixel::system::layer::_TileSheetExt::RectPointTileID_obj::__register();
::flixel::system::layer::TileSheetExt_obj::__register();
::openfl::display::Tilesheet_obj::__register();
::flixel::system::layer::TileSheetData_obj::__register();
::flixel::system::layer::Region_obj::__register();
::flixel::system::layer::DrawStackItem_obj::__register();
::flixel::system::debug::_Window::GraphicCloseButton_obj::__register();
::flixel::system::debug::_Window::GraphicWindowHandle_obj::__register();
::flixel::system::debug::TrackerProfile_obj::__register();
::flixel::system::debug::Tracker_obj::__register();
::flixel::system::debug::Watch_obj::__register();
::flixel::system::debug::Window_obj::__register();
::flixel::system::debug::LogStyle_obj::__register();
::flixel::system::debug::DebuggerLayout_obj::__register();
::flixel::system::debug::ButtonAlignment_obj::__register();
::flixel::system::debug::ConsoleUtil_obj::__register();
::flixel::system::FlxSplash_obj::__register();
::flixel::system::FlxSound_obj::__register();
::flixel::system::FlxQuadTree_obj::__register();
::flixel::system::FlxList_obj::__register();
::flixel::system::_FlxCollisionType::FlxCollisionType_Impl__obj::__register();
::flixel::system::FlxBGSprite_obj::__register();
::flixel::system::FlxAssets_obj::__register();
::flixel::system::GraphicLogo_obj::__register();
::flixel::system::_FlxAssets::FontDefault_obj::__register();
::flixel::interfaces::IFlxSignal_obj::__register();
::flixel::input::touch::FlxTouchManager_obj::__register();
::flixel::input::touch::FlxTouch_obj::__register();
::flixel::input::mouse::FlxMouseButton_obj::__register();
::flixel::input::mouse::FlxMouse_obj::__register();
::flixel::input::mouse::_FlxMouse::GraphicCursor_obj::__register();
::flixel::input::keyboard::FlxKeyboard_obj::__register();
::flixel::input::keyboard::FlxKeyList_obj::__register();
::flixel::input::keyboard::FlxKey_obj::__register();
::flixel::input::gamepad::FlxGamepadManager_obj::__register();
::flixel::input::gamepad::FlxGamepadButton_obj::__register();
::flixel::input::gamepad::FlxGamepad_obj::__register();
::flixel::input::android::FlxAndroidKeys_obj::__register();
::flixel::interfaces::IFlxInput_obj::__register();
::flixel::input::FlxSwipe_obj::__register();
::flixel::input::FlxAccelerometer_obj::__register();
::flixel::group::FlxTypedGroupIterator_obj::__register();
::flixel::group::FlxSpriteGroup_obj::__register();
::flixel::group::FlxTypedSpriteGroup_obj::__register();
::flixel::effects::FlxFlicker_obj::__register();
::flixel::util::FlxPool_flixel_effects_FlxFlicker_obj::__register();
::flixel::animation::FlxPrerotatedAnimation_obj::__register();
::flixel::animation::FlxAnimationController_obj::__register();
::flixel::animation::FlxAnimation_obj::__register();
::flixel::animation::FlxBaseAnimation_obj::__register();
::flixel::FlxSubState_obj::__register();
::flixel::FlxState_obj::__register();
::flixel::group::FlxGroup_obj::__register();
::flixel::FlxSprite_obj::__register();
::flixel::_FlxSprite::GraphicDefault_obj::__register();
::flixel::FlxObject_obj::__register();
::flixel::FlxG_obj::__register();
::flixel::util::FlxRect_obj::__register();
::flixel::util::FlxPool_flixel_util_FlxRect_obj::__register();
::flixel::system::frontEnds::WatchFrontEnd_obj::__register();
::flixel::system::frontEnds::VCRFrontEnd_obj::__register();
::flixel::group::FlxTypedGroup_obj::__register();
::flixel::system::frontEnds::SoundFrontEnd_obj::__register();
::flixel::system::frontEnds::SignalFrontEnd_obj::__register();
::flixel::util::FlxSave_obj::__register();
::flixel::plugin::TweenManager_obj::__register();
::flixel::tweens::FlxTween_obj::__register();
::flixel::plugin::TimerManager_obj::__register();
::flixel::util::FlxTimer_obj::__register();
::flixel::plugin::PathManager_obj::__register();
::flixel::plugin::FlxPlugin_obj::__register();
::flixel::util::FlxPath_obj::__register();
::flixel::system::frontEnds::PluginFrontEnd_obj::__register();
::haxe::Log_obj::__register();
::flixel::system::frontEnds::LogFrontEnd_obj::__register();
::flixel::system::frontEnds::InputFrontEnd_obj::__register();
::flixel::util::_FlxSignal::FlxTypedSignal_Impl__obj::__register();
::flixel::system::frontEnds::DebuggerFrontEnd_obj::__register();
::flixel::system::frontEnds::ConsoleFrontEnd_obj::__register();
::flixel::system::frontEnds::CameraFrontEnd_obj::__register();
::flixel::system::frontEnds::BitmapLogFrontEnd_obj::__register();
::flixel::system::frontEnds::BitmapFrontEnd_obj::__register();
::flixel::system::scaleModes::RatioScaleMode_obj::__register();
::flixel::system::scaleModes::BaseScaleMode_obj::__register();
::flixel::util::FlxPoint_obj::__register();
::flixel::util::FlxPool_flixel_util_FlxPoint_obj::__register();
::flixel::interfaces::IFlxPooled_obj::__register();
::flixel::system::FlxVersion_obj::__register();
::flixel::FlxCamera_obj::__register();
::flixel::FlxBasic_obj::__register();
::flixel::interfaces::IFlxDestroyable_obj::__register();
::flash::utils::Endian_obj::__register();
::flash::utils::CompressionAlgorithm_obj::__register();
::flash::utils::ByteArray_obj::__register();
::flash::utils::IDataInput_obj::__register();
::openfl::utils::IMemoryRange_obj::__register();
::flash::utils::IDataOutput_obj::__register();
::flash::ui::MultitouchInputMode_obj::__register();
::flash::ui::Multitouch_obj::__register();
::flash::ui::Mouse_obj::__register();
::flash::ui::Keyboard_obj::__register();
::flash::text::TextLineMetrics_obj::__register();
::flash::text::TextFormatAlign_obj::__register();
::flash::text::TextFormat_obj::__register();
::flash::text::TextFieldType_obj::__register();
::flash::text::TextFieldAutoSize_obj::__register();
::flash::text::TextField_obj::__register();
::flash::text::GridFitType_obj::__register();
::flash::text::FontType_obj::__register();
::flash::text::FontStyle_obj::__register();
::flash::text::Font_obj::__register();
::flash::text::AntiAliasType_obj::__register();
::flash::system::SecurityDomain_obj::__register();
::flash::system::ScreenMode_obj::__register();
::flash::system::PixelFormat_obj::__register();
::flash::system::LoaderContext_obj::__register();
::flash::system::ApplicationDomain_obj::__register();
::flash::sensors::Accelerometer_obj::__register();
::flash::net::URLVariables_obj::__register();
::flash::net::URLRequestMethod_obj::__register();
::flash::net::URLRequestHeader_obj::__register();
::flash::net::URLRequest_obj::__register();
::flash::net::URLLoaderDataFormat_obj::__register();
::flash::net::SharedObjectFlushStatus_obj::__register();
::flash::net::SharedObject_obj::__register();
::flash::media::SoundTransform_obj::__register();
::flash::media::SoundLoaderContext_obj::__register();
::flash::media::AudioThreadState_obj::__register();
::flash::media::SoundChannel_obj::__register();
::flash::media::InternalAudioType_obj::__register();
::flash::media::Sound_obj::__register();
::flash::media::ID3Info_obj::__register();
::flash::geom::Vector3D_obj::__register();
::flash::geom::Transform_obj::__register();
::flash::geom::Rectangle_obj::__register();
::flash::geom::Point_obj::__register();
::flash::geom::Matrix3D_obj::__register();
::flash::geom::Matrix_obj::__register();
::flash::geom::ColorTransform_obj::__register();
::flash::filters::BitmapFilter_obj::__register();
::flash::filesystem::File_obj::__register();
::flash::events::UncaughtErrorEvents_obj::__register();
::flash::events::UncaughtErrorEvent_obj::__register();
::flash::events::SampleDataEvent_obj::__register();
::flash::events::ProgressEvent_obj::__register();
::flash::events::KeyboardEvent_obj::__register();
::flash::events::IOErrorEvent_obj::__register();
::flash::events::HTTPStatusEvent_obj::__register();
::flash::events::FocusEvent_obj::__register();
::flash::events::EventPhase_obj::__register();
::flash::events::Listener_obj::__register();
::flash::events::ErrorEvent_obj::__register();
::flash::events::TextEvent_obj::__register();
::flash::events::AccelerometerEvent_obj::__register();
::flash::errors::RangeError_obj::__register();
::flash::errors::EOFError_obj::__register();
::flash::errors::ArgumentError_obj::__register();
::flash::errors::Error_obj::__register();
::flash::display::TriangleCulling_obj::__register();
::flash::display::StageScaleMode_obj::__register();
::flash::display::StageQuality_obj::__register();
::flash::display::StageDisplayState_obj::__register();
::flash::display::StageAlign_obj::__register();
::flash::display::TouchInfo_obj::__register();
::flash::display::Stage_obj::__register();
::flash::events::TouchEvent_obj::__register();
::flash::events::MouseEvent_obj::__register();
::flash::events::Event_obj::__register();
::flash::display::SpreadMethod_obj::__register();
::flash::display::Shape_obj::__register();
::flash::display::PixelSnapping_obj::__register();
::flash::display::MovieClip_obj::__register();
::flash::display::LoaderInfo_obj::__register();
::flash::net::URLLoader_obj::__register();
::flash::display::Loader_obj::__register();
::flash::display::LineScaleMode_obj::__register();
::flash::display::JointStyle_obj::__register();
::flash::display::InterpolationMethod_obj::__register();
::flash::display::IGraphicsData_obj::__register();
::flash::display::GraphicsPathWinding_obj::__register();
::flash::display::Graphics_obj::__register();
::flash::display::GradientType_obj::__register();
::flash::display::FrameLabel_obj::__register();
::flash::display::CapsStyle_obj::__register();
::flash::display::BlendMode_obj::__register();
::flash::display::BitmapDataChannel_obj::__register();
::flash::display::OptimizedPerlin_obj::__register();
::flash::display::BitmapData_obj::__register();
::flash::display::Bitmap_obj::__register();
::flash::_Vector::Vector_Impl__obj::__register();
::flash::Memory_obj::__register();
::cpp::vm::Thread_obj::__register();
::cpp::vm::Mutex_obj::__register();
::cpp::rtti::FieldNumericIntegerLookup_obj::__register();
::Xml_obj::__register();
::XmlType_obj::__register();
::Type_obj::__register();
::ValueType_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Reflect_obj::__register();
::IMap_obj::__register();
::List_obj::__register();
::Lambda_obj::__register();
::GameClass_obj::__register();
::flixel::FlxGame_obj::__register();
::EReg_obj::__register();
::DefaultAssetLibrary_obj::__register();
::openfl::AssetLibrary_obj::__register();
::Date_obj::__register();
::DocumentClass_obj::__register();
::Main_obj::__register();
::flash::display::Sprite_obj::__register();
::flash::display::DisplayObjectContainer_obj::__register();
::flash::display::InteractiveObject_obj::__register();
::flash::display::DisplayObject_obj::__register();
::flash::Lib_obj::__register();
::Std_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Bytes_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::haxe::io::Output_obj::__register();
::sys::io::Process_obj::__register();
::Sys_obj::__register();
::cpp::Lib_obj::__register();
::flash::display::IBitmapDrawable_obj::__register();
::flash::events::EventDispatcher_obj::__register();
::flash::events::IEventDispatcher_obj::__register();
::ApplicationMain_obj::__register();
::Xml_obj::__init__();
::flash::ui::Multitouch_obj::__init__();
::flash::utils::ByteArray_obj::__init__();
::cpp::Lib_obj::__boot();
::EReg_obj::__boot();
::Xml_obj::__boot();
::cpp::rtti::FieldNumericIntegerLookup_obj::__boot();
::cpp::vm::Mutex_obj::__boot();
::cpp::vm::Thread_obj::__boot();
::haxe::Log_obj::__boot();
::ApplicationMain_obj::__boot();
::flash::events::IEventDispatcher_obj::__boot();
::flash::events::EventDispatcher_obj::__boot();
::flash::display::IBitmapDrawable_obj::__boot();
::Sys_obj::__boot();
::sys::io::Process_obj::__boot();
::haxe::io::Output_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::Input_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::Std_obj::__boot();
::flash::Lib_obj::__boot();
::flash::display::DisplayObject_obj::__boot();
::flash::display::InteractiveObject_obj::__boot();
::flash::display::DisplayObjectContainer_obj::__boot();
::flash::display::Sprite_obj::__boot();
::Main_obj::__boot();
::DocumentClass_obj::__boot();
::Date_obj::__boot();
::openfl::AssetLibrary_obj::__boot();
::DefaultAssetLibrary_obj::__boot();
::flixel::FlxGame_obj::__boot();
::GameClass_obj::__boot();
::Lambda_obj::__boot();
::List_obj::__boot();
::IMap_obj::__boot();
::Reflect_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::ValueType_obj::__boot();
::Type_obj::__boot();
::XmlType_obj::__boot();
::flash::Memory_obj::__boot();
::flash::_Vector::Vector_Impl__obj::__boot();
::flash::display::Bitmap_obj::__boot();
::flash::display::BitmapData_obj::__boot();
::flash::display::OptimizedPerlin_obj::__boot();
::flash::display::BitmapDataChannel_obj::__boot();
::flash::display::BlendMode_obj::__boot();
::flash::display::CapsStyle_obj::__boot();
::flash::display::FrameLabel_obj::__boot();
::flash::display::GradientType_obj::__boot();
::flash::display::Graphics_obj::__boot();
::flash::display::GraphicsPathWinding_obj::__boot();
::flash::display::IGraphicsData_obj::__boot();
::flash::display::InterpolationMethod_obj::__boot();
::flash::display::JointStyle_obj::__boot();
::flash::display::LineScaleMode_obj::__boot();
::flash::display::Loader_obj::__boot();
::flash::net::URLLoader_obj::__boot();
::flash::display::LoaderInfo_obj::__boot();
::flash::display::MovieClip_obj::__boot();
::flash::display::PixelSnapping_obj::__boot();
::flash::display::Shape_obj::__boot();
::flash::display::SpreadMethod_obj::__boot();
::flash::events::Event_obj::__boot();
::flash::events::MouseEvent_obj::__boot();
::flash::events::TouchEvent_obj::__boot();
::flash::display::Stage_obj::__boot();
::flash::display::TouchInfo_obj::__boot();
::flash::display::StageAlign_obj::__boot();
::flash::display::StageDisplayState_obj::__boot();
::flash::display::StageQuality_obj::__boot();
::flash::display::StageScaleMode_obj::__boot();
::flash::display::TriangleCulling_obj::__boot();
::flash::errors::Error_obj::__boot();
::flash::errors::ArgumentError_obj::__boot();
::flash::errors::EOFError_obj::__boot();
::flash::errors::RangeError_obj::__boot();
::flash::events::AccelerometerEvent_obj::__boot();
::flash::events::TextEvent_obj::__boot();
::flash::events::ErrorEvent_obj::__boot();
::flash::events::Listener_obj::__boot();
::flash::events::EventPhase_obj::__boot();
::flash::events::FocusEvent_obj::__boot();
::flash::events::HTTPStatusEvent_obj::__boot();
::flash::events::IOErrorEvent_obj::__boot();
::flash::events::KeyboardEvent_obj::__boot();
::flash::events::ProgressEvent_obj::__boot();
::flash::events::SampleDataEvent_obj::__boot();
::flash::events::UncaughtErrorEvent_obj::__boot();
::flash::events::UncaughtErrorEvents_obj::__boot();
::flash::filesystem::File_obj::__boot();
::flash::filters::BitmapFilter_obj::__boot();
::flash::geom::ColorTransform_obj::__boot();
::flash::geom::Matrix_obj::__boot();
::flash::geom::Matrix3D_obj::__boot();
::flash::geom::Point_obj::__boot();
::flash::geom::Rectangle_obj::__boot();
::flash::geom::Transform_obj::__boot();
::flash::geom::Vector3D_obj::__boot();
::flash::media::ID3Info_obj::__boot();
::flash::media::Sound_obj::__boot();
::flash::media::InternalAudioType_obj::__boot();
::flash::media::SoundChannel_obj::__boot();
::flash::media::AudioThreadState_obj::__boot();
::flash::media::SoundLoaderContext_obj::__boot();
::flash::media::SoundTransform_obj::__boot();
::flash::net::SharedObject_obj::__boot();
::flash::net::SharedObjectFlushStatus_obj::__boot();
::flash::net::URLLoaderDataFormat_obj::__boot();
::flash::net::URLRequest_obj::__boot();
::flash::net::URLRequestHeader_obj::__boot();
::flash::net::URLRequestMethod_obj::__boot();
::flash::net::URLVariables_obj::__boot();
::flash::sensors::Accelerometer_obj::__boot();
::flash::system::ApplicationDomain_obj::__boot();
::flash::system::LoaderContext_obj::__boot();
::flash::system::PixelFormat_obj::__boot();
::flash::system::ScreenMode_obj::__boot();
::flash::system::SecurityDomain_obj::__boot();
::flash::text::AntiAliasType_obj::__boot();
::flash::text::Font_obj::__boot();
::flash::text::FontStyle_obj::__boot();
::flash::text::FontType_obj::__boot();
::flash::text::GridFitType_obj::__boot();
::flash::text::TextField_obj::__boot();
::flash::text::TextFieldAutoSize_obj::__boot();
::flash::text::TextFieldType_obj::__boot();
::flash::text::TextFormat_obj::__boot();
::flash::text::TextFormatAlign_obj::__boot();
::flash::text::TextLineMetrics_obj::__boot();
::flash::ui::Keyboard_obj::__boot();
::flash::ui::Mouse_obj::__boot();
::flash::ui::Multitouch_obj::__boot();
::flash::ui::MultitouchInputMode_obj::__boot();
::flash::utils::IDataOutput_obj::__boot();
::openfl::utils::IMemoryRange_obj::__boot();
::flash::utils::IDataInput_obj::__boot();
::flash::utils::ByteArray_obj::__boot();
::flash::utils::CompressionAlgorithm_obj::__boot();
::flash::utils::Endian_obj::__boot();
::flixel::interfaces::IFlxDestroyable_obj::__boot();
::flixel::FlxBasic_obj::__boot();
::flixel::FlxCamera_obj::__boot();
::flixel::system::FlxVersion_obj::__boot();
::flixel::interfaces::IFlxPooled_obj::__boot();
::flixel::util::FlxPool_flixel_util_FlxPoint_obj::__boot();
::flixel::util::FlxPoint_obj::__boot();
::flixel::system::scaleModes::BaseScaleMode_obj::__boot();
::flixel::system::scaleModes::RatioScaleMode_obj::__boot();
::flixel::system::frontEnds::BitmapFrontEnd_obj::__boot();
::flixel::system::frontEnds::BitmapLogFrontEnd_obj::__boot();
::flixel::system::frontEnds::CameraFrontEnd_obj::__boot();
::flixel::system::frontEnds::ConsoleFrontEnd_obj::__boot();
::flixel::system::frontEnds::DebuggerFrontEnd_obj::__boot();
::flixel::util::_FlxSignal::FlxTypedSignal_Impl__obj::__boot();
::flixel::system::frontEnds::InputFrontEnd_obj::__boot();
::flixel::system::frontEnds::LogFrontEnd_obj::__boot();
::flixel::system::frontEnds::PluginFrontEnd_obj::__boot();
::flixel::util::FlxPath_obj::__boot();
::flixel::plugin::FlxPlugin_obj::__boot();
::flixel::plugin::PathManager_obj::__boot();
::flixel::util::FlxTimer_obj::__boot();
::flixel::plugin::TimerManager_obj::__boot();
::flixel::tweens::FlxTween_obj::__boot();
::flixel::plugin::TweenManager_obj::__boot();
::flixel::util::FlxSave_obj::__boot();
::flixel::system::frontEnds::SignalFrontEnd_obj::__boot();
::flixel::system::frontEnds::SoundFrontEnd_obj::__boot();
::flixel::group::FlxTypedGroup_obj::__boot();
::flixel::system::frontEnds::VCRFrontEnd_obj::__boot();
::flixel::system::frontEnds::WatchFrontEnd_obj::__boot();
::flixel::util::FlxPool_flixel_util_FlxRect_obj::__boot();
::flixel::util::FlxRect_obj::__boot();
::flixel::FlxG_obj::__boot();
::flixel::FlxObject_obj::__boot();
::flixel::_FlxSprite::GraphicDefault_obj::__boot();
::flixel::FlxSprite_obj::__boot();
::flixel::group::FlxGroup_obj::__boot();
::flixel::FlxState_obj::__boot();
::flixel::FlxSubState_obj::__boot();
::flixel::animation::FlxBaseAnimation_obj::__boot();
::flixel::animation::FlxAnimation_obj::__boot();
::flixel::animation::FlxAnimationController_obj::__boot();
::flixel::animation::FlxPrerotatedAnimation_obj::__boot();
::flixel::util::FlxPool_flixel_effects_FlxFlicker_obj::__boot();
::flixel::effects::FlxFlicker_obj::__boot();
::flixel::group::FlxTypedSpriteGroup_obj::__boot();
::flixel::group::FlxSpriteGroup_obj::__boot();
::flixel::group::FlxTypedGroupIterator_obj::__boot();
::flixel::input::FlxAccelerometer_obj::__boot();
::flixel::input::FlxSwipe_obj::__boot();
::flixel::interfaces::IFlxInput_obj::__boot();
::flixel::input::android::FlxAndroidKeys_obj::__boot();
::flixel::input::gamepad::FlxGamepad_obj::__boot();
::flixel::input::gamepad::FlxGamepadButton_obj::__boot();
::flixel::input::gamepad::FlxGamepadManager_obj::__boot();
::flixel::input::keyboard::FlxKey_obj::__boot();
::flixel::input::keyboard::FlxKeyList_obj::__boot();
::flixel::input::keyboard::FlxKeyboard_obj::__boot();
::flixel::input::mouse::_FlxMouse::GraphicCursor_obj::__boot();
::flixel::input::mouse::FlxMouse_obj::__boot();
::flixel::input::mouse::FlxMouseButton_obj::__boot();
::flixel::input::touch::FlxTouch_obj::__boot();
::flixel::input::touch::FlxTouchManager_obj::__boot();
::flixel::interfaces::IFlxSignal_obj::__boot();
::flixel::system::_FlxAssets::FontDefault_obj::__boot();
::flixel::system::GraphicLogo_obj::__boot();
::flixel::system::FlxAssets_obj::__boot();
::flixel::system::FlxBGSprite_obj::__boot();
::flixel::system::_FlxCollisionType::FlxCollisionType_Impl__obj::__boot();
::flixel::system::FlxList_obj::__boot();
::flixel::system::FlxQuadTree_obj::__boot();
::flixel::system::FlxSound_obj::__boot();
::flixel::system::FlxSplash_obj::__boot();
::flixel::system::debug::ConsoleUtil_obj::__boot();
::flixel::system::debug::ButtonAlignment_obj::__boot();
::flixel::system::debug::DebuggerLayout_obj::__boot();
::flixel::system::debug::LogStyle_obj::__boot();
::flixel::system::debug::Window_obj::__boot();
::flixel::system::debug::Watch_obj::__boot();
::flixel::system::debug::Tracker_obj::__boot();
::flixel::system::debug::TrackerProfile_obj::__boot();
::flixel::system::debug::_Window::GraphicWindowHandle_obj::__boot();
::flixel::system::debug::_Window::GraphicCloseButton_obj::__boot();
::flixel::system::layer::DrawStackItem_obj::__boot();
::flixel::system::layer::Region_obj::__boot();
::flixel::system::layer::TileSheetData_obj::__boot();
::openfl::display::Tilesheet_obj::__boot();
::flixel::system::layer::TileSheetExt_obj::__boot();
::flixel::system::layer::_TileSheetExt::RectPointTileID_obj::__boot();
::flixel::system::layer::frames::FlxFrame_obj::__boot();
::flixel::system::layer::frames::FlxRotatedFrame_obj::__boot();
::flixel::system::layer::frames::FlxSpriteFrames_obj::__boot();
::flixel::system::layer::frames::FrameType_obj::__boot();
::flixel::system::replay::CodeValuePair_obj::__boot();
::flixel::system::replay::FlxReplay_obj::__boot();
::flixel::system::replay::FrameRecord_obj::__boot();
::flixel::system::replay::MouseRecord_obj::__boot();
::flixel::system::ui::FlxFocusLostScreen_obj::__boot();
::flixel::system::ui::FlxSoundTray_obj::__boot();
::flixel::system::ui::FlxSystemButton_obj::__boot();
::flixel::text::FlxText_obj::__boot();
::flixel::text::FlxTextFormat_obj::__boot();
::flixel::text::pxText::PxBitmapFont_obj::__boot();
::flixel::text::pxText::_PxBitmapFont::HelperSymbol_obj::__boot();
::flixel::text::pxText::PxFontSymbol_obj::__boot();
::flixel::tile::FlxTile_obj::__boot();
::flixel::tile::FlxTileblock_obj::__boot();
::flixel::tile::GraphicAuto_obj::__boot();
::flixel::tile::GraphicAutoAlt_obj::__boot();
::flixel::tile::FlxTilemapBuffer_obj::__boot();
::flixel::tile::FlxTilemap_obj::__boot();
::flixel::tweens::FlxEase_obj::__boot();
::flixel::tweens::misc::AngleTween_obj::__boot();
::flixel::tweens::misc::ColorTween_obj::__boot();
::flixel::tweens::misc::NumTween_obj::__boot();
::flixel::tweens::misc::VarTween_obj::__boot();
::flixel::tweens::motion::Motion_obj::__boot();
::flixel::tweens::motion::CircularMotion_obj::__boot();
::flixel::tweens::motion::CubicMotion_obj::__boot();
::flixel::tweens::motion::LinearMotion_obj::__boot();
::flixel::tweens::motion::LinearPath_obj::__boot();
::flixel::tweens::motion::QuadMotion_obj::__boot();
::flixel::tweens::motion::QuadPath_obj::__boot();
::flixel::util::FlxAngle_obj::__boot();
::flixel::util::FlxArrayUtil_obj::__boot();
::flixel::util::FlxBitmapDataPool_obj::__boot();
::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode_obj::__boot();
::flixel::util::FlxCollision_obj::__boot();
::flixel::util::FlxColor_obj::__boot();
::flixel::util::FlxColorUtil_obj::__boot();
::flixel::util::FlxDestroyUtil_obj::__boot();
::flixel::util::FlxMath_obj::__boot();
::flixel::util::FlxCallbackPoint_obj::__boot();
::flixel::util::FlxPool_flixel_util_LabelValuePair_obj::__boot();
::flixel::util::FlxRandom_obj::__boot();
::flixel::util::_FlxSignal::FlxSignalHandler_obj::__boot();
::flixel::util::_FlxSignal::FlxSignalBase_obj::__boot();
::flixel::util::_FlxSignal::FlxSignal0_obj::__boot();
::flixel::util::_FlxSignal::FlxSignal1_obj::__boot();
::flixel::util::_FlxSignal::FlxSignal2_obj::__boot();
::flixel::util::_FlxSignal::FlxSignal3_obj::__boot();
::flixel::util::_FlxSignal::FlxSignal4_obj::__boot();
::flixel::util::FlxSort_obj::__boot();
::flixel::util::FlxSpriteUtil_obj::__boot();
::flixel::util::FlxStringUtil_obj::__boot();
::flixel::util::LabelValuePair_obj::__boot();
::flixel::util::FlxVelocity_obj::__boot();
::flixel::util::loaders::CachedGraphics_obj::__boot();
::flixel::util::loaders::TextureAtlasFrame_obj::__boot();
::flixel::util::loaders::TexturePackerData_obj::__boot();
::flixel::util::loaders::TextureRegion_obj::__boot();
::haxe::StackItem_obj::__boot();
::haxe::CallStack_obj::__boot();
::haxe::Resource_obj::__boot();
::haxe::Serializer_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::Unserializer_obj::__boot();
::haxe::crypto::BaseCode_obj::__boot();
::haxe::ds::IntMap_obj::__boot();
::haxe::ds::ObjectMap_obj::__boot();
::haxe::ds::StringMap_obj::__boot();
::haxe::format::JsonParser_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::zip::Compress_obj::__boot();
::haxe::zip::FlushMode_obj::__boot();
::haxe::zip::Uncompress_obj::__boot();
::openfl::AssetCache_obj::__boot();
::openfl::Assets_obj::__boot();
::openfl::AssetData_obj::__boot();
::openfl::AssetType_obj::__boot();
::openfl::display::DirectRenderer_obj::__boot();
::openfl::display::ManagedStage_obj::__boot();
::openfl::display::OpenGLView_obj::__boot();
::openfl::events::JoystickEvent_obj::__boot();
::openfl::events::SystemEvent_obj::__boot();
::openfl::gl::GL_obj::__boot();
::openfl::gl::_GL::Float32Data_Impl__obj::__boot();
::openfl::gl::GLObject_obj::__boot();
::openfl::gl::GLBuffer_obj::__boot();
::openfl::gl::GLFramebuffer_obj::__boot();
::openfl::gl::GLProgram_obj::__boot();
::openfl::gl::GLRenderbuffer_obj::__boot();
::openfl::gl::GLShader_obj::__boot();
::openfl::gl::GLTexture_obj::__boot();
::openfl::utils::ArrayBufferView_obj::__boot();
::openfl::utils::Float32Array_obj::__boot();
::openfl::utils::JNI_obj::__boot();
::openfl::utils::JNIMemberField_obj::__boot();
::openfl::utils::JNIStaticField_obj::__boot();
::openfl::utils::JNIMethod_obj::__boot();
::openfl::utils::WeakRef_obj::__boot();
::states::PlayState_obj::__boot();
}

