// Object: CasablancaSpartaEnterRimeMessage
// ClassId: 4778
// RuntimeId: 57237
// TypeInfo: 0x0000000144C72F20
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaEnterRimeMessage : public SpartaShared::SpartaPayload {
        CString RimeScreen; // 0x18
    }; // 0x20
    static_assert(sizeof(CasablancaSpartaEnterRimeMessage) == 0x20);
}
#pragma pack(pop)