// Object: SaveGameHeaderEntry
// RuntimeId: 2498
// TypeInfo: 0x0000000144E49BB0
#pragma pack(push, 8)
namespace GameCommon {
    struct SaveGameHeaderEntry {
        char pad_0x0[0x10];
    }; // 0x10
    static_assert(sizeof(SaveGameHeaderEntry) == 0x10);
}
#pragma pack(pop)