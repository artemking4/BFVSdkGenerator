// Object: BFSpartaSettingsGetRequest
// ClassId: 4731
// RuntimeId: 352
// TypeInfo: 0x0000000144C6F320
#include "../SpartaShared/SpartaPayload.h"
#include "../Casablanca/BFSpartaSettingsInfo.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaSettingsGetRequest : public SpartaShared::SpartaPayload {
        Array<Casablanca::BFSpartaSettingsInfo> Settings; // 0x18
    }; // 0x20
    static_assert(sizeof(BFSpartaSettingsGetRequest) == 0x20);
}
#pragma pack(pop)