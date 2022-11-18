// Object: ClientLevelUnloadMessage
// RuntimeId: 3347
// TypeInfo: 0x0000000144E32860
#pragma pack(push, 8)
namespace GameClient {
    struct ClientLevelUnloadMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ClientLevelUnloadMessage) == 0x30);
}
#pragma pack(pop)