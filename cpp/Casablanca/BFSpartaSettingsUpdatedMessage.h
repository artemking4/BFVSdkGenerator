// Object: BFSpartaSettingsUpdatedMessage
// ClassId: 4736
// RuntimeId: 55314
// TypeInfo: 0x0000000144C6F1A0
#include "../SpartaShared/SpartaPayload.h"
#include "../Casablanca/BFSpartaSetting.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaSettingsUpdatedMessage : public SpartaShared::SpartaPayload {
        Array<Casablanca::BFSpartaSetting> Settings; // 0x18
    }; // 0x20
    static_assert(sizeof(BFSpartaSettingsUpdatedMessage) == 0x20);
}
#pragma pack(pop)