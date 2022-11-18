// Object: PadInputActionData
// ClassId: 4150
// RuntimeId: 39196
// TypeInfo: 0x0000000144E6C250
#include "../GameShared/AxesInputActionData.h"
#include "../Global/Boolean.h"
#include "../GameShared/InputDevicePadButtons.h"
#include "../GameShared/InputDevicePOVs.h"

#pragma pack(push, 8)
namespace GameShared {
    class PadInputActionData : public GameShared::AxesInputActionData {
        GameShared::InputDevicePadButtons Button; // 0x28
        GameShared::InputDevicePadButtons PS3AlternativeButton; // 0x2C
        GameShared::InputDevicePadButtons PSVitaButton; // 0x30
        GameShared::InputDevicePadButtons PSVitaAlternativeButton; // 0x34
        GameShared::InputDevicePOVs Pov; // 0x38
        Boolean UseSquareInput; // 0x3C
        char pad_0x3D[0x3];
    }; // 0x40
    static_assert(sizeof(PadInputActionData) == 0x40);
}
#pragma pack(pop)