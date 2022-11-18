// Object: ClientEnteredIngameMessage
// RuntimeId: 39354
// TypeInfo: 0x0000000144E32A40
#pragma pack(push, 8)
namespace GameClient {
    struct ClientEnteredIngameMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ClientEnteredIngameMessage) == 0x30);
}
#pragma pack(pop)