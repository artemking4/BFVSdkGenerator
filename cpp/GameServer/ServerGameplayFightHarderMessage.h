// Object: ServerGameplayFightHarderMessage
// RuntimeId: 31337
// TypeInfo: 0x0000000144E55010
#pragma pack(push, 8)
namespace GameServer {
    struct ServerGameplayFightHarderMessage {
        char pad_0x0[0x38];
    }; // 0x38
    static_assert(sizeof(ServerGameplayFightHarderMessage) == 0x38);
}
#pragma pack(pop)