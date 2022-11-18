// Object: BucketSystemSettings
// ClassId: 318
// RuntimeId: 1212
// TypeInfo: 0x0000000144C19A30
#include "../Core/DataContainerPolicyAsset.h"
#include "../BattleAIShared/DamageBucket.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class BucketSystemSettings : public Core::DataContainerPolicyAsset {
        Array<BattleAIShared::DamageBucket> Buckets; // 0x20
        Float32 SprintSpeed; // 0x28
        Float32 MovingVehicleSpeed; // 0x2C
    }; // 0x30
    static_assert(sizeof(BucketSystemSettings) == 0x30);
}
#pragma pack(pop)