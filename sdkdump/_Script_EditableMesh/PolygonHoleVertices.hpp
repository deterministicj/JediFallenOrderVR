#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_EditableMesh {
#pragma pack(push, 1)
struct PolygonHoleVertices {
    private: char pad_0[0x10]; public:
    void* get_HoleVertices();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
