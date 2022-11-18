// Object: RimeTextInputSettings
// ClassId: 5019
// RuntimeId: 10014
// TypeInfo: 0x0000000144F2A0A0
#include "../Core/SystemSettings.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace RimeElementsShared {
    class RimeTextInputSettings : public Core::SystemSettings {
        Float32 BlinkRate; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(RimeTextInputSettings) == 0x28);
}
#pragma pack(pop)