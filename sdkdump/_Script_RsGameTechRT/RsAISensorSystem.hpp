#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAISensorSystem : public _Script_CoreUObject::Object {
    private: char pad_28[0x30]; public:
    void* get_SensorDefinitions();
    void* get_Sensors();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
