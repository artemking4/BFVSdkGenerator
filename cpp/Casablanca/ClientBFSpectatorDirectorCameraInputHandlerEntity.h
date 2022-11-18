// Object: ClientBFSpectatorDirectorCameraInputHandlerEntity
// ClassId: 6347
// RuntimeId: 52696
// TypeInfo: 0x0000000144CC13F0
#include "../Casablanca/ClientBFSpectatorInputHandlerEntity.h"

namespace Casablanca {
    class ClientBFSpectatorDirectorCameraInputHandlerEntity : public Casablanca::ClientBFSpectatorInputHandlerEntity {
        char pad_0x40[0x410];
    }; // 0x450
    static_assert(sizeof(ClientBFSpectatorDirectorCameraInputHandlerEntity) == 0x450);
}