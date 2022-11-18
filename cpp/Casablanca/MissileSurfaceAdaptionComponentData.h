// Object: MissileSurfaceAdaptionComponentData
// ClassId: 1807
// RuntimeId: 45713
// TypeInfo: 0x0000000144C7D480
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class MissileSurfaceAdaptionComponentData : public Entity::GameComponentData {
        Float32 TargetElevation; // 0x80
        Float32 MinElevationDifference; // 0x84
        Float32 DisableNearTargetRadius; // 0x88
        Float32 LookAheadTime; // 0x8C
        Int32 LookAheadSteps; // 0x90
        Boolean EnableSurfaceAdaption; // 0x94
        Boolean DisableNearTarget; // 0x95
        char pad_0x96[0xA];
    }; // 0xA0
    static_assert(sizeof(MissileSurfaceAdaptionComponentData) == 0xA0);
}
#pragma pack(pop)