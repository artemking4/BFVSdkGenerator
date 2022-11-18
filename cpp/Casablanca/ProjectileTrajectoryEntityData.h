// Object: ProjectileTrajectoryEntityData
// ClassId: 3050
// RuntimeId: 46244
// TypeInfo: 0x0000000144C83340
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Casablanca/TrajectoryType.h"

#pragma pack(push, 16)
namespace Casablanca {
    class ProjectileTrajectoryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 LaunchPosition; // 0x30
        Core::Vec3 TargetPosition; // 0x40
        Float32 LaunchSpeed; // 0x50
        Float32 Gravity; // 0x54
        Casablanca::TrajectoryType TrajectoryType; // 0x58
        char pad_0x5C[0x4];
    }; // 0x60
    static_assert(sizeof(ProjectileTrajectoryEntityData) == 0x60);
}
#pragma pack(pop)