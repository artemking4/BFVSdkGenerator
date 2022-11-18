// Object: DakarInteractionEntity
// ClassId: 8000
// RuntimeId: 55353
// TypeInfo: 0x0000000144C1EFE0
#include "../Casablanca/NonGhostInteractionEntity.h"

namespace Casablanca {
    class DakarInteractionEntity : public Casablanca::NonGhostInteractionEntity {
        char pad_0x48[0x88];
    }; // 0xD0
    static_assert(sizeof(DakarInteractionEntity) == 0xD0);
}