// Object: ClientPlayerConnectMessage
// RuntimeId: 29032
// TypeInfo: 0x0000000144E31F00
#pragma pack(push, 8)
namespace GameClient {
    struct ClientPlayerConnectMessage {
        char pad_0x0[0x40];
    }; // 0x40
    static_assert(sizeof(ClientPlayerConnectMessage) == 0x40);
}
#pragma pack(pop)