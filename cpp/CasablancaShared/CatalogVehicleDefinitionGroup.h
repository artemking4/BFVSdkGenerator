// Object: CatalogVehicleDefinitionGroup
// ClassId: 201
// RuntimeId: 8938
// TypeInfo: 0x0000000144D64C70
#include "../CasablancaShared/CatalogItemGroup.h"
#include "../CasablancaShared/CatalogVehicleDefinitionItemData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CatalogVehicleDefinitionGroup : public CasablancaShared::CatalogItemGroup {
        Array<CasablancaShared::CatalogVehicleDefinitionItemData> Vehicles; // 0x28
    }; // 0x30
    static_assert(sizeof(CatalogVehicleDefinitionGroup) == 0x30);
}
#pragma pack(pop)