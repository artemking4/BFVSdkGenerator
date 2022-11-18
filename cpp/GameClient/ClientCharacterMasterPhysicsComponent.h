// Object: ClientCharacterMasterPhysicsComponent
// ClassId: 6104
// RuntimeId: 15694
// TypeInfo: 0x0000000144E39230
#include "../Physics/CharacterPhysicsComponent.h"

namespace GameClient {
    class ClientCharacterMasterPhysicsComponent : public Physics::CharacterPhysicsComponent {
        char pad_0x90[0x30];
    }; // 0xC0
    static_assert(sizeof(ClientCharacterMasterPhysicsComponent) == 0xC0);
}