// Object: BarrelRollManeuverEntityData
// ClassId: 2647
// RuntimeId: 14867
// TypeInfo: 0x0000000144C19530
#include "../BattleAIShared/DogFightManeuverEntityBaseData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class BarrelRollManeuverEntityData : public BattleAIShared::DogFightManeuverEntityBaseData {
        Float32 Duration; // 0x30
        Float32 Radius; // 0x34
        Float32 Distance; // 0x38
        Float32 RotationVelocity; // 0x3C
        Float32 MinAltitudeToRun; // 0x40
        Float32 MaxAltitudeToRun; // 0x44
    }; // 0x48
    static_assert(sizeof(BarrelRollManeuverEntityData) == 0x48);
}
#pragma pack(pop)