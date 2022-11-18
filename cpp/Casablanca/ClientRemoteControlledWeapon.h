// Object: ClientRemoteControlledWeapon
// ClassId: 8671
// RuntimeId: 22572
// TypeInfo: 0x0000000144C84AA0
#include "../Casablanca/BFClientWeapon.h"

namespace Casablanca {
    class ClientRemoteControlledWeapon : public Casablanca::BFClientWeapon {
        char pad_0xEA0[0x10];
    }; // 0xEB0
    static_assert(sizeof(ClientRemoteControlledWeapon) == 0xEB0);
}