// Object: SpartaGoOnlinePayload
// ClassId: 4823
// RuntimeId: 7184
// TypeInfo: 0x0000000144F50740
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaGoOnlinePayload : public SpartaShared::SpartaPayload {
        Boolean SilentOnline; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(SpartaGoOnlinePayload) == 0x20);
}
#pragma pack(pop)