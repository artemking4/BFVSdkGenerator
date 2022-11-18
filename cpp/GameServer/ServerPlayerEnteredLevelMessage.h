// Object: ServerPlayerEnteredLevelMessage
// RuntimeId: 63113
// TypeInfo: 0x0000000144E56820
#pragma pack(push, 8)
namespace GameServer {
    struct ServerPlayerEnteredLevelMessage {
        char pad_0x0[0x40];
    }; // 0x40
    static_assert(sizeof(ServerPlayerEnteredLevelMessage) == 0x40);
}
#pragma pack(pop)