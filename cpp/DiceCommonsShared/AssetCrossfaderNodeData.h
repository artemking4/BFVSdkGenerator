// Object: AssetCrossfaderNodeData
// ClassId: 955
// RuntimeId: 31632
// TypeInfo: 0x0000000144DC1780
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class AssetCrossfaderNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort AssetIn; // 0x18
        Audio::AudioGraphNodePort CrossfadeTime; // 0x20
        Audio::AudioGraphNodePort ForceCrossfade; // 0x28
        Audio::AudioGraphNodePort AssetA; // 0x30
        Audio::AudioGraphNodePort AmplitudeA; // 0x38
        Audio::AudioGraphNodePort TriggerA; // 0x40
        Audio::AudioGraphNodePort ReleaseA; // 0x48
        Audio::AudioGraphNodePort AssetB; // 0x50
        Audio::AudioGraphNodePort AmplitudeB; // 0x58
        Audio::AudioGraphNodePort TriggerB; // 0x60
        Audio::AudioGraphNodePort ReleaseB; // 0x68
        Boolean AutoCrossfadeOnAssetChange; // 0x70
        char pad_0x71[0x7];
    }; // 0x78
    static_assert(sizeof(AssetCrossfaderNodeData) == 0x78);
}
#pragma pack(pop)