// Object: ClientStartedMessage
// RuntimeId: 62554
// TypeInfo: 0x0000000144E32C70
#pragma pack(push, 8)
namespace GameClient {
    struct ClientStartedMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ClientStartedMessage) == 0x30);
}
#pragma pack(pop)