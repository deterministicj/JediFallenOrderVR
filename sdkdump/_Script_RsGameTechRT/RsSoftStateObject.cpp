#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsSoftStateObject.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSoftStateObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsSoftStateObject");
    return result;
}
