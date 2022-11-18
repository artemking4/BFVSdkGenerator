// Object: NetworkLoadLevelMessage
// RuntimeId: 63552
// TypeInfo: 0x0000000144E49260
#pragma pack(push, 8)
namespace GameCommon {
    struct NetworkLoadLevelMessage {
        char pad_0x0[0x90];
    }; // 0x90
    static_assert(sizeof(NetworkLoadLevelMessage) == 0x90);
}
#pragma pack(pop)