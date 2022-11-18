// Object: VoiceOverDialogClip
// ClassId: 5580
// RuntimeId: 47819
// TypeInfo: 0x0000000144E1B440
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Audio/VoiceOverDialogTake.h"
#include "../Audio/VoiceOverDialogClip.h"
#include "../Global/Uint8.h"
#include "../Audio/VoiceOverDialogClipEvents.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverDialogClip : public Core::DataContainer {
        Float32 MinOffset; // 0x18
        Float32 MaxOffset; // 0x1C
        Array<Audio::VoiceOverDialogTake> Takes; // 0x20
        Array<Audio::VoiceOverDialogClip> OffsetReferences; // 0x28
        Audio::VoiceOverDialogClipEvents Events; // 0x30
        Uint8 SequenceIndex; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(VoiceOverDialogClip) == 0x40);
}
#pragma pack(pop)