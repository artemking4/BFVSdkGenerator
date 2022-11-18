// Object: SquadCallinArtilleryTargetingTypeCircleUniformDistribution
// ClassId: 4907
// RuntimeId: 65358
// TypeInfo: 0x0000000144D35230
#include "../CasablancaShared/SquadCallinArtilleryTargetingTypeCircle.h"
#include "../CasablancaShared/SquadCallinArtilleryOrder.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadCallinArtilleryTargetingTypeCircleUniformDistribution : public CasablancaShared::SquadCallinArtilleryTargetingTypeCircle {
        CasablancaShared::SquadCallinArtilleryOrder Order; // 0x28
        Float32 AngleVariance; // 0x2C
        Float32 OffsetAngle; // 0x30
        Boolean UseRandomOffsetAngle; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(SquadCallinArtilleryTargetingTypeCircleUniformDistribution) == 0x38);
}
#pragma pack(pop)