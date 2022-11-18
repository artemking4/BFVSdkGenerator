// Object: SquadCallinArtilleryData
// ClassId: 398
// RuntimeId: 22614
// TypeInfo: 0x0000000144D35130
#include "../CasablancaShared/SquadCallinBaseData.h"
#include "../CasablancaShared/SquadCallinArtillerySequenceData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadCallinArtilleryData : public CasablancaShared::SquadCallinBaseData {
        Array<CasablancaShared::SquadCallinArtillerySequenceData> Sequence; // 0x70
    }; // 0x78
    static_assert(sizeof(SquadCallinArtilleryData) == 0x78);
}
#pragma pack(pop)