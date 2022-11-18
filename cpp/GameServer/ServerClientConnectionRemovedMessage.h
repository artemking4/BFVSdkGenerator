// Object: ServerClientConnectionRemovedMessage
// RuntimeId: 54120
// TypeInfo: 0x0000000144E56D20
#pragma pack(push, 8)
namespace GameServer {
    struct ServerClientConnectionRemovedMessage {
        char pad_0x0[0x40];
    }; // 0x40
    static_assert(sizeof(ServerClientConnectionRemovedMessage) == 0x40);
}
#pragma pack(pop)