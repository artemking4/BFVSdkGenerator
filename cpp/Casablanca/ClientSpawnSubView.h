// Object: ClientSpawnSubView
// ClassId: 8547
// RuntimeId: 64297
// TypeInfo: 0x0000000144C491F0
#include "../GameClient/ClientSubView.h"

#pragma pack(push, 8)
namespace Casablanca {
    class ClientSpawnSubView : public GameClient::ClientSubView {
        char pad_0x38[0x58];
    }; // 0x90
    static_assert(sizeof(ClientSpawnSubView) == 0x90);
}
#pragma pack(pop)