// Object: ServerLevelStartedMessage
// RuntimeId: 11428
// TypeInfo: 0x0000000144E547F0
#pragma pack(push, 8)
namespace GameServer {
    struct ServerLevelStartedMessage {
        char pad_0x0[0x38];
    }; // 0x38
    static_assert(sizeof(ServerLevelStartedMessage) == 0x38);
}
#pragma pack(pop)