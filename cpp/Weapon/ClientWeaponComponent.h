// Object: ClientWeaponComponent
// ClassId: 5798
// RuntimeId: 42505
// TypeInfo: 0x0000000144F75CE0
#include "../GameClient/ClientBoneComponent.h"

namespace Weapon {
    class ClientWeaponComponent : public GameClient::ClientBoneComponent {
        char pad_0x38[0x45C8];
    }; // 0x4600
    static_assert(sizeof(ClientWeaponComponent) == 0x4600);
}