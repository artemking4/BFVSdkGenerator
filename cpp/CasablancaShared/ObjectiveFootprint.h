// Object: ObjectiveFootprint
// ClassId: 5281
// RuntimeId: 17569
// TypeInfo: 0x0000000144D09F30
#include "../CasablancaShared/FootprintNode.h"
#include "../CasablancaShared/EncounterType.h"
#include "../CasablancaShared/ObjectiveGuardSettings.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ObjectiveFootprint : public CasablancaShared::FootprintNode {
        CasablancaShared::EncounterType EncounterType; // 0x38
        CasablancaShared::ObjectiveGuardSettings GuardSettings; // 0x40
    }; // 0x50
    static_assert(sizeof(ObjectiveFootprint) == 0x50);
}
#pragma pack(pop)