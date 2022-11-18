// Object: ExposureNodeData
// ClassId: 997
// RuntimeId: 5525
// TypeInfo: 0x0000000144BDFCE0
#include "../Audio/AudioGraphNodeData.h"
#include "../AmbienceShared/AmbienceQueryMethod.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class ExposureNodeData : public Audio::AudioGraphNodeData {
        AmbienceShared::AmbienceQueryMethod QueryMethod; // 0x18
        Audio::AudioGraphNodePort Exposure; // 0x1C
        Audio::AudioGraphNodePort LocalPlayerId; // 0x24
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(ExposureNodeData) == 0x30);
}
#pragma pack(pop)