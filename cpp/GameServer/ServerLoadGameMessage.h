// Object: ServerLoadGameMessage
// RuntimeId: 17528
// TypeInfo: 0x0000000144E57180
#pragma pack(push, 8)
namespace GameServer {
    struct ServerLoadGameMessage {
        char pad_0x0[0x68];
    }; // 0x68
    static_assert(sizeof(ServerLoadGameMessage) == 0x68);
}
#pragma pack(pop)