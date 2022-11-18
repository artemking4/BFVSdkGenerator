// Object: ServerGameModeResetMessage
// RuntimeId: 38931
// TypeInfo: 0x0000000144E54DE0
#pragma pack(push, 8)
namespace GameServer {
    struct ServerGameModeResetMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ServerGameModeResetMessage) == 0x30);
}
#pragma pack(pop)