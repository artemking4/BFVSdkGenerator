// Object: CasablancaSpartaMarketplaceItem
// ClassId: 1290
// RuntimeId: 2802
// TypeInfo: 0x0000000144C74B30
#include "../Core/DataContainer.h"
#include "../Global/Guid.h"
#include "../Global/CString.h"
#include "../CasablancaShared/UIRarityType.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaMarketplaceItem : public Core::DataContainer {
        Guid AssetGuid; // 0x18
        CString ItemType; // 0x28
        CasablancaShared::UIRarityType Rarity; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(CasablancaSpartaMarketplaceItem) == 0x38);
}
#pragma pack(pop)