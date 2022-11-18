// Object: AxesInputActionData
// ClassId: 4146
// RuntimeId: 15636
// TypeInfo: 0x0000000144E6C2D0
#include "../GameShared/InputActionData.h"
#include "../GameShared/InputDeviceAxes.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class AxesInputActionData : public GameShared::InputActionData {
        GameShared::InputDeviceAxes Axis; // 0x20
        Boolean NormalizeInput; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(AxesInputActionData) == 0x28);
}
#pragma pack(pop)