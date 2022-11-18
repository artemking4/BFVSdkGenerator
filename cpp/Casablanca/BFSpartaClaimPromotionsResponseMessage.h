// Object: BFSpartaClaimPromotionsResponseMessage
// ClassId: 4683
// RuntimeId: 52697
// TypeInfo: 0x0000000144C709A0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaClaimPromotionsResponseMessage : public SpartaShared::SpartaPayload {
        Boolean Success; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(BFSpartaClaimPromotionsResponseMessage) == 0x20);
}
#pragma pack(pop)