// Object: BoatFloatPhysicsData
// ClassId: 1639
// RuntimeId: 19964
// TypeInfo: 0x0000000144E9B690
#include "../GameShared/HullFloatPhysicsData.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace GameShared {
    class BoatFloatPhysicsData : public GameShared::HullFloatPhysicsData {
        Float32 FrontRatio; // 0xA0
        Float32 DivingSpeed; // 0xA4
        Float32 MaxDivingBoyancyLoss; // 0xA8
        Int32 HullSections; // 0xAC
    }; // 0xB0
    static_assert(sizeof(BoatFloatPhysicsData) == 0xB0);
}
#pragma pack(pop)