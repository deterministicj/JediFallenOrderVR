#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsSurveyLocation {
    private: char pad_0[0x100]; public:
    void* get_Location();
    void* get_LocationType();
    void* get_PointsOfInterest();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x100
#pragma pack(pop)
}
