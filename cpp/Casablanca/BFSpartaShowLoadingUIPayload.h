// Object: BFSpartaShowLoadingUIPayload
// ClassId: 4741
// RuntimeId: 17155
// TypeInfo: 0x0000000144C70D20
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaShowLoadingUIPayload : public SpartaShared::SpartaPayload {
        Boolean Show; // 0x18
        Boolean ForceHide; // 0x19
        char pad_0x1A[0x6];
    }; // 0x20
    static_assert(sizeof(BFSpartaShowLoadingUIPayload) == 0x20);
}
#pragma pack(pop)