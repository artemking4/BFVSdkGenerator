// Object: ServerVehicleOutOfFuelMessage
// RuntimeId: 57631
// TypeInfo: 0x0000000144E55BA0
#pragma pack(push, 8)
namespace GameServer {
    struct ServerVehicleOutOfFuelMessage {
        char pad_0x0[0x40];
    }; // 0x40
    static_assert(sizeof(ServerVehicleOutOfFuelMessage) == 0x40);
}
#pragma pack(pop)