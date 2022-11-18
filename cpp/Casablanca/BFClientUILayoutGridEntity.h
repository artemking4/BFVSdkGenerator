// Object: BFClientUILayoutGridEntity
// ClassId: 6208
// RuntimeId: 63684
// TypeInfo: 0x0000000144C99960
#include "../Casablanca/BFClientUILayoutEntity.h"

namespace Casablanca {
    class BFClientUILayoutGridEntity : public Casablanca::BFClientUILayoutEntity {
        char pad_0x50[0x20];
    }; // 0x70
    static_assert(sizeof(BFClientUILayoutGridEntity) == 0x70);
}