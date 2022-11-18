// Object: FlyToManeuverEntityData
// ClassId: 2653
// RuntimeId: 49760
// TypeInfo: 0x0000000144C18B30
#include "../BattleAIShared/DogFightManeuverEntityBaseData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../GameShared/PID.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class FlyToManeuverEntityData : public BattleAIShared::DogFightManeuverEntityBaseData {
        Float32 ArrivedDistance; // 0x30
        Float32 Speed; // 0x34
        char pad_0x38[0x8];
        Core::Vec3 Destination; // 0x40
        Float32 ExtrapolationTime; // 0x50
        Float32 ExtrapolationDeltaTime; // 0x54
        Float32 ChaseDistance; // 0x58
        GameShared::PID ThrottlePID; // 0x5C
        Boolean ShouldChaseDestination; // 0x7C
        Boolean ExtrapolateRotation; // 0x7D
        Boolean ExtrapolateTargetPosition; // 0x7E
        char pad_0x7F[0x1];
    }; // 0x80
    static_assert(sizeof(FlyToManeuverEntityData) == 0x80);
}
#pragma pack(pop)