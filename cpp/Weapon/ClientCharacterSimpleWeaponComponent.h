// Object: ClientCharacterSimpleWeaponComponent
// ClassId: 5813
// RuntimeId: 5340
// TypeInfo: 0x0000000144F75E60
#include "../GameClient/ClientGameComponent.h"

namespace Weapon {
    class ClientCharacterSimpleWeaponComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x58];
    }; // 0x90
    static_assert(sizeof(ClientCharacterSimpleWeaponComponent) == 0x90);
}