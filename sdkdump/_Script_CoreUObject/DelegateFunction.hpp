#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Function.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct DelegateFunction : public Function {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
