#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTDecorator.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTDecorator_IsInLeashingBounds : public _Script_AIModule::BTDecorator {
    private: char pad_68[0x30]; public:
    void* get_LocationKey();
    float& get_MultipleOfCharacterRadius();
    bool get_bUseMultipleOfCharacterRadius();
    void set_bUseMultipleOfCharacterRadius(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
