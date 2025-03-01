#include <Geode/modify/LevelEditorLayer.hpp>
#include <Geode/modify/EditorPauseLayer.hpp>

#include <Geode/binding/TextGameObject.hpp>

using namespace geode::prelude;

struct LevelEditorLayerData : geode::Modify<LevelEditorLayerData, LevelEditorLayer>
{
	void createObjectsFromSetup(gd::string&);


	TextGameObject* getSaveObject();
	void createSaveObject();
};

struct EditorPauseLayerSave : geode::Modify<EditorPauseLayerSave, EditorPauseLayer>
{
	void saveLevel();
	void onExitEditor(CCObject*);
};
