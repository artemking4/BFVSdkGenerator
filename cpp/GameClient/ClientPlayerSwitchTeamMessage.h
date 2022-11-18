// Object: ClientPlayerSwitchTeamMessage
// RuntimeId: 3646
// TypeInfo: 0x0000000144E31FF0
#pragma pack(push, 8)
namespace GameClient {
    struct ClientPlayerSwitchTeamMessage {
        char pad_0x0[0x40];
    }; // 0x40
    static_assert(sizeof(ClientPlayerSwitchTeamMessage) == 0x40);
}
#pragma pack(pop)