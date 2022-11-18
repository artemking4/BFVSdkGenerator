// Object: ClientBFSpectatorProjectileCameraInputHandlerEntity
// ClassId: 6350
// RuntimeId: 26196
// TypeInfo: 0x0000000144CCCC80
#include "../Casablanca/ClientBFSpectatorInputHandlerEntity.h"

namespace Casablanca {
    class ClientBFSpectatorProjectileCameraInputHandlerEntity : public Casablanca::ClientBFSpectatorInputHandlerEntity {
        char pad_0x40[0x100];
    }; // 0x140
    static_assert(sizeof(ClientBFSpectatorProjectileCameraInputHandlerEntity) == 0x140);
}