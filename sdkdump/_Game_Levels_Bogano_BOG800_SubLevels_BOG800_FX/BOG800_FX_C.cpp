#include "..\FUObjectArray.hpp"
#include "BOG800_FX_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
_Script_CoreUObject::Class* _Game_Levels_Bogano_BOG800_SubLevels_BOG800_FX::BOG800_FX_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Bogano/BOG800/SubLevels/BOG800_FX.BOG800_FX_C");
    return result;
}
