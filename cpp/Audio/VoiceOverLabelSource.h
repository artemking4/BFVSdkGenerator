// Object: VoiceOverLabelSource
// ClassId: 5591
// RuntimeId: 56247
// TypeInfo: 0x0000000144E1BA40
#include "../Core/DataContainer.h"
#include "../Audio/VoiceOverValueConnection.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverLabelSource : public Core::DataContainer {
        Audio::VoiceOverValueConnection Source; // 0x18
    }; // 0x28
    static_assert(sizeof(VoiceOverLabelSource) == 0x28);
}
#pragma pack(pop)