// Object: SpartaEnableHotkeyPayload
// ClassId: 4817
// RuntimeId: 31368
// TypeInfo: 0x0000000144F50240
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaEnableHotkeyPayload : public SpartaShared::SpartaPayload {
        CString Key; // 0x18
        Boolean Enable; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(SpartaEnableHotkeyPayload) == 0x28);
}
#pragma pack(pop)