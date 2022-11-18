// Object: ServerStartedMessage
// RuntimeId: 59744
// TypeInfo: 0x0000000144E57130
#pragma pack(push, 8)
namespace GameServer {
    struct ServerStartedMessage {
        char pad_0x0[0x38];
    }; // 0x38
    static_assert(sizeof(ServerStartedMessage) == 0x38);
}
#pragma pack(pop)