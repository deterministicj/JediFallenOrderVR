#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwSimpleDestructible_PlayAnimationParameters {
    private: char pad_0[0x28]; public:
    bool get_Activate();
    void set_Activate(bool value);
    void* get_SkeletalMeshComponentName();
    void* get_PlayOnlyForSpecificDamageSourceType();
    _Script_Engine::AnimationAsset*& get_AnimationToPlay();
    bool get_StartPhysicsOnThisComponentAtTheEndOfAnimation();
    void set_StartPhysicsOnThisComponentAtTheEndOfAnimation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
