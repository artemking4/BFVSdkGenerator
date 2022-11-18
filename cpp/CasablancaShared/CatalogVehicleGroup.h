// Object: CatalogVehicleGroup
// ClassId: 202
// RuntimeId: 2074
// TypeInfo: 0x0000000144D64CF0
#include "../CasablancaShared/CatalogItemGroup.h"
#include "../CasablancaShared/CatalogVehicleItemData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CatalogVehicleGroup : public CasablancaShared::CatalogItemGroup {
        Array<CasablancaShared::CatalogVehicleItemData> Vehicles; // 0x28
    }; // 0x30
    static_assert(sizeof(CatalogVehicleGroup) == 0x30);
}
#pragma pack(pop)