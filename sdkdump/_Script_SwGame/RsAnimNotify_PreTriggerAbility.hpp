#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotify.hpp"
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsAnimNotify_PreTriggerAbility : public _Script_Engine::AnimNotify {
    private: char pad_38[0x18]; public:
    void* get_AbilityType();
    void* get_UpgradeLevel();
    _Script_Engine::AnimationAsset*& get_OverrideAnimation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
