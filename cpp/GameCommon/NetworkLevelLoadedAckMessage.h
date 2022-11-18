// Object: NetworkLevelLoadedAckMessage
// RuntimeId: 4807
// TypeInfo: 0x0000000144E492B0
#pragma pack(push, 8)
namespace GameCommon {
    struct NetworkLevelLoadedAckMessage {
        char pad_0x0[0x70];
    }; // 0x70
    static_assert(sizeof(NetworkLevelLoadedAckMessage) == 0x70);
}
#pragma pack(pop)