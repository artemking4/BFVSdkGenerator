// Object: PresenceUploadUserSettingsRequestParameters
// ClassId: 8502
// RuntimeId: 11115
// TypeInfo: 0x0000000144CF4CD0
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceUploadUserSettingsRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x40];
    }; // 0x50
    static_assert(sizeof(PresenceUploadUserSettingsRequestParameters) == 0x50);
}