// Object: OverlayControl
// ClassId: 4398
// RuntimeId: 52354
// TypeInfo: 0x0000000144E1D3C0
#include "../Core/DataContainer.h"
#include "../Audio/MusicOverlayData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class OverlayControl : public Core::DataContainer {
        Audio::MusicOverlayData Overlay; // 0x18
        Boolean Sync; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(OverlayControl) == 0x28);
}
#pragma pack(pop)