// Object: BFSpartaPartyGenericResp
// ClassId: 4709
// RuntimeId: 2290
// TypeInfo: 0x0000000144C6FCA0
#include "../SpartaShared/SpartaPayload.h"
#include "../Casablanca/SpartaPartyResponseResult.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaPartyGenericResp : public SpartaShared::SpartaPayload {
        Casablanca::SpartaPartyResponseResult Result; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(BFSpartaPartyGenericResp) == 0x20);
}
#pragma pack(pop)