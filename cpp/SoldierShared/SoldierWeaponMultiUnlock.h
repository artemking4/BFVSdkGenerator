// Object: SoldierWeaponMultiUnlock
// ClassId: 454
// RuntimeId: 1226
// TypeInfo: 0x0000000144F4A040
#include "../GameShared/UnlockUserDataBase.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../GameShared/UnlockAssetPair.h"
#include "../SoldierShared/SoldierWeaponReplacementMap.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierWeaponMultiUnlock : public GameShared::UnlockUserDataBase {
        GameShared::UnlockAssetBase First; // 0x20
        Array<GameShared::UnlockAssetPair> UnlockAssetPairs; // 0x28
        Array<SoldierShared::SoldierWeaponReplacementMap> WeaponReplacements; // 0x30
    }; // 0x38
    static_assert(sizeof(SoldierWeaponMultiUnlock) == 0x38);
}
#pragma pack(pop)