// Object: PresenceDownloadPromoItemRequestParameters
// ClassId: 8455
// RuntimeId: 14368
// TypeInfo: 0x0000000144CF4650
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceDownloadPromoItemRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x8];
    }; // 0x18
    static_assert(sizeof(PresenceDownloadPromoItemRequestParameters) == 0x18);
}