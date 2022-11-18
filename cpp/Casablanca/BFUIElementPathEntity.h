// Object: BFUIElementPathEntity
// ClassId: 8145
// RuntimeId: 52965
// TypeInfo: 0x0000000144CF6270
#include "../Casablanca/BFUIElementEntity.h"

namespace Casablanca {
    class BFUIElementPathEntity : public Casablanca::BFUIElementEntity {
        char pad_0x150[0x90];
    }; // 0x1E0
    static_assert(sizeof(BFUIElementPathEntity) == 0x1E0);
}