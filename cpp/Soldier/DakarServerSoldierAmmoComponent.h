// Object: DakarServerSoldierAmmoComponent
// ClassId: 5927
// RuntimeId: 49887
// TypeInfo: 0x0000000144F31300
#include "../GameServer/ServerGameComponent.h"

namespace Soldier {
    class DakarServerSoldierAmmoComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x68];
    }; // 0xA0
    static_assert(sizeof(DakarServerSoldierAmmoComponent) == 0xA0);
}