// Object: ServerUnloadLevelMessage
// RuntimeId: 33976
// TypeInfo: 0x0000000144E56FA0
#pragma pack(push, 8)
namespace GameServer {
    struct ServerUnloadLevelMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ServerUnloadLevelMessage) == 0x30);
}
#pragma pack(pop)