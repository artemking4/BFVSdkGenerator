// Object: MusicTransition
// ClassId: 4346
// RuntimeId: 64056
// TypeInfo: 0x0000000144E1D140
#include "../Core/DataContainer.h"
#include "../Audio/MusicStreamableData.h"
#include "../Audio/BasicFadeData.h"
#include "../Audio/OverlayControl.h"

#pragma pack(push, 8)
namespace Audio {
    class MusicTransition : public Core::DataContainer {
        Audio::MusicStreamableData Source; // 0x18
        Audio::MusicStreamableData Destination; // 0x20
        Audio::BasicFadeData Fade; // 0x28
        Audio::OverlayControl OverlayControl; // 0x30
    }; // 0x38
    static_assert(sizeof(MusicTransition) == 0x38);
}
#pragma pack(pop)