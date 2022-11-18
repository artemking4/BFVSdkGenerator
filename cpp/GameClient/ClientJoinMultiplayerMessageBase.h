// Object: ClientJoinMultiplayerMessageBase
// RuntimeId: 16665
// TypeInfo: 0x0000000144E32D10
#pragma pack(push, 255)
namespace GameClient {
    struct ClientJoinMultiplayerMessageBase {
        char pad_0x0[0x40];
    }; // 0x40
    static_assert(sizeof(ClientJoinMultiplayerMessageBase) == 0x40);
}
#pragma pack(pop)