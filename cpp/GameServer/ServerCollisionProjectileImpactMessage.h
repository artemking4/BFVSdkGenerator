// Object: ServerCollisionProjectileImpactMessage
// RuntimeId: 64804
// TypeInfo: 0x0000000144E55560
#pragma pack(push, 16)
namespace GameServer {
    struct ServerCollisionProjectileImpactMessage {
        char pad_0x0[0x80];
    }; // 0x80
    static_assert(sizeof(ServerCollisionProjectileImpactMessage) == 0x80);
}
#pragma pack(pop)