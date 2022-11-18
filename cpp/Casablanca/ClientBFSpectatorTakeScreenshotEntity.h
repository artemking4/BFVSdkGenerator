// Object: ClientBFSpectatorTakeScreenshotEntity
// ClassId: 6893
// RuntimeId: 50676
// TypeInfo: 0x0000000144CCC620
#include "../GameClient/ClientTakeScreenshotEntity.h"

namespace Casablanca {
    class ClientBFSpectatorTakeScreenshotEntity : public GameClient::ClientTakeScreenshotEntity {
        char pad_0xA8[0x8];
    }; // 0xB0
    static_assert(sizeof(ClientBFSpectatorTakeScreenshotEntity) == 0xB0);
}