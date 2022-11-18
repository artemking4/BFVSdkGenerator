// Object: ClientLevelLoadProgressMessage
// RuntimeId: 22062
// TypeInfo: 0x0000000144E32770
#pragma pack(push, 8)
namespace GameClient {
    struct ClientLevelLoadProgressMessage {
        char pad_0x0[0x38];
    }; // 0x38
    static_assert(sizeof(ClientLevelLoadProgressMessage) == 0x38);
}
#pragma pack(pop)