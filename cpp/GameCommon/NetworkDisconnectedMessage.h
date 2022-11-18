// Object: NetworkDisconnectedMessage
// RuntimeId: 22264
// TypeInfo: 0x0000000144E4A2E0
#pragma pack(push, 8)
namespace GameCommon {
    struct NetworkDisconnectedMessage {
        char pad_0x0[0x40];
    }; // 0x40
    static_assert(sizeof(NetworkDisconnectedMessage) == 0x40);
}
#pragma pack(pop)