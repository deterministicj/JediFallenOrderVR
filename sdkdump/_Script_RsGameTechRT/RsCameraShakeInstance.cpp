#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraShake.hpp"
#include "RsCameraShakeInstance.hpp"
_Script_Engine::CameraShake*& _Script_RsGameTechRT::RsCameraShakeInstance::get_Shake() {
    return *(_Script_Engine::CameraShake**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCameraShakeInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsCameraShakeInstance");
    return result;
}
