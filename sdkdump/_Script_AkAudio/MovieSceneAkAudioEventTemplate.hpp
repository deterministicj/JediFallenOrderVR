#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
namespace _Script_AkAudio {
struct MovieSceneAkAudioEventSection;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct MovieSceneAkAudioEventTemplate : public _Script_MovieScene::MovieSceneEvalTemplate {
    private: char pad_20[0x8]; public:
    _Script_AkAudio::MovieSceneAkAudioEventSection*& get_Section();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
