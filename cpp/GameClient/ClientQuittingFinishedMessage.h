// Object: ClientQuittingFinishedMessage
// RuntimeId: 55315
// TypeInfo: 0x0000000144E328B0
#pragma pack(push, 8)
namespace GameClient {
    struct ClientQuittingFinishedMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ClientQuittingFinishedMessage) == 0x30);
}
#pragma pack(pop)