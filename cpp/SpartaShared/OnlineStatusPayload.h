// Object: OnlineStatusPayload
// ClassId: 4815
// RuntimeId: 8883
// TypeInfo: 0x0000000144F50640
#include "../SpartaShared/SpartaPayload.h"
#include "../SpartaShared/PresenceConnectionEventPayload.h"
#include "../SpartaShared/PresenceConnectionResultPayload.h"
#include "../SpartaShared/PresenceModePayload.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class OnlineStatusPayload : public SpartaShared::SpartaPayload {
        SpartaShared::PresenceConnectionEventPayload Status; // 0x18
        SpartaShared::PresenceConnectionResultPayload ConnectionResult; // 0x1C
        SpartaShared::PresenceModePayload Mode; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(OnlineStatusPayload) == 0x28);
}
#pragma pack(pop)