// Object: ServerStoppedMessage
// RuntimeId: 37116
// TypeInfo: 0x0000000144E57040
#pragma pack(push, 8)
namespace GameServer {
    struct ServerStoppedMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ServerStoppedMessage) == 0x30);
}
#pragma pack(pop)