#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIDefaultSpawner.hpp"
#include "RsAISpawner.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIDefaultSpawner::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIDefaultSpawner");
    return result;
}
