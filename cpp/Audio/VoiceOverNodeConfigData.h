// Object: VoiceOverNodeConfigData
// ClassId: 5617
// RuntimeId: 58890
// TypeInfo: 0x0000000144E1C9C0
#include "../Core/DataContainer.h"
#include "../Audio/VoiceOverNode.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverNodeConfigData : public Core::DataContainer {
        Audio::VoiceOverNode Node; // 0x18
    }; // 0x20
    static_assert(sizeof(VoiceOverNodeConfigData) == 0x20);
}
#pragma pack(pop)