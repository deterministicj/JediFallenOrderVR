#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkWwiseObjectDetails {
    private: char pad_0[0x30]; public:
    void* get_ItemName();
    void* get_ItemPath();
    void* get_ItemId();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
