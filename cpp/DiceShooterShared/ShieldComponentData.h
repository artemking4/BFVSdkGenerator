// Object: ShieldComponentData
// ClassId: 1832
// RuntimeId: 39612
// TypeInfo: 0x0000000144DF0FD0
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../GameShared/UnlockAssetBase.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class ShieldComponentData : public Entity::GameComponentData {
        Float32 ArcAngle; // 0x80
        char pad_0x84[0x4];
        Array<GameShared::UnlockAssetBase> AlwaysBlockUnlocks; // 0x88
        Array<GameShared::UnlockAssetBase> IgnoredUnlocks; // 0x90
        Float32 GrenadeDeflectionSpeed; // 0x98
        Boolean IgnoreFriendlyProjectiles; // 0x9C
        Boolean IgnoreFriendlyExplosions; // 0x9D
        Boolean IgnoreOutgoingProjectiles; // 0x9E
        Boolean IgnoreOwnExplosions; // 0x9F
        Boolean IgnoreOwnProjectiles; // 0xA0
        Boolean IgnoreBullets; // 0xA1
        Boolean IgnoreMissiles; // 0xA2
        Boolean IgnoreGrenades; // 0xA3
        Boolean IgnoreExplosions; // 0xA4
        Boolean UseGrenadeDeflectionSpeed; // 0xA5
        Boolean TestOcclusion; // 0xA6
        Boolean Render; // 0xA7
        char pad_0xA8[0x8];
    }; // 0xB0
    static_assert(sizeof(ShieldComponentData) == 0xB0);
}
#pragma pack(pop)