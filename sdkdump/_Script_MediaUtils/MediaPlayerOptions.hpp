#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaUtils {
#pragma pack(push, 1)
struct MediaPlayerOptions {
    private: char pad_0[0x1c]; public:
    void* get_Tracks();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c
#pragma pack(pop)
}
