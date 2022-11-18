// Object: SpottingTargetComponentData
// ClassId: 1854
// RuntimeId: 53583
// TypeInfo: 0x0000000144D35730
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BoundingSphereDistanceScaleData.h"
#include "../Global/Int32.h"
#include "../Core/Vec3.h"
#include "../CasablancaShared/SpotType.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class SpottingTargetComponentData : public Entity::GameComponentData {
        Core::Vec3 OverrideTargetPosition; // 0x80
        Float32 SquadSpottedTime; // 0x90
        Float32 ActiveSpottedTime; // 0x94
        Float32 PassiveSpottedTime; // 0x98
        Float32 UnconfirmedSpottedTime; // 0x9C
        Float32 UnspotMeTime; // 0xA0
        Float32 SquadSpottedTimeMultiplier; // 0xA4
        Float32 ActiveSpottedTimeMultiplier; // 0xA8
        Float32 PassiveSpottedTimeMultiplier; // 0xAC
        Float32 UnconfirmedSpottedTimeMultiplier; // 0xB0
        Float32 PassiveSpottingAcquireTimeMultiplier; // 0xB4
        Float32 SpotOnFireMultiplier; // 0xB8
        Float32 SquadSpottedTimeAddition; // 0xBC
        Float32 ActiveSpottedTimeAddition; // 0xC0
        Float32 PassiveSpottedTimeAddition; // 0xC4
        Float32 UnconfirmedSpottedTimeAddition; // 0xC8
        Float32 SpotOnFireAddition; // 0xCC
        CasablancaShared::BoundingSphereDistanceScaleData BoundingSphereDistanceScaling; // 0xD0
        Float32 RadarSpottedSpeedThresholdOverride; // 0xE0
        Float32 OutlineColor1Distance; // 0xE4
        Float32 OutlineColor2Distance; // 0xE8
        Float32 OutlineColor3Distance; // 0xEC
        Int32 OutlineColorIndex; // 0xF0
        CasablancaShared::SpotType SpotMeType; // 0xF4
        Boolean TargetBoundingBoxCenter; // 0xF8
        Boolean UseEntityBoundingBox; // 0xF9
        Boolean AllowBoundingSphereTest; // 0xFA
        Boolean WeaponFireSpottingEnabled; // 0xFB
        Boolean SquadSpottingOutlineOcclusion; // 0xFC
        Boolean OnlyShowOutlineWhenOccluded; // 0xFD
        Boolean SquadSpottingOutlineEnabled; // 0xFE
        Boolean OutlineColorOnDistanceEnabled; // 0xFF
    }; // 0x100
    static_assert(sizeof(SpottingTargetComponentData) == 0x100);
}
#pragma pack(pop)