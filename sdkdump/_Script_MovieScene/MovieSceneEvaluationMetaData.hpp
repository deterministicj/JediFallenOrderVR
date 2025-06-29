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
struct MovieSceneEvaluationMetaData {
    private: char pad_0[0x70]; public:
    void* get_ActiveSequences();
    void* get_ActiveEntities();
    void* get_SubTemplateSerialNumbers();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
