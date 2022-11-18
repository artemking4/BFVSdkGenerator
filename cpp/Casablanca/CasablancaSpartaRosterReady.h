// Object: CasablancaSpartaRosterReady
// ClassId: 4804
// RuntimeId: 61805
// TypeInfo: 0x0000000144C71FA0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaRosterReady : public SpartaShared::SpartaPayload {
        Boolean IsReady; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(CasablancaSpartaRosterReady) == 0x20);
}
#pragma pack(pop)