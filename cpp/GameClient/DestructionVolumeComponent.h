// Object: DestructionVolumeComponent
// ClassId: 5920
// RuntimeId: 55538
// TypeInfo: 0x0000000144E3D7F0
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class DestructionVolumeComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(DestructionVolumeComponent) == 0x40);
}