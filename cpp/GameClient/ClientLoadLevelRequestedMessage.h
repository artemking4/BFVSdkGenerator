// Object: ClientLoadLevelRequestedMessage
// RuntimeId: 28474
// TypeInfo: 0x0000000144E329F0
#pragma pack(push, 8)
namespace GameClient {
    struct ClientLoadLevelRequestedMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ClientLoadLevelRequestedMessage) == 0x30);
}
#pragma pack(pop)