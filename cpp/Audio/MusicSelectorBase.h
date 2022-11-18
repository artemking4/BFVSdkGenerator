// Object: MusicSelectorBase
// ClassId: 4343
// RuntimeId: 45516
// TypeInfo: 0x0000000144E1D340
#include "../Core/DataContainer.h"
#include "../Audio/MusicEventData.h"

namespace Audio {
    class MusicSelectorBase : public Core::DataContainer {
        Audio::MusicEventData Event; // 0x18
    }; // 0x20
    static_assert(sizeof(MusicSelectorBase) == 0x20);
}