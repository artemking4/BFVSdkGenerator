// Object: SpartaNavPathMessage
// ClassId: 4830
// RuntimeId: 44126
// TypeInfo: 0x0000000144C73120
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class SpartaNavPathMessage : public SpartaShared::SpartaPayload {
        CString Cause; // 0x18
        CString NavPath; // 0x20
    }; // 0x28
    static_assert(sizeof(SpartaNavPathMessage) == 0x28);
}
#pragma pack(pop)