// Object: NetworkSpawnMessage
// RuntimeId: 45440
// TypeInfo: 0x0000000144E49080
#pragma pack(push, 8)
namespace GameCommon {
    struct NetworkSpawnMessage {
        char pad_0x0[0x88];
    }; // 0x88
    static_assert(sizeof(NetworkSpawnMessage) == 0x88);
}
#pragma pack(pop)