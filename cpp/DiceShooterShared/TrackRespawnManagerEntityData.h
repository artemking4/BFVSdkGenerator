// Object: TrackRespawnManagerEntityData
// ClassId: 3582
// RuntimeId: 42549
// TypeInfo: 0x0000000144DF94C0
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../DiceShooterShared/TrackRespawnType.h"
#include "../DiceShooterShared/CoopCatchupType.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class TrackRespawnManagerEntityData : public Entity::EntityData {
        Float32 OtherPlayerSpawnDistanceThreshold; // 0x20
        DiceShooterShared::TrackRespawnType RespawnType; // 0x24
        Float32 NodeForwardOneAngleCosineSpace; // 0x28
        DiceShooterShared::CoopCatchupType CatchupType; // 0x2C
        Float32 CatchupDistanceThreshold; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(TrackRespawnManagerEntityData) == 0x38);
}
#pragma pack(pop)