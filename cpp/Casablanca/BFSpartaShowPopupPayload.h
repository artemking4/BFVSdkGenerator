// Object: BFSpartaShowPopupPayload
// ClassId: 4742
// RuntimeId: 42752
// TypeInfo: 0x0000000144C70CA0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaShowPopupPayload : public SpartaShared::SpartaPayload {
        CString Title; // 0x18
        CString Subtitle; // 0x20
        CString Message; // 0x28
        CString Button1Text; // 0x30
        CString Button2Text; // 0x38
        CString Button3Text; // 0x40
        Boolean Button1Visible; // 0x48
        Boolean Button2Visible; // 0x49
        Boolean Button3Visible; // 0x4A
        char pad_0x4B[0x5];
    }; // 0x50
    static_assert(sizeof(BFSpartaShowPopupPayload) == 0x50);
}
#pragma pack(pop)