// Object: AudioWheelLogicEntityData
// ClassId: 2071
// RuntimeId: 25722
// TypeInfo: 0x0000000144DF32F0
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/WheelSurfaceWaveData.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class AudioWheelLogicEntityData : public Entity::EntityData {
        Float32 DeltaThresholdForHeavyImpact; // 0x20
        Float32 DeltaThresholdForLightImpact; // 0x24
        DiceShooterShared::WheelSurfaceWaveData DefaultSurfaceWaveData; // 0x28
        Float32 TimeOnSurfaceThreshold; // 0x60
        Float32 IsSpinningThreshold; // 0x64
        Float32 IsMovingThreshold; // 0x68
        Float32 CullingDistance; // 0x6C
        Boolean EnableImpactEventsOnCreation; // 0x70
        Boolean OutputSurfaceLoops; // 0x71
        char pad_0x72[0x6];
    }; // 0x78
    static_assert(sizeof(AudioWheelLogicEntityData) == 0x78);
}
#pragma pack(pop)