// Object: BFSpartaPartyToggleOpenForMatchmaking
// ClassId: 4724
// RuntimeId: 51868
// TypeInfo: 0x0000000144C6FEA0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaPartyToggleOpenForMatchmaking : public SpartaShared::SpartaPayload {
        Boolean OpenForMatchmaking; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(BFSpartaPartyToggleOpenForMatchmaking) == 0x20);
}
#pragma pack(pop)