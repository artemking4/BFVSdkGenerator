// Object: BoolToEventEntityData
// ClassId: 2442
// RuntimeId: 48140
// TypeInfo: 0x0000000144EE4350
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class BoolToEventEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean Value; // 0x24
        Boolean InitalEvent; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(BoolToEventEntityData) == 0x28);
}
#pragma pack(pop)