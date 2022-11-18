// Object: ServerPlayerTickInfoMessage
// RuntimeId: 17271
// TypeInfo: 0x0000000144E55FB0
#pragma pack(push, 8)
namespace GameServer {
    struct ServerPlayerTickInfoMessage {
        char pad_0x0[0x48];
    }; // 0x48
    static_assert(sizeof(ServerPlayerTickInfoMessage) == 0x48);
}
#pragma pack(pop)