// Object: VoiceOverDialogClipEvents
// ClassId: 5581
// RuntimeId: 51824
// TypeInfo: 0x0000000144E1B4C0
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverDialogClipEvents : public Core::DataContainer {
        Uint32 StartedNameHash; // 0x18
        Uint32 FinishedNameHash; // 0x1C
    }; // 0x20
    static_assert(sizeof(VoiceOverDialogClipEvents) == 0x20);
}
#pragma pack(pop)