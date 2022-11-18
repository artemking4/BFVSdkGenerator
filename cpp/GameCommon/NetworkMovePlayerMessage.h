// Object: NetworkMovePlayerMessage
// RuntimeId: 23868
// TypeInfo: 0x0000000144E48E50
#pragma pack(push, 16)
namespace GameCommon {
    struct NetworkMovePlayerMessage {
        char pad_0x0[0xA0];
    }; // 0xA0
    static_assert(sizeof(NetworkMovePlayerMessage) == 0xA0);
}
#pragma pack(pop)