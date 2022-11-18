// Object: WeaponGadgetBase
// ClassId: 360
// RuntimeId: 63158
// TypeInfo: 0x0000000144C17FB0
#include "../BattleAIShared/GadgetBase.h"
#include "../SoldierShared/SoldierWeaponUnlockAsset.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class WeaponGadgetBase : public BattleAIShared::GadgetBase {
        SoldierShared::SoldierWeaponUnlockAsset Weapon; // 0x40
        Float32 SwitchWeaponAllowedWaitTime; // 0x48
        Float32 SwitchWeaponAnimationTime; // 0x4C
        Float32 PreFireWaitTime; // 0x50
        Float32 FireWaitTime; // 0x54
        Float32 PostFireWaitTime; // 0x58
        Float32 MisfireMinDistFromTarget; // 0x5C
        Float32 MisfireMaxDistFromTarget; // 0x60
        Boolean OnlyUseFromCover; // 0x64
        Boolean OnlyUseFromOpenCover; // 0x65
        char pad_0x66[0x2];
    }; // 0x68
    static_assert(sizeof(WeaponGadgetBase) == 0x68);
}
#pragma pack(pop)