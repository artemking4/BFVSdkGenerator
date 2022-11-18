// Object: NetworkSelectTeamMessage
// RuntimeId: 55570
// TypeInfo: 0x0000000144E48EF0
#pragma pack(push, 8)
namespace GameCommon {
    struct NetworkSelectTeamMessage {
        char pad_0x0[0x60];
    }; // 0x60
    static_assert(sizeof(NetworkSelectTeamMessage) == 0x60);
}
#pragma pack(pop)