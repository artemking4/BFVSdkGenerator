// Object: ClientConnectedMessage
// RuntimeId: 2405
// TypeInfo: 0x0000000144E32630
#pragma pack(push, 8)
namespace GameClient {
    struct ClientConnectedMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ClientConnectedMessage) == 0x30);
}
#pragma pack(pop)