// Object: BFSpartaGetPlaygroundResponseMessage
// ClassId: 4693
// RuntimeId: 38972
// TypeInfo: 0x0000000144C6F5A0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/PrivateGamesPlayground.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaGetPlaygroundResponseMessage : public SpartaShared::SpartaPayload {
        CasablancaShared::PrivateGamesPlayground Playground; // 0x18
        Boolean Success; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(BFSpartaGetPlaygroundResponseMessage) == 0x28);
}
#pragma pack(pop)