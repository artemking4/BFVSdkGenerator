// Object: EncounterPlayerSpawnTypeTree
// ClassId: 823
// RuntimeId: 10269
// TypeInfo: 0x0000000144D0ACB0
#include "../CasablancaShared/FootprintTreeBase.h"
#include "../CasablancaShared/EncounterPlayerSpawnType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterPlayerSpawnTypeTree : public CasablancaShared::FootprintTreeBase {
        Array<CasablancaShared::EncounterPlayerSpawnType> Types; // 0x20
    }; // 0x28
    static_assert(sizeof(EncounterPlayerSpawnTypeTree) == 0x28);
}
#pragma pack(pop)