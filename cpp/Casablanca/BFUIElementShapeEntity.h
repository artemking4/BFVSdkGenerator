// Object: BFUIElementShapeEntity
// ClassId: 8149
// RuntimeId: 20121
// TypeInfo: 0x0000000144CAD470
#include "../Casablanca/BFUIElementEntity.h"

namespace Casablanca {
    class BFUIElementShapeEntity : public Casablanca::BFUIElementEntity {
        char pad_0x150[0xA0];
    }; // 0x1F0
    static_assert(sizeof(BFUIElementShapeEntity) == 0x1F0);
}