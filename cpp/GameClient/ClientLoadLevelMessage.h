// Object: ClientLoadLevelMessage
// RuntimeId: 59805
// TypeInfo: 0x0000000144E329A0
#pragma pack(push, 8)
namespace GameClient {
    struct ClientLoadLevelMessage {
        char pad_0x0[0x60];
    }; // 0x60
    static_assert(sizeof(ClientLoadLevelMessage) == 0x60);
}
#pragma pack(pop)