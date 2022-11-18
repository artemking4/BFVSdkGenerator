// Object: EncounterTypeTree
// ClassId: 825
// RuntimeId: 58780
// TypeInfo: 0x0000000144D09E30
#include "../CasablancaShared/FootprintTreeBase.h"
#include "../CasablancaShared/EncounterType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterTypeTree : public CasablancaShared::FootprintTreeBase {
        Array<CasablancaShared::EncounterType> Types; // 0x20
    }; // 0x28
    static_assert(sizeof(EncounterTypeTree) == 0x28);
}
#pragma pack(pop)