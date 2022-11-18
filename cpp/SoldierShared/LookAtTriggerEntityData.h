// Object: LookAtTriggerEntityData
// ClassId: 3467
// RuntimeId: 53466
// TypeInfo: 0x0000000144F4A140
#include "../GameShared/CharacterLookAtTriggerEntityData.h"
#include "../Core/Realm.h"
#include "../SoldierShared/SoldierWeaponUnlockAsset.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class LookAtTriggerEntityData : public GameShared::CharacterLookAtTriggerEntityData {
        Core::Realm Realm; // 0x90
        char pad_0x94[0x4];
        SoldierShared::SoldierWeaponUnlockAsset SoldierWeapon; // 0x98
        Array<Uint32> ZoomLevels; // 0xA0
        char pad_0xA8[0x8];
    }; // 0xB0
    static_assert(sizeof(LookAtTriggerEntityData) == 0xB0);
}
#pragma pack(pop)