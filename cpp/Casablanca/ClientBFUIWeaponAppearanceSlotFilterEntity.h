// Object: ClientBFUIWeaponAppearanceSlotFilterEntity
// ClassId: 6406
// RuntimeId: 14586
// TypeInfo: 0x0000000144CA6E00
#include "../Casablanca/ClientBFUIFilterEntityBase.h"

namespace Casablanca {
    class ClientBFUIWeaponAppearanceSlotFilterEntity : public Casablanca::ClientBFUIFilterEntityBase {
        char pad_0x38[0x80];
    }; // 0xB8
    static_assert(sizeof(ClientBFUIWeaponAppearanceSlotFilterEntity) == 0xB8);
}