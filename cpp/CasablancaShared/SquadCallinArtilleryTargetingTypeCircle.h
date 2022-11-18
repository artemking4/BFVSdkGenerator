// Object: SquadCallinArtilleryTargetingTypeCircle
// ClassId: 4906
// RuntimeId: 60165
// TypeInfo: 0x0000000144D352B0
#include "../CasablancaShared/SquadCallinArtilleryTargetingTypeBase.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadCallinArtilleryTargetingTypeCircle : public CasablancaShared::SquadCallinArtilleryTargetingTypeBase {
        Float32 OuterImpactRadius; // 0x20
        Float32 InnerImpactRadius; // 0x24
    }; // 0x28
    static_assert(sizeof(SquadCallinArtilleryTargetingTypeCircle) == 0x28);
}
#pragma pack(pop)