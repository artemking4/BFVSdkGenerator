// Object: ServerLoadLevelMessageBase
// RuntimeId: 34107
// TypeInfo: 0x0000000144E56F00
#pragma pack(push, 255)
namespace GameServer {
    struct ServerLoadLevelMessageBase {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ServerLoadLevelMessageBase) == 0x30);
}
#pragma pack(pop)