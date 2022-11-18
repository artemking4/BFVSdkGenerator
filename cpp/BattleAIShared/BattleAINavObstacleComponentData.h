// Object: BattleAINavObstacleComponentData
// ClassId: 1721
// RuntimeId: 53013
// TypeInfo: 0x0000000144C12B00
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/AINavObstaclePenalty.h"
#include "../Core/Vec3.h"
#include "../BattleAIShared/AIPathfindingLayer.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class BattleAINavObstacleComponentData : public Entity::GameComponentData {
        Core::Vec3 BoundingVolumeOffset; // 0x80
        Core::Vec3 BoundingVolumeExtentOverride; // 0x90
        Core::Vec3 BoundingVolumePadding; // 0xA0
        BattleAIShared::AINavObstaclePenalty Penalty; // 0xB0
        char pad_0xB4[0x4];
        Array<BattleAIShared::AIPathfindingLayer> AffectedLayers; // 0xB8
        Float32 ExtrapolateDistance; // 0xC0
        Float32 ReplaceDistance; // 0xC4
        Float32 ReplaceAngle; // 0xC8
        Boolean EnableOnInit; // 0xCC
        Boolean IsPathfinding; // 0xCD
        Boolean EnableTracking; // 0xCE
        Boolean EnableTrackRotation; // 0xCF
        Boolean EnableMovementObstacle; // 0xD0
        char pad_0xD1[0xF];
    }; // 0xE0
    static_assert(sizeof(BattleAINavObstacleComponentData) == 0xE0);
}
#pragma pack(pop)