// Object: VoiceOverDialogGroup
// ClassId: 5582
// RuntimeId: 64242
// TypeInfo: 0x0000000144E1B2C0
#include "../Core/DataContainer.h"
#include "../Audio/SoundAsset.h"
#include "../Audio/VoiceOverDialogSoundParameter.h"
#include "../Audio/VoiceOverDialogOutputEvent.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverDialogGroup : public Core::DataContainer {
        Audio::SoundAsset Sound; // 0x18
        Array<Audio::VoiceOverDialogSoundParameter> Parameters; // 0x20
        Array<Audio::VoiceOverDialogOutputEvent> OutputEvents; // 0x28
        Uint8 TrackCount; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(VoiceOverDialogGroup) == 0x38);
}
#pragma pack(pop)