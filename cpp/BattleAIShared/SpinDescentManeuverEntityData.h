// Object: SpinDescentManeuverEntityData
// ClassId: 2660
// RuntimeId: 25192
// TypeInfo: 0x0000000144C18530
#include "../BattleAIShared/DogFightManeuverEntityBaseData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class SpinDescentManeuverEntityData : public BattleAIShared::DogFightManeuverEntityBaseData {
        Float32 MinAltitudeToRun; // 0x30
        Float32 BreakOutAltitude; // 0x34
        char pad_0x38[0x8];
        Core::Vec3 LocalFlyToPos; // 0x40
        Float32 MaxDuration; // 0x50
        Boolean BreakOutOnCollisionAvoidance; // 0x54
        char pad_0x55[0xB];
    }; // 0x60
    static_assert(sizeof(SpinDescentManeuverEntityData) == 0x60);
}
#pragma pack(pop)