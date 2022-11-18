// Object: BarrageEntityData
// ClassId: 2429
// RuntimeId: 18322
// TypeInfo: 0x0000000144DE7A90
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class BarrageEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform AreaCenterTransform; // 0x30
        Float32 TimeBetweenShots; // 0x70
        Float32 TimeBetweenShotsVariance; // 0x74
        Float32 InnerRadius; // 0x78
        Float32 OuterRadius; // 0x7C
        Float32 ShotSpawnHeight; // 0x80
        char pad_0x84[0xC];
    }; // 0x90
    static_assert(sizeof(BarrageEntityData) == 0x90);
}
#pragma pack(pop)