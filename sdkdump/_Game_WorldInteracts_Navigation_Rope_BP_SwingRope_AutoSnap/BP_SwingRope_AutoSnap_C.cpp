#include "..\FUObjectArray.hpp"
#include "..\_Game_WorldInteracts_Navigation_Rope_BP_BaseRope\BP_BaseRope_C.hpp"
#include "BP_SwingRope_AutoSnap_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Game_WorldInteracts_Navigation_Rope_BP_SwingRope_AutoSnap::BP_SwingRope_AutoSnap_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/Navigation/Rope/BP_SwingRope_AutoSnap.BP_SwingRope_AutoSnap_C");
    return result;
}
