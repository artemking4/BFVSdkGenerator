// Object: TurretControllerEntityData
// ClassId: 3600
// RuntimeId: 1033
// TypeInfo: 0x0000000144DF9340
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class TurretControllerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 AimYaw; // 0x24
        Float32 AimPitch; // 0x28
        Float32 MaxPitch; // 0x2C
        Float32 MinPitch; // 0x30
        Float32 MaxYaw; // 0x34
        Float32 MinYaw; // 0x38
        Float32 YawSpeed; // 0x3C
        Float32 PitchSpeed; // 0x40
        Float32 YawInterpolationDuration; // 0x44
        Float32 PitchInterpolationDuration; // 0x48
        Boolean LockTurret; // 0x4C
        Boolean AutoStart; // 0x4D
        char pad_0x4E[0x2];
    }; // 0x50
    static_assert(sizeof(TurretControllerEntityData) == 0x50);
}
#pragma pack(pop)