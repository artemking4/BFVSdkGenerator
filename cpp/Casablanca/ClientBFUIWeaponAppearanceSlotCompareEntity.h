// Object: ClientBFUIWeaponAppearanceSlotCompareEntity
// ClassId: 6512
// RuntimeId: 1502
// TypeInfo: 0x0000000144CA7AC0
#include "../Casablanca/ClientBFUIObjectCompareEntity.h"

namespace Casablanca {
    class ClientBFUIWeaponAppearanceSlotCompareEntity : public Casablanca::ClientBFUIObjectCompareEntity {
        char pad_0x48[0x20];
    }; // 0x68
    static_assert(sizeof(ClientBFUIWeaponAppearanceSlotCompareEntity) == 0x68);
}