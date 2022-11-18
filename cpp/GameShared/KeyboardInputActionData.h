// Object: KeyboardInputActionData
// ClassId: 4152
// RuntimeId: 53189
// TypeInfo: 0x0000000144E6C050
#include "../GameShared/InputActionData.h"
#include "../GameShared/InputDeviceKeys.h"

#pragma pack(push, 8)
namespace GameShared {
    class KeyboardInputActionData : public GameShared::InputActionData {
        GameShared::InputDeviceKeys Key; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(KeyboardInputActionData) == 0x28);
}
#pragma pack(pop)