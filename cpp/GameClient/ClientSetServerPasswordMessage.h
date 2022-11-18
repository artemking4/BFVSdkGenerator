// Object: ClientSetServerPasswordMessage
// RuntimeId: 24944
// TypeInfo: 0x0000000144E324F0
#pragma pack(push, 8)
namespace GameClient {
    struct ClientSetServerPasswordMessage {
        char pad_0x0[0x38];
    }; // 0x38
    static_assert(sizeof(ClientSetServerPasswordMessage) == 0x38);
}
#pragma pack(pop)