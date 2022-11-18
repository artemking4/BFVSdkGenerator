// Object: OnlineRichPresenceContextValue
// ClassId: 4392
// RuntimeId: 64396
// TypeInfo: 0x0000000144F04520
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace Online {
    class OnlineRichPresenceContextValue : public Core::DataContainer {
        CString Sid; // 0x18
        CString Key; // 0x20
        CString XdpName; // 0x28
        Boolean IsNumber; // 0x30
        Uint8 Index; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(OnlineRichPresenceContextValue) == 0x38);
}
#pragma pack(pop)