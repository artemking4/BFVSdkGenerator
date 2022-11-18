// Object: MouseInputActionData
// ClassId: 4149
// RuntimeId: 21272
// TypeInfo: 0x0000000144E6BFD0
#include "../GameShared/AxesInputActionData.h"
#include "../GameShared/InputDeviceMouseButtons.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class MouseInputActionData : public GameShared::AxesInputActionData {
        GameShared::InputDeviceMouseButtons Button; // 0x28
        Boolean SimulateJoystickAxis; // 0x2C
        Boolean RememberExcessInput; // 0x2D
        Boolean ScaleScrollWheelAxisInput; // 0x2E
        Boolean ForceAbsoluteValueAxis; // 0x2F
    }; // 0x30
    static_assert(sizeof(MouseInputActionData) == 0x30);
}
#pragma pack(pop)