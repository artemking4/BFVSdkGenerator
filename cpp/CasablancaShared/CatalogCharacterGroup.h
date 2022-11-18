// Object: CatalogCharacterGroup
// ClassId: 196
// RuntimeId: 10995
// TypeInfo: 0x0000000144D64A70
#include "../CasablancaShared/CatalogItemGroup.h"
#include "../CasablancaShared/CatalogCharacterItemData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CatalogCharacterGroup : public CasablancaShared::CatalogItemGroup {
        Array<CasablancaShared::CatalogCharacterItemData> Characters; // 0x28
    }; // 0x30
    static_assert(sizeof(CatalogCharacterGroup) == 0x30);
}
#pragma pack(pop)