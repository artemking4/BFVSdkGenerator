// Object: Ps3PresenceBackendData
// ClassId: 643
// RuntimeId: 38560
// TypeInfo: 0x0000000144F03890
#include "../Online/PresenceBackendData.h"
#include "../Global/CString.h"
#include "../Online/Ps3ParentalLockAgeSettings.h"
#include "../Online/Ps3ServiceSettings.h"

#pragma pack(push, 8)
namespace Online {
    class Ps3PresenceBackendData : public Online::PresenceBackendData {
        CString CommunicationId; // 0x20
        CString CommunicationSignature; // 0x28
        Array<Online::Ps3ParentalLockAgeSettings> ParentalLockAgeSettings; // 0x30
        Array<Online::Ps3ServiceSettings> ServiceSettings; // 0x38
    }; // 0x40
    static_assert(sizeof(Ps3PresenceBackendData) == 0x40);
}
#pragma pack(pop)