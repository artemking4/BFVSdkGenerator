// Object: FiringConstraintsInfoData
// ClassId: 499
// RuntimeId: 32754
// TypeInfo: 0x0000000144F449B0
#include "../Core/Asset.h"
#include "../SoldierShared/SoldierWeaponUnlockAsset.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class FiringConstraintsInfoData : public Core::Asset {
        Array<SoldierShared::SoldierWeaponUnlockAsset> IgnoreFiringConstraintsWeapons; // 0x20
    }; // 0x28
    static_assert(sizeof(FiringConstraintsInfoData) == 0x28);
}
#pragma pack(pop)