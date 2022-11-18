// Object: EncounterFlowTypeTree
// ClassId: 822
// RuntimeId: 60639
// TypeInfo: 0x0000000144D0B6B0
#include "../CasablancaShared/FootprintTreeBase.h"
#include "../CasablancaShared/EncounterFlowType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterFlowTypeTree : public CasablancaShared::FootprintTreeBase {
        Array<CasablancaShared::EncounterFlowType> Types; // 0x20
    }; // 0x28
    static_assert(sizeof(EncounterFlowTypeTree) == 0x28);
}
#pragma pack(pop)