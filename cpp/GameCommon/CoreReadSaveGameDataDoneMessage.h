// Object: CoreReadSaveGameDataDoneMessage
// RuntimeId: 52223
// TypeInfo: 0x0000000144E499D0
#pragma pack(push, 8)
namespace GameCommon {
    struct CoreReadSaveGameDataDoneMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(CoreReadSaveGameDataDoneMessage) == 0x30);
}
#pragma pack(pop)