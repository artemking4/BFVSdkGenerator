// Object: ServerConnectionExitMessage
// RuntimeId: 42268
// TypeInfo: 0x0000000144E55AB0
#pragma pack(push, 8)
namespace GameServer {
    struct ServerConnectionExitMessage {
        char pad_0x0[0x40];
    }; // 0x40
    static_assert(sizeof(ServerConnectionExitMessage) == 0x40);
}
#pragma pack(pop)