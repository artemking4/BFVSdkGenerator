// Object: PresenceReportPlayerEmblemRequestParameters
// ClassId: 8488
// RuntimeId: 54787
// TypeInfo: 0x0000000144CF46D0
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceReportPlayerEmblemRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(PresenceReportPlayerEmblemRequestParameters) == 0x20);
}