// Object: ForceOverTimePhysicsActionData
// ClassId: 2952
// RuntimeId: 26839
// TypeInfo: 0x0000000144DED7A0
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../DiceShooterShared/PhysicsQuantity.h"
#include "../DiceShooterShared/PhysicsActionAxis.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../DiceShooterShared/PhysicsSpace.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class ForceOverTimePhysicsActionData : public DiceShooterShared::PhysicsActionBaseData {
        char pad_0x58[0x8];
        Core::Vec3 LinearOffset; // 0x60
        Int32 InputAction; // 0x70
        Float32 InputDeadZone; // 0x74
        DiceShooterShared::PhysicsQuantity Quantity; // 0x78
        DiceShooterShared::PhysicsActionAxis Axis; // 0x7C
        Float32 ForceStrength; // 0x80
        Float32 ForceTime; // 0x84
        Float32 CooldownTime; // 0x88
        DiceShooterShared::PhysicsSpace LinearOffsetSpace; // 0x8C
        Boolean ScaleOnMass; // 0x90
        char pad_0x91[0xF];
    }; // 0xA0
    static_assert(sizeof(ForceOverTimePhysicsActionData) == 0xA0);
}
#pragma pack(pop)