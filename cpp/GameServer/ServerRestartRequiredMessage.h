// Object: ServerRestartRequiredMessage
// RuntimeId: 61326
// TypeInfo: 0x0000000144E56CD0
#pragma pack(push, 8)
namespace GameServer {
    struct ServerRestartRequiredMessage {
        char pad_0x0[0x38];
    }; // 0x38
    static_assert(sizeof(ServerRestartRequiredMessage) == 0x38);
}
#pragma pack(pop)