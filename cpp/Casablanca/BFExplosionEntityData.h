// Object: BFExplosionEntityData
// ClassId: 3371
// RuntimeId: 24783
// TypeInfo: 0x0000000144C33770
#include "../GameShared/ExplosionEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Casablanca {
    class BFExplosionEntityData : public GameShared::ExplosionEntityData {
        Core::Vec3 BlastDirection; // 0x110
        Float32 UnspottableTime; // 0x120
        Float32 AttachableFlamesBlastRadiusMultiplier; // 0x124
        Uint32 NumAttachableFlamesUp; // 0x128
        Uint32 NumAttachableFlamesSide; // 0x12C
        Uint32 NumAttachableFlamesDown; // 0x130
        Uint32 NumAttachableFlamesNarrowDown; // 0x134
        Float32 AttachableFlameTimeToLiveMultiplier; // 0x138
        Float32 FlameExclusiveRadius; // 0x13C
        Float32 BlastDirectionAngle; // 0x140
        Float32 OutsideDirectionBlastRadiusScale; // 0x144
        Boolean IsCausingSuppression; // 0x148
        Boolean UnspotsOnExplode; // 0x149
        Boolean SpotsOnExplode; // 0x14A
        Boolean IgnoreUndergroundTargets; // 0x14B
        Boolean AttachableFlamesWorldAligned; // 0x14C
        char pad_0x14D[0x3];
    }; // 0x150
    static_assert(sizeof(BFExplosionEntityData) == 0x150);
}
#pragma pack(pop)