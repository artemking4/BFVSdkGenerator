// Object: DiceAudioSettings
// ClassId: 4977
// RuntimeId: 1826
// TypeInfo: 0x0000000144DB6810
#include "../Core/SystemSettings.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DiceAudioSettings : public Core::SystemSettings {
        Uint32 ObstructionMaxQueriesPerFrame; // 0x20
        Float32 ObstructionQueryStageThreshold; // 0x24
        Float32 ObstructionMaxObstruction; // 0x28
        Float32 ObstructionMaxObstructionDistance; // 0x2C
        Float32 ObstructionRelativeVelocityThreshold; // 0x30
        Float32 ObstructionMaxInactiveTime; // 0x34
        Float32 ObstructionMultiStageRaycastsOuterDistance; // 0x38
        Float32 ObstructionMultiStageRaycastsSecondStageScalar; // 0x3C
        Float32 ObstructionMultiStageRaycastsAttackSpeed; // 0x40
        Float32 ObstructionMultiStageRaycastsReleaseSpeed; // 0x44
        Float32 ObstructionMultiStageRaycastsFirstStageAngle; // 0x48
        Float32 ObstructionMultiStageRaycastsMaxObstruction; // 0x4C
        Boolean ObstructionUseRadiusAngleAsObstructionValue; // 0x50
        Boolean ObstructionMultiStageRaycastsEnabled; // 0x51
        char pad_0x52[0x6];
    }; // 0x58
    static_assert(sizeof(DiceAudioSettings) == 0x58);
}
#pragma pack(pop)