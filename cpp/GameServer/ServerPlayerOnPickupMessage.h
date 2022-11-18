// Object: ServerPlayerOnPickupMessage
// RuntimeId: 32518
// TypeInfo: 0x0000000144E56230
#pragma pack(push, 8)
namespace GameServer {
    struct ServerPlayerOnPickupMessage {
        char pad_0x0[0x40];
    }; // 0x40
    static_assert(sizeof(ServerPlayerOnPickupMessage) == 0x40);
}
#pragma pack(pop)