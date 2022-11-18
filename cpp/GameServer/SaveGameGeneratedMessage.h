// Object: SaveGameGeneratedMessage
// RuntimeId: 4001
// TypeInfo: 0x0000000144E57220
#pragma pack(push, 8)
namespace GameServer {
    struct SaveGameGeneratedMessage {
        char pad_0x0[0x38];
    }; // 0x38
    static_assert(sizeof(SaveGameGeneratedMessage) == 0x38);
}
#pragma pack(pop)