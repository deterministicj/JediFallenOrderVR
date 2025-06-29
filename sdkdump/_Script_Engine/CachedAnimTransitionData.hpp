#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CachedAnimTransitionData {
    private: char pad_0[0x28]; public:
    void* get_StateMachineName();
    void* get_FromStateName();
    void* get_ToStateName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
