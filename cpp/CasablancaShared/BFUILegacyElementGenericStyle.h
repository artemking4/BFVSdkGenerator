// Object: BFUILegacyElementGenericStyle
// ClassId: 171
// RuntimeId: 56583
// TypeInfo: 0x0000000144D97610
#include "../CasablancaShared/BFUILegacyElementStyle.h"
#include "../CasablancaShared/BFUILegacyElementFillData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILegacyElementGenericStyle : public CasablancaShared::BFUILegacyElementStyle {
        CasablancaShared::BFUILegacyElementFillData FillData; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUILegacyElementGenericStyle) == 0x28);
}
#pragma pack(pop)