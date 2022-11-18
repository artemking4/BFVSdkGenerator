// Object: OctanePlayerNodeData
// ClassId: 1059
// RuntimeId: 39598
// TypeInfo: 0x0000000144EFD450
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../OctaneShared/OctaneAsset.h"
#include "../OctaneShared/OctanePlayerPlayMode.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../OctaneShared/OctanePlayerCrossFadeType.h"
#include "../OctaneShared/OctanePlayerTimeUnits.h"
#include "../Audio/SoundGraphPluginRef.h"
#include "../Audio/OutputNodeData.h"
#include "../OctaneShared/OctanePlayerNodeDebugData.h"

#pragma pack(push, 8)
namespace OctaneShared {
    class OctanePlayerNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort ExternalAsset; // 0x18
        Audio::AudioGraphNodePort Trigger; // 0x20
        Audio::AudioGraphNodePort Release; // 0x28
        Audio::AudioGraphNodePort Gain; // 0x30
        Audio::AudioGraphNodePort Pitch; // 0x38
        Audio::AudioGraphNodePort Rpm; // 0x40
        Audio::AudioGraphNodePort RemapMinimumRpm; // 0x48
        Audio::AudioGraphNodePort RemapMaximumRpm; // 0x50
        Audio::AudioGraphNodePort Output; // 0x58
        Audio::AudioGraphNodePort MinimumRpm; // 0x60
        Audio::AudioGraphNodePort MaximumRpm; // 0x68
        OctaneShared::OctaneAsset Asset; // 0x70
        OctaneShared::OctanePlayerPlayMode PlayMode; // 0x78
        Int32 WindowSizeLowRpm; // 0x7C
        Int32 WindowSizeHighRpm; // 0x80
        Float32 Voice1Gain; // 0x84
        Float32 Voice2Gain; // 0x88
        OctaneShared::OctanePlayerCrossFadeType CrossFadeType; // 0x8C
        Float32 CrossFadeTime; // 0x90
        Float32 CrossFadeTimeRandomization; // 0x94
        OctaneShared::OctanePlayerTimeUnits CrossFadeTimeUnits; // 0x98
        char pad_0x9C[0x4];
        Audio::OutputNodeData PitchSource; // 0xA0
        OctaneShared::OctanePlayerNodeDebugData OctanePlayerNodeDebug; // 0xA8
        Boolean Shuffled; // 0xB0
        Audio::SoundGraphPluginRef OctanePlugin; // 0xB1
        Audio::SoundGraphPluginRef ResamplePlugin; // 0xB4
        Audio::SoundGraphPluginRef GainPlugin; // 0xB7
        char pad_0xBA[0x6];
    }; // 0xC0
    static_assert(sizeof(OctanePlayerNodeData) == 0xC0);
}
#pragma pack(pop)