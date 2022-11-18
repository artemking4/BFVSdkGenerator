// Object: SquadCallinArtilleryTargetingTypeBase
// ClassId: 4905
// RuntimeId: 21219
// TypeInfo: 0x0000000144D35330
#include "../Core/DataContainer.h"
#include "../CasablancaShared/SquadCallinArtilleryTargetingType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadCallinArtilleryTargetingTypeBase : public Core::DataContainer {
        CasablancaShared::SquadCallinArtilleryTargetingType TargetingType; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(SquadCallinArtilleryTargetingTypeBase) == 0x20);
}
#pragma pack(pop)