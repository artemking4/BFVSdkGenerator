// Object: ClientBFSpectatorFreeFlyCameraInputHandlerEntity
// ClassId: 6348
// RuntimeId: 23338
// TypeInfo: 0x0000000144CC12E0
#include "../Casablanca/ClientBFSpectatorInputHandlerEntity.h"

namespace Casablanca {
    class ClientBFSpectatorFreeFlyCameraInputHandlerEntity : public Casablanca::ClientBFSpectatorInputHandlerEntity {
        char pad_0x40[0x2C0];
    }; // 0x300
    static_assert(sizeof(ClientBFSpectatorFreeFlyCameraInputHandlerEntity) == 0x300);
}