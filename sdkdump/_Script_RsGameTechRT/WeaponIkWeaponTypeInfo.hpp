#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct WeaponIkWeaponTypeInfo {
    private: char pad_0[0x10]; public:
    int32_t& get_WeaponIndex();
    void* get_WeaponEndSocketName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
