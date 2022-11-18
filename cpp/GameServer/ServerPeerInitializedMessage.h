// Object: ServerPeerInitializedMessage
// RuntimeId: 47185
// TypeInfo: 0x0000000144E546B0
#pragma pack(push, 8)
namespace GameServer {
    struct ServerPeerInitializedMessage {
        char pad_0x0[0x38];
    }; // 0x38
    static_assert(sizeof(ServerPeerInitializedMessage) == 0x38);
}
#pragma pack(pop)