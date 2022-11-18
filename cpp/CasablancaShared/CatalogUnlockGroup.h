// Object: CatalogUnlockGroup
// ClassId: 200
// RuntimeId: 17996
// TypeInfo: 0x0000000144D64D70
#include "../CasablancaShared/CatalogItemGroup.h"
#include "../CasablancaShared/CatalogUnlockItemData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CatalogUnlockGroup : public CasablancaShared::CatalogItemGroup {
        Array<CasablancaShared::CatalogUnlockItemData> Unlocks; // 0x28
    }; // 0x30
    static_assert(sizeof(CatalogUnlockGroup) == 0x30);
}
#pragma pack(pop)