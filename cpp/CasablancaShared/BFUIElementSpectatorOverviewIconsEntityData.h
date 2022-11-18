// Object: BFUIElementSpectatorOverviewIconsEntityData
// ClassId: 3669
// RuntimeId: 6841
// TypeInfo: 0x0000000144D427D0
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../CasablancaShared/UIWorldIconCategory.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementSpectatorOverviewIconsEntityData : public CasablancaShared::BFUIElementEntityData {
        Array<CasablancaShared::UIWorldIconCategory> IconCategories; // 0x130
        char pad_0x138[0x8];
    }; // 0x140
    static_assert(sizeof(BFUIElementSpectatorOverviewIconsEntityData) == 0x140);
}
#pragma pack(pop)