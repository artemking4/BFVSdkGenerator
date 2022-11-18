// Object: UICreditsAsset
// ClassId: 877
// RuntimeId: 40206
// TypeInfo: 0x0000000144D21C70
#include "../Core/Asset.h"
#include "../CasablancaShared/UICreditsRow.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UICreditsAsset : public Core::Asset {
        Array<CasablancaShared::UICreditsRow> Rows; // 0x20
    }; // 0x28
    static_assert(sizeof(UICreditsAsset) == 0x28);
}
#pragma pack(pop)