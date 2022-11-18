// Object: LandingFlapData
// ClassId: 4200
// RuntimeId: 25637
// TypeInfo: 0x0000000144E9B510
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class LandingFlapData : public Core::DataContainer {
        Float32 ActivationHeight; // 0x18
        Float32 HeightTolerance; // 0x1C
        Float32 ActivationVelocity; // 0x20
        Float32 VelocityTolerance; // 0x24
    }; // 0x28
    static_assert(sizeof(LandingFlapData) == 0x28);
}
#pragma pack(pop)