// Object: BFSpartaUnbanPlayerResponseMessage
// ClassId: 4749
// RuntimeId: 23635
// TypeInfo: 0x0000000144C6F420
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"
#include "../Global/Uint64.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaUnbanPlayerResponseMessage : public SpartaShared::SpartaPayload {
        Uint64 PersonaId; // 0x18
        Boolean Success; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(BFSpartaUnbanPlayerResponseMessage) == 0x28);
}
#pragma pack(pop)