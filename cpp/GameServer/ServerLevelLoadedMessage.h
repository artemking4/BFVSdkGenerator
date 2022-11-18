// Object: ServerLevelLoadedMessage
// RuntimeId: 55177
// TypeInfo: 0x0000000144E56FF0
#pragma pack(push, 8)
namespace GameServer {
    struct ServerLevelLoadedMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ServerLevelLoadedMessage) == 0x30);
}
#pragma pack(pop)