// Object: BFSpartaUnbanPlayerRequest
// ClassId: 4856
// RuntimeId: 13939
// TypeInfo: 0x0000000144C6F6A0
#include "../SpartaShared/SpartaSimplePayload.h"
#include "../Global/Uint64.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaUnbanPlayerRequest : public SpartaShared::SpartaSimplePayload {
        Uint64 PersonaId; // 0x18
        Uint64 GameId; // 0x20
    }; // 0x28
    static_assert(sizeof(BFSpartaUnbanPlayerRequest) == 0x28);
}
#pragma pack(pop)