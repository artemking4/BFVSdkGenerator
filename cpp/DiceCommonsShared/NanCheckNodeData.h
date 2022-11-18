// Object: NanCheckNodeData
// ClassId: 1054
// RuntimeId: 54502
// TypeInfo: 0x0000000144DC3B80
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/CString.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class NanCheckNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        CString NameNonMeta; // 0x28
        Audio::SoundGraphPluginRef NanCheckPlugin; // 0x30
        char pad_0x33[0x5];
    }; // 0x38
    static_assert(sizeof(NanCheckNodeData) == 0x38);
}
#pragma pack(pop)