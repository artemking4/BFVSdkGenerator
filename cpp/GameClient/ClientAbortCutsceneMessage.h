// Object: ClientAbortCutsceneMessage
// RuntimeId: 55235
// TypeInfo: 0x0000000144E32680
#pragma pack(push, 8)
namespace GameClient {
    struct ClientAbortCutsceneMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ClientAbortCutsceneMessage) == 0x30);
}
#pragma pack(pop)