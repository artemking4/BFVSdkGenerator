// Object: LayeredTransformTrack
// ClassId: 8609
// RuntimeId: 38609
// TypeInfo: 0x0000000144F61CE0
#include "../Timeline/IPropertyTrack.h"

namespace Timeline {
    class LayeredTransformTrack : public Timeline::IPropertyTrack {
        char pad_0x58[0x188];
    }; // 0x1E0
    static_assert(sizeof(LayeredTransformTrack) == 0x1E0);
}