// Object: BFSpartaSettingsSubscribeRequest
// ClassId: 4734
// RuntimeId: 9963
// TypeInfo: 0x0000000144C6F3A0
#include "../SpartaShared/SpartaPayload.h"
#include "../Casablanca/BFSpartaSettingsInfo.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaSettingsSubscribeRequest : public SpartaShared::SpartaPayload {
        Array<Casablanca::BFSpartaSettingsInfo> SubscribeTo; // 0x18
        Boolean ResetSubscriptions; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(BFSpartaSettingsSubscribeRequest) == 0x28);
}
#pragma pack(pop)