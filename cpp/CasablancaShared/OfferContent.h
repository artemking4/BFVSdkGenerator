// Object: OfferContent
// ClassId: 4383
// RuntimeId: 2910
// TypeInfo: 0x0000000144D6C7B0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/OfferDefinitionType.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/CatalogCurrencyType.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../CasablancaShared/AwardData.h"
#include "../CasablancaShared/AdvancedDogTagData.h"
#include "../CasablancaShared/CurrencyShipment.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class OfferContent : public Core::DataContainer {
        CasablancaShared::OfferDefinitionType DefinitionType; // 0x18
        Int32 Count; // 0x1C
        CasablancaShared::CatalogCurrencyType CurrencyType; // 0x20
        char pad_0x24[0x4];
        GameShared::UnlockAssetBase Unlock; // 0x28
        CasablancaShared::AwardData Assignment; // 0x30
        CasablancaShared::AdvancedDogTagData DogTag; // 0x38
        CasablancaShared::CurrencyShipment CurrencyShipment; // 0x40
    }; // 0x48
    static_assert(sizeof(OfferContent) == 0x48);
}
#pragma pack(pop)