#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneEvaluationGroupLUTIndex {
    private: char pad_0[0xc]; public:
    int32_t& get_LUTOffset();
    int32_t& get_NumInitPtrs();
    int32_t& get_NumEvalPtrs();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
