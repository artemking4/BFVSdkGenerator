// Object: ClientLevelDescriptionLoadedMessage
// RuntimeId: 555
// TypeInfo: 0x0000000144E327C0
#pragma pack(push, 8)
namespace GameClient {
    struct ClientLevelDescriptionLoadedMessage {
        char pad_0x0[0x38];
    }; // 0x38
    static_assert(sizeof(ClientLevelDescriptionLoadedMessage) == 0x38);
}
#pragma pack(pop)