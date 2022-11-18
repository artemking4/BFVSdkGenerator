// Object: BFUILegacyElementScrollbarStyle
// ClassId: 172
// RuntimeId: 43880
// TypeInfo: 0x0000000144D97590
#include "../CasablancaShared/BFUILegacyElementStyle.h"
#include "../CasablancaShared/BFUILegacyElementFillData.h"
#include "../CasablancaShared/BFUILegacyElementButtonStyle.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILegacyElementScrollbarStyle : public CasablancaShared::BFUILegacyElementStyle {
        CasablancaShared::BFUILegacyElementFillData FillBehindHandle; // 0x20
        CasablancaShared::BFUILegacyElementButtonStyle StyleUp; // 0x28
        CasablancaShared::BFUILegacyElementButtonStyle StyleDown; // 0x30
        CasablancaShared::BFUILegacyElementButtonStyle StyleHandle; // 0x38
    }; // 0x40
    static_assert(sizeof(BFUILegacyElementScrollbarStyle) == 0x40);
}
#pragma pack(pop)