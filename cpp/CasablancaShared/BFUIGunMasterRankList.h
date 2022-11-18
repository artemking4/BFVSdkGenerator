// Object: BFUIGunMasterRankList
// ClassId: 5484
// RuntimeId: 58848
// TypeInfo: 0x0000000144D9C510
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIGunMasterRank.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGunMasterRankList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIGunMasterRank> Ranks; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIGunMasterRankList) == 0x20);
}
#pragma pack(pop)