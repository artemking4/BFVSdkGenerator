// Object: BFUIOffer
// ClassId: 1229
// RuntimeId: 55948
// TypeInfo: 0x0000000144D7FF20
#include "../Core/DataContainer.h"
#include "../Global/Guid.h"
#include "../Global/CString.h"
#include "../CasablancaShared/UIOfferType.h"
#include "../CasablancaShared/UICurrency.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIOffer : public Core::DataContainer {
        Guid AssetGuid; // 0x18
        CString OfferAlias; // 0x28
        CString OfferMetaDefAlias; // 0x30
        CasablancaShared::UIOfferType OfferType; // 0x38
        char pad_0x3C[0x4];
        CasablancaShared::UICurrency Currency; // 0x40
        CasablancaShared::UICurrency OriginalCurrency; // 0x48
        Boolean IsDiscounted; // 0x50
        char pad_0x51[0x7];
    }; // 0x58
    static_assert(sizeof(BFUIOffer) == 0x58);
}
#pragma pack(pop)