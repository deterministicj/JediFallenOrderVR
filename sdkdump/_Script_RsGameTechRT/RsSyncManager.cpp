#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsSyncManager.hpp"
void* _Script_RsGameTechRT::RsSyncManager::get_SyncGroupArray() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSyncManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsSyncManager");
    return result;
}
