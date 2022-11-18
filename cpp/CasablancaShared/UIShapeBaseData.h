// Object: UIShapeBaseData
// ClassId: 3836
// RuntimeId: 17011
// TypeInfo: 0x0000000144D9C210
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

namespace CasablancaShared {
    class UIShapeBaseData : public CasablancaShared::BFUIWidgetEntityData {
        Float32 MasterFade; // 0x80
        Int32 NumSubDivisions; // 0x84
        Float32 LineWidth; // 0x88
        Float32 LineAlpha; // 0x8C
    }; // 0x90
    static_assert(sizeof(UIShapeBaseData) == 0x90);
}