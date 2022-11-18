// Object: MixerPreset
// ClassId: 4303
// RuntimeId: 15631
// TypeInfo: 0x0000000144E16DC0
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"
#include "../Audio/MixerPresetGroupData.h"
#include "../Audio/MixerPresetNodeData.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerPreset : public Core::DataContainer {
        Uint32 NameHash; // 0x18
        char pad_0x1C[0x4];
        Array<Audio::MixerPresetGroupData> Groups; // 0x20
        Array<Audio::MixerPresetNodeData> Nodes; // 0x28
    }; // 0x30
    static_assert(sizeof(MixerPreset) == 0x30);
}
#pragma pack(pop)