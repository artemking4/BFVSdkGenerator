// Object: CatalogItemPriceData
// ClassId: 319
// RuntimeId: 57213
// TypeInfo: 0x0000000144D649F0
#include "../Core/DataContainerPolicyAsset.h"
#include "../CasablancaShared/PriceData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CatalogItemPriceData : public Core::DataContainerPolicyAsset {
        Array<CasablancaShared::PriceData> Gadgets; // 0x20
        Array<CasablancaShared::PriceData> Sidearm; // 0x28
        Array<CasablancaShared::PriceData> MeleeWeapon; // 0x30
        Array<CasablancaShared::PriceData> WeaponPart; // 0x38
        Array<CasablancaShared::PriceData> TankBody; // 0x40
        Array<CasablancaShared::PriceData> TankDressing; // 0x48
        Array<CasablancaShared::PriceData> PlaneBody; // 0x50
        Array<CasablancaShared::PriceData> PlaneDressing; // 0x58
        Array<CasablancaShared::PriceData> Facepaint; // 0x60
        Array<CasablancaShared::PriceData> Headgear; // 0x68
        Array<CasablancaShared::PriceData> Jacket; // 0x70
        Array<CasablancaShared::PriceData> Trouser; // 0x78
    }; // 0x80
    static_assert(sizeof(CatalogItemPriceData) == 0x80);
}
#pragma pack(pop)