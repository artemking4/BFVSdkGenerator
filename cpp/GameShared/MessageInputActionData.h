// Object: MessageInputActionData
// ClassId: 4153
// RuntimeId: 64551
// TypeInfo: 0x0000000144E6BF50
#include "../GameShared/InputActionData.h"
#include "../GameShared/InputDeviceMessageEvent.h"

#pragma pack(push, 8)
namespace GameShared {
    class MessageInputActionData : public GameShared::InputActionData {
        GameShared::InputDeviceMessageEvent Command; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(MessageInputActionData) == 0x28);
}
#pragma pack(pop)