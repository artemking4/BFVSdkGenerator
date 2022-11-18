// Object: StatEnableMessage
// RuntimeId: 32868
// TypeInfo: 0x0000000144E572C0
#pragma pack(push, 8)
namespace GameServer {
    struct StatEnableMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(StatEnableMessage) == 0x30);
}
#pragma pack(pop)