// Object: CoverConstantData
// ClassId: 229
// RuntimeId: 35582
// TypeInfo: 0x0000000144C05F60
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/VaultOverPathLinkConfig.h"
#include "../BattleAIShared/LedgeJumpDownPathLinkConfig.h"
#include "../BattleAIShared/CoverZones.h"
#include "../BattleAIShared/FiringHeights.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class CoverConstantData : public Core::Asset {
        Float32 SlotSize; // 0x20
        Float32 SlotSpacing; // 0x24
        Float32 SlotEdgeDistance; // 0x28
        Float32 SlotBlockedEdgeDistance; // 0x2C
        Float32 MinimumProtectedCoverWidth; // 0x30
        Float32 ProneAllowFireHeight; // 0x34
        Float32 OpenAllowFireHeight; // 0x38
        Float32 CrouchHeight; // 0x3C
        Float32 CrouchAllowFireHeight; // 0x40
        Float32 MediumHeight; // 0x44
        Float32 MediumAllowFireHeight; // 0x48
        Float32 StandHeight; // 0x4C
        Float32 FireHeightProne; // 0x50
        Float32 FireHeightOpen; // 0x54
        Float32 FireHeightCrouch; // 0x58
        Float32 FireHeightMedium; // 0x5C
        Float32 FireHeightStanding; // 0x60
        Float32 MinFreeShootDist; // 0x64
        Float32 FireStepOutDist; // 0x68
        Float32 MaxFireSideTestAngle; // 0x6C
        Int32 FireSideSampleCount; // 0x70
        Int32 PathfindingReferenceLayer; // 0x74
        Float32 TerrainHeightSamplingStep; // 0x78
        Float32 ChunkSize; // 0x7C
        Float32 VoxelSize; // 0x80
        Float32 VoxelHeight; // 0x84
        Int32 VoxelSpanMergingMaxSeparation; // 0x88
        Float32 MaxStepHeightOverride; // 0x8C
        Float32 MinIslandSurfaceAreaExtra; // 0x90
        Float32 ContourSimplificationMaxAreaDelta; // 0x94
        Float32 ContourSimplificationXZErrorIn; // 0x98
        Float32 ContourSimplificationXZErrorOut; // 0x9C
        Float32 ContourSimplificationYError; // 0xA0
        Float32 OpenCoverMinSpacingDist; // 0xA4
        Int32 OpenCoverVoxelSamplingStep; // 0xA8
        Float32 OpenCoverVoxelErosionDistance; // 0xAC
        Float32 OpenCoverMinDistToManualCover; // 0xB0
        Float32 MaxRealCoverContourSlope; // 0xB4
        Float32 EdgeProbeSampleSpacing; // 0xB8
        Float32 WallOcclusionCheckDist; // 0xBC
        Float32 MinWallOcclusionRatio; // 0xC0
        Float32 MaxWallHoleSize; // 0xC4
        Float32 OcclusionCheckingGroundDistanceOffset; // 0xC8
        Float32 FreeShootHeightRange; // 0xCC
        Float32 LedgeForwardClearanceDist; // 0xD0
        Float32 LedgeDownwardClearanceDist; // 0xD4
        Float32 LedgeDownwardClearanceTestRange; // 0xD8
        Float32 LedgeCoverPlacementStartDistOnEdge; // 0xDC
        Float32 LedgeCoverPlacementStep; // 0xE0
        Float32 LedgeCoverPlacementDistFromLedge; // 0xE4
        BattleAIShared::VaultOverPathLinkConfig VaultOverPathLinkConfig; // 0xE8
        BattleAIShared::LedgeJumpDownPathLinkConfig LedgeJumpDownPathLinkConfig; // 0x120
        Int32 MaxCoversInMemory; // 0x150
        char pad_0x154[0x4];
        BattleAIShared::CoverZones CoverZones; // 0x158
        BattleAIShared::FiringHeights ApproximatedFiringHeights; // 0x160
        Boolean UseRayCastMeshWhenAvailable; // 0x178
        char pad_0x179[0x7];
    }; // 0x180
    static_assert(sizeof(CoverConstantData) == 0x180);
}
#pragma pack(pop)