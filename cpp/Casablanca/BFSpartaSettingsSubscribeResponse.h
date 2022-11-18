// Object: BFSpartaSettingsSubscribeResponse
// ClassId: 4735
// RuntimeId: 65025
// TypeInfo: 0x0000000144C6F120
#include "../SpartaShared/SpartaPayload.h"
#include "../Casablanca/SpartaSettingsResult.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaSettingsSubscribeResponse : public SpartaShared::SpartaPayload {
        Casablanca::SpartaSettingsResult Result; // 0x18
        Boolean SettingsCleared; // 0x1C
        char pad_0x1D[0x3];
    }; // 0x20
    static_assert(sizeof(BFSpartaSettingsSubscribeResponse) == 0x20);
}
#pragma pack(pop)