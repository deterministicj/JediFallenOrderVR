#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaAssets {
#pragma pack(push, 1)
struct MediaSource : public _Script_CoreUObject::Object {
    private: char pad_28[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
    bool Validate();
    void* GetUrl();
}; // Size: 0x30
#pragma pack(pop)
}
