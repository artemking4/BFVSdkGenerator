// Object: PresenceReportServerBannerRequestParameters
// ClassId: 8489
// RuntimeId: 5704
// TypeInfo: 0x0000000144CF4750
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceReportServerBannerRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(PresenceReportServerBannerRequestParameters) == 0x20);
}