// Object: SaveGameWrittenToMediaMessage
// RuntimeId: 48292
// TypeInfo: 0x0000000144E571D0
#pragma pack(push, 8)
namespace GameServer {
    struct SaveGameWrittenToMediaMessage {
        char pad_0x0[0x38];
    }; // 0x38
    static_assert(sizeof(SaveGameWrittenToMediaMessage) == 0x38);
}
#pragma pack(pop)