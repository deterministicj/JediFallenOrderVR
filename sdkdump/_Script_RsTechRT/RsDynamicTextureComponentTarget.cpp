#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDynamicTextureComponentTarget.hpp"
void* _Script_RsTechRT::RsDynamicTextureComponentTarget::get_Component() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsDynamicTextureComponentTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsDynamicTextureComponentTarget");
    return result;
}
