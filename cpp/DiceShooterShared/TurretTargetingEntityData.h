// Object: TurretTargetingEntityData
// ClassId: 3601
// RuntimeId: 35798
// TypeInfo: 0x0000000144DF92C0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class TurretTargetingEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform AimTransform; // 0x30
        Core::Vec3 WeaponOffset; // 0x70
        Float32 AimRayCastOffset; // 0x80
        Float32 MaxRayLength; // 0x84
        Float32 AimPositionInterpolationSpeed; // 0x88
        Boolean LockTurret; // 0x8C
        Boolean IgnoreClientDestructibles; // 0x8D
        Boolean AutoStart; // 0x8E
        char pad_0x8F[0x1];
    }; // 0x90
    static_assert(sizeof(TurretTargetingEntityData) == 0x90);
}
#pragma pack(pop)