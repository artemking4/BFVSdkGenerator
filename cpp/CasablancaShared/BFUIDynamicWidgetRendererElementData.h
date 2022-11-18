// Object: BFUIDynamicWidgetRendererElementData
// ClassId: 3637
// RuntimeId: 43723
// TypeInfo: 0x0000000144D9D510
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../CasablancaShared/BFUIDynamicWidgetGroupAsset.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIDynamicWidgetRendererElementData : public CasablancaShared::BFUIElementEntityData {
        CasablancaShared::BFUIDynamicWidgetGroupAsset GroupAsset; // 0x130
        char pad_0x138[0x8];
    }; // 0x140
    static_assert(sizeof(BFUIDynamicWidgetRendererElementData) == 0x140);
}
#pragma pack(pop)