// Object: CasablancaSpartaReceiveEmblemMessage
// ClassId: 4793
// RuntimeId: 11261
// TypeInfo: 0x0000000144C732A0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaReceiveEmblemMessage : public SpartaShared::SpartaPayload {
        CString Url; // 0x18
    }; // 0x20
    static_assert(sizeof(CasablancaSpartaReceiveEmblemMessage) == 0x20);
}
#pragma pack(pop)