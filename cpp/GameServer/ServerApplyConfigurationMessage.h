// Object: ServerApplyConfigurationMessage
// RuntimeId: 10003
// TypeInfo: 0x0000000144E57090
#pragma pack(push, 8)
namespace GameServer {
    struct ServerApplyConfigurationMessage {
        char pad_0x0[0x38];
    }; // 0x38
    static_assert(sizeof(ServerApplyConfigurationMessage) == 0x38);
}
#pragma pack(pop)