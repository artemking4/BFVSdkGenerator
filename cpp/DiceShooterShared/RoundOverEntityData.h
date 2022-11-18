// Object: RoundOverEntityData
// ClassId: 3136
// RuntimeId: 11845
// TypeInfo: 0x0000000144DF0C50
#include "../Entity/EntityData.h"
#include "../GameShared/TeamId.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class RoundOverEntityData : public Entity::EntityData {
        GameShared::TeamId Team; // 0x20
        Int32 Team1Score; // 0x24
        Int32 Team2Score; // 0x28
        Int32 Team1Outcome; // 0x2C
        Int32 Team2Outcome; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(RoundOverEntityData) == 0x38);
}
#pragma pack(pop)