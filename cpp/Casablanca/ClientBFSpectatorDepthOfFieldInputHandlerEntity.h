// Object: ClientBFSpectatorDepthOfFieldInputHandlerEntity
// ClassId: 6346
// RuntimeId: 24112
// TypeInfo: 0x0000000144CC1500
#include "../Casablanca/ClientBFSpectatorInputHandlerEntity.h"

namespace Casablanca {
    class ClientBFSpectatorDepthOfFieldInputHandlerEntity : public Casablanca::ClientBFSpectatorInputHandlerEntity {
        char pad_0x40[0x80];
    }; // 0xC0
    static_assert(sizeof(ClientBFSpectatorDepthOfFieldInputHandlerEntity) == 0xC0);
}