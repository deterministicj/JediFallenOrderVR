#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneParameterSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e0[0x30]; public:
    void* get_ScalarParameterNamesAndCurves();
    void* get_VectorParameterNamesAndCurves();
    void* get_ColorParameterNamesAndCurves();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x110
#pragma pack(pop)
}
