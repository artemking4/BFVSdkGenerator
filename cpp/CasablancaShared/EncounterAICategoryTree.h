// Object: EncounterAICategoryTree
// ClassId: 820
// RuntimeId: 11314
// TypeInfo: 0x0000000144D0B1B0
#include "../CasablancaShared/FootprintTreeBase.h"
#include "../CasablancaShared/EncounterAIBase.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterAICategoryTree : public CasablancaShared::FootprintTreeBase {
        Array<CasablancaShared::EncounterAIBase> Nodes; // 0x20
    }; // 0x28
    static_assert(sizeof(EncounterAICategoryTree) == 0x28);
}
#pragma pack(pop)