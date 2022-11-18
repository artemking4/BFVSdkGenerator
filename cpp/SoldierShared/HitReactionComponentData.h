// Object: HitReactionComponentData
// ClassId: 1784
// RuntimeId: 32717
// TypeInfo: 0x0000000144F45BB0
#include "../Entity/GameComponentData.h"
#include "../SoldierShared/HitReactionComponentBinding.h"
#include "../Global/Boolean.h"
#include "../WeaponShared/AntHitReactionWeaponType.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class HitReactionComponentData : public Entity::GameComponentData {
        SoldierShared::HitReactionComponentBinding HitReactionBinding; // 0x80
        WeaponShared::AntHitReactionWeaponType ManuallyTriggeredHitReactionType; // 0x1C0
        Boolean Enabled; // 0x1C4
        char pad_0x1C5[0xB];
    }; // 0x1D0
    static_assert(sizeof(HitReactionComponentData) == 0x1D0);
}
#pragma pack(pop)