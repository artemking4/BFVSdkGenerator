// Object: SoundPatchConfigurationDebugData
// ClassId: 4668
// RuntimeId: 49907
// TypeInfo: 0x0000000144E162C0
#include "../Core/DataContainer.h"
#include "../Audio/AudioGraphNodeData.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundPatchConfigurationDebugData : public Core::DataContainer {
        Array<Audio::AudioGraphNodeData> SoloOutputNodes; // 0x18
    }; // 0x20
    static_assert(sizeof(SoundPatchConfigurationDebugData) == 0x20);
}
#pragma pack(pop)