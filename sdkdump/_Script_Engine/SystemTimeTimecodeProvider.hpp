#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "TimecodeProvider.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct FrameRate;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SystemTimeTimecodeProvider : public TimecodeProvider {
    private: char pad_28[0x10]; public:
    void* get_FrameRate();
    static _Script_CoreUObject::Class* static_class();
    void SetFrameRate(_Script_CoreUObject::FrameRate& InFrameRate);
}; // Size: 0x38
#pragma pack(pop)
}
