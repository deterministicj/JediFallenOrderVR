#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialEditorPromotionSettings.hpp"
void* _Script_Engine::MaterialEditorPromotionSettings::get_DefaultDiffuseTexture() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::MaterialEditorPromotionSettings::get_DefaultMaterialAsset() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::MaterialEditorPromotionSettings::get_DefaultNormalTexture() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialEditorPromotionSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MaterialEditorPromotionSettings");
    return result;
}
