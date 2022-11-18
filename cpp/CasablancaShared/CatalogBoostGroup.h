// Object: CatalogBoostGroup
// ClassId: 195
// RuntimeId: 38129
// TypeInfo: 0x0000000144D64AF0
#include "../CasablancaShared/CatalogItemGroup.h"
#include "../CasablancaShared/CatalogBoostBaseData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CatalogBoostGroup : public CasablancaShared::CatalogItemGroup {
        Array<CasablancaShared::CatalogBoostBaseData> Boosts; // 0x28
    }; // 0x30
    static_assert(sizeof(CatalogBoostGroup) == 0x30);
}
#pragma pack(pop)