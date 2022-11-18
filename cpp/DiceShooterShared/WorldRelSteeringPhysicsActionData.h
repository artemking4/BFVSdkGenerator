// Object: WorldRelSteeringPhysicsActionData
// ClassId: 2970
// RuntimeId: 2433
// TypeInfo: 0x0000000144DED920
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Core/AudioCurve.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class WorldRelSteeringPhysicsActionData : public DiceShooterShared::PhysicsActionBaseData {
        Int32 InputActionPitch; // 0x58
        Int32 InputActionYaw; // 0x5C
        Float32 MaxYawSpeed; // 0x60
        Float32 MaxPitchSpeed; // 0x64
        Float32 YawSmoothTime; // 0x68
        Float32 YawSmoothTimeNoInput; // 0x6C
        Float32 PitchSmoothTime; // 0x70
        Float32 PitchSmoothTimeNoInput; // 0x74
        Core::AudioCurve MaxRotationSpeedCurve; // 0x78
    }; // 0x88
    static_assert(sizeof(WorldRelSteeringPhysicsActionData) == 0x88);
}
#pragma pack(pop)