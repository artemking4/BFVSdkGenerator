// Object: NetworkTinyEventMessage
// RuntimeId: 23991
// TypeInfo: 0x0000000144E49300
#pragma pack(push, 8)
namespace GameCommon {
    struct NetworkTinyEventMessage {
        char pad_0x0[0x60];
    }; // 0x60
    static_assert(sizeof(NetworkTinyEventMessage) == 0x60);
}
#pragma pack(pop)