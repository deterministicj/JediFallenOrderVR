#include "..\FUObjectArray.hpp"
#include "BP_AIResource_Taunt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SwGame\SwAIResource_Taunt.hpp"
_Script_CoreUObject::Class* _Game_Characters__Shared_Logic_Resources_BP_AIResource_Taunt::BP_AIResource_Taunt_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/_Shared/Logic/Resources/BP_AIResource_Taunt.BP_AIResource_Taunt_C");
    return result;
}
