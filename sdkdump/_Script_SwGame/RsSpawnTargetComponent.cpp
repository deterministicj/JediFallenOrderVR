#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "RsSpawnTargetComponent.hpp"
void* _Script_SwGame::RsSpawnTargetComponent::get_ObjectToSpawn() {
    return (void*)((uintptr_t)this + 0x2c8);
}
_Script_CoreUObject::Class* _Script_SwGame::RsSpawnTargetComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsSpawnTargetComponent");
    return result;
}
