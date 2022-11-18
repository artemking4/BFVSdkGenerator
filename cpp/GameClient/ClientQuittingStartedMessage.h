// Object: ClientQuittingStartedMessage
// RuntimeId: 32578
// TypeInfo: 0x0000000144E32900
#pragma pack(push, 8)
namespace GameClient {
    struct ClientQuittingStartedMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ClientQuittingStartedMessage) == 0x30);
}
#pragma pack(pop)