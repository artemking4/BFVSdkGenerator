// Object: ServerAimRotationBoneComponent
// ClassId: 5945
// RuntimeId: 52080
// TypeInfo: 0x0000000144DCBCE0
#include "../GameServer/ServerGameComponent.h"

namespace DiceShooter {
    class ServerAimRotationBoneComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x58];
    }; // 0x90
    static_assert(sizeof(ServerAimRotationBoneComponent) == 0x90);
}