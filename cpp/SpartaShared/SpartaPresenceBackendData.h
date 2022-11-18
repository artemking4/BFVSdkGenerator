// Object: SpartaPresenceBackendData
// ClassId: 646
// RuntimeId: 17934
// TypeInfo: 0x0000000144F50DC0
#include "../Online/PresenceBackendData.h"
#include "../SpartaShared/SpartaPs4Service.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaPresenceBackendData : public Online::PresenceBackendData {
        Array<SpartaShared::SpartaPs4Service> Services; // 0x20
    }; // 0x28
    static_assert(sizeof(SpartaPresenceBackendData) == 0x28);
}
#pragma pack(pop)