#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBitfield_NavPermissionDetailFlags.hpp"
void* _Script_Engine::RsBitfield_NavPermissionDetailFlags::get_Bits() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::RsBitfield_NavPermissionDetailFlags::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsBitfield_NavPermissionDetailFlags");
    return result;
}
