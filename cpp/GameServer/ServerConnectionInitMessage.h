// Object: ServerConnectionInitMessage
// RuntimeId: 57800
// TypeInfo: 0x0000000144E55B00
#pragma pack(push, 8)
namespace GameServer {
    struct ServerConnectionInitMessage {
        char pad_0x0[0x38];
    }; // 0x38
    static_assert(sizeof(ServerConnectionInitMessage) == 0x38);
}
#pragma pack(pop)