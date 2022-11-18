// Object: BFUIContainerElementEntityData
// ClassId: 3687
// RuntimeId: 48065
// TypeInfo: 0x0000000144D6D630
#include "../RimeElementsShared/RimeContainerBaseData.h"
#include "../Global/Boolean.h"
#include "../Core/Vec4.h"
#include "../CasablancaShared/InputStencilMaskMode.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIContainerElementEntityData : public RimeElementsShared::RimeContainerBaseData {
        Core::Vec4 StencilPadding; // 0x120
        CasablancaShared::InputStencilMaskMode OverrideInputStencil; // 0x130
        Boolean ExcludeFromLayoutContainer; // 0x134
        Boolean UseStencilMask; // 0x135
        char pad_0x136[0xA];
    }; // 0x140
    static_assert(sizeof(BFUIContainerElementEntityData) == 0x140);
}
#pragma pack(pop)