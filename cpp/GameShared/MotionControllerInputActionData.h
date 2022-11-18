// Object: MotionControllerInputActionData
// ClassId: 4148
// RuntimeId: 62521
// TypeInfo: 0x0000000144E6C150
#include "../GameShared/AxesInputActionData.h"
#include "../GameShared/InputDeviceMotionControllerButtons.h"

#pragma pack(push, 8)
namespace GameShared {
    class MotionControllerInputActionData : public GameShared::AxesInputActionData {
        GameShared::InputDeviceMotionControllerButtons Button; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(MotionControllerInputActionData) == 0x30);
}
#pragma pack(pop)