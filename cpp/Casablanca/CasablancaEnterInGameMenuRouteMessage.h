// Object: CasablancaEnterInGameMenuRouteMessage
// ClassId: 4765
// RuntimeId: 41547
// TypeInfo: 0x0000000144C71D20
#include "../SpartaShared/SpartaPayload.h"
#include "../Casablanca/CasablancaInGameMenuRoute.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaEnterInGameMenuRouteMessage : public SpartaShared::SpartaPayload {
        Casablanca::CasablancaInGameMenuRoute Route; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(CasablancaEnterInGameMenuRouteMessage) == 0x20);
}
#pragma pack(pop)