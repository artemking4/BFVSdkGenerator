// Object: ServerAdminSetServerNameMessage
// RuntimeId: 15587
// TypeInfo: 0x0000000144E56E10
#pragma pack(push, 8)
namespace GameServer {
    struct ServerAdminSetServerNameMessage {
        char pad_0x0[0x38];
    }; // 0x38
    static_assert(sizeof(ServerAdminSetServerNameMessage) == 0x38);
}
#pragma pack(pop)