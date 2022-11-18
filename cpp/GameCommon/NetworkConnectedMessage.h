// Object: NetworkConnectedMessage
// RuntimeId: 7538
// TypeInfo: 0x0000000144E4A330
#pragma pack(push, 8)
namespace GameCommon {
    struct NetworkConnectedMessage {
        char pad_0x0[0x78];
    }; // 0x78
    static_assert(sizeof(NetworkConnectedMessage) == 0x78);
}
#pragma pack(pop)