// Object: CoreReadSaveGameDataMessage
// RuntimeId: 41213
// TypeInfo: 0x0000000144E49A70
#pragma pack(push, 8)
namespace GameCommon {
    struct CoreReadSaveGameDataMessage {
        char pad_0x0[0x40];
    }; // 0x40
    static_assert(sizeof(CoreReadSaveGameDataMessage) == 0x40);
}
#pragma pack(pop)