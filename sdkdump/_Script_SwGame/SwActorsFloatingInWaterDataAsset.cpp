#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "SwActorsFloatingInWaterDataAsset.hpp"
void* _Script_SwGame::SwActorsFloatingInWaterDataAsset::get_Parameters() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_SwGame::SwActorsFloatingInWaterDataAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwActorsFloatingInWaterDataAsset");
    return result;
}
