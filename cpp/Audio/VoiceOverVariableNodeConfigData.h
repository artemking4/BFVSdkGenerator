// Object: VoiceOverVariableNodeConfigData
// ClassId: 5633
// RuntimeId: 9668
// TypeInfo: 0x0000000144E1B740
#include "../Audio/VoiceOverNodeConfigData.h"
#include "../Audio/VoiceOverNamedValue.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverVariableNodeConfigData : public Audio::VoiceOverNodeConfigData {
        Audio::VoiceOverNamedValue Source; // 0x20
    }; // 0x28
    static_assert(sizeof(VoiceOverVariableNodeConfigData) == 0x28);
}
#pragma pack(pop)