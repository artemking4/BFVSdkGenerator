// Object: CurrencyShipment
// ClassId: 237
// RuntimeId: 9588
// TypeInfo: 0x0000000144D02B20
#include "../Core/Asset.h"
#include "../CasablancaShared/CatalogCurrencyType.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CurrencyShipment : public Core::Asset {
        CasablancaShared::CatalogCurrencyType CurrencyType; // 0x20
        Int32 Amount; // 0x24
    }; // 0x28
    static_assert(sizeof(CurrencyShipment) == 0x28);
}
#pragma pack(pop)