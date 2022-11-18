// Object: BlazePresenceBackendData
// ClassId: 636
// RuntimeId: 23844
// TypeInfo: 0x0000000144F03B10
#include "../Online/PresenceBackendData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Online {
    class BlazePresenceBackendData : public Online::PresenceBackendData {
        CString DefaultRoleName; // 0x20
        Boolean UseDemanglerService; // 0x28
        Boolean UseDirtySockVoip; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(BlazePresenceBackendData) == 0x30);
}
#pragma pack(pop)