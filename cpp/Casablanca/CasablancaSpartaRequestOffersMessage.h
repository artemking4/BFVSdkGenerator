// Object: CasablancaSpartaRequestOffersMessage
// ClassId: 4803
// RuntimeId: 47032
// TypeInfo: 0x0000000144C74A30
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Guid.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaRequestOffersMessage : public SpartaShared::SpartaPayload {
        Guid RequestId; // 0x18
        Array<Guid> AssetGuids; // 0x28
        Array<CString> MetaDefs; // 0x30
    }; // 0x38
    static_assert(sizeof(CasablancaSpartaRequestOffersMessage) == 0x38);
}
#pragma pack(pop)