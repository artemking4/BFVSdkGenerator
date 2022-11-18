// Object: SoldierReviveEntityData
// ClassId: 3222
// RuntimeId: 62839
// TypeInfo: 0x0000000144C333F0
#include "../Entity/EntityData.h"
#include "../Casablanca/SoldierReviveBinding.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../WeaponShared/WeaponSlot.h"
#include "../Global/Guid.h"
#include "../CasablancaShared/BFUIPlayerObject.h"
#include "../MotionMachineShared/FloatChannelData.h"

#pragma pack(push, 8)
namespace Casablanca {
    class SoldierReviveEntityData : public Entity::EntityData {
        Casablanca::SoldierReviveBinding Binding; // 0x20
        Float32 MaxDistance; // 0x188
        Float32 MaxVerticalDistance; // 0x18C
        GameShared::UnlockAssetBase BuddyReviveUnlockAsset; // 0x190
        Float32 SyringeReviveHpModifier; // 0x198
        Float32 BuddyReviveHpModifier; // 0x19C
        Float32 SyringeReviveDuration; // 0x1A0
        Float32 BuddyReviveDuration; // 0x1A4
        Array<WeaponShared::WeaponSlot> ProhibedWeaponSlotsAfterRevive; // 0x1A8
        Array<Guid> ProhibitedWeaponUnlockGuidsAfterRevive; // 0x1B0
        CasablancaShared::BFUIPlayerObject FollowedPlayer; // 0x1B8
        Float32 MaxReviveDuration; // 0x1C0
        Float32 MinReviveDuration; // 0x1C4
        MotionMachineShared::FloatChannelData DistanceToGroundChannel; // 0x1C8
        Float32 MaxDistanceToGround; // 0x1D0
        Boolean RequireBuddyReviveUnlockAsset; // 0x1D4
        Boolean HasFollowedPlayer; // 0x1D5
        char pad_0x1D6[0x2];
    }; // 0x1D8
    static_assert(sizeof(SoldierReviveEntityData) == 0x1D8);
}
#pragma pack(pop)