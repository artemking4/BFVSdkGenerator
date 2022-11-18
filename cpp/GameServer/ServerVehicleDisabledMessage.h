// Object: ServerVehicleDisabledMessage
// RuntimeId: 53784
// TypeInfo: 0x0000000144E55CE0
#pragma pack(push, 8)
namespace GameServer {
    struct ServerVehicleDisabledMessage {
        char pad_0x0[0x40];
    }; // 0x40
    static_assert(sizeof(ServerVehicleDisabledMessage) == 0x40);
}
#pragma pack(pop)