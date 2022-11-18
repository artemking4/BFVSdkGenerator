// Object: ServerLevelUnloadedMessage
// RuntimeId: 3620
// TypeInfo: 0x0000000144E56F50
#pragma pack(push, 8)
namespace GameServer {
    struct ServerLevelUnloadedMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ServerLevelUnloadedMessage) == 0x30);
}
#pragma pack(pop)