// Object: ClientBFUIWeaponAppearanceCompareEntity
// ClassId: 6510
// RuntimeId: 33885
// TypeInfo: 0x0000000144CA7CE0
#include "../Casablanca/ClientBFUIObjectCompareEntity.h"

namespace Casablanca {
    class ClientBFUIWeaponAppearanceCompareEntity : public Casablanca::ClientBFUIObjectCompareEntity {
        char pad_0x48[0x20];
    }; // 0x68
    static_assert(sizeof(ClientBFUIWeaponAppearanceCompareEntity) == 0x68);
}