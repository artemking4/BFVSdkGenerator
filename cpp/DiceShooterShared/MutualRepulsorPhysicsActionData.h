// Object: MutualRepulsorPhysicsActionData
// ClassId: 2959
// RuntimeId: 11758
// TypeInfo: 0x0000000144DED220
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../Core/AudioCurve.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class MutualRepulsorPhysicsActionData : public DiceShooterShared::PhysicsActionBaseData {
        Core::AudioCurve SpeedToForceCurve; // 0x58
        Core::AudioCurve DistanceToForceCurve; // 0x68
        Float32 ForceMultiplier; // 0x78
        char pad_0x7C[0x4];
    }; // 0x80
    static_assert(sizeof(MutualRepulsorPhysicsActionData) == 0x80);
}
#pragma pack(pop)