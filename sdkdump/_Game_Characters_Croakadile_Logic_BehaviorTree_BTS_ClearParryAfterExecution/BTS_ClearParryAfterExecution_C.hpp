#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTService_BlueprintBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
struct AIController;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Game_Characters_Croakadile_Logic_BehaviorTree_BTS_ClearParryAfterExecution {
#pragma pack(push, 1)
struct BTS_ClearParryAfterExecution_C : public _Script_AIModule::BTService_BlueprintBase {
    private: char pad_98[0x8]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveDeactivationAI0(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn);
    void ExecuteUbergraph_BTS_ClearParryAfterExecution(int32_t EntryPoint);
}; // Size: 0xa0
#pragma pack(pop)
}
