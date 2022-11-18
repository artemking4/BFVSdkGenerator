// Object: ServerPlayerSwitchTeamMessage
// RuntimeId: 40704
// TypeInfo: 0x0000000144E56500
#pragma pack(push, 8)
namespace GameServer {
    struct ServerPlayerSwitchTeamMessage {
        char pad_0x0[0x40];
    }; // 0x40
    static_assert(sizeof(ServerPlayerSwitchTeamMessage) == 0x40);
}
#pragma pack(pop)