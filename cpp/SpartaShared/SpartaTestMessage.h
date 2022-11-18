// Object: SpartaTestMessage
// ClassId: 4887
// RuntimeId: 50689
// TypeInfo: 0x0000000144F507C0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaTestMessage : public SpartaShared::SpartaPayload {
        CString MyStr; // 0x18
    }; // 0x20
    static_assert(sizeof(SpartaTestMessage) == 0x20);
}
#pragma pack(pop)