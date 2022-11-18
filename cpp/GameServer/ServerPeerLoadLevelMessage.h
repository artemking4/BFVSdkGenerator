// Object: ServerPeerLoadLevelMessage
// RuntimeId: 62549
// TypeInfo: 0x0000000144E54660
#pragma pack(push, 8)
namespace GameServer {
    struct ServerPeerLoadLevelMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ServerPeerLoadLevelMessage) == 0x30);
}
#pragma pack(pop)