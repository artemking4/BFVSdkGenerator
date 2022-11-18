// Object: DakarReviveEntityData
// ClassId: 2584
// RuntimeId: 12805
// TypeInfo: 0x0000000144D505D0
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../GameShared/UnlockAssetBase.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DakarReviveEntityData : public Entity::EntityData {
        Float32 MaxDistance; // 0x20
        Float32 SyringeReviveHpModifier; // 0x24
        Float32 BuddyReviveHpModifier; // 0x28
        Float32 SyringeReviveDuration; // 0x2C
        Float32 BuddyReviveDuration; // 0x30
        char pad_0x34[0x4];
        MotionMachineShared::FloatChannelData DistanceToGroundChannel; // 0x38
        Float32 MaxDistanceToGround; // 0x40
        char pad_0x44[0x4];
        Array<GameShared::UnlockAssetBase> IgnoreDamageTypes; // 0x48
    }; // 0x50
    static_assert(sizeof(DakarReviveEntityData) == 0x50);
}
#pragma pack(pop)