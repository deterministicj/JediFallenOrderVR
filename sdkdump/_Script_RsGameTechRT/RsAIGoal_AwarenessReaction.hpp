#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAIGoal_BaseRoot.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIGoal_AwarenessReaction : public RsAIGoal_BaseRoot {
    private: char pad_60[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
