#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Model : public _Script_CoreUObject::Object {
    private: char pad_28[0x2a0]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c8
#pragma pack(pop)
}
