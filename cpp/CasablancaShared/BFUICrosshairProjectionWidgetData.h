// Object: BFUICrosshairProjectionWidgetData
// ClassId: 3792
// RuntimeId: 31544
// TypeInfo: 0x0000000144D433D0
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUICrosshairProjectionWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Float32 VerticalAngleOffset; // 0x80
        Float32 HorizontalAngleOffset; // 0x84
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(BFUICrosshairProjectionWidgetData) == 0x90);
}
#pragma pack(pop)