#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsLightTriggerManager.hpp"
_Script_CoreUObject::Class* _Script_Engine::RsLightTriggerManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsLightTriggerManager");
    return result;
}
