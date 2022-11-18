// Object: ServerSoldierPickupMessage
// RuntimeId: 3865
// TypeInfo: 0x0000000144F2E020
#pragma pack(push, 16)
namespace Soldier {
    struct ServerSoldierPickupMessage {
        char pad_0x0[0x80];
    }; // 0x80
    static_assert(sizeof(ServerSoldierPickupMessage) == 0x80);
}
#pragma pack(pop)