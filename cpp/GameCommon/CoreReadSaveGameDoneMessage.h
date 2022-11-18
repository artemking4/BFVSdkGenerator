// Object: CoreReadSaveGameDoneMessage
// RuntimeId: 58065
// TypeInfo: 0x0000000144E49A20
#pragma pack(push, 8)
namespace GameCommon {
    struct CoreReadSaveGameDoneMessage {
        char pad_0x0[0x48];
    }; // 0x48
    static_assert(sizeof(CoreReadSaveGameDoneMessage) == 0x48);
}
#pragma pack(pop)