// Object: AbsEntityData
// ClassId: 2021
// RuntimeId: 59499
// TypeInfo: 0x0000000144EE4150
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Entity {
    class AbsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 In; // 0x24
    }; // 0x28
    static_assert(sizeof(AbsEntityData) == 0x28);
}
#pragma pack(pop)