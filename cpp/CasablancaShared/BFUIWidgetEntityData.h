// Object: BFUIWidgetEntityData
// ClassId: 3791
// RuntimeId: 36487
// TypeInfo: 0x0000000144D6D330
#include "../RimeShared/RimeWidgetEntityData.h"
#include "../CasablancaShared/BFUICustomLayout.h"
#include "../Global/Boolean.h"
#include "../Core/Vec4.h"
#include "../CasablancaShared/InputStencilMaskMode.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIWidgetEntityData : public RimeShared::RimeWidgetEntityData {
        CasablancaShared::BFUICustomLayout CustomLayout; // 0x48
        CasablancaShared::InputStencilMaskMode OverrideInputStencil; // 0x5C
        Boolean UseStencilMask; // 0x60
        Boolean InputEnabled; // 0x61
        char pad_0x62[0xE];
        Core::Vec4 StencilPadding; // 0x70
    }; // 0x80
    static_assert(sizeof(BFUIWidgetEntityData) == 0x80);
}
#pragma pack(pop)