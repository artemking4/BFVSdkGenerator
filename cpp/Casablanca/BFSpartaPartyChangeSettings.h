// Object: BFSpartaPartyChangeSettings
// ClassId: 4706
// RuntimeId: 56677
// TypeInfo: 0x0000000144C70020
#include "../SpartaShared/SpartaPayload.h"
#include "../Casablanca/ChangeSettings.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaPartyChangeSettings : public SpartaShared::SpartaPayload {
        Array<Casablanca::ChangeSettings> Settings; // 0x18
    }; // 0x20
    static_assert(sizeof(BFSpartaPartyChangeSettings) == 0x20);
}
#pragma pack(pop)