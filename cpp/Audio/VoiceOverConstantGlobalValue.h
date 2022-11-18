// Object: VoiceOverConstantGlobalValue
// ClassId: 5576
// RuntimeId: 47632
// TypeInfo: 0x0000000144E1C140
#include "../Audio/VoiceOverConstantValue.h"
#include "../Audio/VoiceOverGlobalConstantValue.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverConstantGlobalValue : public Audio::VoiceOverConstantValue {
        Audio::VoiceOverGlobalConstantValue Source; // 0x18
    }; // 0x20
    static_assert(sizeof(VoiceOverConstantGlobalValue) == 0x20);
}
#pragma pack(pop)