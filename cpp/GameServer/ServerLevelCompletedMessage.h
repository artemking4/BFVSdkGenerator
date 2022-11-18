// Object: ServerLevelCompletedMessage
// RuntimeId: 19526
// TypeInfo: 0x0000000144E547A0
#pragma pack(push, 8)
namespace GameServer {
    struct ServerLevelCompletedMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ServerLevelCompletedMessage) == 0x30);
}
#pragma pack(pop)