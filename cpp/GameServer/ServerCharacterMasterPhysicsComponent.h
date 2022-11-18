// Object: ServerCharacterMasterPhysicsComponent
// ClassId: 6107
// RuntimeId: 22098
// TypeInfo: 0x0000000144E5AB00
#include "../Physics/CharacterPhysicsComponent.h"

namespace GameServer {
    class ServerCharacterMasterPhysicsComponent : public Physics::CharacterPhysicsComponent {
        char pad_0x90[0x10];
    }; // 0xA0
    static_assert(sizeof(ServerCharacterMasterPhysicsComponent) == 0xA0);
}