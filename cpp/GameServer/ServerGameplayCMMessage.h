// Object: ServerGameplayCMMessage
// RuntimeId: 41369
// TypeInfo: 0x0000000144E54C50
#pragma pack(push, 8)
namespace GameServer {
    struct ServerGameplayCMMessage {
        char pad_0x0[0x40];
    }; // 0x40
    static_assert(sizeof(ServerGameplayCMMessage) == 0x40);
}
#pragma pack(pop)