// Object: VoiceOverConstantFloatValue
// ClassId: 5575
// RuntimeId: 16578
// TypeInfo: 0x0000000144E1C1C0
#include "../Audio/VoiceOverConstantValue.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverConstantFloatValue : public Audio::VoiceOverConstantValue {
        Float32 Value; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(VoiceOverConstantFloatValue) == 0x20);
}
#pragma pack(pop)