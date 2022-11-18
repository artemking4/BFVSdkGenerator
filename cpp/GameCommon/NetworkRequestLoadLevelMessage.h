// Object: NetworkRequestLoadLevelMessage
// RuntimeId: 44211
// TypeInfo: 0x0000000144E490D0
#pragma pack(push, 8)
namespace GameCommon {
    struct NetworkRequestLoadLevelMessage {
        char pad_0x0[0x80];
    }; // 0x80
    static_assert(sizeof(NetworkRequestLoadLevelMessage) == 0x80);
}
#pragma pack(pop)