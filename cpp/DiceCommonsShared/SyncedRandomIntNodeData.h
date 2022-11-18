// Object: SyncedRandomIntNodeData
// ClassId: 1104
// RuntimeId: 7225
// TypeInfo: 0x0000000144DB6B10
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class SyncedRandomIntNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Trigger; // 0x18
        Audio::AudioGraphNodePort Triggered; // 0x20
        Audio::AudioGraphNodePort Out; // 0x28
        Int32 Min; // 0x30
        Int32 Max; // 0x34
        Boolean HighPrecision; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(SyncedRandomIntNodeData) == 0x40);
}
#pragma pack(pop)