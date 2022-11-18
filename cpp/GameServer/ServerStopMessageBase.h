// Object: ServerStopMessageBase
// RuntimeId: 47993
// TypeInfo: 0x0000000144E56EB0
#pragma pack(push, 255)
namespace GameServer {
    struct ServerStopMessageBase {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ServerStopMessageBase) == 0x30);
}
#pragma pack(pop)