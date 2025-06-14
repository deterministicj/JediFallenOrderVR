#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_AIModule {
struct BehaviorTree;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIPOICustomBehaviorData {
    private: char pad_0[0x28]; public:
    void* get_BehaviorTreeAsset();
    _Script_AIModule::BehaviorTree*& get_BehaviorTree();
    bool get_bInjectAsRootBehaviorTree();
    void set_bInjectAsRootBehaviorTree(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
