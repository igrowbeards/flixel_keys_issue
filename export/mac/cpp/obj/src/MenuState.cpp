#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGame
#include <org/flixel/FlxGame.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTypedGroup
#include <org/flixel/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxDebugger
#include <org/flixel/system/FlxDebugger.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxWindow
#include <org/flixel/system/FlxWindow.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Log
#include <org/flixel/system/debug/Log.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxInputStates
#include <org/flixel/system/input/FlxInputStates.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxKeyboard
#include <org/flixel/system/input/FlxKeyboard.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxMouse
#include <org/flixel/system/input/FlxMouse.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_IFlxInput
#include <org/flixel/system/input/IFlxInput.h>
#endif

Void MenuState_obj::__construct()
{
HX_STACK_PUSH("MenuState::new","MenuState.hx",15);
{
	HX_STACK_LINE(15)
	super::__construct();
}
;
	return null();
}

MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new()
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct();
	return result;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct();
	return result;}

Void MenuState_obj::update( ){
{
		HX_STACK_PUSH("MenuState::update","MenuState.hx",35);
		HX_STACK_THIS(this);
		HX_STACK_LINE(36)
		this->super::update();
		HX_STACK_LINE(38)
		if ((::org::flixel::FlxG_obj::keys->pressed(HX_CSTRING("A")))){
			HX_STACK_LINE(38)
			if (((bool((::org::flixel::FlxG_obj::_game != null())) && bool((::org::flixel::FlxG_obj::_game->getDebugger() != null()))))){
				struct _Function_3_1{
					inline static ::String Block( ){
						HX_STACK_PUSH("*::closure","MenuState.hx",39);
						{
							HX_STACK_LINE(39)
							Dynamic AnyArray = hx::TCastToArray(HX_CSTRING("A is down"));		HX_STACK_VAR(AnyArray,"AnyArray");
							HX_STACK_LINE(39)
							::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
							HX_STACK_LINE(39)
							if (((bool((AnyArray != null())) && bool((AnyArray->__Field(HX_CSTRING("length"),true) > (int)0))))){
								HX_STACK_LINE(39)
								string = ::Std_obj::string(AnyArray->__GetItem((int)0));
								HX_STACK_LINE(39)
								int i = (int)1;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(39)
								int l = AnyArray->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
								HX_STACK_LINE(39)
								while(((i < l))){
									HX_STACK_LINE(39)
									hx::AddEq(string,(HX_CSTRING(", ") + ::Std_obj::string(AnyArray->__GetItem((i)++))));
								}
							}
							HX_STACK_LINE(39)
							return string;
						}
						return null();
					}
				};
				HX_STACK_LINE(39)
				::org::flixel::FlxG_obj::_game->getDebugger()->log->add((  ((::Std_obj::is(HX_CSTRING("A is down"),hx::ClassOf< Array<int> >()))) ? ::String(_Function_3_1::Block()) : ::String(::Std_obj::string(HX_CSTRING("A is down"))) ));
			}
		}
		HX_STACK_LINE(42)
		if ((::org::flixel::FlxG_obj::keys->pressed(HX_CSTRING("W")))){
			HX_STACK_LINE(42)
			if (((bool((::org::flixel::FlxG_obj::_game != null())) && bool((::org::flixel::FlxG_obj::_game->getDebugger() != null()))))){
				struct _Function_3_1{
					inline static ::String Block( ){
						HX_STACK_PUSH("*::closure","MenuState.hx",43);
						{
							HX_STACK_LINE(43)
							Dynamic AnyArray = hx::TCastToArray(HX_CSTRING("W is down"));		HX_STACK_VAR(AnyArray,"AnyArray");
							HX_STACK_LINE(43)
							::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
							HX_STACK_LINE(43)
							if (((bool((AnyArray != null())) && bool((AnyArray->__Field(HX_CSTRING("length"),true) > (int)0))))){
								HX_STACK_LINE(43)
								string = ::Std_obj::string(AnyArray->__GetItem((int)0));
								HX_STACK_LINE(43)
								int i = (int)1;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(43)
								int l = AnyArray->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
								HX_STACK_LINE(43)
								while(((i < l))){
									HX_STACK_LINE(43)
									hx::AddEq(string,(HX_CSTRING(", ") + ::Std_obj::string(AnyArray->__GetItem((i)++))));
								}
							}
							HX_STACK_LINE(43)
							return string;
						}
						return null();
					}
				};
				HX_STACK_LINE(43)
				::org::flixel::FlxG_obj::_game->getDebugger()->log->add((  ((::Std_obj::is(HX_CSTRING("W is down"),hx::ClassOf< Array<int> >()))) ? ::String(_Function_3_1::Block()) : ::String(::Std_obj::string(HX_CSTRING("W is down"))) ));
			}
		}
	}
return null();
}


Void MenuState_obj::destroy( ){
{
		HX_STACK_PUSH("MenuState::destroy","MenuState.hx",30);
		HX_STACK_THIS(this);
		HX_STACK_LINE(30)
		this->super::destroy();
	}
return null();
}


Void MenuState_obj::create( ){
{
		HX_STACK_PUSH("MenuState::create","MenuState.hx",18);
		HX_STACK_THIS(this);
		HX_STACK_LINE(20)
		::org::flixel::FlxG_obj::set_bgColor((int)-15524837);
		HX_STACK_LINE(25)
		::org::flixel::FlxG_obj::mouse->show(null(),null(),null(),null());
	}
return null();
}



MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic MenuState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("create"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("MenuState"), hx::TCanCast< MenuState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MenuState_obj::__boot()
{
}

