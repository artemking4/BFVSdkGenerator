// Object: ProjectileOwnerToQueryResultEntityData
// ClassId: 3048
// RuntimeId: 21119
// TypeInfo: 0x0000000144D66170
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ProjectileOwnerToQueryResultEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ProjectileOwnerToQueryResultEntityData) == 0x28);
}
#pragma pack(pop)