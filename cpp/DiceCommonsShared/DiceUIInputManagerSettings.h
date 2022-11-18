// Object: DiceUIInputManagerSettings
// ClassId: 4981
// RuntimeId: 56480
// TypeInfo: 0x0000000144DBAF80
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DiceUIInputManagerSettings : public Core::SystemSettings {
        Float32 ScrollWheelDeadZone; // 0x20
        Float32 DoubleClickTime; // 0x24
        Boolean AutomaticTypingMode; // 0x28
        Boolean TreatTouchAsMouse; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(DiceUIInputManagerSettings) == 0x30);
}
#pragma pack(pop)