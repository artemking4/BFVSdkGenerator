// Object: BFSpartaPartyJoinPartysGameResp
// ClassId: 4713
// RuntimeId: 47333
// TypeInfo: 0x0000000144C6F820
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Uint64.h"
#include "../Casablanca/SpartaPartyResponseResult.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaPartyJoinPartysGameResp : public SpartaShared::SpartaPayload {
        Uint64 GameId; // 0x18
        Casablanca::SpartaPartyResponseResult Result; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFSpartaPartyJoinPartysGameResp) == 0x28);
}
#pragma pack(pop)