// Object: ClientExitGameMessage
// RuntimeId: 56111
// TypeInfo: 0x0000000144E32AE0
#pragma pack(push, 8)
namespace GameClient {
    struct ClientExitGameMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ClientExitGameMessage) == 0x30);
}
#pragma pack(pop)