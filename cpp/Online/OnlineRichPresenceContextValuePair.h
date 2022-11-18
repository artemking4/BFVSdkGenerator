// Object: OnlineRichPresenceContextValuePair
// ClassId: 4393
// RuntimeId: 28467
// TypeInfo: 0x0000000144F043A0
#include "../Core/DataContainer.h"
#include "../Online/OnlineRichPresenceContext.h"
#include "../Online/OnlineRichPresenceContextValue.h"

#pragma pack(push, 8)
namespace Online {
    class OnlineRichPresenceContextValuePair : public Core::DataContainer {
        Online::OnlineRichPresenceContext Context; // 0x18
        Online::OnlineRichPresenceContextValue Value; // 0x20
    }; // 0x28
    static_assert(sizeof(OnlineRichPresenceContextValuePair) == 0x28);
}
#pragma pack(pop)