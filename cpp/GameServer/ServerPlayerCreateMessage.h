// Object: ServerPlayerCreateMessage
// RuntimeId: 920
// TypeInfo: 0x0000000144E56A50
#pragma pack(push, 8)
namespace GameServer {
    struct ServerPlayerCreateMessage {
        char pad_0x0[0x48];
    }; // 0x48
    static_assert(sizeof(ServerPlayerCreateMessage) == 0x48);
}
#pragma pack(pop)