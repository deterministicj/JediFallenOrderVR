#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsTechRT\RsDynamicDeformerParticleSystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_DynamicDeformation_Effects_DD_Hero {
#pragma pack(push, 1)
struct DD_Hero_C : public _Script_RsTechRT::RsDynamicDeformerParticleSystem {
    private: char pad_368[0x8]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void NavStateChanged(void* NewState, void* PrevState);
    void SwimStateChanged(void* previousSwimState, void* newSwimState);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_DD_Hero(int32_t EntryPoint);
}; // Size: 0x370
#pragma pack(pop)
}
