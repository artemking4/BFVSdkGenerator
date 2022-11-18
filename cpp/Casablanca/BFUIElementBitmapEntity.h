// Object: BFUIElementBitmapEntity
// ClassId: 8125
// RuntimeId: 30790
// TypeInfo: 0x0000000144CF6E20
#include "../Casablanca/BFUIElementEntity.h"

namespace Casablanca {
    class BFUIElementBitmapEntity : public Casablanca::BFUIElementEntity {
        char pad_0x150[0xC0];
    }; // 0x210
    static_assert(sizeof(BFUIElementBitmapEntity) == 0x210);
}