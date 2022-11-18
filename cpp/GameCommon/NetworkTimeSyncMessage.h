// Object: NetworkTimeSyncMessage
// RuntimeId: 52081
// TypeInfo: 0x0000000144E49210
#pragma pack(push, 8)
namespace GameCommon {
    struct NetworkTimeSyncMessage {
        char pad_0x0[0x68];
    }; // 0x68
    static_assert(sizeof(NetworkTimeSyncMessage) == 0x68);
}
#pragma pack(pop)