#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpression.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionLinearInterpolate : public MaterialExpression {
    private: char pad_40[0x58]; public:
    void* get_A();
    void* get_B();
    void* get_Alpha();
    float& get_ConstA();
    float& get_ConstB();
    float& get_ConstAlpha();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
