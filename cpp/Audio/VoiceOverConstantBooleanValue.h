// Object: VoiceOverConstantBooleanValue
// ClassId: 5574
// RuntimeId: 18720
// TypeInfo: 0x0000000144E1C2C0
#include "../Audio/VoiceOverConstantValue.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverConstantBooleanValue : public Audio::VoiceOverConstantValue {
        Boolean Value; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(VoiceOverConstantBooleanValue) == 0x20);
}
#pragma pack(pop)