// Object: OnlineRichPresenceString
// ClassId: 4394
// RuntimeId: 31002
// TypeInfo: 0x0000000144F04420
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace Online {
    class OnlineRichPresenceString : public Core::DataContainer {
        CString Sid; // 0x18
        CString XdpName; // 0x20
        Uint8 Index; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(OnlineRichPresenceString) == 0x30);
}
#pragma pack(pop)