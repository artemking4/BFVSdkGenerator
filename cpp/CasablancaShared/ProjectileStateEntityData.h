// Object: ProjectileStateEntityData
// ClassId: 3049
// RuntimeId: 28468
// TypeInfo: 0x0000000144D12B00
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/QueryEntityFilter.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ProjectileStateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        DiceShooterShared::QueryEntityFilter FilterType; // 0x24
    }; // 0x28
    static_assert(sizeof(ProjectileStateEntityData) == 0x28);
}
#pragma pack(pop)