// Object: ForcePhysicsActionData
// ClassId: 2953
// RuntimeId: 61767
// TypeInfo: 0x0000000144DEDC20
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../Global/Int32.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class ForcePhysicsActionData : public DiceShooterShared::PhysicsActionBaseData {
        char pad_0x58[0x8];
        Core::Vec3 Force; // 0x60
        Int32 InputAction; // 0x70
        char pad_0x74[0xC];
    }; // 0x80
    static_assert(sizeof(ForcePhysicsActionData) == 0x80);
}
#pragma pack(pop)