// Object: ClientVehicleLocalSimulationMessage
// RuntimeId: 1104
// TypeInfo: 0x0000000144E315F0
#pragma pack(push, 8)
namespace GameClient {
    struct ClientVehicleLocalSimulationMessage {
        char pad_0x0[0x40];
    }; // 0x40
    static_assert(sizeof(ClientVehicleLocalSimulationMessage) == 0x40);
}
#pragma pack(pop)