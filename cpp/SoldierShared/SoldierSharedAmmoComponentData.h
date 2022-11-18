// Object: SoldierSharedAmmoComponentData
// ClassId: 1845
// RuntimeId: 46907
// TypeInfo: 0x0000000144F44C30
#include "../Entity/GameComponentData.h"
#include "../SoldierShared/SharedAmmoList.h"
#include "../SoldierShared/AmmoPouch.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class SoldierSharedAmmoComponentData : public Entity::GameComponentData {
        SoldierShared::SharedAmmoList SharedAmmoList; // 0x80
        Array<SoldierShared::AmmoPouch> pouches; // 0x88
        Float32 MaxWeight; // 0x90
        char pad_0x94[0xC];
    }; // 0xA0
    static_assert(sizeof(SoldierSharedAmmoComponentData) == 0xA0);
}
#pragma pack(pop)