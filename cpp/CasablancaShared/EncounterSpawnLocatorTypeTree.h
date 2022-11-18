// Object: EncounterSpawnLocatorTypeTree
// ClassId: 824
// RuntimeId: 15161
// TypeInfo: 0x0000000144D0B5B0
#include "../CasablancaShared/FootprintTreeBase.h"
#include "../CasablancaShared/EncounterSpawnLocatorType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterSpawnLocatorTypeTree : public CasablancaShared::FootprintTreeBase {
        Array<CasablancaShared::EncounterSpawnLocatorType> Types; // 0x20
    }; // 0x28
    static_assert(sizeof(EncounterSpawnLocatorTypeTree) == 0x28);
}
#pragma pack(pop)