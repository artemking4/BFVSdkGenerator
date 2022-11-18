// Object: InventoryData
// ClassId: 538
// RuntimeId: 61375
// TypeInfo: 0x0000000144D2AAA0
#include "../Core/Asset.h"
#include "../CasablancaShared/CatalogData.h"
#include "../GameShared/BasicUnlockInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class InventoryData : public Core::Asset {
        CasablancaShared::CatalogData Catalog; // 0x20
        Array<GameShared::BasicUnlockInfo> UnlockInfos; // 0x28
    }; // 0x30
    static_assert(sizeof(InventoryData) == 0x30);
}
#pragma pack(pop)