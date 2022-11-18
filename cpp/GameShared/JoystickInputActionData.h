// Object: JoystickInputActionData
// ClassId: 4147
// RuntimeId: 38501
// TypeInfo: 0x0000000144E6C1D0
#include "../GameShared/AxesInputActionData.h"
#include "../Global/Boolean.h"
#include "../GameShared/InputDevicePadButtons.h"

#pragma pack(push, 8)
namespace GameShared {
    class JoystickInputActionData : public GameShared::AxesInputActionData {
        GameShared::InputDevicePadButtons Button; // 0x28
        Boolean UseSquareInput; // 0x2C
        Boolean IsSecondaryJoystick; // 0x2D
        char pad_0x2E[0x2];
    }; // 0x30
    static_assert(sizeof(JoystickInputActionData) == 0x30);
}
#pragma pack(pop)