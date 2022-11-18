// Object: ClientBFUIWeaponFilterEntity
// ClassId: 6399
// RuntimeId: 23277
// TypeInfo: 0x0000000144CA6F10
#include "../Casablanca/ClientBFUIClassFilterEntityBase.h"

namespace Casablanca {
    class ClientBFUIWeaponFilterEntity : public Casablanca::ClientBFUIClassFilterEntityBase {
        char pad_0x40[0x50];
    }; // 0x90
    static_assert(sizeof(ClientBFUIWeaponFilterEntity) == 0x90);
}