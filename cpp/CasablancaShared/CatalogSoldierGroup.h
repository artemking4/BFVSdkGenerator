// Object: CatalogSoldierGroup
// ClassId: 199
// RuntimeId: 50623
// TypeInfo: 0x0000000144D64BF0
#include "../CasablancaShared/CatalogItemGroup.h"
#include "../CasablancaShared/CatalogSoldierItemData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CatalogSoldierGroup : public CasablancaShared::CatalogItemGroup {
        Array<CasablancaShared::CatalogSoldierItemData> Soldiers; // 0x28
    }; // 0x30
    static_assert(sizeof(CatalogSoldierGroup) == 0x30);
}
#pragma pack(pop)