// Object: ServerRemoteControlledWeapon
// ClassId: 8711
// RuntimeId: 7187
// TypeInfo: 0x0000000144CDCAF0
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerRemoteControlledWeapon : public Casablanca::BFServerWeapon {
        char pad_0x470[0x1D0];
    }; // 0x640
    static_assert(sizeof(ServerRemoteControlledWeapon) == 0x640);
}