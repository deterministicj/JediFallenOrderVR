#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsAbilityPrioritySettings : public _Script_Engine::DeveloperSettings {
    private: char pad_38[0x50]; public:
    void* get_DefaultPriorityTable();
    void* get_DefaultPreset();
    void* get_ZTargetPreset();
    void* get_AbilityPriorityMappings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
