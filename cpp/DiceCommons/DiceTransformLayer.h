// Object: DiceTransformLayer
// ClassId: 8640
// RuntimeId: 39107
// TypeInfo: 0x0000000144DA84B0
#include "../Timeline/SimpleTransformLayer.h"

namespace DiceCommons {
    class DiceTransformLayer : public Timeline::SimpleTransformLayer {
        char pad_0x60[0x8];
    }; // 0x68
    static_assert(sizeof(DiceTransformLayer) == 0x68);
}