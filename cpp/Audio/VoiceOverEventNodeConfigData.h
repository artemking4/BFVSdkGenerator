// Object: VoiceOverEventNodeConfigData
// ClassId: 5625
// RuntimeId: 53523
// TypeInfo: 0x0000000144E1B0C0
#include "../Audio/VoiceOverNodeConfigData.h"
#include "../Audio/VoiceOverValueRedirect.h"
#include "../Audio/VoiceOverEvent.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Audio {
    class VoiceOverEventNodeConfigData : public Audio::VoiceOverNodeConfigData {
        Array<Audio::VoiceOverValueRedirect> Redirects; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 DebugColor; // 0x30
        Audio::VoiceOverEvent Event; // 0x40
        Float32 DebugIntervalTime; // 0x48
        Boolean DebugEnabled; // 0x4C
        char pad_0x4D[0x3];
    }; // 0x50
    static_assert(sizeof(VoiceOverEventNodeConfigData) == 0x50);
}
#pragma pack(pop)