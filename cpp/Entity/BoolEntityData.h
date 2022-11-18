// Object: BoolEntityData
// ClassId: 2439
// RuntimeId: 18412
// TypeInfo: 0x0000000144EE34D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class BoolEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean DefaultValue; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(BoolEntityData) == 0x28);
}
#pragma pack(pop)