// Object: SimpleBuoyancyPhysicsActionData
// ClassId: 2964
// RuntimeId: 22278
// TypeInfo: 0x0000000144DEDB20
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class SimpleBuoyancyPhysicsActionData : public DiceShooterShared::PhysicsActionBaseData {
        Float32 DesiredFractionSubmerged; // 0x58
        Float32 WaterDrag; // 0x5C
    }; // 0x60
    static_assert(sizeof(SimpleBuoyancyPhysicsActionData) == 0x60);
}
#pragma pack(pop)