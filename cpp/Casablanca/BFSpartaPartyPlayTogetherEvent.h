// Object: BFSpartaPartyPlayTogetherEvent
// ClassId: 4718
// RuntimeId: 35435
// TypeInfo: 0x0000000144C6F920
#include "../SpartaShared/SpartaPayload.h"
#include "../Casablanca/BFSpartaPlayTogetherEvent.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaPartyPlayTogetherEvent : public SpartaShared::SpartaPayload {
        Casablanca::BFSpartaPlayTogetherEvent Event; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(BFSpartaPartyPlayTogetherEvent) == 0x20);
}
#pragma pack(pop)