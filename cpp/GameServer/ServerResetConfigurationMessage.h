// Object: ServerResetConfigurationMessage
// RuntimeId: 16404
// TypeInfo: 0x0000000144E570E0
#pragma pack(push, 8)
namespace GameServer {
    struct ServerResetConfigurationMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ServerResetConfigurationMessage) == 0x30);
}
#pragma pack(pop)