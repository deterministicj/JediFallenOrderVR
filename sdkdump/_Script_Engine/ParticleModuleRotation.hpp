#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleRotationBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleRotation : public ParticleModuleRotationBase {
    private: char pad_30[0x38]; public:
    void* get_StartRotation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
