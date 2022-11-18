// Object: CatalogSkinItemData
// ClassId: 1300
// RuntimeId: 61185
// TypeInfo: 0x0000000144D65070
#include "../CasablancaShared/CatalogItemData.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CatalogSkinItemData : public CasablancaShared::CatalogItemData {
        Array<Guid> UnlockGuids; // 0x40
    }; // 0x48
    static_assert(sizeof(CatalogSkinItemData) == 0x48);
}
#pragma pack(pop)