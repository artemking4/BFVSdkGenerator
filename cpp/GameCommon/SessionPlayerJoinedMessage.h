// Object: SessionPlayerJoinedMessage
// RuntimeId: 14256
// TypeInfo: 0x0000000144E49ED0
#pragma pack(push, 8)
namespace GameCommon {
    struct SessionPlayerJoinedMessage {
        char pad_0x0[0x40];
    }; // 0x40
    static_assert(sizeof(SessionPlayerJoinedMessage) == 0x40);
}
#pragma pack(pop)