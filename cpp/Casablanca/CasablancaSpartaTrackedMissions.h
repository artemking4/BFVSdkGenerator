// Object: CasablancaSpartaTrackedMissions
// ClassId: 4808
// RuntimeId: 12250
// TypeInfo: 0x0000000144C72120
#include "../SpartaShared/SpartaPayload.h"
#include "../CasablancaShared/AwardObjects.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaTrackedMissions : public SpartaShared::SpartaPayload {
        CasablancaShared::AwardObjects Awards; // 0x18
    }; // 0x20
    static_assert(sizeof(CasablancaSpartaTrackedMissions) == 0x20);
}
#pragma pack(pop)