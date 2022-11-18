// Object: NetworkChangeGameSettingMessage
// RuntimeId: 24504
// TypeInfo: 0x0000000144E49170
#pragma pack(push, 8)
namespace GameCommon {
    struct NetworkChangeGameSettingMessage {
        char pad_0x0[0x60];
    }; // 0x60
    static_assert(sizeof(NetworkChangeGameSettingMessage) == 0x60);
}
#pragma pack(pop)