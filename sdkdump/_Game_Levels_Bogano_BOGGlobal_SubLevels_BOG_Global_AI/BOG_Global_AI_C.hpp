#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_Bogano_BOGGlobal_SubLevels_BOG_Global_AI {
#pragma pack(push, 1)
struct BOG_Global_AI_C : public _Script_Engine::LevelScriptActor {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x368
#pragma pack(pop)
}
