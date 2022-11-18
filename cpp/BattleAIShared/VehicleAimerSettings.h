// Object: VehicleAimerSettings
// ClassId: 5562
// RuntimeId: 8741
// TypeInfo: 0x0000000144C065E0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class VehicleAimerSettings : public Core::DataContainer {
        Float32 MinPrecisionToFire; // 0x18
        Boolean IsParabolic; // 0x1C
        Boolean AimHigh; // 0x1D
        Boolean TrackTowardsTarget; // 0x1E
        Boolean TrackBeyondTarget; // 0x1F
        Boolean AimThroughShootSpace; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(VehicleAimerSettings) == 0x28);
}
#pragma pack(pop)