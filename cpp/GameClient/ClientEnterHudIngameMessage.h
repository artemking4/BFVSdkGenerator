// Object: ClientEnterHudIngameMessage
// RuntimeId: 42902
// TypeInfo: 0x0000000144E32A90
#pragma pack(push, 8)
namespace GameClient {
    struct ClientEnterHudIngameMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ClientEnterHudIngameMessage) == 0x30);
}
#pragma pack(pop)