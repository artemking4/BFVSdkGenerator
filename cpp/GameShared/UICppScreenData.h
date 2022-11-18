// Object: UICppScreenData
// ClassId: 872
// RuntimeId: 44900
// TypeInfo: 0x0000000144E957B0
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class UICppScreenData : public Core::Asset {
        Float32 FieldOfView; // 0x20
        Float32 ScreenLayoutWidth; // 0x24
        Float32 ScreenLayoutHeight; // 0x28
        Boolean ScaleUpAndKeepAspectRatio; // 0x2C
        Boolean FlashCompatibilityMode; // 0x2D
        Boolean EatAllInput; // 0x2E
        Boolean LayoutWithSafeZone; // 0x2F
        Boolean OverrideViewRestriction; // 0x30
        Boolean IgnorePreferredRect; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(UICppScreenData) == 0x38);
}
#pragma pack(pop)