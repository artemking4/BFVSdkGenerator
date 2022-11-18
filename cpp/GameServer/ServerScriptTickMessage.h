// Object: ServerScriptTickMessage
// RuntimeId: 56660
// TypeInfo: 0x0000000144E56E60
#pragma pack(push, 8)
namespace GameServer {
    struct ServerScriptTickMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ServerScriptTickMessage) == 0x30);
}
#pragma pack(pop)