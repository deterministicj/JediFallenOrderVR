#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct RsNavMeshTileLocation {
    private: char pad_0[0xc]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
