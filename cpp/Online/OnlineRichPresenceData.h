// Object: OnlineRichPresenceData
// ClassId: 609
// RuntimeId: 63856
// TypeInfo: 0x0000000144F04320
#include "../Core/Asset.h"
#include "../Online/OnlineRichPresenceString.h"
#include "../Online/OnlineRichPresenceContext.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Online {
    class OnlineRichPresenceData : public Core::Asset {
        Array<Online::OnlineRichPresenceString> RichPresenceStrings; // 0x20
        Array<Online::OnlineRichPresenceContext> Contexts; // 0x28
        CString ShortTitleName; // 0x30
    }; // 0x38
    static_assert(sizeof(OnlineRichPresenceData) == 0x38);
}
#pragma pack(pop)