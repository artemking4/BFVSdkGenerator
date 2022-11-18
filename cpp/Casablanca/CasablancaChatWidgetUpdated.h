// Object: CasablancaChatWidgetUpdated
// ClassId: 4763
// RuntimeId: 53362
// TypeInfo: 0x0000000144C71CA0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaChatWidgetUpdated : public SpartaShared::SpartaPayload {
        Boolean IsVisible; // 0x18
        Boolean UnreadMessages; // 0x19
        char pad_0x1A[0x6];
    }; // 0x20
    static_assert(sizeof(CasablancaChatWidgetUpdated) == 0x20);
}
#pragma pack(pop)