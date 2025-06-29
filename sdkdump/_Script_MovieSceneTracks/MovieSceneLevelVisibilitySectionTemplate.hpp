#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneLevelVisibilitySectionTemplate : public _Script_MovieScene::MovieSceneEvalTemplate {
    private: char pad_20[0x18]; public:
    void* get_Visibility();
    void* get_LevelNames();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
