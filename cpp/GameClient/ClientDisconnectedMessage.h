// Object: ClientDisconnectedMessage
// RuntimeId: 43307
// TypeInfo: 0x0000000144E325E0
#pragma pack(push, 8)
namespace GameClient {
    struct ClientDisconnectedMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ClientDisconnectedMessage) == 0x30);
}
#pragma pack(pop)