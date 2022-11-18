// Object: CasablancaSpartaOffer
// ClassId: 1291
// RuntimeId: 11946
// TypeInfo: 0x0000000144C74C30
#include "../Core/DataContainer.h"
#include "../Global/Guid.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/UIRarityType.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaOffer : public Core::DataContainer {
        Guid AssetGuid; // 0x18
        CString OfferAlias; // 0x28
        CString OfferMetaDefAlias; // 0x30
        Int32 ItemCount; // 0x38
        char pad_0x3C[0x4];
        CString IneligibleReason; // 0x40
        CString UnlockRequirement; // 0x48
        Int32 UnlockValue; // 0x50
        Int32 PurchaseLimit; // 0x54
        Int32 GrindCurrencyPrice; // 0x58
        Int32 PremiumCurrencyPrice; // 0x5C
        CasablancaShared::UIRarityType Rarity; // 0x60
        Int32 TimeToLive; // 0x64
        Boolean Eligible; // 0x68
        char pad_0x69[0x7];
    }; // 0x70
    static_assert(sizeof(CasablancaSpartaOffer) == 0x70);
}
#pragma pack(pop)