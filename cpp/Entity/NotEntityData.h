// Object: NotEntityData
// ClassId: 2904
// RuntimeId: 27670
// TypeInfo: 0x0000000144EE5E50
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class NotEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean In; // 0x24
        Boolean AlwaysWriteOut; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(NotEntityData) == 0x28);
}
#pragma pack(pop)