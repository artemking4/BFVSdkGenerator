// Object: BFUIMarketplaceItem
// ClassId: 1227
// RuntimeId: 12654
// TypeInfo: 0x0000000144D85EA0
#include "../Core/DataContainer.h"
#include "../Global/Guid.h"
#include "../CasablancaShared/UIRarityType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIMarketplaceItem : public Core::DataContainer {
        Guid AssetGuid; // 0x18
        CasablancaShared::UIRarityType Rarity; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(BFUIMarketplaceItem) == 0x30);
}
#pragma pack(pop)