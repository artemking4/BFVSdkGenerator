// Object: ClientStartupFinishedMessage
// RuntimeId: 30612
// TypeInfo: 0x0000000144E32950
#pragma pack(push, 8)
namespace GameClient {
    struct ClientStartupFinishedMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ClientStartupFinishedMessage) == 0x30);
}
#pragma pack(pop)