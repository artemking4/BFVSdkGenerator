// Object: ClientSpectatorResetCameraMessage
// RuntimeId: 1433
// TypeInfo: 0x0000000144E452E0
#pragma pack(push, 16)
namespace GameClient {
    struct ClientSpectatorResetCameraMessage {
        char pad_0x0[0x80];
    }; // 0x80
    static_assert(sizeof(ClientSpectatorResetCameraMessage) == 0x80);
}
#pragma pack(pop)