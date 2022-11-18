// Object: VoiceOverLabelValue
// ClassId: 5592
// RuntimeId: 56785
// TypeInfo: 0x0000000144E1A8C0
#include "../Core/DataContainer.h"
#include "../Audio/VoiceOverLabel.h"
#include "../Audio/VoiceOverConstantValue.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverLabelValue : public Core::DataContainer {
        Audio::VoiceOverLabel Label; // 0x18
        Audio::VoiceOverConstantValue Source; // 0x20
    }; // 0x28
    static_assert(sizeof(VoiceOverLabelValue) == 0x28);
}
#pragma pack(pop)