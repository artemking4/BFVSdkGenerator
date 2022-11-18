// Object: SimpleEnginePhysicsActionData
// ClassId: 2965
// RuntimeId: 36594
// TypeInfo: 0x0000000144DED9A0
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class SimpleEnginePhysicsActionData : public DiceShooterShared::PhysicsActionBaseData {
        Int32 InputAction; // 0x58
        Float32 SpeedIdle; // 0x5C
        Float32 SpeedMin; // 0x60
        Float32 SpeedMax; // 0x64
        Float32 AccelerationSmoothTime; // 0x68
        Float32 DeaccelerationSmoothTime; // 0x6C
        Float32 SpeedBoostWhileTurning; // 0x70
        char pad_0x74[0x4];
    }; // 0x78
    static_assert(sizeof(SimpleEnginePhysicsActionData) == 0x78);
}
#pragma pack(pop)