// Object: CasablancaSpartaReceiveOffersFailedMessage
// ClassId: 4798
// RuntimeId: 21962
// TypeInfo: 0x0000000144C74930
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Guid.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaReceiveOffersFailedMessage : public SpartaShared::SpartaPayload {
        Guid AssetGuid; // 0x18
        CString Reason; // 0x28
    }; // 0x30
    static_assert(sizeof(CasablancaSpartaReceiveOffersFailedMessage) == 0x30);
}
#pragma pack(pop)