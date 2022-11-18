// Object: VelocityOnInputPhysicsActionData
// ClassId: 2969
// RuntimeId: 27405
// TypeInfo: 0x0000000144DED8A0
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/PhysicsQuantity.h"
#include "../DiceShooterShared/PhysicsActionAxis.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class VelocityOnInputPhysicsActionData : public DiceShooterShared::PhysicsActionBaseData {
        Int32 InputAction; // 0x58
        DiceShooterShared::PhysicsQuantity Quantity; // 0x5C
        DiceShooterShared::PhysicsActionAxis Axis; // 0x60
        Float32 TargetSpeed; // 0x64
        Float32 InputSmoothTime; // 0x68
        Float32 NoInputSmoothTime; // 0x6C
        Boolean IgnoreInput; // 0x70
        char pad_0x71[0x7];
    }; // 0x78
    static_assert(sizeof(VelocityOnInputPhysicsActionData) == 0x78);
}
#pragma pack(pop)