// Object: BFSpartaPartyKick
// ClassId: 4716
// RuntimeId: 21091
// TypeInfo: 0x0000000144C70320
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Uint64.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaPartyKick : public SpartaShared::SpartaPayload {
        Uint64 PlatformId; // 0x18
    }; // 0x20
    static_assert(sizeof(BFSpartaPartyKick) == 0x20);
}
#pragma pack(pop)