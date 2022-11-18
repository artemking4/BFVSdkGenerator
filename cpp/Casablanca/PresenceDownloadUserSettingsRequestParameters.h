// Object: PresenceDownloadUserSettingsRequestParameters
// ClassId: 8457
// RuntimeId: 27860
// TypeInfo: 0x0000000144CF4D50
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceDownloadUserSettingsRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x48];
    }; // 0x58
    static_assert(sizeof(PresenceDownloadUserSettingsRequestParameters) == 0x58);
}