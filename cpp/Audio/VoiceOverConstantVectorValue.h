// Object: VoiceOverConstantVectorValue
// ClassId: 5578
// RuntimeId: 54905
// TypeInfo: 0x0000000144E1C0C0
#include "../Audio/VoiceOverConstantValue.h"
#include "../Core/Vec4.h"

#pragma pack(push, 16)
namespace Audio {
    class VoiceOverConstantVectorValue : public Audio::VoiceOverConstantValue {
        char pad_0x18[0x8];
        Core::Vec4 Value; // 0x20
    }; // 0x30
    static_assert(sizeof(VoiceOverConstantVectorValue) == 0x30);
}
#pragma pack(pop)