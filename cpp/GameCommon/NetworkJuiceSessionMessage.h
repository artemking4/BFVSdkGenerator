// Object: NetworkJuiceSessionMessage
// RuntimeId: 64067
// TypeInfo: 0x0000000144E48EA0
#pragma pack(push, 8)
namespace GameCommon {
    struct NetworkJuiceSessionMessage {
        char pad_0x0[0x60];
    }; // 0x60
    static_assert(sizeof(NetworkJuiceSessionMessage) == 0x60);
}
#pragma pack(pop)