// Object: MultiCrossfaderNodeData
// ClassId: 1051
// RuntimeId: 43635
// TypeInfo: 0x0000000144E19140
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/MultiCrossfaderGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class MultiCrossfaderNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::MultiCrossfaderGroup> CrossfaderGroups; // 0x18
        Audio::AudioGraphNodePort Start; // 0x20
        Audio::AudioGraphNodePort Stop; // 0x28
        Audio::AudioGraphNodePort Control; // 0x30
        Boolean LockControlValue; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(MultiCrossfaderNodeData) == 0x40);
}
#pragma pack(pop)