#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\MaterialExpression.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct MaterialExpressionLandscapeLayerBlend : public _Script_Engine::MaterialExpression {
    private: char pad_40[0x28]; public:
    void* get_Layers();
    void* get_DebugLayerDensity();
    void* get_ExpressionGUID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
