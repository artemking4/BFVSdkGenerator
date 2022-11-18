// Object: NetworkSettingsMessage
// RuntimeId: 23843
// TypeInfo: 0x0000000144E48C70
#pragma pack(push, 8)
namespace GameCommon {
    struct NetworkSettingsMessage {
        char pad_0x0[0x70];
    }; // 0x70
    static_assert(sizeof(NetworkSettingsMessage) == 0x70);
}
#pragma pack(pop)