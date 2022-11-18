// Object: ObjectNodeData
// ClassId: 1056
// RuntimeId: 9208
// TypeInfo: 0x0000000144E031F0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class ObjectNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::SoundGraphPluginRef VuPlugin; // 0x20
        Audio::SoundGraphPluginRef ObjectPlugin; // 0x23
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(ObjectNodeData) == 0x28);
}
#pragma pack(pop)