// Object: PresenceDownloadBlobRequestParameters
// ClassId: 8454
// RuntimeId: 52255
// TypeInfo: 0x0000000144F07BC0
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceDownloadBlobRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x18];
    }; // 0x28
    static_assert(sizeof(PresenceDownloadBlobRequestParameters) == 0x28);
}