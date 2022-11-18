// Object: CatalogItemGroup
// ClassId: 194
// RuntimeId: 5415
// TypeInfo: 0x0000000144D64E70
#include "../Core/Asset.h"
#include "../CasablancaShared/CatalogGameType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CatalogItemGroup : public Core::Asset {
        CasablancaShared::CatalogGameType GameType; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(CatalogItemGroup) == 0x28);
}
#pragma pack(pop)