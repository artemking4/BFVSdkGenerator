// Object: ClientRankSubView
// ClassId: 8546
// RuntimeId: 22233
// TypeInfo: 0x0000000144DC4FB0
#include "../GameClient/ClientSubView.h"

#pragma pack(push, 8)
namespace DicePersistence {
    class ClientRankSubView : public GameClient::ClientSubView {
        char pad_0x38[0x60];
    }; // 0x98
    static_assert(sizeof(ClientRankSubView) == 0x98);
}
#pragma pack(pop)