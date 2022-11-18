// Object: VoiceOverConstantIntegerValue
// ClassId: 5577
// RuntimeId: 2188
// TypeInfo: 0x0000000144E1C240
#include "../Audio/VoiceOverConstantValue.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverConstantIntegerValue : public Audio::VoiceOverConstantValue {
        Int32 Value; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(VoiceOverConstantIntegerValue) == 0x20);
}
#pragma pack(pop)