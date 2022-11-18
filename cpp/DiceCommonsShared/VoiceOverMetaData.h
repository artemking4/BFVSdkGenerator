// Object: VoiceOverMetaData
// ClassId: 5596
// RuntimeId: 49916
// TypeInfo: 0x0000000144DB6410
#include "../Core/DataContainer.h"
#include "../Audio/VoiceOverLabel.h"
#include "../Audio/VoiceOverLogicAsset.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class VoiceOverMetaData : public Core::DataContainer {
        Array<Audio::VoiceOverLabel> VoiceOverLabels; // 0x18
        Audio::VoiceOverLogicAsset VoiceOverLogic; // 0x20
    }; // 0x28
    static_assert(sizeof(VoiceOverMetaData) == 0x28);
}
#pragma pack(pop)