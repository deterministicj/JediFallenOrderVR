#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "SwAnimNotify_ShootBlasterEnd.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwAnimNotify_ShootBlasterEnd::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAnimNotify_ShootBlasterEnd");
    return result;
}
