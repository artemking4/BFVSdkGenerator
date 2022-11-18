// Object: BFUIElementMinimapIconsEntityData
// ClassId: 3658
// RuntimeId: 46825
// TypeInfo: 0x0000000144D97210
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../CasablancaShared/BFUIMinimapWorldViewAsset.h"
#include "../CasablancaShared/UIWorldIconCategory.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementMinimapIconsEntityData : public CasablancaShared::BFUIElementEntityData {
        CasablancaShared::BFUIMinimapWorldViewAsset MinimapWorldViewAsset; // 0x130
        Array<CasablancaShared::UIWorldIconCategory> IconCategories; // 0x138
        Float32 IconsScale; // 0x140
        Boolean OnlyShowFriendlyVehicles; // 0x144
        char pad_0x145[0xB];
    }; // 0x150
    static_assert(sizeof(BFUIElementMinimapIconsEntityData) == 0x150);
}
#pragma pack(pop)