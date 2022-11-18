// Object: ANTSlotTrack
// ClassId: 8607
// RuntimeId: 9436
// TypeInfo: 0x0000000144E4BB50
#include "../Timeline/IPropertyTrack.h"

namespace GameCommon {
    class ANTSlotTrack : public Timeline::IPropertyTrack {
        char pad_0x58[0x58];
    }; // 0xB0
    static_assert(sizeof(ANTSlotTrack) == 0xB0);
}