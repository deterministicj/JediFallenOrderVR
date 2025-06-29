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
struct RsDynamicDeformationController : public _Script_CoreUObject::Object {
    private: char pad_28[0x18]; public:
    static _Script_CoreUObject::Class* static_class();
    void SetRenderTargetSize(int32_t RenderTargetSize);
    void SetProjectionSize(float ProjectionSize);
    void SetHeightDisplacementScale(float HeightDisplacementScale);
    void SetEnabled(bool bEnable);
    void SetBaseHeight(float BaseHeight);
    bool IsEnabled();
    int32_t GetRenderTargetSize();
    float GetProjectionSize();
    float GetHeightDisplacementScale();
    float GetBaseHeight();
}; // Size: 0x40
#pragma pack(pop)
}
