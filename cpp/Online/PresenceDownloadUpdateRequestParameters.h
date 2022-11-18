// Object: PresenceDownloadUpdateRequestParameters
// ClassId: 8456
// RuntimeId: 52771
// TypeInfo: 0x0000000144F074C0
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceDownloadUpdateRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(PresenceDownloadUpdateRequestParameters) == 0x20);
}