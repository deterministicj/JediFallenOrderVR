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
struct PlayerController;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_DialoguePlugin {
#pragma pack(push, 1)
struct DialogueEvents : public _Script_CoreUObject::Object {
    static _Script_CoreUObject::Class* static_class();
    void RecieveEventTriggered(_Script_Engine::PlayerController* ConsideringPlayer, _Script_Engine::Actor* NPCActor);
}; // Size: 0x28
#pragma pack(pop)
}
