// Object: VoiceOverLogicAsset
// ClassId: 908
// RuntimeId: 2038
// TypeInfo: 0x0000000144E1AC40
#include "../Core/Asset.h"
#include "../Audio/VoiceOverEvent.h"
#include "../Audio/VoiceOverGroup.h"
#include "../Audio/VoiceOverLogicFlow.h"
#include "../Audio/VoiceOverLogicFlowConfigData.h"
#include "../Audio/VoiceOverSystemAsset.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverLogicAsset : public Core::Asset {
        Array<Audio::VoiceOverEvent> Events; // 0x20
        Array<Audio::VoiceOverGroup> Groups; // 0x28
        Array<Audio::VoiceOverLogicFlow> Flows; // 0x30
        Array<Audio::VoiceOverLogicFlowConfigData> FlowConfigs; // 0x38
        Audio::VoiceOverSystemAsset System; // 0x40
    }; // 0x48
    static_assert(sizeof(VoiceOverLogicAsset) == 0x48);
}
#pragma pack(pop)