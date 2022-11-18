// Object: ServerCharacterAliveMessage
// RuntimeId: 31128
// TypeInfo: 0x0000000144E56B90
#pragma pack(push, 8)
namespace GameServer {
    struct ServerCharacterAliveMessage {
        char pad_0x0[0x38];
    }; // 0x38
    static_assert(sizeof(ServerCharacterAliveMessage) == 0x38);
}
#pragma pack(pop)