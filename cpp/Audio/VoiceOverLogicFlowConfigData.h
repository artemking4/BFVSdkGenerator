// Object: VoiceOverLogicFlowConfigData
// ClassId: 5595
// RuntimeId: 28916
// TypeInfo: 0x0000000144E1AD40
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Audio/VoiceOverLogicAsset.h"
#include "../Audio/VoiceOverGroup.h"
#include "../Audio/VoiceOverValue.h"
#include "../Audio/VoiceOverEventNodeConfigData.h"
#include "../Audio/VoiceOverLogicFlow.h"
#include "../Audio/VoiceOverNodeConfigData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverLogicFlowConfigData : public Core::DataContainer {
        CString Name; // 0x18
        Audio::VoiceOverLogicAsset Owner; // 0x20
        Audio::VoiceOverGroup Group; // 0x28
        Array<Audio::VoiceOverValue> Locals; // 0x30
        Array<Audio::VoiceOverEventNodeConfigData> Roots; // 0x38
        Audio::VoiceOverLogicFlow Flow; // 0x40
        Array<Audio::VoiceOverNodeConfigData> NodeConfigs; // 0x48
        Boolean IgnoreFlow; // 0x50
        char pad_0x51[0x7];
    }; // 0x58
    static_assert(sizeof(VoiceOverLogicFlowConfigData) == 0x58);
}
#pragma pack(pop)