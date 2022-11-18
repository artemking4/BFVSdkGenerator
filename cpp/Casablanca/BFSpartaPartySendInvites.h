// Object: BFSpartaPartySendInvites
// ClassId: 4720
// RuntimeId: 40278
// TypeInfo: 0x0000000144C701A0
#include "../SpartaShared/SpartaPayload.h"
#include "../Casablanca/BFIncomingSpartaUserId.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaPartySendInvites : public SpartaShared::SpartaPayload {
        Array<Casablanca::BFIncomingSpartaUserId> Users; // 0x18
    }; // 0x20
    static_assert(sizeof(BFSpartaPartySendInvites) == 0x20);
}
#pragma pack(pop)