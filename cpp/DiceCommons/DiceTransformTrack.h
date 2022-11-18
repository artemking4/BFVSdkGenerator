// Object: DiceTransformTrack
// ClassId: 8608
// RuntimeId: 52631
// TypeInfo: 0x0000000144DACDF0
#include "../Timeline/IPropertyTrack.h"

namespace DiceCommons {
    class DiceTransformTrack : public Timeline::IPropertyTrack {
        char pad_0x58[0x2B8];
    }; // 0x310
    static_assert(sizeof(DiceTransformTrack) == 0x310);
}