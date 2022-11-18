// Object: OnlineRichPresenceContext
// ClassId: 4391
// RuntimeId: 44587
// TypeInfo: 0x0000000144F044A0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Online/OnlineRichPresenceContextValue.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace Online {
    class OnlineRichPresenceContext : public Core::DataContainer {
        CString Name; // 0x18
        CString XdpName; // 0x20
        Array<Online::OnlineRichPresenceContextValue> Values; // 0x28
        Uint8 Index; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(OnlineRichPresenceContext) == 0x38);
}
#pragma pack(pop)