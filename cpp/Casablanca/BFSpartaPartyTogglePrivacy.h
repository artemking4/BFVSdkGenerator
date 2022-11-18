// Object: BFSpartaPartyTogglePrivacy
// ClassId: 4725
// RuntimeId: 24258
// TypeInfo: 0x0000000144C6FE20
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaPartyTogglePrivacy : public SpartaShared::SpartaPayload {
        Boolean IsPublic; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(BFSpartaPartyTogglePrivacy) == 0x20);
}
#pragma pack(pop)