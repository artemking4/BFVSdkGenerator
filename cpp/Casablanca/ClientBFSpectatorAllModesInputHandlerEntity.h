// Object: ClientBFSpectatorAllModesInputHandlerEntity
// ClassId: 6345
// RuntimeId: 21838
// TypeInfo: 0x0000000144CC1940
#include "../Casablanca/ClientBFSpectatorInputHandlerEntity.h"

namespace Casablanca {
    class ClientBFSpectatorAllModesInputHandlerEntity : public Casablanca::ClientBFSpectatorInputHandlerEntity {
        char pad_0x40[0x120];
    }; // 0x160
    static_assert(sizeof(ClientBFSpectatorAllModesInputHandlerEntity) == 0x160);
}