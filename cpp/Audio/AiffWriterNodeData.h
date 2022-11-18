// Object: AiffWriterNodeData
// ClassId: 948
// RuntimeId: 38175
// TypeInfo: 0x0000000144E04370
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Audio {
    class AiffWriterNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Start; // 0x20
        Audio::AudioGraphNodePort Stop; // 0x28
        CString FileName; // 0x30
        Audio::SoundGraphPluginRef Plugin; // 0x38
        char pad_0x3B[0x5];
    }; // 0x40
    static_assert(sizeof(AiffWriterNodeData) == 0x40);
}
#pragma pack(pop)