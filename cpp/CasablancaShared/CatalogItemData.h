// Object: CatalogItemData
// ClassId: 1294
// RuntimeId: 1572
// TypeInfo: 0x0000000144D653F0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/CatalogRarityType.h"
#include "../Global/Guid.h"
#include "../CasablancaShared/CatalogGameType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CatalogItemData : public Core::DataContainer {
        CString Name; // 0x18
        CasablancaShared::CatalogRarityType Rarity; // 0x20
        Guid AssetGuid; // 0x24
        CasablancaShared::CatalogGameType GameType; // 0x34
        Boolean AlwaysAvailable; // 0x38
        Boolean IsProgressable; // 0x39
        Boolean AvailableOffline; // 0x3A
        char pad_0x3B[0x5];
    }; // 0x40
    static_assert(sizeof(CatalogItemData) == 0x40);
}
#pragma pack(pop)