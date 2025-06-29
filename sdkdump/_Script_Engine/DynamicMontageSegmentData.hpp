#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DynamicMontageSegmentData {
    private: char pad_0[0x18]; public:
    _Script_Engine::AnimationAsset*& get_Asset();
    float& get_StartPosition();
    int32_t& get_LoopCount();
    void* get_BlendSpaceInput();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
