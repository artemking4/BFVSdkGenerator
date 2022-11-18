// Object: ClientUIScreenRenderTargetEntity
// ClassId: 6993
// RuntimeId: 46012
// TypeInfo: 0x0000000144F6A340
#include "../GameClient/ClientUIScreenRenderEntity.h"

namespace UIIncubator {
    class ClientUIScreenRenderTargetEntity : public GameClient::ClientUIScreenRenderEntity {
        char pad_0x110[0x10];
    }; // 0x120
    static_assert(sizeof(ClientUIScreenRenderTargetEntity) == 0x120);
}