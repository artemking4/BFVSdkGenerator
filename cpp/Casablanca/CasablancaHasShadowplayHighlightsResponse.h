// Object: CasablancaHasShadowplayHighlightsResponse
// ClassId: 4767
// RuntimeId: 27870
// TypeInfo: 0x0000000144C71C20
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaHasShadowplayHighlightsResponse : public SpartaShared::SpartaPayload {
        Boolean HasHighlights; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(CasablancaHasShadowplayHighlightsResponse) == 0x20);
}
#pragma pack(pop)