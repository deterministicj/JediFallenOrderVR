#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BAFTASpeakersToSystemicMultipliers.hpp"
void* _Script_RsGameTechRT::BAFTASpeakersToSystemicMultipliers::get_SpeakersToSystemicMultipliers() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::BAFTASpeakersToSystemicMultipliers::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.BAFTASpeakersToSystemicMultipliers");
    return result;
}
