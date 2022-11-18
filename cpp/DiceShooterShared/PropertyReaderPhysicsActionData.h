// Object: PropertyReaderPhysicsActionData
// ClassId: 2960
// RuntimeId: 56007
// TypeInfo: 0x0000000144DED720
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PropertyReaderPhysicsActionData : public DiceShooterShared::PhysicsActionBaseData {
        Float32 AccelerationInertia; // 0x58
        Boolean MuteValuesDuringCorrection; // 0x5C
        char pad_0x5D[0x3];
    }; // 0x60
    static_assert(sizeof(PropertyReaderPhysicsActionData) == 0x60);
}
#pragma pack(pop)