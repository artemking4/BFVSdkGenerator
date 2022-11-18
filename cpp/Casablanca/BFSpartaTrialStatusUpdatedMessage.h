// Object: BFSpartaTrialStatusUpdatedMessage
// ClassId: 4748
// RuntimeId: 57239
// TypeInfo: 0x0000000144C70920
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaTrialStatusUpdatedMessage : public SpartaShared::SpartaPayload {
        Boolean TrialActive; // 0x18
        Boolean BlockUser; // 0x19
        Boolean NewTrialActive; // 0x1A
        char pad_0x1B[0x5];
    }; // 0x20
    static_assert(sizeof(BFSpartaTrialStatusUpdatedMessage) == 0x20);
}
#pragma pack(pop)