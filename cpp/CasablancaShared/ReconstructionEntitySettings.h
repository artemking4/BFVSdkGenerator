// Object: ReconstructionEntitySettings
// ClassId: 5014
// RuntimeId: 8010
// TypeInfo: 0x0000000144D12200
#include "../Core/SystemSettings.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ReconstructionEntitySettings : public Core::SystemSettings {
        Float32 RepairFadeDuration; // 0x20
        Float32 BlockedFadeDuration; // 0x24
        Float32 DeployedOverlapDuration; // 0x28
        Float32 DeployedFadeOutDuration; // 0x2C
        Float32 VisualizationCullDistance; // 0x30
        Float32 ToolEquippedFadeDuration; // 0x34
        Float32 SpawnVisualizationDuration; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(ReconstructionEntitySettings) == 0x40);
}
#pragma pack(pop)