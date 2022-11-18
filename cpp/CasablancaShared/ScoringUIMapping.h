// Object: ScoringUIMapping
// ClassId: 719
// RuntimeId: 37963
// TypeInfo: 0x0000000144D9FE60
#include "../Core/Asset.h"
#include "../CasablancaShared/ScoringUIMappingElement.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ScoringUIMapping : public Core::Asset {
        Array<CasablancaShared::ScoringUIMappingElement> ScoringMappingElements; // 0x20
    }; // 0x28
    static_assert(sizeof(ScoringUIMapping) == 0x28);
}
#pragma pack(pop)