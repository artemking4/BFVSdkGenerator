// Object: CharacterInputDrivenCameraComponentData
// ClassId: 1736
// RuntimeId: 7844
// TypeInfo: 0x0000000144E832C0
#include "../GameShared/CharacterCameraComponentData.h"
#include "../GameShared/AimingConstraintsData.h"

#pragma pack(push, 16)
namespace GameShared {
    class CharacterInputDrivenCameraComponentData : public GameShared::CharacterCameraComponentData {
        GameShared::AimingConstraintsData AimingConstraints; // 0x90
    }; // 0xA0
    static_assert(sizeof(CharacterInputDrivenCameraComponentData) == 0xA0);
}
#pragma pack(pop)