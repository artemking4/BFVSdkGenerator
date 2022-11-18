// Object: ProjectileBlueprint
// ClassId: 263
// RuntimeId: 47452
// TypeInfo: 0x0000000144F7B1E0
#include "../Entity/ObjectBlueprint.h"
#include "../Entity/TimeDeltaType.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class ProjectileBlueprint : public Entity::ObjectBlueprint {
        Entity::TimeDeltaType TimeDeltaType; // 0x50
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(ProjectileBlueprint) == 0x58);
}
#pragma pack(pop)