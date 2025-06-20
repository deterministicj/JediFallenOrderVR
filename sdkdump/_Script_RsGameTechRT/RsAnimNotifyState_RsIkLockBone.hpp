#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotifyState.hpp"
namespace _Script_RsGameTechRT {
struct RsIKCharacterDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAnimNotifyState_RsIkLockBone : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0x60]; public:
    void* get_IkBoneToLock();
    _Script_RsGameTechRT::RsIKCharacterDefinition*& get_IkDefinition();
    void* get_Modifiers();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
