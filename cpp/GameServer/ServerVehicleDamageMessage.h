// Object: ServerVehicleDamageMessage
// RuntimeId: 51683
// TypeInfo: 0x0000000144E55D30
#pragma pack(push, 8)
namespace GameServer {
    struct ServerVehicleDamageMessage {
        char pad_0x0[0x50];
    }; // 0x50
    static_assert(sizeof(ServerVehicleDamageMessage) == 0x50);
}
#pragma pack(pop)