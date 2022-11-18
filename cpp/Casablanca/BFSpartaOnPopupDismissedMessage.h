// Object: BFSpartaOnPopupDismissedMessage
// ClassId: 4705
// RuntimeId: 57758
// TypeInfo: 0x0000000144C70AA0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaOnPopupDismissedMessage : public SpartaShared::SpartaPayload {
        Int32 PressedButtonId; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(BFSpartaOnPopupDismissedMessage) == 0x20);
}
#pragma pack(pop)