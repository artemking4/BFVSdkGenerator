// Object: CoverAutoGenVolumeShapeData
// ClassId: 1666
// RuntimeId: 763
// TypeInfo: 0x0000000144C07460
#include "../Entity/VolumeVectorShapeData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class CoverAutoGenVolumeShapeData : public Entity::VolumeVectorShapeData {
        Float32 OpenCoverPlacementStepOverride; // 0x38
        Float32 OpenCoverVoxelErosionDistanceOverride; // 0x3C
        Boolean GenerateOpenCovers; // 0x40
        Boolean GenerateRealCovers; // 0x41
        Boolean GenerateLedgeCovers; // 0x42
        Boolean GenerateVaultOverLinks; // 0x43
        Boolean GenerateLedgeJumpDownLinks; // 0x44
        char pad_0x45[0x3];
    }; // 0x48
    static_assert(sizeof(CoverAutoGenVolumeShapeData) == 0x48);
}
#pragma pack(pop)