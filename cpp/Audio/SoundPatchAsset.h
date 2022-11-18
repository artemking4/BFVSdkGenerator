// Object: SoundPatchAsset
// ClassId: 742
// RuntimeId: 41568
// TypeInfo: 0x0000000144E167C0
#include "../Audio/SoundGraphAsset.h"
#include "../Audio/AudioGraphNodeData.h"
#include "../Global/Float32.h"
#include "../Audio/SoundScopeData.h"
#include "../Global/Boolean.h"
#include "../Audio/AudioGraphEvent.h"
#include "../Audio/SoundContextGroupData.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundPatchAsset : public Audio::SoundGraphAsset {
        Array<Audio::AudioGraphNodeData> OutputNodes; // 0x40
        Float32 Loudness; // 0x48
        char pad_0x4C[0x4];
        Audio::SoundScopeData Scope; // 0x50
        Float32 Radius; // 0x58
        Float32 ObstructionOuterDistanceMultiplier; // 0x5C
        Float32 DopplerFactor; // 0x60
        Float32 MasterPitch; // 0x64
        Audio::AudioGraphEvent DefaultStartEvent; // 0x68
        Audio::AudioGraphEvent DefaultStopEvent; // 0x70
        Audio::AudioGraphEvent DefaultEnterScopeEvent; // 0x78
        Audio::AudioGraphEvent DefaultForceInitEvent; // 0x80
        Audio::SoundContextGroupData ContextGroup; // 0x88
        Boolean IsLooping; // 0x90
        Boolean IsPersistent; // 0x91
        char pad_0x92[0x6];
    }; // 0x98
    static_assert(sizeof(SoundPatchAsset) == 0x98);
}
#pragma pack(pop)