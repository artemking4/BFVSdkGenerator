// Object: SaveGameBeginSaveMessage
// RuntimeId: 17959
// TypeInfo: 0x0000000144E493F0
#pragma pack(push, 8)
namespace GameCommon {
    struct SaveGameBeginSaveMessage {
        char pad_0x0[0x60];
    }; // 0x60
    static_assert(sizeof(SaveGameBeginSaveMessage) == 0x60);
}
#pragma pack(pop)