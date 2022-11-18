// Object: ClientBFDrivenRagdollComponent
// ClassId: 5819
// RuntimeId: 25124
// TypeInfo: 0x0000000144C466D0
#include "../EACharacterPhysics/ClientEACharacterPhysicsComponent.h"

namespace Casablanca {
    class ClientBFDrivenRagdollComponent : public EACharacterPhysics::ClientEACharacterPhysicsComponent {
        char pad_0xC0[0x380];
    }; // 0x440
    static_assert(sizeof(ClientBFDrivenRagdollComponent) == 0x440);
}