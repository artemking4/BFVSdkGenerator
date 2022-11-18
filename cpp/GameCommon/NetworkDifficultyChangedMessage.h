// Object: NetworkDifficultyChangedMessage
// RuntimeId: 61036
// TypeInfo: 0x0000000144E48C20
#pragma pack(push, 8)
namespace GameCommon {
    struct NetworkDifficultyChangedMessage {
        char pad_0x0[0x60];
    }; // 0x60
    static_assert(sizeof(NetworkDifficultyChangedMessage) == 0x60);
}
#pragma pack(pop)