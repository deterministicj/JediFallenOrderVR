#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimPhysSphericalLimit {
    private: char pad_0[0x30]; public:
    void* get_DrivingBone();
    void* get_SphereLocalOffset();
    float& get_LimitRadius();
    void* get_LimitType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
