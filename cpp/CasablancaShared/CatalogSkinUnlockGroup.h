// Object: CatalogSkinUnlockGroup
// ClassId: 198
// RuntimeId: 30839
// TypeInfo: 0x0000000144D64B70
#include "../CasablancaShared/CatalogItemGroup.h"
#include "../CasablancaShared/CatalogSkinItemData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CatalogSkinUnlockGroup : public CasablancaShared::CatalogItemGroup {
        Array<CasablancaShared::CatalogSkinItemData> Skins; // 0x28
    }; // 0x30
    static_assert(sizeof(CatalogSkinUnlockGroup) == 0x30);
}
#pragma pack(pop)