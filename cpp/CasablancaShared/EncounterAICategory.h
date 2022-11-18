// Object: EncounterAICategory
// ClassId: 5269
// RuntimeId: 58151
// TypeInfo: 0x0000000144D0B2B0
#include "../CasablancaShared/EncounterAIBase.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterAICategory : public CasablancaShared::EncounterAIBase {
        Array<CasablancaShared::EncounterAIBase> Children; // 0x28
    }; // 0x30
    static_assert(sizeof(EncounterAICategory) == 0x30);
}
#pragma pack(pop)