// Object: ClientEnteredLevelMessage
// RuntimeId: 13455
// TypeInfo: 0x0000000144E326D0
#pragma pack(push, 8)
namespace GameClient {
    struct ClientEnteredLevelMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ClientEnteredLevelMessage) == 0x30);
}
#pragma pack(pop)